// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v5;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6;
    // Body
    __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4 = 0U;
    __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6 = 0U;
    __Vdlyvset__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0 = 0U;
    vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[6U] 
        = vlSelf->trigger;
    if (vlSelf->top__DOT__MemWrite) {
        if ((0U == (IData)(vlSelf->top__DOT__SizeSrc))) {
            __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0 
                = (0xffU & vlSelf->top__DOT__ALUTop__DOT__RD2);
            __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0 = 1U;
            __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0 
                = (0x1ffffU & vlSelf->top__DOT__ALUTop__DOT__ALUResult);
            __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v1 
                = (0xffU & (vlSelf->top__DOT__ALUTop__DOT__RD2 
                            >> 8U));
            __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUTop__DOT__ALUResult));
            __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v2 
                = (0xffU & (vlSelf->top__DOT__ALUTop__DOT__RD2 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUTop__DOT__ALUResult));
            __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v3 
                = (vlSelf->top__DOT__ALUTop__DOT__RD2 
                   >> 0x18U);
            __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUTop__DOT__ALUResult));
        } else if ((1U == (IData)(vlSelf->top__DOT__SizeSrc))) {
            __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4 
                = (0xffU & vlSelf->top__DOT__ALUTop__DOT__RD2);
            __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4 = 1U;
            __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4 
                = (0x1ffffU & vlSelf->top__DOT__ALUTop__DOT__ALUResult);
            __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v5 
                = (0xffU & (vlSelf->top__DOT__ALUTop__DOT__RD2 
                            >> 8U));
            __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v5 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUTop__DOT__ALUResult));
        } else if ((2U == (IData)(vlSelf->top__DOT__SizeSrc))) {
            __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6 
                = (0xffU & vlSelf->top__DOT__ALUTop__DOT__RD2);
            __Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6 = 1U;
            __Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6 
                = (0x1ffffU & vlSelf->top__DOT__ALUTop__DOT__ALUResult);
        }
    }
    if (((IData)(vlSelf->top__DOT__RegWrite) & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__Instr 
                                                    >> 7U))))) {
        __Vdlyvval__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0 
            = ((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                ? vlSelf->top__DOT__ALUTop__DOT__ALUResult
                : ((1U == (IData)(vlSelf->top__DOT__ResultSrc))
                    ? vlSelf->top__DOT__ALUTop__DOT__ReadData
                    : ((2U == (IData)(vlSelf->top__DOT__ResultSrc))
                        ? ((IData)(4U) + vlSelf->top__DOT__PC)
                        : 0U)));
        __Vdlyvset__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0 = 1U;
        __Vdlyvdim0__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0 
            = (0x1fU & (vlSelf->top__DOT__Instr >> 7U));
    }
    if (__Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0) {
        vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0] 
            = __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v0;
        vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v1] 
            = __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v1;
        vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v2] 
            = __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v2;
        vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v3] 
            = __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v3;
    }
    if (__Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4) {
        vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4] 
            = __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v4;
        vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v5] 
            = __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v5;
    }
    if (__Vdlyvset__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6) {
        vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6] 
            = __Vdlyvval__top__DOT__ALUTop__DOT__DataMemory__DOT__memory__v6;
    }
    if (__Vdlyvset__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0) {
        vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr[__Vdlyvdim0__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0] 
            = __Vdlyvval__top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr__v0;
    }
    vlSelf->a0 = vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr
        [0xaU];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__PCTop__DOT__PCNext);
    vlSelf->top__DOT__Instr = ((0xbfc00U == (vlSelf->top__DOT__PC 
                                             >> 0xcU))
                                ? ((vlSelf->top__DOT__InstrTop__DOT__InstructionMemory__DOT__Instr_memory
                                    [(0xfffU & ((IData)(3U) 
                                                + vlSelf->top__DOT__PC))] 
                                    << 0x18U) | ((vlSelf->top__DOT__InstrTop__DOT__InstructionMemory__DOT__Instr_memory
                                                  [
                                                  (0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__PC))] 
                                                  << 0x10U) 
                                                 | ((vlSelf->top__DOT__InstrTop__DOT__InstructionMemory__DOT__Instr_memory
                                                     [
                                                     (0xfffU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->top__DOT__PC))] 
                                                     << 8U) 
                                                    | vlSelf->top__DOT__InstrTop__DOT__InstructionMemory__DOT__Instr_memory
                                                    [
                                                    (0xfffU 
                                                     & vlSelf->top__DOT__PC)])))
                                : 0U);
    vlSelf->top__DOT__MemWrite = (IData)((0x23U == 
                                          (0x7fU & vlSelf->top__DOT__Instr)));
    vlSelf->top__DOT__LoadSign = 0U;
    vlSelf->top__DOT__SizeSrc = 0U;
    if ((1U & (~ (vlSelf->top__DOT__Instr >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__Instr >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__Instr >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__Instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__Instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__Instr)) {
                            if ((1U & vlSelf->top__DOT__Instr)) {
                                vlSelf->top__DOT__LoadSign 
                                    = ((~ (vlSelf->top__DOT__Instr 
                                           >> 0xeU)) 
                                       & (0x3000U != 
                                          (0x3000U 
                                           & vlSelf->top__DOT__Instr)));
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->top__DOT__Instr)) {
            if ((1U & (~ (vlSelf->top__DOT__Instr >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__Instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__Instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__Instr)) {
                            if ((1U & vlSelf->top__DOT__Instr)) {
                                vlSelf->top__DOT__SizeSrc 
                                    = ((0U == (7U & 
                                               (vlSelf->top__DOT__Instr 
                                                >> 0xcU)))
                                        ? 2U : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__Instr 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U));
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__Instr 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__Instr >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__Instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__Instr)) {
                        if ((1U & vlSelf->top__DOT__Instr)) {
                            vlSelf->top__DOT__SizeSrc 
                                = ((0x4000U & vlSelf->top__DOT__Instr)
                                    ? ((0x2000U & vlSelf->top__DOT__Instr)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->top__DOT__Instr)
                                                 ? 1U
                                                 : 2U))
                                    : ((0x2000U & vlSelf->top__DOT__Instr)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->top__DOT__Instr)
                                                 ? 1U
                                                 : 2U)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ALUTop__DOT__RD2 = vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr
        [(0x1fU & (vlSelf->top__DOT__Instr >> 0x14U))];
    vlSelf->top__DOT__ALUSrcA = (IData)((0x17U == (0x7fU 
                                                   & vlSelf->top__DOT__Instr)));
    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 0U;
    vlSelf->top__DOT__ALUTop__DOT__SrcA = ((IData)(vlSelf->top__DOT__ALUSrcA)
                                            ? vlSelf->top__DOT__PC
                                            : vlSelf->top__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr
                                           [(0x1fU 
                                             & (vlSelf->top__DOT__Instr 
                                                >> 0xfU))]);
    if ((0x40U & vlSelf->top__DOT__Instr)) {
        vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                   ((0x20U 
                                                     == 
                                                     (0x30U 
                                                      & vlSelf->top__DOT__Instr)) 
                                                    & ((8U 
                                                        & vlSelf->top__DOT__Instr)
                                                        ? (IData)(
                                                                  (7U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->top__DOT__Instr)))
                                                        : (IData)(
                                                                  (7U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->top__DOT__Instr)))))));
        if ((0x20U & vlSelf->top__DOT__Instr)) {
            if ((0x10U & vlSelf->top__DOT__Instr)) {
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            } else if ((8U & vlSelf->top__DOT__Instr)) {
                if ((4U & vlSelf->top__DOT__Instr)) {
                    if ((2U & vlSelf->top__DOT__Instr)) {
                        if ((1U & vlSelf->top__DOT__Instr)) {
                            vlSelf->top__DOT__ResultSrc = 2U;
                            vlSelf->top__DOT__ALUControl = 0U;
                            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 3U;
                        } else {
                            vlSelf->top__DOT__ResultSrc = 0U;
                            vlSelf->top__DOT__ALUControl = 0xfU;
                            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__ResultSrc = 0U;
                        vlSelf->top__DOT__ALUControl = 0xfU;
                        vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__ALUControl = 0xfU;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                }
            } else if ((4U & vlSelf->top__DOT__Instr)) {
                if ((2U & vlSelf->top__DOT__Instr)) {
                    if ((1U & vlSelf->top__DOT__Instr)) {
                        vlSelf->top__DOT__ResultSrc = 2U;
                        vlSelf->top__DOT__ALUControl = 0U;
                        vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 0U;
                    } else {
                        vlSelf->top__DOT__ResultSrc = 0U;
                        vlSelf->top__DOT__ALUControl = 0xfU;
                        vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__ALUControl = 0xfU;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelf->top__DOT__ResultSrc = 0U;
                if ((2U & vlSelf->top__DOT__Instr)) {
                    if ((1U & vlSelf->top__DOT__Instr)) {
                        vlSelf->top__DOT__ALUControl = 1U;
                        vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 2U;
                    } else {
                        vlSelf->top__DOT__ALUControl = 0xfU;
                        vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__ALUControl = 0xfU;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                }
            }
        } else {
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__ALUControl = 0xfU;
            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
        }
        vlSelf->top__DOT__ALUSrcB = (1U & (IData)((0x27U 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->top__DOT__Instr))));
    } else if ((0x20U & vlSelf->top__DOT__Instr)) {
        vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                   ((0x10U 
                                                     == 
                                                     (0x18U 
                                                      & vlSelf->top__DOT__Instr)) 
                                                    & ((4U 
                                                        & vlSelf->top__DOT__Instr)
                                                        ? 
                                                       ((vlSelf->top__DOT__Instr 
                                                         >> 1U) 
                                                        & vlSelf->top__DOT__Instr)
                                                        : 
                                                       ((vlSelf->top__DOT__Instr 
                                                         >> 1U) 
                                                        & vlSelf->top__DOT__Instr)))));
        vlSelf->top__DOT__ResultSrc = 0U;
        if ((0x10U & vlSelf->top__DOT__Instr)) {
            if ((8U & vlSelf->top__DOT__Instr)) {
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelf->top__DOT__Instr)) {
                if ((2U & vlSelf->top__DOT__Instr)) {
                    if ((1U & vlSelf->top__DOT__Instr)) {
                        vlSelf->top__DOT__ALUControl = 7U;
                        vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 4U;
                    } else {
                        vlSelf->top__DOT__ALUControl = 0xfU;
                        vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__ALUControl = 0xfU;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelf->top__DOT__Instr)) {
                if ((1U & vlSelf->top__DOT__Instr)) {
                    vlSelf->top__DOT__ALUControl = 
                        ((0x4000U & vlSelf->top__DOT__Instr)
                          ? ((0x2000U & vlSelf->top__DOT__Instr)
                              ? ((0x1000U & vlSelf->top__DOT__Instr)
                                  ? 2U : 3U) : ((0x1000U 
                                                 & vlSelf->top__DOT__Instr)
                                                 ? 
                                                ((0x40000000U 
                                                  & vlSelf->top__DOT__Instr)
                                                  ? 0xaU
                                                  : 9U)
                                                 : 4U))
                          : ((0x2000U & vlSelf->top__DOT__Instr)
                              ? ((0x1000U & vlSelf->top__DOT__Instr)
                                  ? 5U : 6U) : ((0x1000U 
                                                 & vlSelf->top__DOT__Instr)
                                                 ? 8U
                                                 : 
                                                ((0x40000000U 
                                                  & vlSelf->top__DOT__Instr)
                                                  ? 1U
                                                  : 0U))));
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 0U;
                } else {
                    vlSelf->top__DOT__ALUControl = 0xfU;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            }
            vlSelf->top__DOT__ALUSrcB = (1U & (IData)(
                                                      (7U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->top__DOT__Instr))));
        } else {
            if ((8U & vlSelf->top__DOT__Instr)) {
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelf->top__DOT__Instr)) {
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelf->top__DOT__Instr)) {
                if ((1U & vlSelf->top__DOT__Instr)) {
                    vlSelf->top__DOT__ALUControl = 0U;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 1U;
                } else {
                    vlSelf->top__DOT__ALUControl = 0xfU;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            }
            vlSelf->top__DOT__ALUSrcB = (1U & (IData)(
                                                      (3U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->top__DOT__Instr))));
        }
    } else if ((0x10U & vlSelf->top__DOT__Instr)) {
        vlSelf->top__DOT__RegWrite = (1U & ((~ (vlSelf->top__DOT__Instr 
                                                >> 3U)) 
                                            & ((4U 
                                                & vlSelf->top__DOT__Instr)
                                                ? (
                                                   (vlSelf->top__DOT__Instr 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__Instr)
                                                : (
                                                   (vlSelf->top__DOT__Instr 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__Instr))));
        vlSelf->top__DOT__ResultSrc = 0U;
        if ((8U & vlSelf->top__DOT__Instr)) {
            vlSelf->top__DOT__ALUControl = 0xfU;
            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
        } else if ((4U & vlSelf->top__DOT__Instr)) {
            if ((2U & vlSelf->top__DOT__Instr)) {
                if ((1U & vlSelf->top__DOT__Instr)) {
                    vlSelf->top__DOT__ALUControl = 0U;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 4U;
                } else {
                    vlSelf->top__DOT__ALUControl = 0xfU;
                    vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            }
        } else if ((2U & vlSelf->top__DOT__Instr)) {
            if ((1U & vlSelf->top__DOT__Instr)) {
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 0U;
                if ((0x4000U & vlSelf->top__DOT__Instr)) {
                    vlSelf->top__DOT__ALUControl = 
                        ((0x2000U & vlSelf->top__DOT__Instr)
                          ? ((0x1000U & vlSelf->top__DOT__Instr)
                              ? 2U : 3U) : ((0x1000U 
                                             & vlSelf->top__DOT__Instr)
                                             ? ((0x40000000U 
                                                 & vlSelf->top__DOT__Instr)
                                                 ? 0xaU
                                                 : 9U)
                                             : 4U));
                    if ((1U & (~ (vlSelf->top__DOT__Instr 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelf->top__DOT__Instr)) {
                            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 5U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__ALUControl = 
                        ((0x2000U & vlSelf->top__DOT__Instr)
                          ? ((0x1000U & vlSelf->top__DOT__Instr)
                              ? 5U : 6U) : ((0x1000U 
                                             & vlSelf->top__DOT__Instr)
                                             ? 8U : 0U));
                    if ((1U & (~ (vlSelf->top__DOT__Instr 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelf->top__DOT__Instr)) {
                            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 5U;
                        }
                    }
                }
            } else {
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelf->top__DOT__ALUControl = 0xfU;
            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
        }
        vlSelf->top__DOT__ALUSrcB = (1U & ((~ (vlSelf->top__DOT__Instr 
                                               >> 3U)) 
                                           & ((4U & vlSelf->top__DOT__Instr)
                                               ? ((vlSelf->top__DOT__Instr 
                                                   >> 1U) 
                                                  & vlSelf->top__DOT__Instr)
                                               : ((vlSelf->top__DOT__Instr 
                                                   >> 1U) 
                                                  & vlSelf->top__DOT__Instr))));
    } else {
        vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->top__DOT__Instr))));
        if ((8U & vlSelf->top__DOT__Instr)) {
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__ALUControl = 0xfU;
            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
        } else if ((4U & vlSelf->top__DOT__Instr)) {
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__ALUControl = 0xfU;
            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
        } else if ((2U & vlSelf->top__DOT__Instr)) {
            if ((1U & vlSelf->top__DOT__Instr)) {
                vlSelf->top__DOT__ResultSrc = 1U;
                vlSelf->top__DOT__ALUControl = 0U;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 0U;
            } else {
                vlSelf->top__DOT__ResultSrc = 0U;
                vlSelf->top__DOT__ALUControl = 0xfU;
                vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelf->top__DOT__ResultSrc = 0U;
            vlSelf->top__DOT__ALUControl = 0xfU;
            vlSelf->top__DOT__InstrTop__DOT__ImmSrc = 7U;
        }
        vlSelf->top__DOT__ALUSrcB = (1U & (IData)((3U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->top__DOT__Instr))));
    }
    vlSelf->top__DOT__ImmExt = ((4U & (IData)(vlSelf->top__DOT__InstrTop__DOT__ImmSrc))
                                 ? ((2U & (IData)(vlSelf->top__DOT__InstrTop__DOT__ImmSrc))
                                     ? 0U : ((1U & (IData)(vlSelf->top__DOT__InstrTop__DOT__ImmSrc))
                                              ? (0x1fU 
                                                 & (vlSelf->top__DOT__Instr 
                                                    >> 0x14U))
                                              : (0xfffff000U 
                                                 & vlSelf->top__DOT__Instr)))
                                 : ((2U & (IData)(vlSelf->top__DOT__InstrTop__DOT__ImmSrc))
                                     ? ((1U & (IData)(vlSelf->top__DOT__InstrTop__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & (vlSelf->top__DOT__Instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->top__DOT__Instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->top__DOT__Instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->top__DOT__Instr 
                                                           >> 0x14U))))))
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xdU) 
                                            | ((0x1000U 
                                                & (vlSelf->top__DOT__Instr 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->top__DOT__Instr 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->top__DOT__Instr 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->top__DOT__Instr 
                                                           >> 7U)))))))
                                     : ((1U & (IData)(vlSelf->top__DOT__InstrTop__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->top__DOT__Instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__Instr 
                                                     >> 7U))))
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->top__DOT__Instr 
                                               >> 0x14U)))));
    vlSelf->top__DOT__ALUTop__DOT__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcB)
                                            ? vlSelf->top__DOT__ImmExt
                                            : vlSelf->top__DOT__ALUTop__DOT__RD2);
    vlSelf->top__DOT__signedLess = VL_LTS_III(32, vlSelf->top__DOT__ALUTop__DOT__SrcA, vlSelf->top__DOT__ALUTop__DOT__SrcB);
    vlSelf->top__DOT__unsignedLess = (vlSelf->top__DOT__ALUTop__DOT__SrcA 
                                      < vlSelf->top__DOT__ALUTop__DOT__SrcB);
    vlSelf->top__DOT__ALUTop__DOT__ALUResult = 0U;
    vlSelf->top__DOT__Zero = 0U;
    if ((8U & (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUTop__DOT__ALUResult = 
            ((4U & (IData)(vlSelf->top__DOT__ALUControl))
              ? 0U : ((2U & (IData)(vlSelf->top__DOT__ALUControl))
                       ? ((1U & (IData)(vlSelf->top__DOT__ALUControl))
                           ? 0U : VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALUTop__DOT__SrcA, 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__ALUTop__DOT__SrcB)))
                       : ((1U & (IData)(vlSelf->top__DOT__ALUControl))
                           ? ((0x1fU >= vlSelf->top__DOT__ALUTop__DOT__SrcB)
                               ? (vlSelf->top__DOT__ALUTop__DOT__SrcA 
                                  >> vlSelf->top__DOT__ALUTop__DOT__SrcB)
                               : 0U) : ((0x1fU >= vlSelf->top__DOT__ALUTop__DOT__SrcB)
                                         ? (vlSelf->top__DOT__ALUTop__DOT__SrcA 
                                            << vlSelf->top__DOT__ALUTop__DOT__SrcB)
                                         : 0U))));
    } else if ((4U & (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUTop__DOT__ALUResult = 
            ((2U & (IData)(vlSelf->top__DOT__ALUControl))
              ? ((1U & (IData)(vlSelf->top__DOT__ALUControl))
                  ? vlSelf->top__DOT__ALUTop__DOT__SrcB
                  : (VL_LTS_III(32, vlSelf->top__DOT__ALUTop__DOT__SrcA, vlSelf->top__DOT__ALUTop__DOT__SrcB)
                      ? 1U : 0U)) : ((1U & (IData)(vlSelf->top__DOT__ALUControl))
                                      ? ((vlSelf->top__DOT__ALUTop__DOT__SrcA 
                                          < vlSelf->top__DOT__ALUTop__DOT__SrcB)
                                          ? 1U : 0U)
                                      : (vlSelf->top__DOT__ALUTop__DOT__SrcA 
                                         ^ vlSelf->top__DOT__ALUTop__DOT__SrcB)));
    } else if ((2U & (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUTop__DOT__ALUResult = 
            ((1U & (IData)(vlSelf->top__DOT__ALUControl))
              ? (vlSelf->top__DOT__ALUTop__DOT__SrcA 
                 | vlSelf->top__DOT__ALUTop__DOT__SrcB)
              : (vlSelf->top__DOT__ALUTop__DOT__SrcA 
                 & vlSelf->top__DOT__ALUTop__DOT__SrcB));
    } else if ((1U & (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUTop__DOT__ALUResult = 
            (vlSelf->top__DOT__ALUTop__DOT__SrcA - vlSelf->top__DOT__ALUTop__DOT__SrcB);
        vlSelf->top__DOT__Zero = (0U == vlSelf->top__DOT__ALUTop__DOT__ALUResult);
    } else {
        vlSelf->top__DOT__ALUTop__DOT__ALUResult = 
            (vlSelf->top__DOT__ALUTop__DOT__SrcA + vlSelf->top__DOT__ALUTop__DOT__SrcB);
    }
    vlSelf->top__DOT__PCSrc = ((0x40U & vlSelf->top__DOT__Instr)
                                ? ((0x20U & vlSelf->top__DOT__Instr)
                                    ? ((0x10U & vlSelf->top__DOT__Instr)
                                        ? 0U : ((8U 
                                                 & vlSelf->top__DOT__Instr)
                                                 ? 
                                                ((4U 
                                                  & vlSelf->top__DOT__Instr)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->top__DOT__Instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__Instr)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((4U 
                                                  & vlSelf->top__DOT__Instr)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->top__DOT__Instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__Instr)
                                                    ? 2U
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->top__DOT__Instr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->top__DOT__Instr)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__Instr)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__Instr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__Instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__unsignedLess)
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__unsignedLess)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__Instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__signedLess)
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__signedLess)
                                                        ? 1U
                                                        : 0U)))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__Instr)
                                                      ? 0U
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__Instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__Zero)
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__Zero)
                                                        ? 1U
                                                        : 0U))))
                                                    : 0U)
                                                   : 0U))))
                                    : 0U) : 0U);
    if ((0U == (IData)(vlSelf->top__DOT__SizeSrc))) {
        vlSelf->top__DOT__ALUTop__DOT__ReadData = (
                                                   (vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->top__DOT__ALUTop__DOT__ALUResult))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->top__DOT__ALUTop__DOT__ALUResult))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                                                          [
                                                          (0x1ffffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->top__DOT__ALUTop__DOT__ALUResult))] 
                                                          << 8U) 
                                                         | vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                                                         [
                                                         (0x1ffffU 
                                                          & vlSelf->top__DOT__ALUTop__DOT__ALUResult)])));
    } else if ((1U == (IData)(vlSelf->top__DOT__SizeSrc))) {
        if (vlSelf->top__DOT__LoadSign) {
            if (vlSelf->top__DOT__LoadSign) {
                vlSelf->top__DOT__ALUTop__DOT__ReadData 
                    = (((- (IData)((1U & (vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                                          [(0x1ffffU 
                                            & ((IData)(1U) 
                                               + vlSelf->top__DOT__ALUTop__DOT__ALUResult))] 
                                          >> 7U)))) 
                        << 0x10U) | ((vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                                      [(0x1ffffU & 
                                        ((IData)(1U) 
                                         + vlSelf->top__DOT__ALUTop__DOT__ALUResult))] 
                                      << 8U) | vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                                     [(0x1ffffU & vlSelf->top__DOT__ALUTop__DOT__ALUResult)]));
            }
        } else {
            vlSelf->top__DOT__ALUTop__DOT__ReadData 
                = ((vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                    [(0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUTop__DOT__ALUResult))] 
                    << 8U) | vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                   [(0x1ffffU & vlSelf->top__DOT__ALUTop__DOT__ALUResult)]);
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__SizeSrc))) {
        if (vlSelf->top__DOT__LoadSign) {
            if (vlSelf->top__DOT__LoadSign) {
                vlSelf->top__DOT__ALUTop__DOT__ReadData 
                    = (((- (IData)((1U & (vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                                          [(0x1ffffU 
                                            & vlSelf->top__DOT__ALUTop__DOT__ALUResult)] 
                                          >> 7U)))) 
                        << 8U) | vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                       [(0x1ffffU & vlSelf->top__DOT__ALUTop__DOT__ALUResult)]);
            }
        } else {
            vlSelf->top__DOT__ALUTop__DOT__ReadData 
                = vlSelf->top__DOT__ALUTop__DOT__DataMemory__DOT__memory
                [(0x1ffffU & vlSelf->top__DOT__ALUTop__DOT__ALUResult)];
        }
    } else {
        vlSelf->top__DOT__ALUTop__DOT__ReadData = 0U;
    }
    vlSelf->top__DOT__PCTop__DOT__PCNext = ((0U == (IData)(vlSelf->top__DOT__PCSrc))
                                             ? ((IData)(4U) 
                                                + vlSelf->top__DOT__PC)
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__PCSrc))
                                                 ? 
                                                (vlSelf->top__DOT__PC 
                                                 + vlSelf->top__DOT__ImmExt)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__PCSrc))
                                                  ? vlSelf->top__DOT__ALUTop__DOT__ALUResult
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
