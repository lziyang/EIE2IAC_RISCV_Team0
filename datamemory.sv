module datamemory#(
    parameter WIDTH = 32

)(
    input logic                     clk,
    input logic                     MemWrite,
    input logic                     ResultSrc,
    input logic                     LoadSign,  // differentiates between zero extension (0) and sign extension (1)
    input logic [1:0]               size,   // determines if it is byte/word/half
    input logic [WIDTH-1:0]         WriteData, //data to be written to memory for store operations
    input logic [WIDTH-1:0]         ALUResult, //memory address for read/write operators
    output logic [WIDTH-1:0]        Result
);

logic [WIDTH-1:0] ReadData;                 // 32 bits = 4 bytes
logic [7:0] memory [2**WIDTH-1:0];          // 8 bits = 1 byte
logic [7:0]       address;

//asynchronous cycle
//read operation as it automatic (clk can be ignored)

assign address = ALUResult[7:0];   //from 0 to 27 for byte addressing and to be 28 bits

always_comb begin
    case(size)
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
    endcase
end
 
//synchronous cycle
//write operation as it is posedge clk triggered
always_ff @(posedge clk) begin
    if(MemWrite) begin
        case(size)
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
        endcase
    end
end

endmodule
