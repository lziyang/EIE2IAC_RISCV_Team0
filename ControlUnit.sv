module ControlUnit (
    input logic [6:0] op,
    input logic [2:0] funct3,
    input logic [6:0] funct7,  
    input logic Zero,

    input logic unsignedLess,
    input logic signedLess,

    output logic [1:0] PCSrc,
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic [3:0] ALUControl,
    output logic ALUSrcA,
    output logic ALUSrcB,          
    output logic [2:0] ImmSrc,     
    output logic RegWrite,

    output logic LoadSign,
    output logic [1:0] SizeSrc  
);

always_comb begin
    RegWrite = 0;
    ALUSrcA = 0;
    ALUSrcB = 0;
    MemWrite = 0;
    ResultSrc = 2'b00;
    PCSrc = 2'b00;
    ALUControl = 4'b0000;
    ImmSrc = 3'b000;
    LoadSign = 0;
    SizeSrc = 2'b00;

    casez (op)

        //R type
        7'b0110011: begin
        RegWrite = 1;
        ALUSrcA = 0;
        ALUSrcB = 0;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00;
        ImmSrc = 3'b000;

        case (funct3)
            3'b000:
                if (funct7[5]==1'b1)
                    ALUControl = 4'b0001; // SUB
                else
                    ALUControl = 4'b0000; // ADD
            3'b100: ALUControl = 4'b0100; // XOR
            3'b110: ALUControl = 4'b0011; // OR
            3'b111: ALUControl = 4'b0010; // AND
            3'b001: ALUControl = 4'b1000; // SLL
            3'b101:
                if (funct7[5]==1'b1)
                    ALUControl = 4'b1010; // SRA unsure
                else
                    ALUControl = 4'b1001; // SRL
            3'b010: ALUControl = 4'b0110; // SLT 
            3'b011: ALUControl = 4'b0101; // SLTU
            default: ALUControl = 4'b0000;
        endcase
    end

    //I type
    7'b0010011: begin
        RegWrite = 1;
        ALUSrcA = 0;
        ALUSrcB = 1;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00;

        // Default value for ImmSrc
        ImmSrc = 3'b000;

        case (funct3)
            3'b000: ALUControl = 4'b0000; // ADDI
            3'b100: ALUControl = 4'b0100; // XORI
            3'b110: ALUControl = 4'b0011; // ORI
            3'b111: ALUControl = 4'b0010; // ANDI
            3'b010: ALUControl = 4'b0110; // SLTI
            3'b011: ALUControl = 4'b0101; // SLTIU
            3'b001: begin // SLLI
                ImmSrc = 3'b101;
                ALUControl = 4'b1000;
            end
            3'b101: begin // SRAI or SRLI
                ImmSrc = 3'b101;
                if (funct7[5] == 1'b1)
                    ALUControl = 4'b1010; // SRAI
                else
                    ALUControl = 4'b1001; // SRLI
            end
            default: ALUControl = 4'b0000; 
        endcase
    end

    // Load Instr I type
    7'b0000011: begin
        RegWrite = 1;
        ALUSrcA = 0;
        ALUSrcB = 1;
        MemWrite = 0;
        ResultSrc = 2'b01;
        PCSrc = 2'b00;
        ALUControl = 4'b0000;
        ImmSrc = 3'b000;

        case (funct3)
            3'b000: begin
                SizeSrc = 2'b10;
                LoadSign = 1;
            end
            3'b001: begin
                SizeSrc = 2'b01;
                LoadSign = 1;
            end
            3'b010: begin
                SizeSrc = 2'b00;
                LoadSign = 1;
            end
            3'b100: begin
                SizeSrc = 2'b10;
                LoadSign = 0;
            end
            3'b101: begin
                SizeSrc = 2'b01;
                LoadSign = 0;
            end
            default: begin
                SizeSrc = 2'b00;
                LoadSign = 0;
            end
        endcase

    end

    // S type
    7'b0100011: begin
        RegWrite = 0;
        ALUSrcA = 0;
        ALUSrcB = 1;
        MemWrite = 1;
        ResultSrc = 2'b00; // again, set dont care to default value
        PCSrc = 2'b00;
        ALUControl = 4'b0000;
        ImmSrc = 3'b001;
        
        case (funct3)
            3'b000: SizeSrc = 2'b10;
            3'b001: SizeSrc = 2'b01;
            3'b010: SizeSrc = 2'b00;
            default: SizeSrc = 2'b00;
        endcase

    end

    // B type
    7'b1100011: begin
        RegWrite = 0;
        ALUSrcA = 0;
        ALUSrcB = 0;
        MemWrite = 0;
        ResultSrc = 2'b00; // techinically dont care, but we set it to default value
        ImmSrc = 3'b010;
        ALUControl = 4'b0001;

        case (funct3)
            3'b000: PCSrc = Zero ? 2'b01 : 2'b00; // BEQ
            3'b001: PCSrc = !Zero ? 2'b01 : 2'b00; // BNE
            3'b100: PCSrc = signedLess ? 2'b01 : 2'b00; // BLT
            3'b101: PCSrc = !signedLess ? 2'b01 : 2'b00; // BGE
            3'b110: PCSrc = unsignedLess ? 2'b01 : 2'b00; // BLTU
            3'b111: PCSrc = !unsignedLess ? 2'b01 : 2'b00; // BGEU
            default: PCSrc = 2'b00;
        endcase
    end

    // JAL /
    7'b1101111: begin
        RegWrite = 1;
        MemWrite = 0;
        ResultSrc = 2'b10; // PC + 4
        PCSrc = 2'b01; // PC = PC + imm
        ALUControl = 4'bx;
        ALUSrcA = 0;
        ALUSrcB = 1'bx;        
        ImmSrc = 3'b011;
    end

    // JALR /
    7'b1100111: begin
        RegWrite = 1;
        MemWrite = 0;
        ResultSrc = 2'b10;
        PCSrc = 2'b10;
        ALUControl = 4'b0000;
        ALUSrcA = 0;
        ALUSrcB = 1;
        ImmSrc = 3'b000;
    end

    // LUI /
    7'b0110111: begin
        RegWrite = 1;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00; // techinically dont care, but we set it to default value
        ALUControl = 4'b0111;
        ALUSrcA = 0;
        ALUSrcB = 1;
        ImmSrc = 3'b100;
    end

    // AUIPC
    7'b0010111: begin
        RegWrite = 1;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00;
        ALUControl = 4'b0000;
        ALUSrcA = 1;
        ALUSrcB = 1;
        ImmSrc = 3'b100;
    end

    default: begin
        RegWrite = 0;
        ALUSrcA = 0;
        ALUSrcB = 0;
        MemWrite = 0;
        ResultSrc = 2'b00;
        PCSrc = 2'b00;
        ALUControl = 4'b1111;
        ImmSrc = 3'b111;
    end
    endcase
end

endmodule
