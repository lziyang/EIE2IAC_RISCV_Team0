// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__Instr),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__ImmExt),32);
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__RegWrite));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__ALUSrcA));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__ALUSrcB));
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__PCSrc),2);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__ALUControl),4);
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__Zero));
        bufp->chgIData(oldp+41,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__MemWrite));
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__ResultSrc),2);
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__signedLess));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__unsignedLess));
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__ALUTop__DOT__ALUResult),32);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__SizeSrc),2);
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__LoadSign));
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->top__DOT__Instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->top__DOT__Instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+51,((0x1fU & (vlSelf->top__DOT__Instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__ALUTop__DOT__SrcA),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__ALUTop__DOT__SrcB),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__ALUTop__DOT__RD2),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__ALUTop__DOT__ReadData),32);
        bufp->chgIData(oldp+56,(((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                                  ? vlSelf->top__DOT__ALUTop__DOT__ALUResult
                                  : ((1U == (IData)(vlSelf->top__DOT__ResultSrc))
                                      ? vlSelf->top__DOT__ALUTop__DOT__ReadData
                                      : ((2U == (IData)(vlSelf->top__DOT__ResultSrc))
                                          ? ((IData)(4U) 
                                             + vlSelf->top__DOT__PC)
                                          : 0U)))),32);
        bufp->chgIData(oldp+57,((0x1ffffU & vlSelf->top__DOT__ALUTop__DOT__ALUResult)),17);
        bufp->chgCData(oldp+58,((0x7fU & vlSelf->top__DOT__Instr)),7);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__InstrTop__DOT__ImmSrc),3);
        bufp->chgIData(oldp+60,((vlSelf->top__DOT__Instr 
                                 >> 7U)),25);
        bufp->chgCData(oldp+61,((7U & (vlSelf->top__DOT__Instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+62,((vlSelf->top__DOT__Instr 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+63,((0xbfc00U == (vlSelf->top__DOT__PC 
                                            >> 0xcU))));
        bufp->chgIData(oldp+64,((vlSelf->top__DOT__PC 
                                 + vlSelf->top__DOT__ImmExt)),32);
        bufp->chgIData(oldp+65,(((0U == (IData)(vlSelf->top__DOT__PCSrc))
                                  ? ((IData)(4U) + vlSelf->top__DOT__PC)
                                  : ((1U == (IData)(vlSelf->top__DOT__PCSrc))
                                      ? (vlSelf->top__DOT__PC 
                                         + vlSelf->top__DOT__ImmExt)
                                      : ((2U == (IData)(vlSelf->top__DOT__PCSrc))
                                          ? vlSelf->top__DOT__ALUTop__DOT__ALUResult
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__PC))))),32);
    }
    bufp->chgBit(oldp+66,(vlSelf->clk));
    bufp->chgBit(oldp+67,(vlSelf->rst));
    bufp->chgBit(oldp+68,(vlSelf->trigger));
    bufp->chgIData(oldp+69,(vlSelf->a0),32);
    bufp->chgIData(oldp+70,(vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr
                            [(0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 0xfU))]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
