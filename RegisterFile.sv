module RegisterFile (
    input logic clk,
    input logic [4:0] A1_D,
    input logic [4:0] A2_D,
    input logic [4:0] A3_W,
    input logic [31:0] WD3_W,
    input logic WE3_W,
    output logic [31:0] a0,
    output logic [31:0] RD1_D,
    output logic [31:0] RD2_D
);

    logic [31:0] registerarr [0:31];

    assign RD1_D = registerarr[A1_D];
    assign RD2_D = registerarr[A2_D];
    assign a0 = registerarr[10];

    always_ff @(posedge clk) begin
        if (WE3_W && A3_W != 0) begin //added x0 check so never change x0
            registerarr[A3_W] <= WD3_W;
        end
    end

endmodule
