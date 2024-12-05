module MEM_WB_Reg (
    input logic clk,
    input logic rst,

    input logic RegWrite_M_out,
    input logic [1:0] ResultSrc_M_out,

    input logic [31:0] ReadData_M,
    input logic [31:0] ALUResult_M_out,
    input logic [4:0] rd_M_out,
    input logic [31:0] PCPlus4_M_out,

    output logic RegWrite_W,
    output logic [1:0] ResultSrc_W,
    output logic [31:0] ReadData_W,
    output logic [31:0] ALUResult_W,
    output logic [4:0] rd_W,
    output logic [31:0] PCPlus4_W
);
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            RegWrite_W <= 0;
            ResultSrc_W <= 2'b00;
            ReadData_W <= 32'b0;
            ALUResult_W <= 32'b0;
            rd_W <= 5'b0;
            PCPlus4_W <= 32'b0;
        end else begin
            RegWrite_W <= RegWrite_M_out;
            ResultSrc_W <= ResultSrc_M_out;
            ReadData_W <= ReadData_M;
            ALUResult_W <= ALUResult_M_out;
            rd_W <= rd_M_out;
            PCPlus4_W <= PCPlus4_M_out;
        end
    end

endmodule
