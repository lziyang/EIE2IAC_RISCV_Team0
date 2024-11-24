module SignExtender(
    input logic [31:0] Instr,
    input logic [1:0] ImmSrc,
    output logic [31:0] ImmExt
);
    always_comb begin
        case (ImmSrc)
            2'b00: begin // I
                ImmExt = {{20{Instr[31]}}, Instr[31:20]};
            end

            2'b01: begin // S
                ImmExt = {{20{Instr[31]}}, Instr[31:25], Instr[11:7]};
            end

            2'b10: begin // B
                ImmExt = {{19{Instr[31]}}, Instr[31], Instr[7], Instr[30:25], Instr[11:8], 1'b0};
            end

            2'b11: begin
                if (Instr[6:0] == 7'b0110111 || Instr[6:0] == 7'b0010111) begin
                    // LUI AUIPC
                    ImmExt = {Instr[31:12], 12'b0};
                end else if (Instr[6:0] == 7'b1101111) begin
                    // JAL and JALr
                    ImmExt = {{11{Instr[31]}}, Instr[31], Instr[19:12], Instr[20], Instr[30:21], 1'b0};
                end else begin
                    ImmExt = 32'b0; // for TESTING ONLY
                end
            end

            default: ImmExt = 32'b0;
            
        endcase
    end
endmodule
