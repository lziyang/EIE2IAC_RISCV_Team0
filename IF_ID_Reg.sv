module IF_ID_Reg (
    input logic clk,
    input logic rst,
    input logic [31:0] Instr_F,
    input logic [31:0] PCPlus4_F,
    input logic [31:0] PC_F,
    output logic [31:0] Instr_D,
    output logic [31:0] PCPlus4_D,
    output logic [31:0] PC_D
);

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            Instr_D <= 32'b0;
            PCPlus4_D <= 32'b0;
            PC_D <= 32'b0;
        end else begin
            Instr_D <= Instr_F;
            PCPlus4_D <= PCPlus4_F;
            PC_D <= PC_F;
        end
    end

endmodule
