module CUSE (
    input  logic [31:0] Instr,
    input  logic        Zero,
    input  logic        LessSigned,
    input  logic        LessUnsigned,
    output logic        RegWrite,
    output logic        ALUSrc,
    output logic        ALUSrcA,
    output logic        MemWrite,
    output logic [1:0]  PCSrc,
    output logic [1:0]  ResultSrc,
    output logic [3:0]  ALUControl,
    output logic [1:0]  ImmSrc,
    output logic [31:0] ImmExt,
    output logic [2:0]  DataControl  // New output for data handler
);

    // Instr extraction
    logic [6:0] op      = Instr[6:0];
    logic [2:0] funct3  = Instr[14:12];
    logic       funct7  = Instr[30];

    // Instantiate ControlUnit
    ControlUnit control_unit (
        .op           (op),
        .funct3       (funct3),
        .funct7       (funct7),
        .Zero         (Zero),
        .LessSigned   (LessSigned),
        .LessUnsigned (LessUnsigned),
        .RegWrite     (RegWrite),
        .ALUSrc       (ALUSrc),
        .ALUSrcA      (ALUSrcA),
        .MemWrite     (MemWrite),
        .PCSrc        (PCSrc),
        .ResultSrc    (ResultSrc),
        .ALUControl   (ALUControl),
        .ImmSrc       (ImmSrc),
        .DataControl  (DataControl)  // Connect DataControl signal
    );

    // Instantiate SignExtender
    SignExtender sign_extender (
        .Instr   (Instr),
        .ImmSrc  (ImmSrc),
        .ImmExt  (ImmExt)
    );
endmodule
