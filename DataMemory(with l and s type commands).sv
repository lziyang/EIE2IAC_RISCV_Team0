// please notice that src related parts are moved to top.sv so it fits the hardware design better. This has not been tested so it is just for reference.

module DataMemory #(
    parameter WIDTH = 32
)(
    input  logic              clk,
    input  logic              MemWrite,

    // new func 3 to decide what s/l command is recieved.
    input  logic [2:0]        funct3,

    input  logic [31:0]       ALUResult,
    input  logic [31:0]       WriteData,
    output logic [31:0]       ReadData,

    //notice that results and resultsrc are moved to top.sv so that fits better with the hardware design
);


    // 1024*32 JUST FOR TESTING PURPOSE, THIS NEEDS TO BE CHANGED LATER
    logic [31:0] memory [0:1023];

    logic [31:0] mem_read_data;

    // Async read
    assign mem_read_data = memory[ALUResult[11:2]];

    // funct3 based readdata
    always_comb begin
        case (funct3)
            3'b000: ReadData = {{24{mem_read_data[7]}}, mem_read_data[7:0]};    // LB
            3'b001: ReadData = {{16{mem_read_data[15]}}, mem_read_data[15:0]};  // LH
            3'b010: ReadData = mem_read_data;                                   // LW
            3'b100: ReadData = {24'b0, mem_read_data[7:0]};                     // LBU
            3'b101: ReadData = {16'b0, mem_read_data[15:0]};                    // LHU
            default: ReadData = mem_read_data;                                  // default return FOR TESTING
        endcase
    end

    // Sync write
    always_ff @(posedge clk) begin
        if (MemWrite) begin
            case (funct3)
                3'b000: begin // SB
                    case (ALUResult[1:0])
                        2'b00: memory[ALUResult[11:2]][7:0]   <= WriteData[7:0];
                        2'b01: memory[ALUResult[11:2]][15:8]  <= WriteData[7:0];
                        2'b10: memory[ALUResult[11:2]][23:16] <= WriteData[7:0];
                        2'b11: memory[ALUResult[11:2]][31:24] <= WriteData[7:0];
                    endcase
                end

                3'b001: begin // SH
                    case (ALUResult[1])
                        1'b0: memory[ALUResult[11:2]][15:0]  <= WriteData[15:0];
                        1'b1: memory[ALUResult[11:2]][31:16] <= WriteData[15:0];
                    endcase
                end

                3'b010: begin // SW
                    memory[ALUResult[11:2]] <= WriteData;
                end

                default: begin
                    // default then not write anything
                end

            endcase
        end
    end

endmodule
