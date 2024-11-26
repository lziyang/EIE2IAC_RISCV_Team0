module InstructionMemory(
    input logic [31:0] pc,
    output logic [31:0] instruction
);
    // 256 command * 4 byte per command = 1024 bytes
    logic [7:0] memory [0:1023];

    // _init
    initial begin
        $readmemh("program.hex", memory); // load from program.hex, so change this to test out assembly
    end

    // little endian
    assign instruction = {memory[pc + 3], memory[pc + 2], memory[pc + 1], memory[pc]};
endmodule
