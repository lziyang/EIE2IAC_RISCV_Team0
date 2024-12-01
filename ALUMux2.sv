module ALUMux2 (
    input logic [31:0] RD2,
    input logic [31:0] ImmExt,
    input logic ALUSrcB,
    output logic [31:0] SrcB
);

always_comb begin
        if (ALUSrcB) 
            SrcB=ImmExt;
        else 
            SrcB=RD2;
    end

endmodule
