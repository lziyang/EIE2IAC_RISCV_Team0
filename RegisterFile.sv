module RegFile (
    input logic clk,
    input logic [31:0] instr,
    input logic [4:0] A1,
    input logic [4:0] A2,
    input logic [4:0] A3,
    input logic [31:0] WD3,
    input logic WE3,
    output logic [31:0] RD1,
    output logic [31:0] RD2
);

    logic [31:0] registerarr [0:31];

    assign A1 = instr[19:15];
    assign A2 = instr[24:20];
    assign A3 = instr[11:7];
    
    always_comb begin
        assign RD1 = registerarr[A1];
        assign RD2 = registerarr[A2]; 
    end

    always_ff @(posedge clk) begin
        if (WE3) begin
            registerarr[A3] <= WD3;
        end
    end

endmodule
