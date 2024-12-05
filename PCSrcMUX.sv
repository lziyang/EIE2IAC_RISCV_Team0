module PCSrcMUX (
    input logic [2:0] Branch_E,
    input logic [1:0] Jump_E,
    input logic Zero_E,
    input logic unsignedLess_E,
    input logic signedLess_E,
    output logic [1:0] PCSrc_E
);


always_comb begin

    PCSrc_E = 2'b00;

    // check branching
    case (Branch_E)
        3'b000: PCSrc_E = Zero_E ? 2'b01 : 2'b00; // BEQ
        3'b001: PCSrc_E = !Zero_E ? 2'b01 : 2'b00; // BNE
        3'b100: PCSrc_E = signedLess_E ? 2'b01 : 2'b00; // BLT
        3'b101: PCSrc_E = !signedLess_E ? 2'b01 : 2'b00; // BGE
        3'b110: PCSrc_E = unsignedLess_E ? 2'b01 : 2'b00; // BLTU
        3'b111: PCSrc_E = !unsignedLess_E ? 2'b01 : 2'b00; // BGEU
        default:; // keep previous (default)
    endcase

    // check jump
    case (Jump_E)
        2'b10: PCSrc_E = 2'b10; // JAL
        2'b11: PCSrc_E = 2'b11; // JALR
        default; // keep previous (default)
    endcase
end

endmodule
