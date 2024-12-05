module Extend (
    input logic [31:7]    ImmIn_D,
    input logic [2:0]     ImmSrc_D,
    output logic [31:0]   ImmExt_D
);

always_comb begin
    case (ImmSrc_D)
        3'b000: ImmExt_D = {{20{ImmIn_D[31]}},ImmIn_D[31:20]}; // I-type
        3'b001: ImmExt_D = {{20{ImmIn_D[31]}},ImmIn_D[31:25],ImmIn_D[11:7]};  // S-type
        3'b010: ImmExt_D = {{19{ImmIn_D[31]}},ImmIn_D[31],ImmIn_D[7],ImmIn_D[30:25],ImmIn_D[11:8],1'b0};  // B-type
        3'b011: ImmExt_D = {{11{ImmIn_D[31]}}, ImmIn_D[31], ImmIn_D[19:12],ImmIn_D[20],ImmIn_D[30:21],1'b0};  // J-type
        3'b100: ImmExt_D = {ImmIn_D[31:12], 12'b0};  // U-type
        3'b101: ImmExt_D = {27'b0, ImmIn_D[24:20]}; // Imm for load immediates
        default: ImmExt_D = 32'b0;
    endcase
end
endmodule
