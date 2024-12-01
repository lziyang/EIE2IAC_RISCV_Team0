// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUTOP__Syms.h"


void VCPUTOP___024root__trace_chg_sub_0(VCPUTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPUTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root__trace_chg_top_0\n"); );
    // Init
    VCPUTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTOP___024root*>(voidSelf);
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPUTOP___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCPUTOP___024root__trace_chg_sub_0(VCPUTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->CPUTOP__DOT__InstrTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file),32);
        bufp->chgIData(oldp+1,(vlSelf->CPUTOP__DOT__InstrTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__r),32);
        bufp->chgIData(oldp+2,(vlSelf->CPUTOP__DOT__InstrTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word),32);
        bufp->chgIData(oldp+3,(vlSelf->CPUTOP__DOT__InstrTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+4,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[0]),32);
        bufp->chgIData(oldp+5,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[1]),32);
        bufp->chgIData(oldp+6,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[2]),32);
        bufp->chgIData(oldp+7,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[3]),32);
        bufp->chgIData(oldp+8,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[4]),32);
        bufp->chgIData(oldp+9,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[5]),32);
        bufp->chgIData(oldp+10,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[6]),32);
        bufp->chgIData(oldp+11,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[7]),32);
        bufp->chgIData(oldp+12,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[8]),32);
        bufp->chgIData(oldp+13,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[9]),32);
        bufp->chgIData(oldp+14,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[10]),32);
        bufp->chgIData(oldp+15,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[11]),32);
        bufp->chgIData(oldp+16,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[12]),32);
        bufp->chgIData(oldp+17,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[13]),32);
        bufp->chgIData(oldp+18,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[14]),32);
        bufp->chgIData(oldp+19,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[15]),32);
        bufp->chgIData(oldp+20,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[16]),32);
        bufp->chgIData(oldp+21,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[17]),32);
        bufp->chgIData(oldp+22,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[18]),32);
        bufp->chgIData(oldp+23,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[19]),32);
        bufp->chgIData(oldp+24,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[20]),32);
        bufp->chgIData(oldp+25,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[21]),32);
        bufp->chgIData(oldp+26,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[22]),32);
        bufp->chgIData(oldp+27,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[23]),32);
        bufp->chgIData(oldp+28,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[24]),32);
        bufp->chgIData(oldp+29,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[25]),32);
        bufp->chgIData(oldp+30,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[26]),32);
        bufp->chgIData(oldp+31,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[27]),32);
        bufp->chgIData(oldp+32,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[28]),32);
        bufp->chgIData(oldp+33,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[29]),32);
        bufp->chgIData(oldp+34,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[30]),32);
        bufp->chgIData(oldp+35,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+36,(vlSelf->CPUTOP__DOT__PC),32);
        bufp->chgIData(oldp+37,(vlSelf->CPUTOP__DOT__Instr),32);
        bufp->chgIData(oldp+38,(vlSelf->CPUTOP__DOT__ImmExt),32);
        bufp->chgBit(oldp+39,(vlSelf->CPUTOP__DOT__RegWrite));
        bufp->chgBit(oldp+40,(vlSelf->CPUTOP__DOT__ALUSrc));
        bufp->chgCData(oldp+41,(vlSelf->CPUTOP__DOT__PCSrc),2);
        bufp->chgCData(oldp+42,(vlSelf->CPUTOP__DOT__ALUControl),4);
        bufp->chgBit(oldp+43,(vlSelf->CPUTOP__DOT__Zero));
        bufp->chgIData(oldp+44,(((IData)(4U) + vlSelf->CPUTOP__DOT__PC)),32);
        bufp->chgBit(oldp+45,(vlSelf->CPUTOP__DOT__MemWrite));
        bufp->chgCData(oldp+46,(vlSelf->CPUTOP__DOT__ResultSrc),2);
        bufp->chgBit(oldp+47,(vlSelf->CPUTOP__DOT__signedLess));
        bufp->chgBit(oldp+48,(vlSelf->CPUTOP__DOT__unsignedLess));
        bufp->chgIData(oldp+49,(vlSelf->CPUTOP__DOT__ALUTop__DOT__Result),32);
        bufp->chgCData(oldp+50,(vlSelf->CPUTOP__DOT__SizeSrc),2);
        bufp->chgBit(oldp+51,(vlSelf->CPUTOP__DOT__LoadSign));
        bufp->chgCData(oldp+52,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->CPUTOP__DOT__Instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+55,(vlSelf->CPUTOP__DOT__ALUTop__DOT__SrcA),32);
        bufp->chgIData(oldp+56,(vlSelf->CPUTOP__DOT__ALUTop__DOT__SrcB),32);
        bufp->chgIData(oldp+57,(vlSelf->CPUTOP__DOT__ALUTop__DOT__RD2),32);
        bufp->chgIData(oldp+58,(vlSelf->CPUTOP__DOT__ALUTop__DOT__ALUResult),32);
        bufp->chgIData(oldp+59,(vlSelf->CPUTOP__DOT__ALUTop__DOT__ReadData),32);
        bufp->chgIData(oldp+60,((0x1ffffU & vlSelf->CPUTOP__DOT__ALUTop__DOT__ALUResult)),17);
        bufp->chgCData(oldp+61,((0x7fU & vlSelf->CPUTOP__DOT__Instr)),7);
        bufp->chgCData(oldp+62,(vlSelf->CPUTOP__DOT__InstrTop__DOT__ImmSrc),3);
        bufp->chgIData(oldp+63,((vlSelf->CPUTOP__DOT__Instr 
                                 >> 7U)),25);
        bufp->chgCData(oldp+64,((7U & (vlSelf->CPUTOP__DOT__Instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+65,((vlSelf->CPUTOP__DOT__Instr 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+66,((0xbfc00U == (vlSelf->CPUTOP__DOT__PC 
                                            >> 0xcU))));
        bufp->chgIData(oldp+67,((vlSelf->CPUTOP__DOT__PC 
                                 + vlSelf->CPUTOP__DOT__ImmExt)),32);
        bufp->chgIData(oldp+68,(((0U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                                  ? ((IData)(4U) + vlSelf->CPUTOP__DOT__PC)
                                  : ((1U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                                      ? (vlSelf->CPUTOP__DOT__PC 
                                         + vlSelf->CPUTOP__DOT__ImmExt)
                                      : ((2U == (IData)(vlSelf->CPUTOP__DOT__PCSrc))
                                          ? vlSelf->CPUTOP__DOT__ALUTop__DOT__Result
                                          : ((IData)(4U) 
                                             + vlSelf->CPUTOP__DOT__PC))))),32);
    }
    bufp->chgBit(oldp+69,(vlSelf->clk));
    bufp->chgBit(oldp+70,(vlSelf->rst));
    bufp->chgIData(oldp+71,(vlSelf->a0),32);
}

void VCPUTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root__trace_cleanup\n"); );
    // Init
    VCPUTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTOP___024root*>(voidSelf);
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
