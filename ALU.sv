module ALU(
    input logic [31:0] SrcA,
    input logic [31:0] SrcB,
    input logic [3:0] ALUControl,
    output logic [31:0] SUM,
    output logic Zero,
    output logic signedLess,
    output logic unsignedLess
);

    always_comb begin

        SUM = 0;
        Zero = 0;

        case (ALUControl)
            4'b0000: SUM = SrcA + SrcB;         
            4'b0001: begin
                SUM = SrcA - SrcB;
                Zero = (SUM == 0);
            end
            4'b0010: SUM = SrcA & SrcB;         
            4'b0011: SUM = SrcA | SrcB;
            4'b0100: SUM = SrcA ^ SrcB;
            4'b0101: SUM = (SrcA < SrcB) ? 1 : 0;
            4'b0110: SUM = ($signed(SrcA) < $signed(SrcB)) ? 1 : 0;
            4'b0111: SUM = SrcB;
            4'b1000: SUM = SrcA << SrcB;
            4'b1001: SUM = SrcA >> SrcB;
            4'b1010: SUM = SrcA >>> SrcB;   
            default: SUM = 0;                     
        endcase
    end

    assign signedLess = ($signed(SrcA) < $signed(SrcB));
    assign unsignedLess = (SrcA < SrcB);

endmodule
