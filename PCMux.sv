module PCMux (
    input logic [31:0] PCPlus4_F,
    input logic [31:0] PCTarget_E,
    input logic [31:0] PCJALR_E,
    input logic [1:0] PCSrc_E,
    output logic [31:0] PCNext_F
);

    always_comb begin
        case (PCSrc_E)
            2'b00: PCNext_F = PCPlus4_F;
            2'b01: PCNext_F = PCTarget_E;
            2'b10: PCNext_F = PCJALR_E;
            default: PCNext_F = PCPlus4_F;
        endcase
    end

endmodule
