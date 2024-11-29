module PCTop (
    input logic clk,
    input logic rst,
    input logic [1:0] PCSrc,
    input logic [31:0] ImmExt,
    input logic [31:0] PCJALR,
    output logic [31:0] PC,
    output logic [31:0] PCPlus4
);

    logic [31:0] PCTarget;
    logic [31:0] PCNext;

PCReg PCReg (
    .clk (clk),
    .rst (rst),
    .PCNext (PCNext),
    .PC (PC)
    );

PCMux PCMux (
    .PCPlus4 (PCPlus4),
    .PCTarget (PCTarget),
    .PCJALR (PCJALR),
    .PCSrc (PCSrc),
    .PCNext (PCNext)
    );

    assign PCPlus4 = PC + 4;
    assign PCTarget = PC + ImmExt;

endmodule
