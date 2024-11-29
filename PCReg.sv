module PCReg (
    input logic clk,
    input logic rst,
    input logic [31:0] PCNext,
    output logic [31:0] PC
);

    initial begin
        PC = 32'hBFC00000; 
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            PC <= 32'h0;
        else
            PC <= PCNext;
    end

endmodule
