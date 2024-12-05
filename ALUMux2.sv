module ALUMux2 (
    input logic [31:0] RD2_E,
    input logic [31:0] ImmExt_E,
    input logic ALUSrcB_E,
    output logic [31:0] SrcB_E
);

always_comb begin
        if (ALUSrcB_E) 
            SrcB_E=ImmExt_E;
        else 
            SrcB_E=RD2_E;
    end

endmodule
