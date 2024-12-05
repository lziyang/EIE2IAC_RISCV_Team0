module two_waymisscache#(
    parameter NUM_SET = 4
    //FOR PIPELINING: Ensure that the processor is stalled till memory responds with data
)(

    input logic         clk,
    input logic         rst,
    input logic         MemWriteM,  //write enable signal
    input logic [31:0]  ALUResultM, //memory address
    input logic [31:0]  WriteDataM, //data to be written to
    output logic        Hit,        //cache hit
    output logic        Miss,       //cache miss
    output logic [31:0] Data,       //This output connects to ReadDataW
    input wire [31:0]   Datamem_wire, //this returns the data from data mem
    input wire          MemValid_wire,     //once the data memory has finished its cycle, this would be active
    output wire         MemRead_wire,      //signal to read from memory 
    output wire         MemWrite_wire,     //signal to write from memory
    output wire [31:0]  MemAddress_wire,   //address sent to memory
    output wire [31:0]  MemWriteData_wire  //data sent to memory for writing

); 

//using word addressing (can change but should still be compatible with data memory)
logic valid [NUM_SET-1:0][1:0];       //valid bit array with 2 ways per set
logic [31:0] memory [2**31:0]; //can make this smaller - max is 1GB
logic [27:0] tag_cache [NUM_SET-1:0][1:0]; //tag array with 2 ways per set       
logic [31:0] data_cache [NUM_SET-1:0][1:0]; //data array with 2 ways per set
logic Hit1;
logic Hit0;

//splitting memory address
logic [27:0] Tag;
logic [1:0] Set;
logic [1:0] Offset;

assign Tag = ALUResultM[31:4];
assign Set = ALUResultM[3:2];
assign Offset = ALUResultM[1:0];

//asynchronous cycle for read operations
always_comb begin
    Hit0 = valid[Set][0] && (Tag == tag_cache[Set][0]);
    Hit1 = valid[Set][1] && (Tag == tag_cache[Set][1]);
    Hit = Hit1 || Hit0;
    if (Hit0) begin
        Data = data_cache[Set][0];
        Miss = 1'b0;
    end
    else if (Hit1) begin
        Data = data_cache[Set][1];
        Miss = 1'b0;
    end
    else begin
        Miss = 1'b1; //handling a miss
    end
end

//must always assign wire OUTSIDE the always blocks
//must amend data memory to include this wire as an input
//these are the wire outputs
assign MemRead_wire = Miss && !MemWriteM;
assign MemWrite_wire = MemWriteM;
assign MemAddress_wire = ALUResultM;
assign MemWriteData_wire = WriteDataM;

//synchronous cycle for write operation
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin  //initialising the cache
        for(int i=0; i<NUM_SET; i++) begin
            valid[i][0] <= 1'b0;
            valid[i][1] <= 1'b0;
        end
    end
    else begin
        if(Miss && MemValid_wire) begin
            //update cache after data mem response
            //if space in way 0, add there
            if(!valid[Set][0]) begin
                valid[Set][0] <= 1'b1;
                tag_cache[Set][0] <= Tag;
                data_cache[Set][0] <= Datamem_wire;
            end
            //if space in way 1, add there
            else if (!valid[Set][1]) begin
                valid[Set][1] <= 1'b1;
                tag_cache[Set][1] <= Tag;
                data_cache[Set][1] <= Datamem_wire;
            end
            else begin
            //if no space anywhere, overwrite in way 0
                valid[Set][0] <= 1'b1;
                tag_cache[Set][0] <= Tag;
                data_cache[Set][0] <= Datamem_wire;
            end
            Miss <= 1'b0;
        end
    end
end
endmodule
