// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtwo_waymisscache_ad__Syms.h"


void Vtwo_waymisscache_ad___024root__trace_chg_sub_0(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtwo_waymisscache_ad___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root__trace_chg_top_0\n"); );
    // Init
    Vtwo_waymisscache_ad___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_waymisscache_ad___024root*>(voidSelf);
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtwo_waymisscache_ad___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtwo_waymisscache_ad___024root__trace_chg_sub_0(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->two_waymisscache_ad__DOT__Hit1));
        bufp->chgBit(oldp+1,(vlSelf->two_waymisscache_ad__DOT__Hit0));
        bufp->chgBit(oldp+2,(vlSelf->two_waymisscache_ad__DOT__Miss_comb));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+3,(vlSelf->two_waymisscache_ad__DOT__valid
                             [0U][0U]));
        bufp->chgBit(oldp+4,(vlSelf->two_waymisscache_ad__DOT__valid
                             [0U][1U]));
        bufp->chgBit(oldp+5,(vlSelf->two_waymisscache_ad__DOT__valid
                             [1U][0U]));
        bufp->chgBit(oldp+6,(vlSelf->two_waymisscache_ad__DOT__valid
                             [1U][1U]));
        bufp->chgBit(oldp+7,(vlSelf->two_waymisscache_ad__DOT__valid
                             [2U][0U]));
        bufp->chgBit(oldp+8,(vlSelf->two_waymisscache_ad__DOT__valid
                             [2U][1U]));
        bufp->chgBit(oldp+9,(vlSelf->two_waymisscache_ad__DOT__valid
                             [3U][0U]));
        bufp->chgBit(oldp+10,(vlSelf->two_waymisscache_ad__DOT__valid
                              [3U][1U]));
        bufp->chgIData(oldp+11,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                                [0U][0U]),28);
        bufp->chgIData(oldp+12,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                                [0U][1U]),28);
        bufp->chgIData(oldp+13,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                                [1U][0U]),28);
        bufp->chgIData(oldp+14,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                                [1U][1U]),28);
        bufp->chgIData(oldp+15,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                                [2U][0U]),28);
        bufp->chgIData(oldp+16,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                                [2U][1U]),28);
        bufp->chgIData(oldp+17,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                                [3U][0U]),28);
        bufp->chgIData(oldp+18,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                                [3U][1U]),28);
        bufp->chgIData(oldp+19,(vlSelf->two_waymisscache_ad__DOT__data_cache
                                [0U][0U]),32);
        bufp->chgIData(oldp+20,(vlSelf->two_waymisscache_ad__DOT__data_cache
                                [0U][1U]),32);
        bufp->chgIData(oldp+21,(vlSelf->two_waymisscache_ad__DOT__data_cache
                                [1U][0U]),32);
        bufp->chgIData(oldp+22,(vlSelf->two_waymisscache_ad__DOT__data_cache
                                [1U][1U]),32);
        bufp->chgIData(oldp+23,(vlSelf->two_waymisscache_ad__DOT__data_cache
                                [2U][0U]),32);
        bufp->chgIData(oldp+24,(vlSelf->two_waymisscache_ad__DOT__data_cache
                                [2U][1U]),32);
        bufp->chgIData(oldp+25,(vlSelf->two_waymisscache_ad__DOT__data_cache
                                [3U][0U]),32);
        bufp->chgIData(oldp+26,(vlSelf->two_waymisscache_ad__DOT__data_cache
                                [3U][1U]),32);
        bufp->chgBit(oldp+27,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                              [0U][0U]));
        bufp->chgBit(oldp+28,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                              [0U][1U]));
        bufp->chgBit(oldp+29,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                              [1U][0U]));
        bufp->chgBit(oldp+30,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                              [1U][1U]));
        bufp->chgBit(oldp+31,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                              [2U][0U]));
        bufp->chgBit(oldp+32,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                              [2U][1U]));
        bufp->chgBit(oldp+33,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                              [3U][0U]));
        bufp->chgBit(oldp+34,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                              [3U][1U]));
        bufp->chgIData(oldp+35,(vlSelf->two_waymisscache_ad__DOT__latched_data),32);
        bufp->chgBit(oldp+36,(vlSelf->two_waymisscache_ad__DOT__MemWriteM));
        bufp->chgBit(oldp+37,(vlSelf->two_waymisscache_ad__DOT__MemReadM));
        bufp->chgIData(oldp+38,(vlSelf->two_waymisscache_ad__DOT__WriteDataM),32);
        bufp->chgIData(oldp+39,(vlSelf->two_waymisscache_ad__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+40,(vlSelf->clk));
    bufp->chgBit(oldp+41,(vlSelf->rst));
    bufp->chgIData(oldp+42,(vlSelf->ALUResultM),32);
    bufp->chgIData(oldp+43,(vlSelf->Data),32);
    bufp->chgIData(oldp+44,(vlSelf->Datamem_wire),32);
    bufp->chgBit(oldp+45,(vlSelf->MemValid_wire));
    bufp->chgBit(oldp+46,(vlSelf->Hit));
    bufp->chgBit(oldp+47,(vlSelf->Miss));
    bufp->chgBit(oldp+48,(vlSelf->MemRead_wire));
    bufp->chgBit(oldp+49,(vlSelf->MemWrite_wire));
    bufp->chgIData(oldp+50,(vlSelf->MemAddress_wire),32);
    bufp->chgIData(oldp+51,(vlSelf->MemWriteData_wire),32);
    bufp->chgIData(oldp+52,((vlSelf->ALUResultM >> 4U)),28);
    bufp->chgCData(oldp+53,((3U & (vlSelf->ALUResultM 
                                   >> 2U))),2);
}

void Vtwo_waymisscache_ad___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root__trace_cleanup\n"); );
    // Init
    Vtwo_waymisscache_ad___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_waymisscache_ad___024root*>(voidSelf);
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
