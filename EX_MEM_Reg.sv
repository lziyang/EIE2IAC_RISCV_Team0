module EX_MEM_Reg (
    input logic clk,
    input logic rst,

    input logic RegWrite_E_out,
    input logic MemWrite_E_out,
    input logic [1:0] ResultSrc_E_out,
    input logic [1:0] SizeSrc_E_out,
    input logic LoadSign_E_out,

    input logic [31:0] ALUResult_E,
    input logic [31:0] WriteData_E,
    input logic [4:0] rd_E_out,
    input logic [31:0] PCPlus4_E_out,

    output logic RegWrite_M,
    output logic MemWrite_M,
    output logic [1:0] ResultSrc_M,
    output logic [1:0] SizeSrc_M,
    output logic LoadSign_M,
    output logic [31:0] ALUResult_M,
    output logic [31:0] WriteData_M,
    output logic [4:0] rd_M,
    output logic [31:0] PCPlus4_M
);
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            RegWrite_M <= 0;
            MemWrite_M <= 0;
            ResultSrc_M <= 2'b00;
            SizeSrc_M <= 2'b00;
            LoadSign_M <= 0;
            ALUResult_M <= 32'b0;
            WriteData_M <= 32'b0;
            rd_M <= 5'b0;
            PCPlus4_M <= 32'b0;
        end else begin
            RegWrite_M <= RegWrite_E_out;
            MemWrite_M <= MemWrite_E_out;
            ResultSrc_M <= ResultSrc_E_out;
            SizeSrc_M <= SizeSrc_E_out;
            LoadSign_M <= LoadSign_E_out;
            ALUResult_M <= ALUResult_E;
            WriteData_M <= WriteData_E;
            rd_M <= rd_E_out;
            PCPlus4_M <= PCPlus4_E_out;
        end
    end

endmodule
