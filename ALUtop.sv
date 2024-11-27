module ALUTOP (
    input logic clk,
    input logic [4:0] rs1,
    input logic [4:0] rs2,
    input logic [4:0] rd,
    input logic RegWrite,
    input logic ALUsrc,
    input logic [2:0] ALUctrl,
    input logic [31:0] ImmOp
);

    logic [31:0] ALUop1;
    logic [31:0] ALUop2;
    logic [31:0] regOp2;
    logic [31:0] ALUout;

RegFile RegFile (
    .clk(clk),
    .A1(rs1),
    .A2(rs2),
    .A3(rd),
    .WD3(ALUout),
    .WE3(RegWrite),
    .RD1(ALUop1),
    .RD2(regOp2)
);

ALUMux ALUMux (
    .regOp2(regOp2),
    .ImmOp(ImmOp),
    .ALUsrc(ALUsrc),
    .Aluop2(ALUop2)
);

ALUBlock ALUBlock (
    .ALUop1(ALUop1),
    .ALUop2(ALUop2),
    .ALUctrl(ALUctrl),
    .SUM(ALUout)
);

endmodule
