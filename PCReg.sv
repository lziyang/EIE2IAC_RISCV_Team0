module PCReg (
    input logic clk,
    input logic rst,
    input logic [31:0] PCNext_F,
    output logic [31:0] PC_F
);

    initial begin
        PC_F = 32'hBFC00000; 
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            PC_F <= 32'hBFC00000;
        else
            PC_F <= PCNext_F;
    end

endmodule
