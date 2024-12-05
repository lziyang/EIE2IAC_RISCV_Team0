module ForwardingUnit (
    input logic RegWrite_M,
    input logic RegWrite_W_out,
    input logic [4:0] rd_M,
    input logic [4:0] rd_W_out,
    input logic [4:0] rs1_E,
    input logic [4:0] rs2_E,
    output logic [1:0] ForwardA_E,
    output logic [1:0] ForwardB_E
);

    always_comb begin
        ForwardA_E = 2'b00;
        ForwardB_E = 2'b00;

        // MEM
        if (RegWrite_M && (rd_M != 0) && (rd_M == rs1_E))
            ForwardA_E = 2'b10;
        if (RegWrite_M && (rd_M != 0) && (rd_M == rs2_E))
            ForwardB_E = 2'b10;

        // WB
        if (RegWrite_W_out && (rd_W_out != 0) && (rd_W_out == rs1_E))
            ForwardA_E = 2'b01;
        if (RegWrite_W_out && (rd_W_out != 0) && (rd_W_out == rs2_E))
            ForwardB_E = 2'b01;
    end

endmodule
