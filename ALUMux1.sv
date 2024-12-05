module ALUMux1 (
    input logic [31:0] RD1_E,
    input logic [31:0] PC_E,
    input logic ALUSrcA_E,
    output logic [31:0] SrcA_E
);

always_comb begin
        if (ALUSrcA_E)
            SrcA_E=PC_E;
        else 
            SrcA_E=RD1_E;
    end

endmodule
