module ID_EX_Reg (
    input logic clk,
    input logic rst,

    input logic [2:0] Branch_D,
    input logic [1:0] Jump_D,
    input logic RegWrite_D,
    input logic MemWrite_D,
    input logic ALUSrcA_D,
    input logic ALUSrcB_D,
    input logic [3:0] ALUControl_D,
    input logic [1:0] ResultSrc_D,
    input logic [1:0] SizeSrc_D,
    input logic LoadSign_D,

    input logic [31:0] RD1_D,
    input logic [31:0] RD2_D,
    input logic [31:0] ImmExt_D,
    input logic [4:0] rs1_D,
    input logic [4:0] rs2_D,
    input logic [4:0] rd_D,
    input logic [31:0] PCPlus4_D_out,
    input logic [31:0] PC_D_out,

    output logic [2:0] Branch_E,
    output logic [1:0] Jump_E,
    output logic RegWrite_E,
    output logic MemWrite_E,
    output logic ALUSrcA_E,
    output logic ALUSrcB_E,
    output logic [3:0] ALUControl_E,
    output logic [1:0] ResultSrc_E,
    output logic [1:0] SizeSrc_E,
    output logic LoadSign_E,
    output logic [31:0] RD1_E,
    output logic [31:0] RD2_E,
    output logic [31:0] ImmExt_E,
    output logic [4:0] rs1_E,
    output logic [4:0] rs2_E,
    output logic [4:0] rd_E,
    output logic [31:0] PCPlus4_E,
    output logic [31:0] PC_E
);

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            Branch_E <= 0;
            Jump_E <= 0;
            RegWrite_E <= 0;
            MemWrite_E <= 0;
            ALUSrcA_E <= 0;
            ALUSrcB_E <= 0;
            ALUControl_E <= 4'b0;
            ResultSrc_E <= 2'b0;
            SizeSrc_E <= 2'b0;
            LoadSign_E <= 0;
            RD1_E <= 32'b0;
            RD2_E <= 32'b0;
            ImmExt_E <= 32'b0;
            rs1_E <= 5'b0;
            rs2_E <= 5'b0;
            rd_E <= 5'b0;
            PCPlus4_E <= 32'b0;
            PC_E <= 32'b0;
        end else begin
            Branch_E <= Branch_D;
            Jump_E <= Jump_D;
            RegWrite_E <= RegWrite_D;
            MemWrite_E <= MemWrite_D;
            ALUSrcA_E <= ALUSrcA_D;
            ALUSrcB_E <= ALUSrcB_D;
            ALUControl_E <= ALUControl_D;
            ResultSrc_E <= ResultSrc_D;
            SizeSrc_E <= SizeSrc_D;
            LoadSign_E <= LoadSign_D;

            RD1_E <= RD1_D;
            RD2_E <= RD2_D;
            ImmExt_E <= ImmExt_D;
            rs1_E <= rs1_D;
            rs2_E <= rs2_D;
            rd_E <= rd_D;
            PCPlus4_E <= PCPlus4_D_out;
            PC_E <= PC_D_out;
        end
    end

endmodule
