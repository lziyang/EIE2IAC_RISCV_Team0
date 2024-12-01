module ALUMux1 (
    input logic [31:0] RD1,
    input logic [31:0] PC,
    input logic ALUSrcA,
    output logic [31:0] SrcA
);

always_comb begin
        if (ALUSrcA) 
            SrcA=PC;
        else 
            SrcA=RD1;
    end

endmodule
