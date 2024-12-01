module ALU(
    input logic [31:0] SrcA,
    input logic [31:0] SrcB,
    input logic [3:0] ALUControl,
    output logic [31:0] ALUResult, //后面改成aluresult
    output logic Zero,
    output logic signedLess,
    output logic unsignedLess
);

    always_comb begin

        ALUResult = 0;
        Zero = 0;

        case (ALUControl)
            4'b0000: ALUResult = SrcA + SrcB;         
            4'b0001: begin
                ALUResult = SrcA - SrcB;
                Zero = (ALUResult == 0);
            end
            4'b0010: ALUResult = SrcA & SrcB;         
            4'b0011: ALUResult = SrcA | SrcB;
            4'b0100: ALUResult = SrcA ^ SrcB;
            4'b0101: ALUResult = (SrcA < SrcB) ? 1 : 0;
            4'b0110: ALUResult = ($signed(SrcA) < $signed(SrcB)) ? 1 : 0;
            4'b0111: ALUResult = SrcB;
            4'b1000: ALUResult = SrcA << SrcB;
            4'b1001: ALUResult = SrcA >> SrcB;

            4'b1010: ALUResult = $signed(SrcA) >>> SrcB[4:0];   // 4'b1010: ALUResult = SrcA >>> SrcB; sra 需要用signed

            default: ALUResult = 0;                     
        endcase
    end

    assign signedLess = ($signed(SrcA) < $signed(SrcB));
    assign unsignedLess = (SrcA < SrcB);

endmodule
