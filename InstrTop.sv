module InstrTop (
    input logic [31:0] PC,
    input logic Zero,
    input logic unsignedLess,
    input logic signedLess,
    output logic [31:0] Instr,
    output logic RegWrite, 
    output logic ALUSrcA,
    output logic ALUSrcB,
    output logic [1:0] PCSrc,
    output logic [31:0] ImmExt,
    output logic [3:0] ALUControl,
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic [1:0] SizeSrc,
    output logic LoadSign
);
    logic [6:0] op;
    logic [2:0] ImmSrc;
    logic [31:7] ImmIn;
    logic [2:0] funct3;
    logic [6:0] funct7;

    // newly added, define the instr mem bytes
    logic [7:0] Instr_memory [0:2**12-1];

    // HexFileLoader
    HexFileLoader HexFileLoader (
        .Instr_memory(Instr_memory)
    );

    // Altered InstructionMemory
    InstructionMemory InstructionMemory (
        .PC(PC),
        .Instr(Instr),
        .Instr_memory(Instr_memory)
    );

    ControlUnit ControlUnit (
        .op(op),
        .Zero(Zero),
        .RegWrite(RegWrite),
        .ALUControl(ALUControl),
        .ALUSrcA(ALUSrcA),
        .ALUSrcB(ALUSrcB),
        .ImmSrc(ImmSrc),
        .PCSrc(PCSrc),
        .funct3(funct3),
        .funct7(funct7),
        .MemWrite(MemWrite),
        .ResultSrc(ResultSrc),
        .LoadSign(LoadSign),
        .SizeSrc(SizeSrc),
        .unsignedLess(unsignedLess),
        .signedLess(signedLess)
    );

    Extend Extend (
        .ImmSrc(ImmSrc),
        .ImmIn(ImmIn),
        .ImmExt(ImmExt)
    );

    assign op = Instr[6:0];
    assign ImmIn = Instr[31:7];
    assign funct3 = Instr[14:12];
    assign funct7 = Instr[31:25];
endmodule
