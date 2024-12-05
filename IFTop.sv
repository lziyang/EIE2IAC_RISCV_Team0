module IFTop (
    input logic clk,
    input logic rst,
    input logic [1:0] PCSrc_E,
    input logic [31:0] PCTarget_E,
    input logic [31:0] PCJALR_E,

    output logic [31:0] PC_F,
    output logic [31:0] PCPlus4_F,
    output logic [31:0] Instr_F
);


    logic [31:0] PCNext_F;

    // define the instr mem bytes
    logic [7:0] Instr_memory [0:2**12-1];

    PCReg PCReg (
        .clk (clk),
        .rst (rst),
        .PCNext_F (PCNext_F),
        .PC_F (PC_F)
        );

    assign PCPlus4_F = PC_F + 4;

    PCMux PCMux (
        .PCPlus4_F (PCPlus4_F),
        .PCTarget_E (PCTarget_E),
        .PCJALR_E (PCJALR_E),
        .PCSrc_E (PCSrc_E),
        .PCNext_F (PCNext_F)
    );

    // HexFileLoader
    HexFileLoader HexFileLoader (
        .Instr_memory(Instr_memory)
    );

    // Altered InstructionMemory
    InstructionMemory InstructionMemory (
        .PC_F(PC_F),
        .Instr_F(Instr_F),
        .Instr_memory(Instr_memory)
    );

endmodule
