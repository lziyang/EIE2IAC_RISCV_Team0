module PCTOP #(
    parameter WIDTH = 32

)(
    input logic                      clk,
    input logic                      rst,
    input logic                      PCSrc,
    input logic  [WIDTH-1:0]         ImmExt,
    output logic [WIDTH-1:0]         PC

);

logic [WIDTH-1:0]       PCTarget;
logic [WIDTH-1:0]       PCNext;
logic [WIDTH-1:0]       PCPlus4;

//PC register holds the current PC value
always_ff @ (posedge clk or posedge rst) begin
    if (rst) PC <= 32'd0;
    else     PC <= PCNext;
end

always_comb begin
    PCPlus4 = PC + 32'd4;
    PCTarget = PC + ImmExt;
    PCNext = PCsrc ? PCTarget:PCPlus4;
    
end
