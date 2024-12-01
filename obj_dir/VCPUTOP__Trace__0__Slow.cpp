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
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+71,"rst", false,-1);
    tracep->declBus(c+72,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("CPUTOP ");
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+71,"rst", false,-1);
    tracep->declBus(c+72,"a0", false,-1, 31,0);
    tracep->declBus(c+37,"PC", false,-1, 31,0);
    tracep->declBus(c+38,"Instr", false,-1, 31,0);
    tracep->declBus(c+39,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+40,"RegWrite", false,-1);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBus(c+42,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+43,"ALUControl", false,-1, 3,0);
    tracep->declBit(c+44,"Zero", false,-1);
    tracep->declBus(c+45,"PCPlus4", false,-1, 31,0);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBus(c+47,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+48,"signedLess", false,-1);
    tracep->declBit(c+49,"unsignedLess", false,-1);
    tracep->declBus(c+50,"PCJALR", false,-1, 31,0);
    tracep->declBus(c+51,"SizeSrc", false,-1, 1,0);
    tracep->declBit(c+52,"LoadSign", false,-1);
    tracep->declBus(c+53,"rs1", false,-1, 4,0);
    tracep->declBus(c+54,"rs2", false,-1, 4,0);
    tracep->declBus(c+55,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("ALUTop ");
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBus(c+53,"rs1", false,-1, 4,0);
    tracep->declBus(c+54,"rs2", false,-1, 4,0);
    tracep->declBus(c+55,"rd", false,-1, 4,0);
    tracep->declBit(c+40,"RegWrite", false,-1);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBus(c+43,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+39,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBus(c+45,"PCPlus4", false,-1, 31,0);
    tracep->declBit(c+52,"LoadSign", false,-1);
    tracep->declBus(c+51,"SizeSrc", false,-1, 1,0);
    tracep->declBus(c+47,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+44,"Zero", false,-1);
    tracep->declBit(c+49,"unsignedLess", false,-1);
    tracep->declBit(c+48,"signedLess", false,-1);
    tracep->declBus(c+72,"a0", false,-1, 31,0);
    tracep->declBus(c+50,"ResultExt", false,-1, 31,0);
    tracep->declBus(c+56,"SrcA", false,-1, 31,0);
    tracep->declBus(c+57,"SrcB", false,-1, 31,0);
    tracep->declBus(c+58,"RD2", false,-1, 31,0);
    tracep->declBus(c+59,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+60,"ReadData", false,-1, 31,0);
    tracep->declBus(c+58,"WriteData", false,-1, 31,0);
    tracep->declBus(c+50,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+56,"SrcA", false,-1, 31,0);
    tracep->declBus(c+57,"SrcB", false,-1, 31,0);
    tracep->declBus(c+43,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+59,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+44,"Zero", false,-1);
    tracep->declBit(c+48,"signedLess", false,-1);
    tracep->declBit(c+49,"unsignedLess", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux1 ");
    tracep->declBus(c+58,"RD2", false,-1, 31,0);
    tracep->declBus(c+39,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBus(c+57,"SrcB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux2 ");
    tracep->declBus(c+47,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+59,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+60,"ReadData", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+50,"Result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DataMemory ");
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBit(c+52,"LoadSign", false,-1);
    tracep->declBus(c+51,"SizeSrc", false,-1, 1,0);
    tracep->declBus(c+58,"WriteData", false,-1, 31,0);
    tracep->declBus(c+59,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+60,"ReadData", false,-1, 31,0);
    tracep->declBus(c+61,"address", false,-1, 16,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBus(c+53,"A1", false,-1, 4,0);
    tracep->declBus(c+54,"A2", false,-1, 4,0);
    tracep->declBus(c+55,"A3", false,-1, 4,0);
    tracep->declBus(c+50,"WD3", false,-1, 31,0);
    tracep->declBit(c+40,"WE3", false,-1);
    tracep->declBus(c+72,"a0", false,-1, 31,0);
    tracep->declBus(c+56,"RD1", false,-1, 31,0);
    tracep->declBus(c+58,"RD2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,"registerarr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstrTop ");
    tracep->declBus(c+37,"PC", false,-1, 31,0);
    tracep->declBit(c+44,"Zero", false,-1);
    tracep->declBit(c+49,"unsignedLess", false,-1);
    tracep->declBit(c+48,"signedLess", false,-1);
    tracep->declBus(c+38,"Instr", false,-1, 31,0);
    tracep->declBit(c+40,"RegWrite", false,-1);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBus(c+42,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+39,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+43,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+47,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBus(c+51,"SizeSrc", false,-1, 1,0);
    tracep->declBit(c+52,"LoadSign", false,-1);
    tracep->declBus(c+62,"op", false,-1, 6,0);
    tracep->declBus(c+63,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+64,"ImmIn", false,-1, 31,7);
    tracep->declBus(c+65,"funct3", false,-1, 2,0);
    tracep->declBus(c+66,"funct7", false,-1, 6,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+62,"op", false,-1, 6,0);
    tracep->declBus(c+65,"funct3", false,-1, 2,0);
    tracep->declBus(c+66,"funct7", false,-1, 6,0);
    tracep->declBit(c+44,"Zero", false,-1);
    tracep->declBit(c+49,"unsignedLess", false,-1);
    tracep->declBit(c+48,"signedLess", false,-1);
    tracep->declBus(c+42,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+47,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBus(c+43,"ALUControl", false,-1, 3,0);
    tracep->declBit(c+41,"ALUSrc", false,-1);
    tracep->declBus(c+63,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+40,"RegWrite", false,-1);
    tracep->declBit(c+52,"LoadSign", false,-1);
    tracep->declBus(c+51,"SizeSrc", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend ");
    tracep->declBus(c+64,"ImmIn", false,-1, 31,7);
    tracep->declBus(c+63,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+39,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HexFileLoader ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"file", false,-1, 31,0);
    tracep->declBus(c+2,"r", false,-1, 31,0);
    tracep->declBus(c+3,"instr_word", false,-1, 31,0);
    tracep->declBus(c+4,"addr", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+37,"PC", false,-1, 31,0);
    tracep->declBus(c+38,"Instr", false,-1, 31,0);
    tracep->declBit(c+67,"ValidAddr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PCTop ");
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+71,"rst", false,-1);
    tracep->declBus(c+42,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+39,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+50,"PCJALR", false,-1, 31,0);
    tracep->declBus(c+37,"PC", false,-1, 31,0);
    tracep->declBus(c+45,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+68,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+69,"PCNext", false,-1, 31,0);
    tracep->pushNamePrefix("PCMux ");
    tracep->declBus(c+45,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+68,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+50,"PCJALR", false,-1, 31,0);
    tracep->declBus(c+42,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+69,"PCNext", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+71,"rst", false,-1);
    tracep->declBus(c+69,"PCNext", false,-1, 31,0);
    tracep->declBus(c+37,"PC", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->CPUTOP__DOT__InstrTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file),32);
    bufp->fullIData(oldp+2,(vlSelf->CPUTOP__DOT__InstrTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__r),32);
    bufp->fullIData(oldp+3,(vlSelf->CPUTOP__DOT__InstrTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word),32);
    bufp->fullIData(oldp+4,(vlSelf->CPUTOP__DOT__InstrTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr),32);
    bufp->fullIData(oldp+5,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[31]),32);
    bufp->fullIData(oldp+37,(vlSelf->CPUTOP__DOT__PC),32);
    bufp->fullIData(oldp+38,(vlSelf->CPUTOP__DOT__Instr),32);
    bufp->fullIData(oldp+39,(vlSelf->CPUTOP__DOT__ImmExt),32);
    bufp->fullBit(oldp+40,(vlSelf->CPUTOP__DOT__RegWrite));
    bufp->fullBit(oldp+41,(vlSelf->CPUTOP__DOT__ALUSrc));
    bufp->fullCData(oldp+42,(vlSelf->CPUTOP__DOT__PCSrc),2);
    bufp->fullCData(oldp+43,(vlSelf->CPUTOP__DOT__ALUControl),4);
    bufp->fullBit(oldp+44,(vlSelf->CPUTOP__DOT__Zero));
    bufp->fullIData(oldp+45,(((IData)(4U) + vlSelf->CPUTOP__DOT__PC)),32);
    bufp->fullBit(oldp+46,(vlSelf->CPUTOP__DOT__MemWrite));
    bufp->fullCData(oldp+47,(vlSelf->CPUTOP__DOT__ResultSrc),2);
    bufp->fullBit(oldp+48,(vlSelf->CPUTOP__DOT__signedLess));
    bufp->fullBit(oldp+49,(vlSelf->CPUTOP__DOT__unsignedLess));
    bufp->fullIData(oldp+50,(vlSelf->CPUTOP__DOT__ALUTop__DOT__Result),32);
    bufp->fullCData(oldp+51,(vlSelf->CPUTOP__DOT__SizeSrc),2);
    bufp->fullBit(oldp+52,(vlSelf->CPUTOP__DOT__LoadSign));
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+56,(vlSelf->CPUTOP__DOT__ALUTop__DOT__SrcA),32);
    bufp->fullIData(oldp+57,(vlSelf->CPUTOP__DOT__ALUTop__DOT__SrcB),32);
    bufp->fullIData(oldp+58,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RD2),32);
    bufp->fullIData(oldp+59,(vlSelf->CPUTOP__DOT__ALUTop__DOT__ALUResult),32);
    bufp->fullIData(oldp+60,(vlSelf->CPUTOP__DOT__ALUTop__DOT__ReadData),32);
    bufp->fullIData(oldp+61,((0x1ffffU & vlSelf->CPUTOP__DOT__ALUTop__DOT__ALUResult)),17);
    bufp->fullCData(oldp+62,((0x7fU & vlSelf->CPUTOP__DOT__Instr)),7);
    bufp->fullCData(oldp+63,(vlSelf->CPUTOP__DOT__InstrTop__DOT__ImmSrc),3);
    bufp->fullIData(oldp+64,((vlSelf->CPUTOP__DOT__Instr 
                              >> 7U)),25);
    bufp->fullCData(oldp+65,((7U & (vlSelf->CPUTOP__DOT__Instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+66,((vlSelf->CPUTOP__DOT__Instr 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+67,((0xbfc00U == (vlSelf->CPUTOP__DOT__PC 
                                         >> 0xcU))));
    bufp->fullIData(oldp+68,((vlSelf->CPUTOP__DOT__PC 
                              + vlSelf->CPUTOP__DOT__ImmExt)),32);
    bufp->fullIData(oldp+69,(((0U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                               ? ((IData)(4U) + vlSelf->CPUTOP__DOT__PC)
                               : ((1U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                                   ? (vlSelf->CPUTOP__DOT__PC 
                                      + vlSelf->CPUTOP__DOT__ImmExt)
                                   : ((2U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                                       ? vlSelf->CPUTOP__DOT__ALUTop__DOT__Result
                                       : ((IData)(4U) 
                                          + vlSelf->CPUTOP__DOT__PC))))),32);
    bufp->fullBit(oldp+70,(vlSelf->clk));
    bufp->fullBit(oldp+71,(vlSelf->rst));
    bufp->fullIData(oldp+72,(vlSelf->a0),32);
}
