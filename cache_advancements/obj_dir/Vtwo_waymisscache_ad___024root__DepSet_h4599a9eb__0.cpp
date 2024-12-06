// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_waymisscache_ad.h for the primary calling header

#include "verilated.h"

#include "Vtwo_waymisscache_ad___024root.h"

VL_INLINE_OPT void Vtwo_waymisscache_ad___024root___combo__TOP__0(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->MemAddress_wire = vlSelf->ALUResultM;
}

VL_INLINE_OPT void Vtwo_waymisscache_ad___024root___sequent__TOP__0(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__Miss;
    CData/*0:0*/ __Vdlyvset__two_waymisscache_ad__DOT__valid__v0;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__valid__v8;
    CData/*0:0*/ __Vdlyvset__two_waymisscache_ad__DOT__valid__v8;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v0;
    IData/*27:0*/ __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v0;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v8;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v0;
    IData/*31:0*/ __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v0;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__valid__v9;
    CData/*0:0*/ __Vdlyvset__two_waymisscache_ad__DOT__valid__v9;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v1;
    IData/*27:0*/ __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v1;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v9;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v1;
    IData/*31:0*/ __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v1;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__valid__v10;
    CData/*0:0*/ __Vdlyvset__two_waymisscache_ad__DOT__valid__v10;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v2;
    IData/*27:0*/ __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v2;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v2;
    IData/*31:0*/ __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v2;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v10;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__valid__v11;
    CData/*0:0*/ __Vdlyvset__two_waymisscache_ad__DOT__valid__v11;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v3;
    IData/*27:0*/ __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v3;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v3;
    IData/*31:0*/ __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v3;
    CData/*1:0*/ __Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v11;
    // Body
    __Vdly__Miss = vlSelf->Miss;
    __Vdlyvset__two_waymisscache_ad__DOT__valid__v0 = 0U;
    __Vdlyvset__two_waymisscache_ad__DOT__valid__v8 = 0U;
    __Vdlyvset__two_waymisscache_ad__DOT__valid__v9 = 0U;
    __Vdlyvset__two_waymisscache_ad__DOT__valid__v10 = 0U;
    __Vdlyvset__two_waymisscache_ad__DOT__valid__v11 = 0U;
    __Vdly__Miss = vlSelf->two_waymisscache_ad__DOT__Miss_comb;
    if (vlSelf->rst) {
        vlSelf->two_waymisscache_ad__DOT__unnamedblk1__DOT__i = 4U;
        __Vdlyvset__two_waymisscache_ad__DOT__valid__v0 = 1U;
    } else if (((IData)(vlSelf->Miss) & (IData)(vlSelf->MemValid_wire))) {
        if (vlSelf->two_waymisscache_ad__DOT__valid
            [(3U & (vlSelf->ALUResultM >> 2U))][0U]) {
            if (vlSelf->two_waymisscache_ad__DOT__valid
                [(3U & (vlSelf->ALUResultM >> 2U))]
                [1U]) {
                if (vlSelf->two_waymisscache_ad__DOT__dirty_bit
                    [(3U & (vlSelf->ALUResultM >> 2U))]
                    [0U]) {
                    vlSelf->two_waymisscache_ad__DOT__MemWriteM = 1U;
                    vlSelf->two_waymisscache_ad__DOT__MemReadM = 0U;
                    vlSelf->two_waymisscache_ad__DOT__WriteDataM 
                        = vlSelf->two_waymisscache_ad__DOT__data_cache
                        [(3U & (vlSelf->ALUResultM 
                                >> 2U))][0U];
                    __Vdlyvset__two_waymisscache_ad__DOT__valid__v8 = 1U;
                    __Vdlyvdim0__two_waymisscache_ad__DOT__valid__v8 
                        = (3U & (vlSelf->ALUResultM 
                                 >> 2U));
                    __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v0 
                        = (vlSelf->ALUResultM >> 4U);
                    __Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v0 
                        = (3U & (vlSelf->ALUResultM 
                                 >> 2U));
                    __Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v8 
                        = (3U & (vlSelf->ALUResultM 
                                 >> 2U));
                    __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v0 
                        = vlSelf->two_waymisscache_ad__DOT__latched_data;
                    __Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v0 
                        = (3U & (vlSelf->ALUResultM 
                                 >> 2U));
                } else if (vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [(3U & (vlSelf->ALUResultM 
                                   >> 2U))][1U]) {
                    vlSelf->two_waymisscache_ad__DOT__MemWriteM = 1U;
                    vlSelf->two_waymisscache_ad__DOT__MemReadM = 0U;
                    vlSelf->two_waymisscache_ad__DOT__WriteDataM 
                        = vlSelf->two_waymisscache_ad__DOT__data_cache
                        [(3U & (vlSelf->ALUResultM 
                                >> 2U))][1U];
                    __Vdlyvset__two_waymisscache_ad__DOT__valid__v9 = 1U;
                    __Vdlyvdim0__two_waymisscache_ad__DOT__valid__v9 
                        = (3U & (vlSelf->ALUResultM 
                                 >> 2U));
                    __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v1 
                        = (vlSelf->ALUResultM >> 4U);
                    __Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v1 
                        = (3U & (vlSelf->ALUResultM 
                                 >> 2U));
                    __Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v9 
                        = (3U & (vlSelf->ALUResultM 
                                 >> 2U));
                    __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v1 
                        = vlSelf->two_waymisscache_ad__DOT__latched_data;
                    __Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v1 
                        = (3U & (vlSelf->ALUResultM 
                                 >> 2U));
                }
            } else {
                __Vdlyvset__two_waymisscache_ad__DOT__valid__v10 = 1U;
                __Vdlyvdim0__two_waymisscache_ad__DOT__valid__v10 
                    = (3U & (vlSelf->ALUResultM >> 2U));
                __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v2 
                    = (vlSelf->ALUResultM >> 4U);
                __Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v2 
                    = (3U & (vlSelf->ALUResultM >> 2U));
                __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v2 
                    = vlSelf->two_waymisscache_ad__DOT__latched_data;
                __Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v2 
                    = (3U & (vlSelf->ALUResultM >> 2U));
                __Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v10 
                    = (3U & (vlSelf->ALUResultM >> 2U));
            }
        } else {
            __Vdlyvset__two_waymisscache_ad__DOT__valid__v11 = 1U;
            __Vdlyvdim0__two_waymisscache_ad__DOT__valid__v11 
                = (3U & (vlSelf->ALUResultM >> 2U));
            __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v3 
                = (vlSelf->ALUResultM >> 4U);
            __Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v3 
                = (3U & (vlSelf->ALUResultM >> 2U));
            __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v3 
                = vlSelf->two_waymisscache_ad__DOT__latched_data;
            __Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v3 
                = (3U & (vlSelf->ALUResultM >> 2U));
            __Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v11 
                = (3U & (vlSelf->ALUResultM >> 2U));
        }
        __Vdly__Miss = 0U;
        vlSelf->two_waymisscache_ad__DOT__latched_data 
            = vlSelf->Datamem_wire;
    }
    vlSelf->Miss = __Vdly__Miss;
    if (__Vdlyvset__two_waymisscache_ad__DOT__valid__v0) {
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[0U][0U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[0U][1U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[1U][0U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[1U][1U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[2U][0U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[2U][1U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[3U][0U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[3U][1U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__valid[0U][0U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__valid[0U][1U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__valid[1U][0U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__valid[1U][1U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__valid[2U][0U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__valid[2U][1U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__valid[3U][0U] = 0U;
        vlSelf->two_waymisscache_ad__DOT__valid[3U][1U] = 0U;
    }
    if (__Vdlyvset__two_waymisscache_ad__DOT__valid__v8) {
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[__Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v8][0U] = 1U;
        vlSelf->two_waymisscache_ad__DOT__valid[__Vdlyvdim0__two_waymisscache_ad__DOT__valid__v8][0U] = 1U;
        vlSelf->two_waymisscache_ad__DOT__data_cache[__Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v0][0U] 
            = __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v0;
        vlSelf->two_waymisscache_ad__DOT__tag_cache[__Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v0][0U] 
            = __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v0;
    }
    if (__Vdlyvset__two_waymisscache_ad__DOT__valid__v9) {
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[__Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v9][1U] = 1U;
        vlSelf->two_waymisscache_ad__DOT__valid[__Vdlyvdim0__two_waymisscache_ad__DOT__valid__v9][1U] = 1U;
        vlSelf->two_waymisscache_ad__DOT__data_cache[__Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v1][1U] 
            = __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v1;
        vlSelf->two_waymisscache_ad__DOT__tag_cache[__Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v1][1U] 
            = __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v1;
    }
    if (__Vdlyvset__two_waymisscache_ad__DOT__valid__v10) {
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[__Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v10][1U] = 1U;
        vlSelf->two_waymisscache_ad__DOT__valid[__Vdlyvdim0__two_waymisscache_ad__DOT__valid__v10][1U] = 1U;
        vlSelf->two_waymisscache_ad__DOT__data_cache[__Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v2][1U] 
            = __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v2;
        vlSelf->two_waymisscache_ad__DOT__tag_cache[__Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v2][1U] 
            = __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v2;
    }
    if (__Vdlyvset__two_waymisscache_ad__DOT__valid__v11) {
        vlSelf->two_waymisscache_ad__DOT__dirty_bit[__Vdlyvdim0__two_waymisscache_ad__DOT__dirty_bit__v11][0U] = 1U;
        vlSelf->two_waymisscache_ad__DOT__valid[__Vdlyvdim0__two_waymisscache_ad__DOT__valid__v11][0U] = 1U;
        vlSelf->two_waymisscache_ad__DOT__data_cache[__Vdlyvdim0__two_waymisscache_ad__DOT__data_cache__v3][0U] 
            = __Vdlyvval__two_waymisscache_ad__DOT__data_cache__v3;
        vlSelf->two_waymisscache_ad__DOT__tag_cache[__Vdlyvdim0__two_waymisscache_ad__DOT__tag_cache__v3][0U] 
            = __Vdlyvval__two_waymisscache_ad__DOT__tag_cache__v3;
    }
    vlSelf->MemWriteData_wire = vlSelf->two_waymisscache_ad__DOT__WriteDataM;
    vlSelf->MemWrite_wire = vlSelf->two_waymisscache_ad__DOT__MemWriteM;
}

VL_INLINE_OPT void Vtwo_waymisscache_ad___024root___combo__TOP__1(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___combo__TOP__1\n"); );
    // Body
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

void Vtwo_waymisscache_ad___024root___eval(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___eval\n"); );
    // Body
    Vtwo_waymisscache_ad___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtwo_waymisscache_ad___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtwo_waymisscache_ad___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtwo_waymisscache_ad___024root___eval_debug_assertions(Vtwo_waymisscache_ad___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->MemValid_wire & 0xfeU))) {
        Verilated::overWidthError("MemValid_wire");}
}
#endif  // VL_DEBUG
