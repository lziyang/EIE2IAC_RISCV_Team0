module PCMux (
    input logic [31:0] PCPlus4,
    input logic [31:0] PCTarget,
    input logic [31:0] PCJALR,
    input logic [1:0] PCSrc,
    output logic [31:0] PCNext
);

    always_comb begin
        case (PCSrc)
            2'b00: PCNext = PCPlus4;
            2'b01: PCNext = PCTarget;
            2'b10: PCNext = PCJALR;
            default: PCNext = PCPlus4;
        endcase
    end

endmodule
