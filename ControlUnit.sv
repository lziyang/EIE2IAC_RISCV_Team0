module ControlUnit (
    input logic [6:0] op_D,
    input logic [2:0] funct3_D,
    input logic [6:0] funct7_D,  

    output logic [2:0] Branch_D,
    output logic [1:0] Jump_D,
    output logic [1:0] ResultSrc_D,
    output logic MemWrite_D,
    output logic [3:0] ALUControl_D,
    output logic ALUSrcA_D,
    output logic ALUSrcB_D,          
    output logic [2:0] ImmSrc_D,     
    output logic RegWrite_D,

    output logic LoadSign_D,
    output logic [1:0] SizeSrc_D  
);

always_comb begin
    RegWrite_D = 0;
    ALUSrcA_D = 0;
    ALUSrcB_D = 0;
    MemWrite_D = 0;
    ResultSrc_D = 2'b00;
    Branch_D = 3'b010; // default value of 010
    Jump_D = 2'b00; // default value of not jumping
    ALUControl_D = 4'b0000;
    ImmSrc_D = 3'b000;
    LoadSign_D = 0;
    SizeSrc_D = 2'b00;

    case (op_D)

        //R type
        7'b0110011: begin
        RegWrite_D = 1;
        ALUSrcA_D = 0;
        ALUSrcB_D = 0;
        MemWrite_D = 0;
        ResultSrc_D = 2'b00;
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b00; // default value of not jumping
        ImmSrc_D = 3'b000;

        case (funct3_D)
            3'b000:
                if (funct7_D[5]==1'b1)
                    ALUControl_D = 4'b0001; // SUB
                else
                    ALUControl_D = 4'b0000; // ADD
            3'b100: ALUControl_D = 4'b0100; // XOR
            3'b110: ALUControl_D = 4'b0011; // OR
            3'b111: ALUControl_D = 4'b0010; // AND
            3'b001: ALUControl_D = 4'b1000; // SLL
            3'b101:
                if (funct7_D[5]==1'b1)
                    ALUControl_D = 4'b1010; // SRA unsure
                else
                    ALUControl_D = 4'b1001; // SRL
            3'b010: ALUControl_D = 4'b0110; // SLT 
            3'b011: ALUControl_D = 4'b0101; // SLTU
            default: ALUControl_D = 4'b0000;
        endcase
    end

    //I type
    7'b0010011: begin
        RegWrite_D = 1;
        ALUSrcA_D = 0;
        ALUSrcB_D = 1;
        MemWrite_D = 0;
        ResultSrc_D = 2'b00;
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b00; // default value of not jumping

        // Default value for ImmSrc
        ImmSrc_D = 3'b000;

        case (funct3_D)
            3'b000: ALUControl_D = 4'b0000; // ADDI
            3'b100: ALUControl_D = 4'b0100; // XORI
            3'b110: ALUControl_D = 4'b0011; // ORI
            3'b111: ALUControl_D = 4'b0010; // ANDI
            3'b010: ALUControl_D = 4'b0110; // SLTI
            3'b011: ALUControl_D = 4'b0101; // SLTIU
            3'b001: begin // SLLI
                ImmSrc_D = 3'b101;
                ALUControl_D = 4'b1000;
            end
            3'b101: begin // SRAI or SRLI
                ImmSrc_D = 3'b101;
                if (funct7_D[5] == 1'b1)
                    ALUControl_D = 4'b1010; // SRAI
                else
                    ALUControl_D = 4'b1001; // SRLI
            end
            default: ALUControl_D = 4'b0000; 
        endcase
    end

    // Load Instr I type
    7'b0000011: begin
        RegWrite_D = 1;
        ALUSrcA_D = 0;
        ALUSrcB_D = 1;
        MemWrite_D = 0;
        ResultSrc_D = 2'b01;
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b00; // default value of not jumping
        ALUControl_D = 4'b0000;
        ImmSrc_D = 3'b000;

        case (funct3_D)
            3'b000: begin
                SizeSrc_D = 2'b10;
                LoadSign_D = 1;
            end
            3'b001: begin
                SizeSrc_D = 2'b01;
                LoadSign_D = 1;
            end
            3'b010: begin
                SizeSrc_D = 2'b00;
                LoadSign_D = 1;
            end
            3'b100: begin
                SizeSrc_D = 2'b10;
                LoadSign_D = 0;
            end
            3'b101: begin
                SizeSrc_D = 2'b01;
                LoadSign_D = 0;
            end
            default: begin
                SizeSrc_D = 2'b00;
                LoadSign_D = 0;
            end
        endcase

    end

    // S type
    7'b0100011: begin
        RegWrite_D = 0;
        ALUSrcA_D = 0;
        ALUSrcB_D = 1;
        MemWrite_D = 1;
        ResultSrc_D = 2'b00; // again, set dont care to default value
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b00; // default value of not jumping
        ALUControl_D = 4'b0000;
        ImmSrc_D = 3'b001;
        
        case (funct3_D)
            3'b000: SizeSrc_D = 2'b10;
            3'b001: SizeSrc_D = 2'b01;
            3'b010: SizeSrc_D = 2'b00;
            default: SizeSrc_D = 2'b00;
        endcase

    end

    // B type
    7'b1100011: begin
        RegWrite_D = 0;
        ALUSrcA_D = 0;
        ALUSrcB_D = 0;
        MemWrite_D = 0;
        ResultSrc_D = 2'b00; // techinically dont care, but we set it to default value
        ImmSrc_D = 3'b010;
        ALUControl_D = 4'b0001;



        case (funct3_D)
            3'b000: Branch_D = 3'b000; // BEQ
            3'b001: Branch_D = 3'b001; // BNE
            3'b100: Branch_D = 3'b100; // BLT
            3'b101: Branch_D = 3'b101; // BGE
            3'b110: Branch_D = 3'b110; // BLTU
            3'b111: Branch_D = 3'b111; // BGEU
            default: Branch_D = 3'b010;
        endcase

        Jump_D = 2'b00; // default value of not jumping



    end

    // JAL /
    7'b1101111: begin
        RegWrite_D = 1;
        MemWrite_D = 0;
        ResultSrc_D = 2'b10; // PC + 4
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b10; // PC = PC + imm
        ALUControl_D = 4'bx;
        ALUSrcA_D = 0;
        ALUSrcB_D = 1'bx;        
        ImmSrc_D = 3'b011;
    end

    // JALR /
    7'b1100111: begin
        RegWrite_D = 1;
        MemWrite_D = 0;
        ResultSrc_D = 2'b10;
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b11; // JALR
        ALUControl_D = 4'b0000;
        ALUSrcA_D = 0;
        ALUSrcB_D = 1;
        ImmSrc_D = 3'b000;
    end

    // LUI /
    7'b0110111: begin
        RegWrite_D = 1;
        MemWrite_D = 0;
        ResultSrc_D = 2'b00;
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b00; // default value of not jumping
        ALUControl_D = 4'b0111;
        ALUSrcA_D = 0;
        ALUSrcB_D = 1;
        ImmSrc_D = 3'b100;
    end

    // AUIPC
    7'b0010111: begin
        RegWrite_D = 1;
        MemWrite_D = 0;
        ResultSrc_D = 2'b00;
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b00; // default value of not jumping
        ALUControl_D = 4'b0000;
        ALUSrcA_D = 1;
        ALUSrcB_D = 1;
        ImmSrc_D = 3'b100;
    end

    default: begin
        RegWrite_D = 0;
        ALUSrcA_D = 0;
        ALUSrcB_D = 0;
        MemWrite_D = 0;
        ResultSrc_D = 2'b00;
        Branch_D = 3'b010; // default value of 010
        Jump_D = 2'b00; // default value of not jumping
        ALUControl_D = 4'b1111;
        ImmSrc_D = 3'b111;
    end
    endcase
end

endmodule
