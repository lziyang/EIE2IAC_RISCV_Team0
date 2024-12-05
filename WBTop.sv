module WBTop (

    input logic RegWrite_W,
    input logic [1:0] ResultSrc_W,

    input logic [31:0] ReadData_W,
    input logic [31:0] ALUResult_W,
    input logic [31:0] PCPlus4_W,
    input logic [4:0] rd_W,

    output logic RegWrite_W_out,
    output logic [31:0] Result_W,
    output logic [4:0] rd_W_out
);

    ALUMux3 ALUMux3 (
        .ResultSrc_W(ResultSrc_W),
        .ALUResult_W(ALUResult_W),
        .ReadData_W(ReadData_W),
        .PCPlus4_W(PCPlus4_W),
        .Result_W(Result_W)
    );

    assign RegWrite_W_out = RegWrite_W;
    assign rd_W_out = rd_W;

endmodule
