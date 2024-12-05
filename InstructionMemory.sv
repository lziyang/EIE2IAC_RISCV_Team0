module InstructionMemory(
    input logic [31:0] PC,        
    output logic [31:0] Instr
);

    logic [7:0] Instr_memory [32'hBFC00000:32'hBFC00FFF]; // 4 KB instruction memory (0x1000 bytes)

    initial begin
        $readmemh("program.hex", Instr_memory); // Load instructions from a hex file
    end

    // Check if PC is in the valid range
    logic ValidAddr;
    assign ValidAddr = (PC[31:12] == 20'hBFC00); // Only accept addresses in 0xBFC00000–0xBFC00FFF

    // Fetch instruction only if address is valid, 0 otherwise
    assign Instr = ValidAddr ? {Instr_memory[PC[11:0] + 3], Instr_memory[PC[11:0] + 2], Instr_memory[PC[11:0] + 1], Instr_memory[PC[11:0]]} : 32'b0;
endmodule
