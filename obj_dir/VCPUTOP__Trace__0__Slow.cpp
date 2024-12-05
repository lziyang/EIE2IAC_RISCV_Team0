// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUTOP__Syms.h"


VL_ATTR_COLD void VCPUTOP___024root__trace_init_sub__TOP__0(VCPUTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+112,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("CPUTOP ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+112,"a0", false,-1, 31,0);
    tracep->declBus(c+61,"PC_F", false,-1, 31,0);
    tracep->declBus(c+62,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+63,"Instr_F", false,-1, 31,0);
    tracep->declBus(c+64,"Instr_D", false,-1, 31,0);
    tracep->declBus(c+5,"PCPlus4_D", false,-1, 31,0);
    tracep->declBus(c+6,"PC_D", false,-1, 31,0);
    tracep->declBit(c+65,"RegWrite_D", false,-1);
    tracep->declBit(c+66,"MemWrite_D", false,-1);
    tracep->declBit(c+67,"ALUSrcA_D", false,-1);
    tracep->declBit(c+68,"ALUSrcB_D", false,-1);
    tracep->declBus(c+69,"ALUControl_D", false,-1, 3,0);
    tracep->declBus(c+70,"ResultSrc_D", false,-1, 1,0);
    tracep->declBus(c+71,"SizeSrc_D", false,-1, 1,0);
    tracep->declBit(c+72,"LoadSign_D", false,-1);
    tracep->declBus(c+73,"Branch_D", false,-1, 2,0);
    tracep->declBus(c+74,"Jump_D", false,-1, 1,0);
    tracep->declBus(c+5,"PCPlus4_D_out", false,-1, 31,0);
    tracep->declBus(c+6,"PC_D_out", false,-1, 31,0);
    tracep->declBus(c+75,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+113,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+114,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+76,"rs1_D", false,-1, 4,0);
    tracep->declBus(c+77,"rs2_D", false,-1, 4,0);
    tracep->declBus(c+78,"rd_D", false,-1, 4,0);
    tracep->declBit(c+79,"RegWrite_E", false,-1);
    tracep->declBit(c+80,"MemWrite_E", false,-1);
    tracep->declBit(c+7,"ALUSrcA_E", false,-1);
    tracep->declBit(c+8,"ALUSrcB_E", false,-1);
    tracep->declBus(c+9,"ALUControl_E", false,-1, 3,0);
    tracep->declBus(c+10,"ResultSrc_E", false,-1, 1,0);
    tracep->declBus(c+81,"SizeSrc_E", false,-1, 1,0);
    tracep->declBit(c+11,"LoadSign_E", false,-1);
    tracep->declBus(c+12,"Branch_E", false,-1, 2,0);
    tracep->declBus(c+13,"Jump_E", false,-1, 1,0);
    tracep->declBus(c+14,"ImmExt_E", false,-1, 31,0);
    tracep->declBus(c+15,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+16,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+17,"rs1_E", false,-1, 4,0);
    tracep->declBus(c+18,"rs2_E", false,-1, 4,0);
    tracep->declBus(c+82,"rd_E", false,-1, 4,0);
    tracep->declBus(c+19,"PCPlus4_E", false,-1, 31,0);
    tracep->declBus(c+20,"PC_E", false,-1, 31,0);
    tracep->declBit(c+79,"RegWrite_E_out", false,-1);
    tracep->declBit(c+80,"MemWrite_E_out", false,-1);
    tracep->declBus(c+10,"ResultSrc_E_out", false,-1, 1,0);
    tracep->declBus(c+81,"SizeSrc_E_out", false,-1, 1,0);
    tracep->declBit(c+11,"LoadSign_E_out", false,-1);
    tracep->declBus(c+82,"rd_E_out", false,-1, 4,0);
    tracep->declBus(c+19,"PCPlus4_E_out", false,-1, 31,0);
    tracep->declBus(c+83,"ALUResult_E", false,-1, 31,0);
    tracep->declBus(c+84,"WriteData_E", false,-1, 31,0);
    tracep->declBus(c+85,"PCSrc_E", false,-1, 1,0);
    tracep->declBus(c+21,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+83,"PCJALR_E", false,-1, 31,0);
    tracep->declBit(c+86,"RegWrite_M", false,-1);
    tracep->declBit(c+87,"MemWrite_M", false,-1);
    tracep->declBus(c+22,"ResultSrc_M", false,-1, 1,0);
    tracep->declBus(c+88,"SizeSrc_M", false,-1, 1,0);
    tracep->declBit(c+23,"LoadSign_M", false,-1);
    tracep->declBus(c+89,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+90,"WriteData_M", false,-1, 31,0);
    tracep->declBus(c+91,"rd_M", false,-1, 4,0);
    tracep->declBus(c+24,"PCPlus4_M", false,-1, 31,0);
    tracep->declBus(c+92,"ReadData_M", false,-1, 31,0);
    tracep->declBit(c+86,"RegWrite_M_out", false,-1);
    tracep->declBus(c+22,"ResultSrc_M_out", false,-1, 1,0);
    tracep->declBus(c+89,"ALUResult_M_out", false,-1, 31,0);
    tracep->declBus(c+91,"rd_M_out", false,-1, 4,0);
    tracep->declBus(c+24,"PCPlus4_M_out", false,-1, 31,0);
    tracep->declBit(c+93,"RegWrite_W", false,-1);
    tracep->declBus(c+25,"ResultSrc_W", false,-1, 1,0);
    tracep->declBus(c+26,"ReadData_W", false,-1, 31,0);
    tracep->declBus(c+27,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+94,"rd_W", false,-1, 4,0);
    tracep->declBus(c+28,"PCPlus4_W", false,-1, 31,0);
    tracep->declBus(c+95,"Result_W", false,-1, 31,0);
    tracep->declBit(c+93,"RegWrite_W_out", false,-1);
    tracep->declBus(c+94,"rd_W_out", false,-1, 4,0);
    tracep->pushNamePrefix("EXTop ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+79,"RegWrite_E", false,-1);
    tracep->declBit(c+80,"MemWrite_E", false,-1);
    tracep->declBit(c+7,"ALUSrcA_E", false,-1);
    tracep->declBit(c+8,"ALUSrcB_E", false,-1);
    tracep->declBus(c+9,"ALUControl_E", false,-1, 3,0);
    tracep->declBus(c+10,"ResultSrc_E", false,-1, 1,0);
    tracep->declBus(c+81,"SizeSrc_E", false,-1, 1,0);
    tracep->declBit(c+11,"LoadSign_E", false,-1);
    tracep->declBus(c+12,"Branch_E", false,-1, 2,0);
    tracep->declBus(c+13,"Jump_E", false,-1, 1,0);
    tracep->declBus(c+15,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+16,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+14,"ImmExt_E", false,-1, 31,0);
    tracep->declBus(c+17,"rs1_E", false,-1, 4,0);
    tracep->declBus(c+18,"rs2_E", false,-1, 4,0);
    tracep->declBus(c+82,"rd_E", false,-1, 4,0);
    tracep->declBus(c+19,"PCPlus4_E", false,-1, 31,0);
    tracep->declBus(c+20,"PC_E", false,-1, 31,0);
    tracep->declBus(c+95,"Result_W", false,-1, 31,0);
    tracep->declBus(c+89,"ALUResult_M", false,-1, 31,0);
    tracep->declBit(c+86,"RegWrite_M", false,-1);
    tracep->declBit(c+93,"RegWrite_W_out", false,-1);
    tracep->declBus(c+91,"rd_M", false,-1, 4,0);
    tracep->declBus(c+94,"rd_W_out", false,-1, 4,0);
    tracep->declBit(c+79,"RegWrite_E_out", false,-1);
    tracep->declBit(c+80,"MemWrite_E_out", false,-1);
    tracep->declBus(c+10,"ResultSrc_E_out", false,-1, 1,0);
    tracep->declBus(c+81,"SizeSrc_E_out", false,-1, 1,0);
    tracep->declBit(c+11,"LoadSign_E_out", false,-1);
    tracep->declBus(c+83,"ALUResult_E", false,-1, 31,0);
    tracep->declBus(c+84,"WriteData_E", false,-1, 31,0);
    tracep->declBus(c+82,"rd_E_out", false,-1, 4,0);
    tracep->declBus(c+19,"PCPlus4_E_out", false,-1, 31,0);
    tracep->declBus(c+85,"PCSrc_E", false,-1, 1,0);
    tracep->declBus(c+21,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+83,"PCJALR_E", false,-1, 31,0);
    tracep->declBus(c+96,"ForwardA_E", false,-1, 1,0);
    tracep->declBus(c+97,"ForwardB_E", false,-1, 1,0);
    tracep->declBus(c+115,"ForwardAData_E", false,-1, 31,0);
    tracep->declBus(c+84,"ForwardBData_E", false,-1, 31,0);
    tracep->declBus(c+98,"ALUInputA_E", false,-1, 31,0);
    tracep->declBus(c+99,"ALUInputB_E", false,-1, 31,0);
    tracep->declBit(c+100,"Zero_E", false,-1);
    tracep->declBit(c+101,"unsignedLess_E", false,-1);
    tracep->declBit(c+102,"signedLess_E", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+98,"SrcA_E", false,-1, 31,0);
    tracep->declBus(c+99,"SrcB_E", false,-1, 31,0);
    tracep->declBus(c+9,"ALUControl_E", false,-1, 3,0);
    tracep->declBus(c+83,"ALUResult_E", false,-1, 31,0);
    tracep->declBit(c+100,"Zero_E", false,-1);
    tracep->declBit(c+102,"signedLess_E", false,-1);
    tracep->declBit(c+101,"unsignedLess_E", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux1 ");
    tracep->declBus(c+115,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+20,"PC_E", false,-1, 31,0);
    tracep->declBit(c+7,"ALUSrcA_E", false,-1);
    tracep->declBus(c+98,"SrcA_E", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux2 ");
    tracep->declBus(c+84,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+14,"ImmExt_E", false,-1, 31,0);
    tracep->declBit(c+8,"ALUSrcB_E", false,-1);
    tracep->declBus(c+99,"SrcB_E", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ForwardingUnit ");
    tracep->declBit(c+86,"RegWrite_M", false,-1);
    tracep->declBit(c+93,"RegWrite_W_out", false,-1);
    tracep->declBus(c+91,"rd_M", false,-1, 4,0);
    tracep->declBus(c+94,"rd_W_out", false,-1, 4,0);
    tracep->declBus(c+17,"rs1_E", false,-1, 4,0);
    tracep->declBus(c+18,"rs2_E", false,-1, 4,0);
    tracep->declBus(c+96,"ForwardA_E", false,-1, 1,0);
    tracep->declBus(c+97,"ForwardB_E", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCSrcMUX ");
    tracep->declBus(c+12,"Branch_E", false,-1, 2,0);
    tracep->declBus(c+13,"Jump_E", false,-1, 1,0);
    tracep->declBit(c+100,"Zero_E", false,-1);
    tracep->declBit(c+101,"unsignedLess_E", false,-1);
    tracep->declBit(c+102,"signedLess_E", false,-1);
    tracep->declBus(c+85,"PCSrc_E", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("EX_MEM_Reg ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+79,"RegWrite_E_out", false,-1);
    tracep->declBit(c+80,"MemWrite_E_out", false,-1);
    tracep->declBus(c+10,"ResultSrc_E_out", false,-1, 1,0);
    tracep->declBus(c+81,"SizeSrc_E_out", false,-1, 1,0);
    tracep->declBit(c+11,"LoadSign_E_out", false,-1);
    tracep->declBus(c+83,"ALUResult_E", false,-1, 31,0);
    tracep->declBus(c+84,"WriteData_E", false,-1, 31,0);
    tracep->declBus(c+82,"rd_E_out", false,-1, 4,0);
    tracep->declBus(c+19,"PCPlus4_E_out", false,-1, 31,0);
    tracep->declBit(c+86,"RegWrite_M", false,-1);
    tracep->declBit(c+87,"MemWrite_M", false,-1);
    tracep->declBus(c+22,"ResultSrc_M", false,-1, 1,0);
    tracep->declBus(c+88,"SizeSrc_M", false,-1, 1,0);
    tracep->declBit(c+23,"LoadSign_M", false,-1);
    tracep->declBus(c+89,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+90,"WriteData_M", false,-1, 31,0);
    tracep->declBus(c+91,"rd_M", false,-1, 4,0);
    tracep->declBus(c+24,"PCPlus4_M", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDTop ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+64,"Instr_D", false,-1, 31,0);
    tracep->declBus(c+5,"PCPlus4_D", false,-1, 31,0);
    tracep->declBus(c+6,"PC_D", false,-1, 31,0);
    tracep->declBus(c+94,"rd_W_out", false,-1, 4,0);
    tracep->declBus(c+95,"Result_W", false,-1, 31,0);
    tracep->declBit(c+93,"RegWrite_W_out", false,-1);
    tracep->declBus(c+73,"Branch_D", false,-1, 2,0);
    tracep->declBus(c+74,"Jump_D", false,-1, 1,0);
    tracep->declBit(c+65,"RegWrite_D", false,-1);
    tracep->declBit(c+66,"MemWrite_D", false,-1);
    tracep->declBit(c+67,"ALUSrcA_D", false,-1);
    tracep->declBit(c+68,"ALUSrcB_D", false,-1);
    tracep->declBus(c+69,"ALUControl_D", false,-1, 3,0);
    tracep->declBus(c+70,"ResultSrc_D", false,-1, 1,0);
    tracep->declBus(c+71,"SizeSrc_D", false,-1, 1,0);
    tracep->declBit(c+72,"LoadSign_D", false,-1);
    tracep->declBus(c+75,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+113,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+114,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+76,"rs1_D", false,-1, 4,0);
    tracep->declBus(c+77,"rs2_D", false,-1, 4,0);
    tracep->declBus(c+78,"rd_D", false,-1, 4,0);
    tracep->declBus(c+5,"PCPlus4_D_out", false,-1, 31,0);
    tracep->declBus(c+6,"PC_D_out", false,-1, 31,0);
    tracep->declBus(c+112,"a0", false,-1, 31,0);
    tracep->declBus(c+103,"op_D", false,-1, 6,0);
    tracep->declBus(c+104,"ImmIn_D", false,-1, 31,7);
    tracep->declBus(c+105,"funct3_D", false,-1, 2,0);
    tracep->declBus(c+106,"funct7_D", false,-1, 6,0);
    tracep->declBus(c+107,"ImmSrc_D", false,-1, 2,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+103,"op_D", false,-1, 6,0);
    tracep->declBus(c+105,"funct3_D", false,-1, 2,0);
    tracep->declBus(c+106,"funct7_D", false,-1, 6,0);
    tracep->declBus(c+73,"Branch_D", false,-1, 2,0);
    tracep->declBus(c+74,"Jump_D", false,-1, 1,0);
    tracep->declBus(c+70,"ResultSrc_D", false,-1, 1,0);
    tracep->declBit(c+66,"MemWrite_D", false,-1);
    tracep->declBus(c+69,"ALUControl_D", false,-1, 3,0);
    tracep->declBit(c+67,"ALUSrcA_D", false,-1);
    tracep->declBit(c+68,"ALUSrcB_D", false,-1);
    tracep->declBus(c+107,"ImmSrc_D", false,-1, 2,0);
    tracep->declBit(c+65,"RegWrite_D", false,-1);
    tracep->declBit(c+72,"LoadSign_D", false,-1);
    tracep->declBus(c+71,"SizeSrc_D", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend ");
    tracep->declBus(c+104,"ImmIn_D", false,-1, 31,7);
    tracep->declBus(c+107,"ImmSrc_D", false,-1, 2,0);
    tracep->declBus(c+75,"ImmExt_D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBus(c+76,"A1_D", false,-1, 4,0);
    tracep->declBus(c+77,"A2_D", false,-1, 4,0);
    tracep->declBus(c+94,"A3_W", false,-1, 4,0);
    tracep->declBus(c+95,"WD3_W", false,-1, 31,0);
    tracep->declBit(c+93,"WE3_W", false,-1);
    tracep->declBus(c+112,"a0", false,-1, 31,0);
    tracep->declBus(c+113,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+114,"RD2_D", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+29+i*1,"registerarr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_EX_Reg ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+73,"Branch_D", false,-1, 2,0);
    tracep->declBus(c+74,"Jump_D", false,-1, 1,0);
    tracep->declBit(c+65,"RegWrite_D", false,-1);
    tracep->declBit(c+66,"MemWrite_D", false,-1);
    tracep->declBit(c+67,"ALUSrcA_D", false,-1);
    tracep->declBit(c+68,"ALUSrcB_D", false,-1);
    tracep->declBus(c+69,"ALUControl_D", false,-1, 3,0);
    tracep->declBus(c+70,"ResultSrc_D", false,-1, 1,0);
    tracep->declBus(c+71,"SizeSrc_D", false,-1, 1,0);
    tracep->declBit(c+72,"LoadSign_D", false,-1);
    tracep->declBus(c+113,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+114,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+75,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+76,"rs1_D", false,-1, 4,0);
    tracep->declBus(c+77,"rs2_D", false,-1, 4,0);
    tracep->declBus(c+78,"rd_D", false,-1, 4,0);
    tracep->declBus(c+5,"PCPlus4_D_out", false,-1, 31,0);
    tracep->declBus(c+6,"PC_D_out", false,-1, 31,0);
    tracep->declBus(c+12,"Branch_E", false,-1, 2,0);
    tracep->declBus(c+13,"Jump_E", false,-1, 1,0);
    tracep->declBit(c+79,"RegWrite_E", false,-1);
    tracep->declBit(c+80,"MemWrite_E", false,-1);
    tracep->declBit(c+7,"ALUSrcA_E", false,-1);
    tracep->declBit(c+8,"ALUSrcB_E", false,-1);
    tracep->declBus(c+9,"ALUControl_E", false,-1, 3,0);
    tracep->declBus(c+10,"ResultSrc_E", false,-1, 1,0);
    tracep->declBus(c+81,"SizeSrc_E", false,-1, 1,0);
    tracep->declBit(c+11,"LoadSign_E", false,-1);
    tracep->declBus(c+15,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+16,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+14,"ImmExt_E", false,-1, 31,0);
    tracep->declBus(c+17,"rs1_E", false,-1, 4,0);
    tracep->declBus(c+18,"rs2_E", false,-1, 4,0);
    tracep->declBus(c+82,"rd_E", false,-1, 4,0);
    tracep->declBus(c+19,"PCPlus4_E", false,-1, 31,0);
    tracep->declBus(c+20,"PC_E", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFTop ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+85,"PCSrc_E", false,-1, 1,0);
    tracep->declBus(c+21,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+83,"PCJALR_E", false,-1, 31,0);
    tracep->declBus(c+61,"PC_F", false,-1, 31,0);
    tracep->declBus(c+62,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+63,"Instr_F", false,-1, 31,0);
    tracep->declBus(c+116,"PCNext_F", false,-1, 31,0);
    tracep->pushNamePrefix("HexFileLoader ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"file", false,-1, 31,0);
    tracep->declBus(c+2,"r", false,-1, 31,0);
    tracep->declBus(c+3,"instr_word", false,-1, 31,0);
    tracep->declBus(c+4,"addr", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+61,"PC_F", false,-1, 31,0);
    tracep->declBus(c+63,"Instr_F", false,-1, 31,0);
    tracep->declBit(c+108,"ValidAddr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCMux ");
    tracep->declBus(c+62,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+21,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+83,"PCJALR_E", false,-1, 31,0);
    tracep->declBus(c+85,"PCSrc_E", false,-1, 1,0);
    tracep->declBus(c+116,"PCNext_F", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+116,"PCNext_F", false,-1, 31,0);
    tracep->declBus(c+61,"PC_F", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IF_ID_Reg ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+63,"Instr_F", false,-1, 31,0);
    tracep->declBus(c+62,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+61,"PC_F", false,-1, 31,0);
    tracep->declBus(c+64,"Instr_D", false,-1, 31,0);
    tracep->declBus(c+5,"PCPlus4_D", false,-1, 31,0);
    tracep->declBus(c+6,"PC_D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEMTop ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+86,"RegWrite_M", false,-1);
    tracep->declBit(c+87,"MemWrite_M", false,-1);
    tracep->declBus(c+22,"ResultSrc_M", false,-1, 1,0);
    tracep->declBus(c+88,"SizeSrc_M", false,-1, 1,0);
    tracep->declBit(c+23,"LoadSign_M", false,-1);
    tracep->declBus(c+89,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+90,"WriteData_M", false,-1, 31,0);
    tracep->declBus(c+91,"rd_M", false,-1, 4,0);
    tracep->declBus(c+24,"PCPlus4_M", false,-1, 31,0);
    tracep->declBit(c+86,"RegWrite_M_out", false,-1);
    tracep->declBus(c+22,"ResultSrc_M_out", false,-1, 1,0);
    tracep->declBus(c+92,"ReadData_M", false,-1, 31,0);
    tracep->declBus(c+89,"ALUResult_M_out", false,-1, 31,0);
    tracep->declBus(c+91,"rd_M_out", false,-1, 4,0);
    tracep->declBus(c+24,"PCPlus4_M_out", false,-1, 31,0);
    tracep->pushNamePrefix("DataMemory ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+87,"MemWrite", false,-1);
    tracep->declBit(c+23,"LoadSign", false,-1);
    tracep->declBus(c+88,"SizeSrc", false,-1, 1,0);
    tracep->declBus(c+90,"WriteData", false,-1, 31,0);
    tracep->declBus(c+89,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+92,"ReadData", false,-1, 31,0);
    tracep->declBus(c+109,"address", false,-1, 16,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEM_WB_Reg ");
    tracep->declBit(c+110,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+86,"RegWrite_M_out", false,-1);
    tracep->declBus(c+22,"ResultSrc_M_out", false,-1, 1,0);
    tracep->declBus(c+92,"ReadData_M", false,-1, 31,0);
    tracep->declBus(c+89,"ALUResult_M_out", false,-1, 31,0);
    tracep->declBus(c+91,"rd_M_out", false,-1, 4,0);
    tracep->declBus(c+24,"PCPlus4_M_out", false,-1, 31,0);
    tracep->declBit(c+93,"RegWrite_W", false,-1);
    tracep->declBus(c+25,"ResultSrc_W", false,-1, 1,0);
    tracep->declBus(c+26,"ReadData_W", false,-1, 31,0);
    tracep->declBus(c+27,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+94,"rd_W", false,-1, 4,0);
    tracep->declBus(c+28,"PCPlus4_W", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBTop ");
    tracep->declBit(c+93,"RegWrite_W", false,-1);
    tracep->declBus(c+25,"ResultSrc_W", false,-1, 1,0);
    tracep->declBus(c+26,"ReadData_W", false,-1, 31,0);
    tracep->declBus(c+27,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+28,"PCPlus4_W", false,-1, 31,0);
    tracep->declBus(c+94,"rd_W", false,-1, 4,0);
    tracep->declBit(c+93,"RegWrite_W_out", false,-1);
    tracep->declBus(c+95,"Result_W", false,-1, 31,0);
    tracep->declBus(c+94,"rd_W_out", false,-1, 4,0);
    tracep->pushNamePrefix("ALUMux3 ");
    tracep->declBus(c+25,"ResultSrc_W", false,-1, 1,0);
    tracep->declBus(c+27,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+26,"ReadData_W", false,-1, 31,0);
    tracep->declBus(c+28,"PCPlus4_W", false,-1, 31,0);
    tracep->declBus(c+95,"Result_W", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VCPUTOP___024root__trace_init_top(VCPUTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root__trace_init_top\n"); );
    // Body
    VCPUTOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPUTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPUTOP___024root__trace_register(VCPUTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPUTOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPUTOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPUTOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPUTOP___024root__trace_full_sub_0(VCPUTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPUTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root__trace_full_top_0\n"); );
    // Init
    VCPUTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTOP___024root*>(voidSelf);
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPUTOP___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPUTOP___024root__trace_full_sub_0(VCPUTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file),32);
    bufp->fullIData(oldp+2,(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__r),32);
    bufp->fullIData(oldp+3,(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word),32);
    bufp->fullIData(oldp+4,(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr),32);
    bufp->fullIData(oldp+5,(vlSelf->CPUTOP__DOT__PCPlus4_D),32);
    bufp->fullIData(oldp+6,(vlSelf->CPUTOP__DOT__PC_D),32);
    bufp->fullBit(oldp+7,(vlSelf->CPUTOP__DOT__ALUSrcA_E));
    bufp->fullBit(oldp+8,(vlSelf->CPUTOP__DOT__ALUSrcB_E));
    bufp->fullCData(oldp+9,(vlSelf->CPUTOP__DOT__ALUControl_E),4);
    bufp->fullCData(oldp+10,(vlSelf->CPUTOP__DOT__ResultSrc_E),2);
    bufp->fullBit(oldp+11,(vlSelf->CPUTOP__DOT__LoadSign_E));
    bufp->fullCData(oldp+12,(vlSelf->CPUTOP__DOT__Branch_E),3);
    bufp->fullCData(oldp+13,(vlSelf->CPUTOP__DOT__Jump_E),2);
    bufp->fullIData(oldp+14,(vlSelf->CPUTOP__DOT__ImmExt_E),32);
    bufp->fullIData(oldp+15,(vlSelf->CPUTOP__DOT__RD1_E),32);
    bufp->fullIData(oldp+16,(vlSelf->CPUTOP__DOT__RD2_E),32);
    bufp->fullCData(oldp+17,(vlSelf->CPUTOP__DOT__rs1_E),5);
    bufp->fullCData(oldp+18,(vlSelf->CPUTOP__DOT__rs2_E),5);
    bufp->fullIData(oldp+19,(vlSelf->CPUTOP__DOT__PCPlus4_E),32);
    bufp->fullIData(oldp+20,(vlSelf->CPUTOP__DOT__PC_E),32);
    bufp->fullIData(oldp+21,((vlSelf->CPUTOP__DOT__PC_E 
                              + vlSelf->CPUTOP__DOT__ImmExt_E)),32);
    bufp->fullCData(oldp+22,(vlSelf->CPUTOP__DOT__ResultSrc_M),2);
    bufp->fullBit(oldp+23,(vlSelf->CPUTOP__DOT__LoadSign_M));
    bufp->fullIData(oldp+24,(vlSelf->CPUTOP__DOT__PCPlus4_M),32);
    bufp->fullCData(oldp+25,(vlSelf->CPUTOP__DOT__ResultSrc_W),2);
    bufp->fullIData(oldp+26,(vlSelf->CPUTOP__DOT__ReadData_W),32);
    bufp->fullIData(oldp+27,(vlSelf->CPUTOP__DOT__ALUResult_W),32);
    bufp->fullIData(oldp+28,(vlSelf->CPUTOP__DOT__PCPlus4_W),32);
    bufp->fullIData(oldp+29,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[0]),32);
    bufp->fullIData(oldp+30,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[1]),32);
    bufp->fullIData(oldp+31,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[2]),32);
    bufp->fullIData(oldp+32,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[3]),32);
    bufp->fullIData(oldp+33,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[4]),32);
    bufp->fullIData(oldp+34,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[5]),32);
    bufp->fullIData(oldp+35,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[6]),32);
    bufp->fullIData(oldp+36,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[7]),32);
    bufp->fullIData(oldp+37,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[8]),32);
    bufp->fullIData(oldp+38,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[9]),32);
    bufp->fullIData(oldp+39,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[10]),32);
    bufp->fullIData(oldp+40,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[11]),32);
    bufp->fullIData(oldp+41,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[12]),32);
    bufp->fullIData(oldp+42,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[13]),32);
    bufp->fullIData(oldp+43,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[14]),32);
    bufp->fullIData(oldp+44,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[15]),32);
    bufp->fullIData(oldp+45,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[16]),32);
    bufp->fullIData(oldp+46,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[17]),32);
    bufp->fullIData(oldp+47,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[18]),32);
    bufp->fullIData(oldp+48,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[19]),32);
    bufp->fullIData(oldp+49,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[20]),32);
    bufp->fullIData(oldp+50,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[21]),32);
    bufp->fullIData(oldp+51,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[22]),32);
    bufp->fullIData(oldp+52,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[23]),32);
    bufp->fullIData(oldp+53,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[24]),32);
    bufp->fullIData(oldp+54,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[25]),32);
    bufp->fullIData(oldp+55,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[26]),32);
    bufp->fullIData(oldp+56,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[27]),32);
    bufp->fullIData(oldp+57,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[28]),32);
    bufp->fullIData(oldp+58,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[29]),32);
    bufp->fullIData(oldp+59,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[30]),32);
    bufp->fullIData(oldp+60,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[31]),32);
    bufp->fullIData(oldp+61,(vlSelf->CPUTOP__DOT__PC_F),32);
    bufp->fullIData(oldp+62,(((IData)(4U) + vlSelf->CPUTOP__DOT__PC_F)),32);
    bufp->fullIData(oldp+63,(((0xbfc00U == (vlSelf->CPUTOP__DOT__PC_F 
                                            >> 0xcU))
                               ? ((vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory
                                   [(0xfffU & ((IData)(3U) 
                                               + vlSelf->CPUTOP__DOT__PC_F))] 
                                   << 0x18U) | ((vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->CPUTOP__DOT__PC_F))] 
                                                 << 0x10U) 
                                                | ((vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->CPUTOP__DOT__PC_F))] 
                                                    << 8U) 
                                                   | vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory
                                                   [
                                                   (0xfffU 
                                                    & vlSelf->CPUTOP__DOT__PC_F)])))
                               : 0U)),32);
    bufp->fullIData(oldp+64,(vlSelf->CPUTOP__DOT__Instr_D),32);
    bufp->fullBit(oldp+65,(vlSelf->CPUTOP__DOT__RegWrite_D));
    bufp->fullBit(oldp+66,(vlSelf->CPUTOP__DOT__MemWrite_D));
    bufp->fullBit(oldp+67,(vlSelf->CPUTOP__DOT__ALUSrcA_D));
    bufp->fullBit(oldp+68,(vlSelf->CPUTOP__DOT__ALUSrcB_D));
    bufp->fullCData(oldp+69,(vlSelf->CPUTOP__DOT__ALUControl_D),4);
    bufp->fullCData(oldp+70,(vlSelf->CPUTOP__DOT__ResultSrc_D),2);
    bufp->fullCData(oldp+71,(vlSelf->CPUTOP__DOT__SizeSrc_D),2);
    bufp->fullBit(oldp+72,(vlSelf->CPUTOP__DOT__LoadSign_D));
    bufp->fullCData(oldp+73,(vlSelf->CPUTOP__DOT__Branch_D),3);
    bufp->fullCData(oldp+74,(vlSelf->CPUTOP__DOT__Jump_D),2);
    bufp->fullIData(oldp+75,(vlSelf->CPUTOP__DOT__ImmExt_D),32);
    bufp->fullCData(oldp+76,((0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                       >> 7U))),5);
    bufp->fullBit(oldp+79,(vlSelf->CPUTOP__DOT__RegWrite_E));
    bufp->fullBit(oldp+80,(vlSelf->CPUTOP__DOT__MemWrite_E));
    bufp->fullCData(oldp+81,(vlSelf->CPUTOP__DOT__SizeSrc_E),2);
    bufp->fullCData(oldp+82,(vlSelf->CPUTOP__DOT__rd_E),5);
    bufp->fullIData(oldp+83,(vlSelf->CPUTOP__DOT__ALUResult_E),32);
    bufp->fullIData(oldp+84,(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardBData_E),32);
    bufp->fullCData(oldp+85,(vlSelf->CPUTOP__DOT__PCSrc_E),2);
    bufp->fullBit(oldp+86,(vlSelf->CPUTOP__DOT__RegWrite_M));
    bufp->fullBit(oldp+87,(vlSelf->CPUTOP__DOT__MemWrite_M));
    bufp->fullCData(oldp+88,(vlSelf->CPUTOP__DOT__SizeSrc_M),2);
    bufp->fullIData(oldp+89,(vlSelf->CPUTOP__DOT__ALUResult_M),32);
    bufp->fullIData(oldp+90,(vlSelf->CPUTOP__DOT__WriteData_M),32);
    bufp->fullCData(oldp+91,(vlSelf->CPUTOP__DOT__rd_M),5);
    bufp->fullIData(oldp+92,(vlSelf->CPUTOP__DOT__ReadData_M),32);
    bufp->fullBit(oldp+93,(vlSelf->CPUTOP__DOT__RegWrite_W));
    bufp->fullCData(oldp+94,(vlSelf->CPUTOP__DOT__rd_W),5);
    bufp->fullIData(oldp+95,(vlSelf->CPUTOP__DOT__Result_W),32);
    bufp->fullCData(oldp+96,(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E),2);
    bufp->fullCData(oldp+97,(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E),2);
    bufp->fullIData(oldp+98,(vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E),32);
    bufp->fullIData(oldp+99,(vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E),32);
    bufp->fullBit(oldp+100,(vlSelf->CPUTOP__DOT__EXTop__DOT__Zero_E));
    bufp->fullBit(oldp+101,(vlSelf->CPUTOP__DOT__EXTop__DOT__unsignedLess_E));
    bufp->fullBit(oldp+102,(vlSelf->CPUTOP__DOT__EXTop__DOT__signedLess_E));
    bufp->fullCData(oldp+103,((0x7fU & vlSelf->CPUTOP__DOT__Instr_D)),7);
    bufp->fullIData(oldp+104,((vlSelf->CPUTOP__DOT__Instr_D 
                               >> 7U)),25);
    bufp->fullCData(oldp+105,((7U & (vlSelf->CPUTOP__DOT__Instr_D 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+106,((vlSelf->CPUTOP__DOT__Instr_D 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+107,(vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D),3);
    bufp->fullBit(oldp+108,((0xbfc00U == (vlSelf->CPUTOP__DOT__PC_F 
                                          >> 0xcU))));
    bufp->fullIData(oldp+109,((0x1ffffU & vlSelf->CPUTOP__DOT__ALUResult_M)),17);
    bufp->fullBit(oldp+110,(vlSelf->clk));
    bufp->fullBit(oldp+111,(vlSelf->rst));
    bufp->fullIData(oldp+112,(vlSelf->a0),32);
    bufp->fullIData(oldp+113,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr
                              [(0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+114,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr
                              [(0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+115,(((0U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
                                ? vlSelf->CPUTOP__DOT__RD1_E
                                : ((1U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
                                    ? vlSelf->CPUTOP__DOT__Result_W
                                    : ((2U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
                                        ? vlSelf->CPUTOP__DOT__ALUResult_M
                                        : vlSelf->CPUTOP__DOT__RD1_E)))),32);
    bufp->fullIData(oldp+116,(((0U == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                                ? ((IData)(4U) + vlSelf->CPUTOP__DOT__PC_F)
                                : ((1U == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                                    ? (vlSelf->CPUTOP__DOT__PC_E 
                                       + vlSelf->CPUTOP__DOT__ImmExt_E)
                                    : ((2U == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                                        ? vlSelf->CPUTOP__DOT__ALUResult_E
                                        : ((IData)(4U) 
                                           + vlSelf->CPUTOP__DOT__PC_F))))),32);
}
