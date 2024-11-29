module HexFileLoader(
    output logic [7:0] Instr_memory [0:2**12-1] // 4KB instruction memory
);
    initial begin
        integer file, r;
        reg [31:0] instr_word;
        integer addr;

        addr = 0;

        // open the file
        file = $fopen("InstrMemrom.mem", "r");
        if (file == 0) begin
            $display("cannot open：InstrMemrom.mem");
            $finish;
        end

        // read hex line by line
        while (!$feof(file)) begin
            r = $fscanf(file, "%x\n", instr_word);
            if (r == 1) begin
                // rearrange and save it as little endian
                Instr_memory[addr + 0] = instr_word[7:0];    // LSB
                Instr_memory[addr + 1] = instr_word[15:8];
                Instr_memory[addr + 2] = instr_word[23:16];
                Instr_memory[addr + 3] = instr_word[31:24];  // MSB
                
                addr = addr + 4;

                // check if it goes beyond mem (4096)
                if (addr >= 2**12) begin
                    $display("stackoverflow.com");
                    $finish;
                end

            end else begin
                // for testing purpose. Remove once testing is finished
            end
        end

        $fclose(file);
    end
endmodule
