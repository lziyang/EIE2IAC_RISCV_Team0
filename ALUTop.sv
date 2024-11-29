module ALUTop (
    input logic clk,
    input logic [4:0] rs1,
    input logic [4:0] rs2,
    input logic [4:0] rd,
    input logic RegWrite,
    input logic ALUSrc,
    input logic [3:0] ALUControl,
    input logic [31:0] ImmExt,
    input logic MemWrite,
    input logic [31:0] PCPlus4,
    input logic LoadSign,
    input logic [1:0] SizeSrc,
    input logic [1:0] ResultSrc, // 加入resultsrc
    output logic Zero,
    output logic unsignedLess,
    output logic signedLess,
    output logic [31:0] a0
);

    logic [31:0] SrcA;
    logic [31:0] SrcB;
    logic [31:0] RD2;
    logic [31:0] ALUResult;
    logic [31:0] ReadData;
    logic [31:0] WriteData;
    logic [31:0] Result;

RegisterFile RegisterFile (
    .clk(clk),
    .A1(rs1),
    .A2(rs2),
    .A3(rd),
    .WD3(Result),
    .WE3(RegWrite),
    .a0(a0),
    .RD1(SrcA),
    .RD2(RD2)
);

ALUMux1 ALUMux1 (
    .RD2(RD2),
    .ImmExt(ImmExt),
    .ALUSrc(ALUSrc),
    .SrcB(SrcB)
);

ALUMux2 ALUMux2 (
    .ResultSrc(ResultSrc),
    .ALUResult(ALUResult),
    .ReadData(ReadData),
    .PCPlus4(PCPlus4),
    .Result(Result)
);

ALU ALU (
    .SrcA(SrcA),
    .SrcB(SrcB),
    .ALUControl(ALUControl),
    .ALUResult(ALUResult),
    .Zero(Zero),
    .unsignedLess(unsignedLess),
    .signedLess(signedLess)
);

DataMemory DataMemory (
        .clk(clk),
        .MemWrite(MemWrite),
        .LoadSign(LoadSign),
        .SizeSrc(SizeSrc),
        .WriteData(WriteData),
        .ALUResult(ALUResult),
        .ReadData(ReadData)
    );

endmodule
