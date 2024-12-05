module CPUTOP (
    input logic clk,
    input logic rst,
    output logic [31:0] a0
);

    // IF
    logic [31:0] PC_F, PCPlus4_F, Instr_F;

    // IF/ID
    logic [31:0] Instr_D, PCPlus4_D, PC_D;

    // ID
    // Control
    logic RegWrite_D, MemWrite_D, ALUSrcA_D, ALUSrcB_D;
    logic [3:0] ALUControl_D;
    logic [1:0] ResultSrc_D, SizeSrc_D;
    logic LoadSign_D;
    logic [2:0] Branch_D;
    logic [1:0] Jump_D;
    logic [31:0] PCPlus4_D_out;
    logic [31:0] PC_D_out;
    // Data
    logic [31:0] ImmExt_D, RD1_D, RD2_D;
    logic [4:0] rs1_D, rs2_D, rd_D;

    // ID/EX
    // Control
    logic RegWrite_E, MemWrite_E, ALUSrcA_E, ALUSrcB_E;
    logic [3:0] ALUControl_E;
    logic [1:0] ResultSrc_E, SizeSrc_E;
    logic LoadSign_E;
    logic [2:0] Branch_E;
    logic [1:0] Jump_E;
    // Reg
    logic [31:0] ImmExt_E, RD1_E, RD2_E;
    logic [4:0] rs1_E, rs2_E, rd_E;
    logic [31:0] PCPlus4_E, PC_E;

    // EX
    logic RegWrite_E_out;
    logic MemWrite_E_out;
    logic [1:0] ResultSrc_E_out;
    logic [1:0] SizeSrc_E_out;
    logic LoadSign_E_out;

    logic [4:0] rd_E_out;
    logic [31:0] PCPlus4_E_out;


    logic [31:0] ALUResult_E, WriteData_E;
    logic [1:0] PCSrc_E;
    logic [31:0] PCTarget_E, PCJALR_E;

    // EX/MEM Reg
    // Control
    logic RegWrite_M, MemWrite_M;
    logic [1:0] ResultSrc_M, SizeSrc_M;
    logic LoadSign_M;
    
    // Data
    logic [31:0] ALUResult_M, WriteData_M;
    logic [4:0] rd_M;
    logic [31:0] PCPlus4_M;

    // MEM
    logic [31:0] ReadData_M;
    logic RegWrite_M_out;
    logic [1:0] ResultSrc_M_out;

    logic [31:0] ALUResult_M_out;
    logic [4:0] rd_M_out;
    logic [31:0] PCPlus4_M_out;

    // MEM/WB
    // Control
    logic RegWrite_W;
    logic [1:0] ResultSrc_W;
    
    // Data
    logic [31:0] ReadData_W, ALUResult_W;
    logic [4:0] rd_W;
    logic [31:0] PCPlus4_W;

    // WB
    logic [31:0] Result_W;
    logic RegWrite_W_out;
    logic [4:0] rd_W_out;


    IFTop IFTop (
        .clk(clk),
        .rst(rst),
        .PCSrc_E(PCSrc_E),
        .PCTarget_E(PCTarget_E),
        .PCJALR_E(PCJALR_E),
        .PC_F(PC_F),
        .PCPlus4_F(PCPlus4_F),
        .Instr_F(Instr_F)
    );


    IF_ID_Reg IF_ID_Reg (
        .clk(clk),
        .rst(rst),
        .Instr_F(Instr_F),
        .PCPlus4_F(PCPlus4_F),
        .PC_F(PC_F),
        .Instr_D(Instr_D),
        .PCPlus4_D(PCPlus4_D),
        .PC_D(PC_D)
    );


    IDTop IDTop (
        .clk(clk),
        .rst(rst),
        .Instr_D(Instr_D),
        .PCPlus4_D(PCPlus4_D),
        .PCPlus4_D_out(PCPlus4_D_out),
        .PC_D(PC_D),
        .PC_D_out(PC_D_out),
        .rd_W_out(rd_W_out),
        .Result_W(Result_W),
        .RegWrite_W_out(RegWrite_W_out),

        .RegWrite_D(RegWrite_D),
        .MemWrite_D(MemWrite_D),
        .ALUSrcA_D(ALUSrcA_D),
        .ALUSrcB_D(ALUSrcB_D),
        .ALUControl_D(ALUControl_D),
        .ResultSrc_D(ResultSrc_D),
        .SizeSrc_D(SizeSrc_D),
        .LoadSign_D(LoadSign_D),
        .Branch_D(Branch_D),
        .Jump_D(Jump_D),

        .ImmExt_D(ImmExt_D),
        .RD1_D(RD1_D),
        .RD2_D(RD2_D),
        .rs1_D(rs1_D),
        .rs2_D(rs2_D),
        .rd_D(rd_D),

        .a0(a0)
    );


    ID_EX_Reg ID_EX_Reg (
        .clk(clk),
        .rst(rst),

        .RegWrite_D(RegWrite_D),
        .MemWrite_D(MemWrite_D),
        .ALUSrcA_D(ALUSrcA_D),
        .ALUSrcB_D(ALUSrcB_D),
        .ALUControl_D(ALUControl_D),
        .ResultSrc_D(ResultSrc_D),
        .SizeSrc_D(SizeSrc_D),
        .LoadSign_D(LoadSign_D),
        .Branch_D(Branch_D),
        .Jump_D(Jump_D),

        .RD1_D(RD1_D),
        .RD2_D(RD2_D),
        .ImmExt_D(ImmExt_D),
        .rs1_D(rs1_D),
        .rs2_D(rs2_D),
        .rd_D(rd_D),
        .PCPlus4_D_out(PCPlus4_D_out),
        .PC_D_out(PC_D_out),

        .RegWrite_E(RegWrite_E),
        .MemWrite_E(MemWrite_E),
        .ALUSrcA_E(ALUSrcA_E),
        .ALUSrcB_E(ALUSrcB_E),
        .ALUControl_E(ALUControl_E),
        .ResultSrc_E(ResultSrc_E),
        .SizeSrc_E(SizeSrc_E),
        .LoadSign_E(LoadSign_E),
        .Branch_E(Branch_E),
        .Jump_E(Jump_E),
        .RD1_E(RD1_E),
        .RD2_E(RD2_E),
        .ImmExt_E(ImmExt_E),
        .rs1_E(rs1_E),
        .rs2_E(rs2_E),
        .rd_E(rd_E),
        .PCPlus4_E(PCPlus4_E),
        .PC_E(PC_E)
    );


    EXTop EXTop (
        .clk(clk),
        .rst(rst),

        .RegWrite_E(RegWrite_E),
        .MemWrite_E(MemWrite_E),
        .ALUSrcA_E(ALUSrcA_E),
        .ALUSrcB_E(ALUSrcB_E),
        .ALUControl_E(ALUControl_E),
        .ResultSrc_E(ResultSrc_E),
        .SizeSrc_E(SizeSrc_E),
        .LoadSign_E(LoadSign_E),
        .Branch_E(Branch_E),
        .Jump_E(Jump_E),

        .RD1_E(RD1_E),
        .RD2_E(RD2_E),
        .ImmExt_E(ImmExt_E),
        .rs1_E(rs1_E),
        .rs2_E(rs2_E),
        .rd_E(rd_E),
        .PCPlus4_E(PCPlus4_E),
        .PC_E(PC_E),

        .Result_W(Result_W),
        .ALUResult_M(ALUResult_M),
        .RegWrite_M(RegWrite_M),
        .RegWrite_W_out(RegWrite_W_out),
        .rd_M(rd_M),
        .rd_W_out(rd_W_out),

        .RegWrite_E_out(RegWrite_E_out),
        .MemWrite_E_out(MemWrite_E_out),
        .ResultSrc_E_out(ResultSrc_E_out),
        .SizeSrc_E_out(SizeSrc_E_out),
        .LoadSign_E_out(LoadSign_E_out),
        .ALUResult_E(ALUResult_E),
        .WriteData_E(WriteData_E),
        .rd_E_out(rd_E_out),
        .PCPlus4_E_out(PCPlus4_E_out),

        .PCSrc_E(PCSrc_E),
        .PCTarget_E(PCTarget_E),
        .PCJALR_E(PCJALR_E)
    );


    EX_MEM_Reg EX_MEM_Reg (
        .clk(clk),
        .rst(rst),

        .RegWrite_E_out(RegWrite_E_out),
        .MemWrite_E_out(MemWrite_E_out),
        .ResultSrc_E_out(ResultSrc_E_out),
        .SizeSrc_E_out(SizeSrc_E_out),
        .LoadSign_E_out(LoadSign_E_out),

        .ALUResult_E(ALUResult_E),
        .WriteData_E(WriteData_E),
        .rd_E_out(rd_E_out),
        .PCPlus4_E_out(PCPlus4_E_out),

        .RegWrite_M(RegWrite_M),
        .MemWrite_M(MemWrite_M),
        .ResultSrc_M(ResultSrc_M),
        .SizeSrc_M(SizeSrc_M),
        .LoadSign_M(LoadSign_M),
        .ALUResult_M(ALUResult_M),
        .WriteData_M(WriteData_M),
        .rd_M(rd_M),
        .PCPlus4_M(PCPlus4_M)
    );


    MEMTop MEMTop (
        .clk(clk),
        .rst(rst),

        .RegWrite_M(RegWrite_M),
        .MemWrite_M(MemWrite_M),
        .ResultSrc_M(ResultSrc_M),
        .SizeSrc_M(SizeSrc_M),
        .LoadSign_M(LoadSign_M),

        .ALUResult_M(ALUResult_M),
        .WriteData_M(WriteData_M),
        .rd_M(rd_M),
        .PCPlus4_M(PCPlus4_M),

        .RegWrite_M_out(RegWrite_M_out),
        .ResultSrc_M_out(ResultSrc_M_out),
        .ReadData_M(ReadData_M),
        .ALUResult_M_out(ALUResult_M_out),
        .rd_M_out(rd_M_out),
        .PCPlus4_M_out(PCPlus4_M_out)
    );


    MEM_WB_Reg MEM_WB_Reg (
        .clk(clk),
        .rst(rst),

        .RegWrite_M_out(RegWrite_M_out),
        .ResultSrc_M_out(ResultSrc_M_out),

        .ReadData_M(ReadData_M),
        .ALUResult_M_out(ALUResult_M_out),
        .rd_M_out(rd_M_out),
        .PCPlus4_M_out(PCPlus4_M_out),

        .RegWrite_W(RegWrite_W),
        .ResultSrc_W(ResultSrc_W),
        .ReadData_W(ReadData_W),
        .ALUResult_W(ALUResult_W),
        .rd_W(rd_W),
        .PCPlus4_W(PCPlus4_W)
    );


    WBTop WBTop (

        .RegWrite_W(RegWrite_W),
        .ResultSrc_W(ResultSrc_W),

        .ReadData_W(ReadData_W),
        .ALUResult_W(ALUResult_W),
        .PCPlus4_W(PCPlus4_W),
        .rd_W(rd_W),

        .RegWrite_W_out(RegWrite_W_out),
        .Result_W(Result_W),
        .rd_W_out(rd_W_out)
    );

endmodule
