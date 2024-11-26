module TopCPU(
    input logic clk,
    input logic rst,
    output logic [31:0] a0
);

    logic [31:0] pc, PCNext, instruction;
    logic [31:0] ImmExt, ALUResult, ReadData, Result;
    logic [31:0] branch_target;
    logic RegWrite, MemWrite, ALUSrc, ALUSrcA;
    logic [1:0] PCSrc, ResultSrc, ImmSrc;
    logic [3:0] ALUControl;
    logic Zero, LessSigned, LessUnsigned;

    logic [2:0] DataControl; // from CUSE，控制DataMemory的S/L

    // 使用寄存器来存储WriteData避免反馈路径问题,不写这个会因为路径反馈炸掉
    logic [31:0] WriteData;
    logic [31:0] RD1, SrcA;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            pc <= 32'b0;
        else
            pc <= PCNext;
    end

    InstructionMemory instruction_memory (
        .pc(pc),
        .instruction(instruction)
    );

    CUSE cuse (
        .Instr        (instruction),
        .Zero         (Zero),
        .LessSigned   (LessSigned),
        .LessUnsigned (LessUnsigned),
        .RegWrite     (RegWrite),
        .ALUSrc       (ALUSrc),
        .ALUSrcA      (ALUSrcA),
        .MemWrite     (MemWrite),
        .PCSrc        (PCSrc),
        .ResultSrc    (ResultSrc),
        .ALUControl   (ALUControl),
        .ImmSrc       (ImmSrc),
        .ImmExt       (ImmExt),
        .DataControl  (DataControl) // newly added
    );


    RGALU rgalu (
        .clk           (clk),
        .RegWrite      (RegWrite),
        .A1            (instruction[19:15]),
        .A2            (instruction[24:20]),
        .A3            (instruction[11:7]),
        .WD3           (Result),
        .ALUControl    (ALUControl),
        .ALUSrc        (ALUSrc),
        .ImmExt        (ImmExt),
        .ALUResult     (ALUResult),
        .Zero          (Zero),
        .LessSigned    (LessSigned),
        .LessUnsigned  (LessUnsigned),
        .RD1           (RD1),       // newly added RD1
        .RD2           (WriteData),
        .reg_a0        (a0)
    );

    DataMemory data_memory (
        .clk        (clk),
        .MemWrite   (MemWrite),
        .DataControl    (DataControl),   // function 3 is now called DataControl
        .ALUResult  (ALUResult),
        .WriteData  (WriteData),
        .ReadData   (ReadData)
    );


    // Result 的选择逻辑，根据 ResultSrc
    always_comb begin
        case (ResultSrc)
            2'b00: Result = ALUResult;          // 来自ALU的结果
            2'b01: Result = ReadData;           // 来自内存的读取数据
            2'b10: Result = pc + 4;             // 用于JAL，JALR指令
            2'b11: Result = ImmExt;             // 用于LUI指令
            default: Result = 32'b0;
        endcase
    end

    // PC 的更新逻辑
    always_comb begin
        case (PCSrc)
            2'b00: PCNext = pc + 4;
            2'b01: PCNext = pc + ImmExt;
            2'b10: PCNext = ALUResult;
            default: PCNext = pc + 4;
        endcase
    end

    assign SrcA = ALUSrcA ? pc : RD1;

endmodule
