module DirectMemcache#(
    parameter NUM_SET = 8
)(

    input logic         clk,
    input logic         rst,
    input logic         MemWriteM,  //write enable signal
    input logic [31:0]  ALUResultM, //memory address
    input logic [31:0]  WriteDataM, //data to be written to
    output logic        Hit,        //cache hit
    output logic [31:0] Data        //This output connects to ReadDataW

);

//variables in the direct-mapped cache
//using word addressing (can change but should still be compatible with data memory)
//have not included what happens when a miss occurs
logic valid [NUM_SET-1:0];       //valid bit array
logic [31:0] memory [2**31:0]; //maybe make the memory smaller than 31 bits? - Max is 1GB
logic [26:0] tag_cache [NUM_SET-1:0]; //tag array        
logic [31:0] data_cache [NUM_SET-1:0]; //data array


//splitting memory address
logic [26:0] Tag;
logic [2:0] Set;
logic [1:0] Offset;

assign Tag = ALUResultM[31:5];
assign Set = ALUResultM[4:2];
assign Offset = ALUResultM[1:0];

//asynchronous cycle for read operations
always_comb begin
    if(valid[Set] && (tag_cache[Set] == Tag)){
        Hit = 1'b1;
        Data = data_cache[Set];
    }
    else{
        Hit = 1'b0;
        Data = 32'b0; //temporary fix, solution would be to go into the data memory and find it
    }
end
//synchronous cycle for write operation
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin  //initialising the cache
        for(int i=0; i<NUM_SET; i++) begin
            valid[i] <= 1'b0;
        end
    end
    else if (MemWriteM) begin //writing into cache
        //if cache is full, data would be replaced with new
        valid[Set] <= 1'b1;         //valid = 1 
        tag_cache[Set] <= Tag;      // Tag is now in set
        data_cache[Set] <= WriteDataM; //Data with the corresponding Tag
    end
end

endmodule
