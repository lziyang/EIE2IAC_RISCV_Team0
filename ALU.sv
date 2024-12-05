module ALU(
    input logic [31:0] SrcA_E,
    input logic [31:0] SrcB_E,
    input logic [3:0] ALUControl_E,
    output logic [31:0] ALUResult_E,
    output logic Zero_E,
    output logic signedLess_E,
    output logic unsignedLess_E
);

    always_comb begin

        ALUResult_E = 0;
        Zero_E = 0;
        signedLess_E = 0;
        unsignedLess_E = 0;

        case (ALUControl_E)
            4'b0000: ALUResult_E = SrcA_E + SrcB_E;         
            4'b0001: begin
                ALUResult_E = SrcA_E - SrcB_E;
                Zero_E = (ALUResult_E == 0);
            end
            4'b0010: ALUResult_E = SrcA_E & SrcB_E;         
            4'b0011: ALUResult_E = SrcA_E | SrcB_E;
            4'b0100: ALUResult_E = SrcA_E ^ SrcB_E;
            4'b0101: ALUResult_E = (SrcA_E < SrcB_E) ? 1 : 0;
            4'b0110: ALUResult_E = ($signed(SrcA_E) < $signed(SrcB_E)) ? 1 : 0;
            4'b0111: ALUResult_E = SrcB_E;
            4'b1000: ALUResult_E = SrcA_E << SrcB_E;
            4'b1001: ALUResult_E = SrcA_E >> SrcB_E;

            4'b1010: ALUResult_E = $signed(SrcA_E) >>> SrcB_E[4:0];   // 4'b1010: ALUResult_E = SrcA_E >>> SrcB_E; sra 需要用signed

            default: ALUResult_E = 0;                     
        endcase
    end

    assign signedLess_E = ($signed(SrcA_E) < $signed(SrcB_E));
    assign unsignedLess_E = (SrcA_E < SrcB_E);

endmodule
