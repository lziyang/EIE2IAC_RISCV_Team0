module TOPcache #(
    parameter NUM_SET = 4
)(
    //interface signals
    input logic             clk,
    input logic             rst,
    input logic             MemWriteM,
    input logic             LoadSign,
    input logic [1:0]       SizeSrc,
    input logic [31:0]      ALUResultM,
    input logic [31:0]      WriteDataM,
    output logic [31:0]     Data
);

//wires
logic           MemRead_wire;
logic           MemWrite_wire;
logic [31:0]    MemAddress_wire;
logic [31:0]    MemWriteData_wire;
logic [31:0]    Datamem_wire;
logic           MemValid_wire;


datamemory_cache_ad dataMemory (
    .clk (clk),
    .LoadSign (LoadSign),
    .SizeSrc (SizeSrc),
    .ReadDataW (Datamem_wire)
    .MemRead_wire (MemRead_wire),
    .MemWrite_wire (MemWrite_wire),
    .MemAddress_wire (MemAddress_wire),
    .MemWriteData_wire (MemWriteData_wire),
    .Datamem_wire (Datamem_wire),
    .MemValid_wire (MemValid_wire)

);

two_waycache_lru cache (
    .clk (clk),
    .rst (rst),
    .MemWriteM (MemWriteM),
    .ALUResultM (ALUResultM),
    .WriteDataM (WriteDataM),
    .Data (Data),
    .Datamem_wire (Datamem_wire),
    .MemValid_wire (MemValid_wire),
    .MemRead_wire (MemRead_wire),
    .MemWrite_wire (MemWrite_wire),
    .MemAddress_wire (MemAddress_wire),
    .MemWriteData_wire (MemWriteData_wire)

);

endmodule
