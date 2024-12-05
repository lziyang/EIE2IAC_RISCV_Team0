module MEMTop (
    input logic clk,
    input logic rst,

    input logic RegWrite_M,
    input logic MemWrite_M,
    input logic [1:0] ResultSrc_M,
    input logic [1:0] SizeSrc_M,
    input logic LoadSign_M,

    input logic [31:0] ALUResult_M,
    input logic [31:0] WriteData_M,
    input logic [4:0] rd_M,
    input logic [31:0] PCPlus4_M,

    output logic RegWrite_M_out,
    output logic [1:0] ResultSrc_M_out,
    output logic [31:0] ReadData_M,
    output logic [31:0] ALUResult_M_out,
    output logic [4:0] rd_M_out,
    output logic [31:0] PCPlus4_M_out
);

    DataMemory DataMemory (
        .clk(clk),
        .MemWrite(MemWrite_M),
        .LoadSign(LoadSign_M),
        .SizeSrc(SizeSrc_M),
        .WriteData(WriteData_M),
        .ALUResult(ALUResult_M),
        .ReadData(ReadData_M)
    );

    // pass signals to MEM_WB_Reg
    assign RegWrite_M_out = RegWrite_M;
    assign ResultSrc_M_out = ResultSrc_M;
    assign ALUResult_M_out = ALUResult_M;
    assign rd_M_out = rd_M;
    assign PCPlus4_M_out = PCPlus4_M;

endmodule
