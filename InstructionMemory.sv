module InstructionMemory(
    input logic [31:0] PC,        
    output logic [31:0] Instr,
    input logic [7:0] Instr_memory [0:2**12-1] // get instrauction mem from HexFileLoader
);

    // check PC within allowed range
    logic ValidAddr;
    assign ValidAddr = (PC[31:12] == 20'hBFC00); // 0xBFC00000–0xBFC00FFF, or 4096

    // if address is correct then fetch instruction
    assign Instr = ValidAddr ? {Instr_memory[PC[11:0] + 3], 
                                Instr_memory[PC[11:0] + 2], 
                                Instr_memory[PC[11:0] + 1], 
                                Instr_memory[PC[11:0]]} : 32'b0;
endmodule
