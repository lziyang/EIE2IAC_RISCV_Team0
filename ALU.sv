module ALU #(
    parameter DATAWIDTH = 32
)(
    input logic [DATAWIDTH-1:0] ALUop1,
    input logic [DATAWIDTH-1:0] ALUop2,
    input logic [3:0] ALUctrl,
    output logic [DATAWIDTH-1:0] SUM,
    output logic Zero
);

    always_comb begin
        case (ALUctrl)
            4'b0000: SUM = ALUop1 + ALUop2;         
            4'b0001: SUM = ALUop1 - ALUop2;             
            4'b0010: SUM = ALUop1 & ALUop2;         
            4'b0011: SUM = ALUop1 | ALUop2;
            4'b0100: SUM = ALUop1 ^ ALUop2;
            4'b0101: SUM = (ALUop1 < ALUop2) ? 1 : 0;
            4'b0110: SUM = ($signed(ALUop1) < $signed(ALUop2)) ? 1 : 0;
            4'b0111: SUM = ALUop2;
            4'b1000: SUM = ALUop1 << ALUop2;
            4'b1001: SUM = ALUop1 >> ALUop2;
            4'b1010: SUM = ALUop1 >>> ALUop2;    
            default: SUM = 0;                     
        endcase
    end

    assign Zero = (SUM == 0);

endmodule
