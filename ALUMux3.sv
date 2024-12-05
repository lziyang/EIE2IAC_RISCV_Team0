module ALUMux3 (
    input logic [1:0] ResultSrc_W,
    input logic [31:0] ALUResult_W,
    input logic [31:0] ReadData_W,
    input logic [31:0] PCPlus4_W,
    output logic [31:0] Result_W
);

    always_comb begin
        case (ResultSrc_W)
            2'b00: Result_W = ALUResult_W;   
            2'b01: Result_W = ReadData_W;     
            2'b10: Result_W = PCPlus4_W; 
            default: Result_W = 32'b0;
        endcase
    end

endmodule
