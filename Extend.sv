module Extend (
    input logic [31:7]    ImmIn,
    input logic [2:0]     ImmSrc,
    output logic [31:0]   ImmExt
);

always_comb begin
    case (ImmSrc)
        3'b000: ImmExt = {{20{ImmIn[31]}},ImmIn[31:20]}; // I-type
        3'b001: ImmExt = {{20{ImmIn[31]}},ImmIn[31:25],ImmIn[11:7]};  // S-type
        3'b010: ImmExt = {{19{ImmIn[31]}},ImmIn[31],ImmIn[7],ImmIn[30:25],ImmIn[11:8],1'b0};  // B-type
        3'b011: ImmExt = {{11{ImmIn[31]}}, ImmIn[31], ImmIn[19:12],ImmIn[20],ImmIn[30:21],1'b0};  // J-type
        3'b100: ImmExt = {ImmIn[31:12], 12'b0};  // U-type
        default: ImmExt = 32'b0;
    endcase
end
endmodule
