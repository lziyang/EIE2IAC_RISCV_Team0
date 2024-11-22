module SignExtender #(
    parameter WIDTH = 32

)(
    input logic [WIDTH-1:7]            Instr,
    input logic [1:0]                  ImmSrc,
    output logic [WIDTH-1:0]           ImmExt

);

always_comb
    case (ImmSrc)
        if(ImmSrc==2'b0)        ImmExt = {{20{Instr[12]}},Instr[WIDTH-1:20]}
        else if(ImmSrc==2'b01)  ImmExt = {{20{Instr[12]}},Instr[WIDTH-1:25],Instr[11:7]}
        else if(ImmSrc==2'b10)  ImmExt = {21{Instr[12]},Instr[10:5],Instr[4:1],Instr[11]}
        else    ImmExt = {12{Instr[WIDTH-1]},Instr[WIDTH-1:12]} or ImmExt = {11{Instr[20]},Instr[20],Instr[10:1],Instr[11],Instr[19:12]}

endmodule
