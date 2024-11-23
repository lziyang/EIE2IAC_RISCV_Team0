module datamemory#(
    parameter WIDTH = 32

)(
    input logic                     clk,
    input logic                     MemWrite,
    input logic                     ResultSrc,
    input logic [WIDTH-1:0]         WriteData, //data to be written to memory for store operations
    input logic [WIDTH-1:0]         ALUResult, //memory address for read/write operators
    output logic [WIDTH-1:0]        Result
);

logic [WIDTH-1:0] ReadData;
logic [WIDTH-1:0] memory [WIDTH-1:0];

//asynchronous cycle
//read operation as it automatic (clk can be ignored)
always_comb begin
    ReadData <= memory[ALUResult[4:0]];
end
 
//synchronous cycle
//write operation as it is posedge clk triggered
always_ff @(posedge clk) begin
    if(MemWrite) begin
        memory[ALUResult[4:0]] <= WriteData;
    end
end

//MUX
always_comb begin
    Result = ResultSrc ? ReadData:ALUResult;
end

endmodule
