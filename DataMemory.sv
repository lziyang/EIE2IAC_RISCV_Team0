module DataMemory(
    input logic                clk,
    input logic                MemWrite,
    input logic                LoadSign,  // differentiates between zero extension (0) and sign extension (1)
    input logic [1:0]          SizeSrc,   // determines if it is byte/word/half
    input logic [31:0]         WriteData, //data to be written to memory for store operations
    input logic [31:0]         ALUResult, //memory address for read/write operators
    // 修复了aluresult期待16：0的bug
    output logic [31:0]        ReadData
);

logic [7:0] memory [2**17-1:0];          // 8 bits = 1 byte
logic [16:0]       address;

//asynchronous cycle
//read operation as it automatic (clk can be ignored)

assign address = ALUResult[16:0]; 

always_comb begin
    case(SizeSrc)
        2'b00: ReadData = {memory[address+3], memory[address+2], memory[address+1], memory[address]};    //lw and incrementing address
        2'b01: begin                                                          //lh and lhu
            case(LoadSign)                                                      
                1'b0: ReadData = {{16'b0}, memory[address+1], memory[address]};
                1'b1: ReadData = {{16{memory[address+1][7]}}, memory[address+1], memory[address]};
            endcase
        end
        2'b10: begin                                                          //lb and lbu
            case(LoadSign)
                1'b0: ReadData = {{24'b0}, memory[address][7:0]};
                1'b1: ReadData = {{24{memory[address][7]}}, memory[address]};
            endcase
        end
        default: ReadData = 32'b0;
    endcase
end
 
//synchronous cycle
//write operation as it is posedge clk triggered
always_ff @(posedge clk) begin
    if(MemWrite) begin
        case(SizeSrc)
            2'b00: begin                            //sw
                memory[address] <= WriteData[7:0];
                memory[address+1] <= WriteData[15:8];
                memory[address+2] <= WriteData[23:16]; 
                memory[address+3] <= WriteData[31:24];
            end               
            2'b01: begin                //sh
                memory[address] <= WriteData[7:0];
                memory[address+1] <= WriteData[15:8];
            end         
            2'b10: begin              //sb
                memory[address] <= WriteData[7:0];      
            end
            default: ; // do nothing               
        endcase
    end
end

endmodule
