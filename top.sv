module top (
    input logic clk,
    input logic rst,
    input logic trigger,
    output logic [31:0] a0
);

    // Internal signals
    logic [31:0] PC;
    logic [31:0] Instr;
    logic [31:0] ImmExt;
    logic RegWrite;
    logic ALUSrcA;
    logic ALUSrcB;
    logic [1:0] PCSrc;
    logic [3:0] ALUControl;
    logic Zero;

    logic [31:0] PCPlus4;
    logic MemWrite;
    logic [1:0] ResultSrc;
    logic signedLess;
    logic unsignedLess;
    logic [31:0] PCJALR;
    logic [1:0] SizeSrc;
    logic LoadSign;
    
    // Register file address signals
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rd;

    // Decode Instruction fields
    assign rs1 = Instr[19:15];
    assign rs2 = Instr[24:20];
    assign rd  = Instr[11:7];

// Instantiate PCTop
PCTop PCTop (
    .clk(clk),
    .rst(rst),
    .PCSrc(PCSrc),
    .ImmExt(ImmExt),
    .PC(PC),
    .PCJALR(PCJALR),
    .PCPlus4(PCPlus4)
);

// Instantiate InstrTop
InstrTop InstrTop (
    .PC(PC),
    .Zero(Zero),
    .unsignedLess(unsignedLess),
    .signedLess(signedLess),
    .Instr(Instr),
    .RegWrite(RegWrite),
    .ALUSrcA(ALUSrcA),
    .ALUSrcB(ALUSrcB),
    .PCSrc(PCSrc),
    .ImmExt(ImmExt),
    .ALUControl(ALUControl),
    .ResultSrc (ResultSrc),
    .MemWrite(MemWrite),
    .SizeSrc(SizeSrc),
    .LoadSign(LoadSign)
);

// Instantiate ALUTop
ALUTop ALUTop (
    .clk(clk),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .RegWrite(RegWrite),
    .ALUSrcA(ALUSrcA),
    .ALUSrcB(ALUSrcB),
    .ALUControl(ALUControl),
    .ImmExt(ImmExt),
    .MemWrite(MemWrite),
    .PCPlus4(PCPlus4),
    .unsignedLess(unsignedLess),
    .signedLess(signedLess),
    .ResultSrc(ResultSrc),
    .Zero(Zero),
    .a0(a0),
    .ResultExt(PCJALR),
    .SizeSrc(SizeSrc),
    .LoadSign(LoadSign),
    .PC(PC),
    .trigger(trigger)
);

endmodule
