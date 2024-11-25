module RegisterFile (
    input  logic          clk,
    input  logic          RegWrite,
    input  logic [4:0]    A1, A2, A3,
    input  logic [31:0]   WD3,
    output logic [31:0]   RD1, RD2
);
    logic [31:0] registers [31:0]; // 32*32

    initial begin
        registers[0] = 32'b0; //x0 = 0
    end

    // async read
    assign RD1 = registers[A1];
    assign RD2 = registers[A2];

    // sync write
    always_ff @(posedge clk) begin
        if (RegWrite && (A3 != 5'b0)) begin
            registers[A3] <= WD3;
        end
    end
endmodule
