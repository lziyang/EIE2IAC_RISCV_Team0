module IDTop (
    input logic clk,
    input logic rst,

    // from IF/ID Reg:
    input logic [31:0] Instr_D,
    input logic [31:0] PCPlus4_D,
    input logic [31:0] PC_D,

    // From WB stage directly
    input logic [4:0] rd_W_out,
    input logic [31:0] Result_W,
    input logic RegWrite_W_out,

    // output to ID/EX reg
    output logic [2:0] Branch_D,
    output logic [1:0] Jump_D,
    output logic RegWrite_D,
    output logic MemWrite_D,
    output logic ALUSrcA_D,
    output logic ALUSrcB_D,
    output logic [3:0] ALUControl_D,
    output logic [1:0] ResultSrc_D,
    output logic [1:0] SizeSrc_D,
    output logic LoadSign_D,
    output logic [31:0] ImmExt_D,
    output logic [31:0] RD1_D,
    output logic [31:0] RD2_D,
    output logic [4:0] rs1_D,
    output logic [4:0] rs2_D,
    output logic [4:0] rd_D,
    output logic [31:0] PCPlus4_D_out,
    output logic [31:0] PC_D_out,

    output logic [31:0] a0
);

    logic [6:0] op_D;
    logic [31:7] ImmIn_D;
    logic [2:0] funct3_D;
    logic [6:0] funct7_D;
    logic [2:0] ImmSrc_D;

    assign op_D = Instr_D[6:0];
    assign ImmIn_D = Instr_D[31:7];
    assign funct3_D = Instr_D[14:12];
    assign funct7_D = Instr_D[31:25];
    assign rs1_D = Instr_D[19:15];
    assign rs2_D = Instr_D[24:20];
    assign rd_D = Instr_D[11:7];

    ControlUnit ControlUnit (
        .Branch_D(Branch_D),
        .Jump_D(Jump_D),
        .op_D(op_D),
        .funct3_D(funct3_D),
        .funct7_D(funct7_D),
        .RegWrite_D(RegWrite_D),
        .MemWrite_D(MemWrite_D),
        .ALUSrcA_D(ALUSrcA_D),
        .ALUSrcB_D(ALUSrcB_D),
        .ALUControl_D(ALUControl_D),
        .ResultSrc_D(ResultSrc_D),
        .SizeSrc_D(SizeSrc_D),
        .LoadSign_D(LoadSign_D),
        .ImmSrc_D(ImmSrc_D)
    );

    Extend Extend (
        .ImmSrc_D(ImmSrc_D),
        .ImmIn_D(ImmIn_D),
        .ImmExt_D(ImmExt_D)
    );

    RegisterFile RegisterFile (
        .clk(clk),
        .A1_D(rs1_D),
        .A2_D(rs2_D),
        .A3_W(rd_W_out),
        .WD3_W(Result_W),
        .WE3_W(RegWrite_W_out),
        .a0(a0),
        .RD1_D(RD1_D),
        .RD2_D(RD2_D)
    );

    assign PCPlus4_D_out = PCPlus4_D;
    assign PC_D_out = PC_D;

endmodule
