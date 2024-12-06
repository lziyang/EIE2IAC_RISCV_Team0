module datamemory_cache_ad(
    input logic                clk,
    input logic                LoadSign,  // differentiates between zero extension (0) and sign extension (1)
    input logic [1:0]          SizeSrc,   // determines if it is byte/word/half
    output logic [31:0]        ReadDataW,
    input wire                 MemRead_wire,      //signal to read from memory
    input wire                 MemWrite_wire,     //signal to write from memory
    input wire [31:0]          MemAddress_wire,   //address sent to memory
    input wire [31:0]          MemWriteData_wire,  //data sent to memory for writing
    output wire [31:0]         Datamem_wire,       //this data is sent to cache 
    output wire                MemValid_wire       //this becomes active once data mem has finished the cycle
);

logic [7:0] memory [2**17-1:0];          // 8 bits = 1 byte
logic [16:0]       address;

//making local logic for wires
logic              valid_bit;
logic              MemWriteM;
logic [31:0]       ALUResultM; //memory address for read/write operators
logic [31:0]       WriteDataM; //data to be written to memory for store operations

//asynchronous cycle
//read operation as it automatic (clk can be ignored)
assign address = ALUResultM[16:0];

always_comb begin
    ReadDataW = 32'b0; //default value
    if (MemRead_wire) begin
        valid_bit = 1'b0; //initial state
        case(SizeSrc)
            2'b00: ReadDataW = {memory[address+3], memory[address+2], memory[address+1], memory[address]};    //lw and incrementing address
            2'b01: begin                                                          //lh and lhu
                case(LoadSign)                                                      
                    1'b0: ReadDataW = {{16'b0}, memory[address+1], memory[address]};
                    1'b1: ReadDataW = {{16{memory[address+1][7]}}, memory[address+1], memory[address]};
                endcase
            end
            2'b10: begin                                                          //lb and lbu
                case(LoadSign)
                    1'b0: ReadDataW = {{24'b0}, memory[address][7:0]};
                    1'b1: ReadDataW = {{24{memory[address][7]}}, memory[address]};
                endcase
            end
            default: ReadDataW = 32'b0;
        endcase
        valid_bit = 1'b1; //changing state
    end
    else begin
        valid_bit = 1'b0; //maintaining state
    end
end

assign Datamem_wire = (MemRead_wire) ? ReadDataW : 32'b0 ; 
assign MemValid_wire = valid_bit;
 
//synchronous cycle
//write operation as it is posedge clk triggered
always_ff @(posedge clk) begin
    if(MemWriteM) begin
        valid_bit <= 1'b0;
        case(SizeSrc)
            2'b00: begin                            //sw
                memory[address] <= WriteDataM[7:0];
                memory[address+1] <= WriteDataM[15:8];
                memory[address+2] <= WriteDataM[23:16];
                memory[address+3] <= WriteDataM[31:24];
            end               
            2'b01: begin                //sh
                memory[address] <= WriteDataM[7:0];
                memory[address+1] <= WriteDataM[15:8];
            end         
            2'b10: begin              //sb
                memory[address] <= WriteDataM[7:0];      
            end
            default: ; // do nothing               
        endcase
        valid_bit <= 1'b1;
    end
end

assign Datamem_wire = (MemWriteM) ? MemWriteData_wire : 32'b0;
assign MemValid_wire = valid_bit;

endmodule
