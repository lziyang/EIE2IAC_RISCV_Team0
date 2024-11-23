module SignExtender #(
    parameter WIDTH = 32

)(
    input logic [WIDTH-1:7]            Instr,
    input logic [1:0]                  ImmSrc,
    output logic [WIDTH-1:0]           ImmExt

);

always_comb begin
    case (ImmSrc)
        2'b00: ImmExt = {{20{Instr[31]}},Instr[WIDTH-1:20]}; // I-type
        2'b01: ImmExt = {{20{Instr[31]}},Instr[WIDTH-1:25],Instr[11:7]};  // S-type
        2'b10: ImmExt = {{19{Instr[31]}},Instr[31],Instr[7],Instr[30:25],Instr[11:8],1'b0};  // B-type
        2'b11: ImmExt = {{11{Instr[31]}}, Instr[30], Instr[19:12],Instr[20],Instr[30:21],1'b0};  // J-type
        default: ImmExt = 32'b0
    endcase
end
endmodule
