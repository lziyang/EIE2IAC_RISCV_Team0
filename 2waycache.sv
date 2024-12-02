module 2waycache#(
    parameter NUM_SET = 4
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
    Hit = Hit1 | Hit0;
    if (Hit0) begin
        Data = data_cache[Set][0];
    end
    else if (Hit1) begin
        Data = data_cache[Set][1];
    end
    else begin
        Data = 32'b0;   //this is what happens when there is a miss - will be developed further
    end
end

//synchronous cycle for write operation
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin  //initialising the cache
        for(i=0; i<NUM_SET; i++) begin
            valid[i][0] <= 1'b0;
            valid[i][1] <= 1'b0;
        end
    end
    else if (MemWriteM |!Hit) begin //writing into cache 
        //checking if there is a miss at way0 and if there is space in set 0
        if(!Hit0 && !valid[Set][0]) begin
            valid[Set][0] <= 1'b1;
            tag_cache[Set][0] <= Tag;
            data_cache[Set][0] <= WriteDataM;
        end
        //checking if there is a miss at way1 and if there is space in set 1
        else if (!Hit1 && !valid[Set][1]) begin
            valid[Set][1] <= 1'b1;
            tag_cache[Set][1] <= Tag;
            data_cache[Set][1] <= WriteDataM;
        end
        //if there is no space in either, overwritten in way0
        else begin
            valid[Set][0] <= 1'b1;
            tag_cache[Set][0] <= Tag;
            data_cache[Set][0] <= WriteDataM;
        end
    end
end
endmodule
