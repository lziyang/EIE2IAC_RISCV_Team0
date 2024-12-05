module RegisterFile (
    input logic clk,
    input logic [4:0] A1,
    input logic [4:0] A2,
    input logic [4:0] A3,
    input logic [31:0] WD3,
    input logic WE3,
    input logic trigger,
    output logic [31:0] a0,
    output logic [31:0] RD1,
    output logic [31:0] RD2
);

    logic [31:0] registerarr [0:31];
    assign RD1 = registerarr[A1];
    assign RD2 = registerarr[A2];
    assign a0 = registerarr[10];

    always_ff @(posedge clk) begin
            assign registerarr[6] = trigger;

    end

    always_ff @(posedge clk) begin
        if (WE3 && A3 != 0) begin //added x0 check so never change x0
            registerarr[A3] <= WD3;
        end
    end

endmodule
