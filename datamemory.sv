module datamemory#(
    parameter WIDTH = 32

)(
    input logic                     clk,
    input logic                     MemWrite,
    input logic                     ResultSrc,
    input logic                     LoadSign,  // differentiates between zero extension (0) and sign extension (1)
    input logic [1:0]               LoadSrc,   // determines if it is byte/word/half
    input logic [WIDTH-1:0]         WriteData, //data to be written to memory for store operations
    input logic [WIDTH-1:0]         ALUResult, //memory address for read/write operators
    output logic [WIDTH-1:0]        Result
);

logic [WIDTH-1:0] ReadData;
logic [WIDTH-1:0] memory [2**WIDTH-1:0];
logic [9:0]       address;

//asynchronous cycle
//read operation as it automatic (clk can be ignored)

assign address = ALUResult[11:2];

always_comb begin
    case(LoadSrc)
        2'b00: ReadData = memory[address][WIDTH-1:0];                         //lw
        2'b01: begin                                                          //lh and lhu
            case(LoadSign)                                                      
                1'b0: ReadData = {{16'b0}, memory[address][15:0]};
                1'b1: ReadData = {{16{ALUResult[15]}}, memory[address][15:0]};
            endcase
        end
        2'b10: begin                                                          //lb and lbu
            case(LoadSign)
                1'b0: ReadData = {{24'b0}, memory[address][7:0]};
                1'b1: ReadData = {{24{ALUResult[7]}}, memory[address][7:0]}; 
            endcase
        end
    endcase
end
 
//synchronous cycle
//write operation as it is posedge clk triggered
always_ff @(posedge clk) begin
    if(MemWrite) begin
        case(LoadSrc)
            2'b00: begin                            //sw
                memory[address] <= WriteData;  
            end               
            2'b01: begin
                case(ALUResult[1])                  //sh
                    1'b0: memory[address][15:0] <= WriteData[15:0];  //lower half
                    1'b1: memory[address][31:16] <= WriteData[15:0]; //upper half
                endcase 
            end            
            2'b10: begin
                case(ALUResult[1:0])                //sb
                    2'b00: memory[address][7:0] <= WriteData[7:0]; 
                    2'b01: memory[address][15:8] <= WriteData[7:0];  
                    2'b10: memory[address][23:16] <= WriteData[7:0];
                    2'b11: memory[address][31:24] <= WriteData[7:0];     
                endcase
            end                
        endcase
    end
end

//MUX
always_comb begin
    Result = ResultSrc ? ReadData:ALUResult;
end

endmodule
