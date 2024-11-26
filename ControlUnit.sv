module ControlUnit (
    input  logic [6:0] op,
    input  logic [14:12] funct3,
    input  logic [30:30] funct7,  // 之后应该改成从上级模块中进行提取
    input logic Zero,

    // below are new inputs
    input logic LessSigned,        // ALU compare flag for signed for branch
    input logic LessUnsigned,      // ALU compare flag for unsigned for branch

    output logic [1:0] PCSrc,
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic [3:0] ALUControl,
    output logic ALUSrc,           // ALU srcB
    output logic [1:0] ImmSrc,     // Immediate generator control
    output logic RegWrite,          // Register write enable

    // below is new output
    output logic ALUSrcA,         // ALU srcA (this is to input PC into ALU)
    output logic [2:0] DataControl  // Goes into data handler, functions exactly the same as Funct3
);

always_comb begin
    RegWrite = 0;
    ALUSrc = 0;
    ALUSrcA = 0;
    MemWrite = 0;
    ResultSrc = 2'b00;
    PCSrc = 2'b00;
    ALUControl = 4'b0000;
    ImmSrc = 2'b00;

    case (op)
    // R command
    7'b0110011: begin
        RegWrite = 1;
        ALUSrc = 0;
        ALUSrcA = 0;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00;
        ImmSrc = 2'b00;

        case (funct3)
        3'b000:
            if (funct7) // funct7[30] == 1, SUB
            ALUControl = 4'b0001;
            else
            ALUControl = 4'b0000; // ADD
        3'b100: ALUControl = 4'b0100; // XOR
        3'b110: ALUControl = 4'b0011; // OR
        3'b111: ALUControl = 4'b0010; // AND
        3'b001: ALUControl = 4'b0101; // SLL
        3'b101:
            if (funct7) // SRA
            ALUControl = 4'b0111; // SRA
            else
            ALUControl = 4'b0110; // SRL
        3'b010: ALUControl = 4'b1000; // SLT 
        3'b011: ALUControl = 4'b1001; // SLTU
        default: ALUControl = 4'b0000; // ADD
        endcase
    end
    
    // below the same decision logic is used, please referece to the comments above if needed

    // I type
    7'b0010011: begin
        RegWrite = 1;
        ALUSrc = 1;
        ALUSrcA = 0;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00;
        ImmSrc = 2'b00;

        case (funct3)
        3'b000: ALUControl = 4'b0000; // ADDI
        3'b100: ALUControl = 4'b0100; // XORI
        3'b110: ALUControl = 4'b0011; // ORI
        3'b111: ALUControl = 4'b0010; // ANDI
        3'b010: ALUControl = 4'b1000; // SLTI
        3'b011: ALUControl = 4'b1001; // SLTIU
        3'b001: ALUControl = 4'b0101; // SLLI
        3'b101:
            if (funct7) // SRAI
            ALUControl = 4'b0111; // SRAI
            else
            ALUControl = 4'b0110; // SRLI
        default: ALUControl = 4'b0000; // ADDI
        endcase
    end

    // I type 2 (for the load commands)
    7'b0000011: begin
        RegWrite = 1;
        ALUSrc = 1;
        ALUSrcA = 0;
        MemWrite = 0;
        ResultSrc = 2'b01;
        PCSrc = 2'b00;
        ALUControl = 4'b0000;
        ImmSrc = 2'b00;
        DataControl = funct3; // NEWLY ADDED: Store DataControl = funct3
    end

    // S command
    7'b0100011: begin
        RegWrite = 0;
        ALUSrc = 1;
        ALUSrcA = 0;
        MemWrite = 1;
        ResultSrc = 2'b00; // this is not important, we might be able to use 2'bxx? check later
        PCSrc = 2'b00;
        ALUControl = 4'b0000;
        ImmSrc = 2'b01;
        DataControl = funct3; // NEWLY ADDED: Store DataControl = funct3
    end

    // B command
    7'b1100011: begin
        RegWrite = 0;
        ALUSrc = 0;
        ALUSrcA = 0;
        MemWrite = 0;
        ResultSrc = 2'bxx; // this is not important, we might be able to use 2'bxx? check later
        ImmSrc = 2'b10;
        ALUControl = 4'b0001;

        case (funct3)
        3'b000: PCSrc = Zero ? 2'b01 : 2'b00; // BEQ
        3'b001: PCSrc = Zero ? 2'b00 : 2'b01; // BNE
        3'b100: PCSrc = LessSigned ? 2'b01 : 2'b00; // BLT
        3'b101: PCSrc = LessSigned ? 2'b00 : 2'b01; // BGE
        3'b110: PCSrc = LessUnsigned ? 2'b01 : 2'b00; // BLTU
        3'b111: PCSrc = LessUnsigned ? 2'b00 : 2'b01; // BGEU
        default: begin
            PCSrc = 2'b00;
        end
        endcase
    end

    // JAL
    7'b1101111: begin
        RegWrite = 1;
        ALUSrcA = 0;    // this is not important, we might be able to use x? check later
        MemWrite = 0;
        ResultSrc = 2'b10; // PC + 4
        PCSrc = 2'b01;     // PC = PC + imm
        ALUControl = 4'bxxxx;
        ALUSrc = 0;        // dont care, as above
        ImmSrc = 2'b11;
    end

    // JALR
    7'b1100111: begin
        RegWrite = 1;
        ALUSrcA = 0;
        MemWrite = 0;
        ResultSrc = 2'b10;
        PCSrc = 2'b10;
        ALUControl = 4'b0000;
        ALUSrc = 1;
        ImmSrc = 2'b00;
    end

    // LUI
    7'b0110111: begin
        RegWrite = 1;
        ALUSrcA = 0;    // dont care
        MemWrite = 0;
        ResultSrc = 2'b11;
        PCSrc = 2'b00;
        ALUControl = 4'bxxxx;
        ALUSrc = 0;
        ImmSrc = 2'b11;
    end

    // AUIPC
    7'b0010111: begin
        RegWrite = 1;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00;
        ALUControl = 4'b0000;
        ALUSrcA = 1;      // USE PC AS ALU srcA!
        ALUSrc = 1;
        ImmSrc = 2'b11;
    end

    default: begin
        // for debugging only, these are default value!
        RegWrite = 0;
        ALUSrc = 0;
        ALUSrcA = 0;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00;
        ALUControl = 4'b0000;
        ImmSrc = 2'b00;
    end
    endcase
end

endmodule
