module ALUMux1 (
    input logic [31:0] RD2,
    input logic [31:0] ImmExt,
    input logic ALUSrc,
    output logic [31:0] SrcB
);

always_comb begin
        if (ALUSrc) 
            SrcB=ImmExt;
        else 
            SrcB=RD2;
    end

endmodule
