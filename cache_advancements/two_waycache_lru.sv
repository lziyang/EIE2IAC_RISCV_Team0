module two_waycache_lru#(
    parameter NUM_SET = 4
    //FOR PIPELINING: Ensure that the processor is stalled till memory responds with data
)(

    input logic         clk,
    input logic         rst,
    input logic         MemWriteM,  //write enable signal
    input logic [31:0]  ALUResultM, //memory address
    input logic [31:0]  WriteDataM, //data to be written to
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
logic dirty_bit [NUM_SET-1:0][1:0];
logic [31:0] latched_data;
logic latched_write;
logic Hit; //cache hit
logic Miss; //cache miss 
logic Hit1;
logic Hit0;
logic [1:0] lru_bit [NUM_SET-1:0][1:0]; //lru bit for each block in way 1 and way 0


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
        //if we are accessing a block, we need to update the lru bit
        lru_bit[Set][0] <= 2'b00;
        if(valid_bit[Set][1]) begin
            lru_bit[Set][1] <= lru_bit[Set][1] + 1'b1;
        end
    end
    else if (Hit1) begin
        Data = data_cache[Set][1];
        Miss = 1'b0;
        lru_bit[Set][1] <= 2'b00;
        if(valid_bit[Set][0]) begin
            lru_bit[Set][0] <= lru_bit[Set][0] + 1'b1;
        end
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
            dirty_bit[i][0] <= 1'b0;
            dirty_bit[i][1] <= 1'b0;
            lru_bit[i][0] <= 2'b00; //way0 the least most accessed
            lru_bit[i][1] <= 2'b01; //way1 is the most recent accessed
        end
    end
    else if(Miss && MemValid_wire) begin
        //assigning wires to local logic
        latched_data <= Datamem_wire; 
        latched_write <= MemWrite_wire;

        int replace_way;

        //when way0 has empty sets
        if(!valid[Set][0]) begin
            replace_way = 0;
        end
        //when way1 has empty sets
        else if(!valid[Set][1]) begin
            replace_way = 1;
        end
        else begin
            if(lru_bit[Set][0] > lru_bit[Set][1]) begin 
                replace_way = 1; //way1 has not been accessed as frequently as way0
            end
            else begin
                replace_way = 0;
            end
        end

        //only accessed if we have a dirty bit
        if(dirty_bit[Set][replace_way]) begin
            MemWriteM <= 1'b1;
            MemReadM <= 1'b0;
            MemAddress_wire <= {tag_cache[Set][replace_way], Set, Offset};
            WriteDataM <= data_cache[Set][replace_way];
        end

        //otherwise, we always update (even with/without dirty bit replacement)
        //this could be when any way 
        valid[Set][replace_way] <= 1'b1;
        tag_cache[Set][replace_way] <= Tag;
        data_cache[Set][replace_way] <= latched_data;
        dirty_bit[Set][replace_way] <= latched_write; //marked as dirty if we are writing

        //update the LRU Counter
        lru_bit[Set][replace_way] <= 2'b00; //marked as most recent
        if(replace_way == 0 && valid_bit[Set][1]) begin
            lru_bit[Set][1] <= lru_bit[Set][1] + 1'b1; //updating the lru in way1
        end
        else begin 
            lru_bit[Set][0] <= lru_bit[Set][0] + 1'b1; //updating the lru in way0
        end
        Miss <= 1'b0;
    end
end
endmodule
