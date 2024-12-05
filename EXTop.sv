module EXTop (
    input logic clk,
    input logic rst,

    input logic RegWrite_E,
    input logic MemWrite_E,
    input logic ALUSrcA_E,
    input logic ALUSrcB_E,
    input logic [3:0] ALUControl_E,
    input logic [1:0] ResultSrc_E,
    input logic [1:0] SizeSrc_E,
    input logic LoadSign_E,
    input logic [2:0] Branch_E,
    input logic [1:0] Jump_E,

    input logic [31:0] RD1_E,
    input logic [31:0] RD2_E,
    input logic [31:0] ImmExt_E,
    input logic [4:0] rs1_E,
    input logic [4:0] rs2_E,
    input logic [4:0] rd_E,
    input logic [31:0] PCPlus4_E,
    input logic [31:0] PC_E,

    input logic [31:0] Result_W,
    input logic [31:0] ALUResult_M,
    input logic RegWrite_M,
    input logic RegWrite_W_out,
    input logic [4:0] rd_M,
    input logic [4:0] rd_W_out,

    output logic RegWrite_E_out,
    output logic MemWrite_E_out,
    output logic [1:0] ResultSrc_E_out,
    output logic [1:0] SizeSrc_E_out,
    output logic LoadSign_E_out,
    output logic [31:0] ALUResult_E,
    output logic [31:0] WriteData_E,
    output logic [4:0] rd_E_out,
    output logic [31:0] PCPlus4_E_out,

    output logic [1:0] PCSrc_E,
    output logic [31:0] PCTarget_E,
    output logic [31:0] PCJALR_E
);

    logic [1:0] ForwardA_E;
    logic [1:0] ForwardB_E;
    logic [31:0] ForwardAData_E;
    logic [31:0] ForwardBData_E;
    logic [31:0] ALUInputA_E;
    logic [31:0] ALUInputB_E;
    logic Zero_E;
    logic unsignedLess_E;
    logic signedLess_E;

    // Forward unit for the hazard control
    ForwardingUnit ForwardingUnit (
        .RegWrite_M(RegWrite_M),
        .RegWrite_W_out(RegWrite_W_out),
        .rd_M(rd_M),
        .rd_W_out(rd_W_out),
        .rs1_E(rs1_E),
        .rs2_E(rs2_E),
        .ForwardA_E(ForwardA_E),
        .ForwardB_E(ForwardB_E)
    );

    // Select forwarding data
    // !!!NOTICE THAT I PUT THE FORWARDING DATA CHOOSE MECHANISM HERE JUST FOR THE SAKE THAT IT IS EASIER TO PROGRAM. WE WILL PUT IT IN A SEPERATE MODULE LATER!!!

    always_comb begin
        case (ForwardA_E)
            2'b00: ForwardAData_E = RD1_E;
            2'b01: ForwardAData_E = Result_W;
            2'b10: ForwardAData_E = ALUResult_M;
            default: ForwardAData_E = RD1_E;
        endcase

        case (ForwardB_E)
            2'b00: ForwardBData_E = RD2_E;
            2'b01: ForwardBData_E = Result_W;
            2'b10: ForwardBData_E = ALUResult_M;
            default: ForwardBData_E = RD2_E;
        endcase
    end


    ALUMux1 ALUMux1 (
        .RD1_E(ForwardAData_E),
        .PC_E(PC_E),
        .ALUSrcA_E(ALUSrcA_E),
        .SrcA_E(ALUInputA_E)
    );


    ALUMux2 ALUMux2 (
        .RD2_E(ForwardBData_E),
        .ImmExt_E(ImmExt_E),
        .ALUSrcB_E(ALUSrcB_E),
        .SrcB_E(ALUInputB_E)
    );


    ALU ALU (
        .SrcA_E(ALUInputA_E),
        .SrcB_E(ALUInputB_E),
        .ALUControl_E(ALUControl_E),
        .ALUResult_E(ALUResult_E),
        .Zero_E(Zero_E),
        .unsignedLess_E(unsignedLess_E),
        .signedLess_E(signedLess_E)
    );

    // Write data for Data Memory
    assign WriteData_E = ForwardBData_E;

    // branch target and JALR target addresses
    assign PCTarget_E = PC_E + ImmExt_E;
    assign PCJALR_E = ALUResult_E;

    PCSrcMUX PCSrcMUX (
        .Branch_E(Branch_E),
        .Jump_E(Jump_E),
        .Zero_E(Zero_E),
        .unsignedLess_E(unsignedLess_E),
        .signedLess_E(signedLess_E),
        .PCSrc_E(PCSrc_E)
    );

    // Pass control signals to EX_MEM_Reg
    assign RegWrite_E_out = RegWrite_E;
    assign MemWrite_E_out = MemWrite_E;
    assign ResultSrc_E_out = ResultSrc_E;
    assign SizeSrc_E_out = SizeSrc_E;
    assign LoadSign_E_out = LoadSign_E;
    assign rd_E_out = rd_E;
    assign PCPlus4_E_out = PCPlus4_E;

endmodule
