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
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+68,"rst", false,-1);
    tracep->declBus(c+69,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("CPUTOP ");
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+68,"rst", false,-1);
    tracep->declBus(c+69,"a0", false,-1, 31,0);
    tracep->declBus(c+33,"PC", false,-1, 31,0);
    tracep->declBus(c+34,"Instr", false,-1, 31,0);
    tracep->declBus(c+35,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBit(c+37,"ALUSrcA", false,-1);
    tracep->declBit(c+38,"ALUSrcB", false,-1);
    tracep->declBus(c+39,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+40,"ALUControl", false,-1, 3,0);
    tracep->declBit(c+41,"Zero", false,-1);
    tracep->declBus(c+42,"PCPlus4", false,-1, 31,0);
    tracep->declBit(c+43,"MemWrite", false,-1);
    tracep->declBus(c+44,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+45,"signedLess", false,-1);
    tracep->declBit(c+46,"unsignedLess", false,-1);
    tracep->declBus(c+47,"PCJALR", false,-1, 31,0);
    tracep->declBus(c+48,"SizeSrc", false,-1, 1,0);
    tracep->declBit(c+49,"LoadSign", false,-1);
    tracep->declBus(c+50,"rs1", false,-1, 4,0);
    tracep->declBus(c+51,"rs2", false,-1, 4,0);
    tracep->declBus(c+52,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("ALUTop ");
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBus(c+50,"rs1", false,-1, 4,0);
    tracep->declBus(c+51,"rs2", false,-1, 4,0);
    tracep->declBus(c+52,"rd", false,-1, 4,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBit(c+37,"ALUSrcA", false,-1);
    tracep->declBit(c+38,"ALUSrcB", false,-1);
    tracep->declBus(c+40,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+35,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+43,"MemWrite", false,-1);
    tracep->declBus(c+42,"PCPlus4", false,-1, 31,0);
    tracep->declBit(c+49,"LoadSign", false,-1);
    tracep->declBus(c+48,"SizeSrc", false,-1, 1,0);
    tracep->declBus(c+44,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+33,"PC", false,-1, 31,0);
    tracep->declBit(c+41,"Zero", false,-1);
    tracep->declBit(c+46,"unsignedLess", false,-1);
    tracep->declBit(c+45,"signedLess", false,-1);
    tracep->declBus(c+69,"a0", false,-1, 31,0);
    tracep->declBus(c+47,"ResultExt", false,-1, 31,0);
    tracep->declBus(c+53,"SrcA", false,-1, 31,0);
    tracep->declBus(c+54,"SrcB", false,-1, 31,0);
    tracep->declBus(c+70,"RD1", false,-1, 31,0);
    tracep->declBus(c+55,"RD2", false,-1, 31,0);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+56,"ReadData", false,-1, 31,0);
    tracep->declBus(c+55,"WriteData", false,-1, 31,0);
    tracep->declBus(c+57,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+53,"SrcA", false,-1, 31,0);
    tracep->declBus(c+54,"SrcB", false,-1, 31,0);
    tracep->declBus(c+40,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+41,"Zero", false,-1);
    tracep->declBit(c+45,"signedLess", false,-1);
    tracep->declBit(c+46,"unsignedLess", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux1 ");
    tracep->declBus(c+70,"RD1", false,-1, 31,0);
    tracep->declBus(c+33,"PC", false,-1, 31,0);
    tracep->declBit(c+37,"ALUSrcA", false,-1);
    tracep->declBus(c+53,"SrcA", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux2 ");
    tracep->declBus(c+55,"RD2", false,-1, 31,0);
    tracep->declBus(c+35,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+38,"ALUSrcB", false,-1);
    tracep->declBus(c+54,"SrcB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux3 ");
    tracep->declBus(c+44,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+56,"ReadData", false,-1, 31,0);
    tracep->declBus(c+42,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+57,"Result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DataMemory ");
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+43,"MemWrite", false,-1);
    tracep->declBit(c+49,"LoadSign", false,-1);
    tracep->declBus(c+48,"SizeSrc", false,-1, 1,0);
    tracep->declBus(c+55,"WriteData", false,-1, 31,0);
    tracep->declBus(c+47,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+56,"ReadData", false,-1, 31,0);
    tracep->declBus(c+58,"address", false,-1, 16,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBus(c+50,"A1", false,-1, 4,0);
    tracep->declBus(c+51,"A2", false,-1, 4,0);
    tracep->declBus(c+52,"A3", false,-1, 4,0);
    tracep->declBus(c+57,"WD3", false,-1, 31,0);
    tracep->declBit(c+36,"WE3", false,-1);
    tracep->declBus(c+69,"a0", false,-1, 31,0);
    tracep->declBus(c+70,"RD1", false,-1, 31,0);
    tracep->declBus(c+55,"RD2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"registerarr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstrTop ");
    tracep->declBus(c+33,"PC", false,-1, 31,0);
    tracep->declBit(c+41,"Zero", false,-1);
    tracep->declBit(c+46,"unsignedLess", false,-1);
    tracep->declBit(c+45,"signedLess", false,-1);
    tracep->declBus(c+34,"Instr", false,-1, 31,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBit(c+37,"ALUSrcA", false,-1);
    tracep->declBit(c+38,"ALUSrcB", false,-1);
    tracep->declBus(c+39,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+35,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+40,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+44,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+43,"MemWrite", false,-1);
    tracep->declBus(c+48,"SizeSrc", false,-1, 1,0);
    tracep->declBit(c+49,"LoadSign", false,-1);
    tracep->declBus(c+59,"op", false,-1, 6,0);
    tracep->declBus(c+60,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+61,"ImmIn", false,-1, 31,7);
    tracep->declBus(c+62,"funct3", false,-1, 2,0);
    tracep->declBus(c+63,"funct7", false,-1, 6,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+59,"op", false,-1, 6,0);
    tracep->declBus(c+62,"funct3", false,-1, 2,0);
    tracep->declBus(c+63,"funct7", false,-1, 6,0);
    tracep->declBit(c+41,"Zero", false,-1);
    tracep->declBit(c+46,"unsignedLess", false,-1);
    tracep->declBit(c+45,"signedLess", false,-1);
    tracep->declBus(c+39,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+44,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+43,"MemWrite", false,-1);
    tracep->declBus(c+40,"ALUControl", false,-1, 3,0);
    tracep->declBit(c+37,"ALUSrcA", false,-1);
    tracep->declBit(c+38,"ALUSrcB", false,-1);
    tracep->declBus(c+60,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBit(c+49,"LoadSign", false,-1);
    tracep->declBus(c+48,"SizeSrc", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend ");
    tracep->declBus(c+61,"ImmIn", false,-1, 31,7);
    tracep->declBus(c+60,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+35,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+33,"PC", false,-1, 31,0);
    tracep->declBus(c+34,"Instr", false,-1, 31,0);
    tracep->declBit(c+64,"ValidAddr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PCTop ");
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+68,"rst", false,-1);
    tracep->declBus(c+39,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+35,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+47,"PCJALR", false,-1, 31,0);
    tracep->declBus(c+33,"PC", false,-1, 31,0);
    tracep->declBus(c+42,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+65,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+66,"PCNext", false,-1, 31,0);
    tracep->pushNamePrefix("PCMux ");
    tracep->declBus(c+42,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+65,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+47,"PCJALR", false,-1, 31,0);
    tracep->declBus(c+39,"PCSrc", false,-1, 1,0);
    tracep->declBus(c+66,"PCNext", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+68,"rst", false,-1);
    tracep->declBus(c+66,"PCNext", false,-1, 31,0);
    tracep->declBus(c+33,"PC", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->CPUTOP__DOT__PC),32);
    bufp->fullIData(oldp+34,(vlSelf->CPUTOP__DOT__Instr),32);
    bufp->fullIData(oldp+35,(vlSelf->CPUTOP__DOT__ImmExt),32);
    bufp->fullBit(oldp+36,(vlSelf->CPUTOP__DOT__RegWrite));
    bufp->fullBit(oldp+37,(vlSelf->CPUTOP__DOT__ALUSrcA));
    bufp->fullBit(oldp+38,(vlSelf->CPUTOP__DOT__ALUSrcB));
    bufp->fullCData(oldp+39,(vlSelf->CPUTOP__DOT__PCSrc),2);
    bufp->fullCData(oldp+40,(vlSelf->CPUTOP__DOT__ALUControl),4);
    bufp->fullBit(oldp+41,(vlSelf->CPUTOP__DOT__Zero));
    bufp->fullIData(oldp+42,(((IData)(4U) + vlSelf->CPUTOP__DOT__PC)),32);
    bufp->fullBit(oldp+43,(vlSelf->CPUTOP__DOT__MemWrite));
    bufp->fullCData(oldp+44,(vlSelf->CPUTOP__DOT__ResultSrc),2);
    bufp->fullBit(oldp+45,(vlSelf->CPUTOP__DOT__signedLess));
    bufp->fullBit(oldp+46,(vlSelf->CPUTOP__DOT__unsignedLess));
    bufp->fullIData(oldp+47,(vlSelf->CPUTOP__DOT__ALUTop__DOT__ALUResult),32);
    bufp->fullCData(oldp+48,(vlSelf->CPUTOP__DOT__SizeSrc),2);
    bufp->fullBit(oldp+49,(vlSelf->CPUTOP__DOT__LoadSign));
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+51,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+53,(vlSelf->CPUTOP__DOT__ALUTop__DOT__SrcA),32);
    bufp->fullIData(oldp+54,(vlSelf->CPUTOP__DOT__ALUTop__DOT__SrcB),32);
    bufp->fullIData(oldp+55,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RD2),32);
    bufp->fullIData(oldp+56,(vlSelf->CPUTOP__DOT__ALUTop__DOT__ReadData),32);
    bufp->fullIData(oldp+57,(((0U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc))
                               ? vlSelf->CPUTOP__DOT__ALUTop__DOT__ALUResult
                               : ((1U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc))
                                   ? vlSelf->CPUTOP__DOT__ALUTop__DOT__ReadData
                                   : ((2U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc))
                                       ? ((IData)(4U) 
                                          + vlSelf->CPUTOP__DOT__PC)
                                       : 0U)))),32);
    bufp->fullIData(oldp+58,((0x1ffffU & vlSelf->CPUTOP__DOT__ALUTop__DOT__ALUResult)),17);
    bufp->fullCData(oldp+59,((0x7fU & vlSelf->CPUTOP__DOT__Instr)),7);
    bufp->fullCData(oldp+60,(vlSelf->CPUTOP__DOT__InstrTop__DOT__ImmSrc),3);
    bufp->fullIData(oldp+61,((vlSelf->CPUTOP__DOT__Instr 
                              >> 7U)),25);
    bufp->fullCData(oldp+62,((7U & (vlSelf->CPUTOP__DOT__Instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+63,((vlSelf->CPUTOP__DOT__Instr 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+64,((0xbfc00U == (vlSelf->CPUTOP__DOT__PC 
                                         >> 0xcU))));
    bufp->fullIData(oldp+65,((vlSelf->CPUTOP__DOT__PC 
                              + vlSelf->CPUTOP__DOT__ImmExt)),32);
    bufp->fullIData(oldp+66,(((0U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                               ? ((IData)(4U) + vlSelf->CPUTOP__DOT__PC)
                               : ((1U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                                   ? (vlSelf->CPUTOP__DOT__PC 
                                      + vlSelf->CPUTOP__DOT__ImmExt)
                                   : ((2U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                                       ? vlSelf->CPUTOP__DOT__ALUTop__DOT__ALUResult
                                       : ((IData)(4U) 
                                          + vlSelf->CPUTOP__DOT__PC))))),32);
    bufp->fullBit(oldp+67,(vlSelf->clk));
    bufp->fullBit(oldp+68,(vlSelf->rst));
    bufp->fullIData(oldp+69,(vlSelf->a0),32);
    bufp->fullIData(oldp+70,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr
                             [(0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                        >> 0xfU))]),32);
}
