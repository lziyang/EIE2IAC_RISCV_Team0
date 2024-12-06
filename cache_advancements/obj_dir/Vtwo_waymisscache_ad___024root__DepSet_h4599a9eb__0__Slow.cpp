// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_waymisscache_ad.h for the primary calling header

#include "verilated.h"

#include "Vtwo_waymisscache_ad___024root.h"

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root___settle__TOP__0(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->MemAddress_wire = vlSelf->ALUResultM;
    vlSelf->MemWrite_wire = vlSelf->two_waymisscache_ad__DOT__MemWriteM;
    vlSelf->MemWriteData_wire = vlSelf->two_waymisscache_ad__DOT__WriteDataM;
    vlSelf->two_waymisscache_ad__DOT__Hit0 = (vlSelf->two_waymisscache_ad__DOT__valid
                                              [(3U 
                                                & (vlSelf->ALUResultM 
                                                   >> 2U))]
                                              [0U] 
                                              & ((vlSelf->ALUResultM 
                                                  >> 4U) 
                                                 == 
                                                 vlSelf->two_waymisscache_ad__DOT__tag_cache
                                                 [(3U 
                                                   & (vlSelf->ALUResultM 
                                                      >> 2U))]
                                                 [0U]));
    vlSelf->two_waymisscache_ad__DOT__Hit1 = (vlSelf->two_waymisscache_ad__DOT__valid
                                              [(3U 
                                                & (vlSelf->ALUResultM 
                                                   >> 2U))]
                                              [1U] 
                                              & ((vlSelf->ALUResultM 
                                                  >> 4U) 
                                                 == 
                                                 vlSelf->two_waymisscache_ad__DOT__tag_cache
                                                 [(3U 
                                                   & (vlSelf->ALUResultM 
                                                      >> 2U))]
                                                 [1U]));
    vlSelf->Hit = ((IData)(vlSelf->two_waymisscache_ad__DOT__Hit1) 
                   | (IData)(vlSelf->two_waymisscache_ad__DOT__Hit0));
    vlSelf->Data = 0U;
    vlSelf->two_waymisscache_ad__DOT__Miss_comb = 1U;
    if (vlSelf->two_waymisscache_ad__DOT__Hit0) {
        vlSelf->Data = vlSelf->two_waymisscache_ad__DOT__data_cache
            [(3U & (vlSelf->ALUResultM >> 2U))][0U];
        vlSelf->two_waymisscache_ad__DOT__Miss_comb = 0U;
    } else if (vlSelf->two_waymisscache_ad__DOT__Hit1) {
        vlSelf->Data = vlSelf->two_waymisscache_ad__DOT__data_cache
            [(3U & (vlSelf->ALUResultM >> 2U))][1U];
        vlSelf->two_waymisscache_ad__DOT__Miss_comb = 0U;
    }
    vlSelf->MemRead_wire = ((IData)(vlSelf->two_waymisscache_ad__DOT__Miss_comb) 
                            & (~ (IData)(vlSelf->two_waymisscache_ad__DOT__MemWriteM)));
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root___eval_initial(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root___eval_settle(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___eval_settle\n"); );
    // Body
    Vtwo_waymisscache_ad___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root___final(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___final\n"); );
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root___ctor_var_reset(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->Data = VL_RAND_RESET_I(32);
    vlSelf->Datamem_wire = VL_RAND_RESET_I(32);
    vlSelf->MemValid_wire = VL_RAND_RESET_I(1);
    vlSelf->Hit = VL_RAND_RESET_I(1);
    vlSelf->Miss = VL_RAND_RESET_I(1);
    vlSelf->MemRead_wire = VL_RAND_RESET_I(1);
    vlSelf->MemWrite_wire = VL_RAND_RESET_I(1);
    vlSelf->MemAddress_wire = VL_RAND_RESET_I(32);
    vlSelf->MemWriteData_wire = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->two_waymisscache_ad__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->two_waymisscache_ad__DOT__tag_cache[__Vi0][__Vi1] = VL_RAND_RESET_I(28);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->two_waymisscache_ad__DOT__data_cache[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->two_waymisscache_ad__DOT__dirty_bit[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->two_waymisscache_ad__DOT__latched_data = VL_RAND_RESET_I(32);
    vlSelf->two_waymisscache_ad__DOT__Hit1 = VL_RAND_RESET_I(1);
    vlSelf->two_waymisscache_ad__DOT__Hit0 = VL_RAND_RESET_I(1);
    vlSelf->two_waymisscache_ad__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->two_waymisscache_ad__DOT__MemReadM = VL_RAND_RESET_I(1);
    vlSelf->two_waymisscache_ad__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->two_waymisscache_ad__DOT__Miss_comb = VL_RAND_RESET_I(1);
    vlSelf->two_waymisscache_ad__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
