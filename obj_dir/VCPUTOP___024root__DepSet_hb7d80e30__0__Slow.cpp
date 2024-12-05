// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTOP.h for the primary calling header

#include "verilated.h"

#include "VCPUTOP___024root.h"

extern const VlUnpacked<CData/*1:0*/, 256> VCPUTOP__ConstPool__TABLE_h725ef120_0;

VL_ATTR_COLD void VCPUTOP___024root___settle__TOP__0(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___settle__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->a0 = vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr
        [0xaU];
    vlSelf->CPUTOP__DOT__Result_W = ((0U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc_W))
                                      ? vlSelf->CPUTOP__DOT__ALUResult_W
                                      : ((1U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc_W))
                                          ? vlSelf->CPUTOP__DOT__ReadData_W
                                          : ((2U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc_W))
                                              ? vlSelf->CPUTOP__DOT__PCPlus4_W
                                              : 0U)));
    if ((0U == (IData)(vlSelf->CPUTOP__DOT__SizeSrc_M))) {
        vlSelf->CPUTOP__DOT__ReadData_M = ((vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                            [(0x1ffffU 
                                              & ((IData)(3U) 
                                                 + vlSelf->CPUTOP__DOT__ALUResult_M))] 
                                            << 0x18U) 
                                           | ((vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                               [(0x1ffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->CPUTOP__DOT__ALUResult_M))] 
                                               << 0x10U) 
                                              | ((vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->CPUTOP__DOT__ALUResult_M))] 
                                                  << 8U) 
                                                 | vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                                 [(0x1ffffU 
                                                   & vlSelf->CPUTOP__DOT__ALUResult_M)])));
    } else if ((1U == (IData)(vlSelf->CPUTOP__DOT__SizeSrc_M))) {
        if (vlSelf->CPUTOP__DOT__LoadSign_M) {
            if (vlSelf->CPUTOP__DOT__LoadSign_M) {
                vlSelf->CPUTOP__DOT__ReadData_M = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                                                   [
                                                                   (0x1ffffU 
                                                                    & ((IData)(1U) 
                                                                       + vlSelf->CPUTOP__DOT__ALUResult_M))] 
                                                                   >> 7U)))) 
                                                    << 0x10U) 
                                                   | ((vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->CPUTOP__DOT__ALUResult_M))] 
                                                       << 8U) 
                                                      | vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                                      [
                                                      (0x1ffffU 
                                                       & vlSelf->CPUTOP__DOT__ALUResult_M)]));
            }
        } else {
            vlSelf->CPUTOP__DOT__ReadData_M = ((vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->CPUTOP__DOT__ALUResult_M))] 
                                                << 8U) 
                                               | vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                               [(0x1ffffU 
                                                 & vlSelf->CPUTOP__DOT__ALUResult_M)]);
        }
    } else if ((2U == (IData)(vlSelf->CPUTOP__DOT__SizeSrc_M))) {
        if (vlSelf->CPUTOP__DOT__LoadSign_M) {
            if (vlSelf->CPUTOP__DOT__LoadSign_M) {
                vlSelf->CPUTOP__DOT__ReadData_M = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                                                   [
                                                                   (0x1ffffU 
                                                                    & vlSelf->CPUTOP__DOT__ALUResult_M)] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                                                   [
                                                   (0x1ffffU 
                                                    & vlSelf->CPUTOP__DOT__ALUResult_M)]);
            }
        } else {
            vlSelf->CPUTOP__DOT__ReadData_M = vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory
                [(0x1ffffU & vlSelf->CPUTOP__DOT__ALUResult_M)];
        }
    } else {
        vlSelf->CPUTOP__DOT__ReadData_M = 0U;
    }
    vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E = 0U;
    if ((((IData)(vlSelf->CPUTOP__DOT__RegWrite_M) 
          & (0U != (IData)(vlSelf->CPUTOP__DOT__rd_M))) 
         & ((IData)(vlSelf->CPUTOP__DOT__rd_M) == (IData)(vlSelf->CPUTOP__DOT__rs1_E)))) {
        vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E = 2U;
    }
    if ((((IData)(vlSelf->CPUTOP__DOT__RegWrite_W) 
          & (0U != (IData)(vlSelf->CPUTOP__DOT__rd_W))) 
         & ((IData)(vlSelf->CPUTOP__DOT__rd_W) == (IData)(vlSelf->CPUTOP__DOT__rs1_E)))) {
        vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E = 1U;
    }
    vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E = 0U;
    if ((((IData)(vlSelf->CPUTOP__DOT__RegWrite_M) 
          & (0U != (IData)(vlSelf->CPUTOP__DOT__rd_M))) 
         & ((IData)(vlSelf->CPUTOP__DOT__rd_M) == (IData)(vlSelf->CPUTOP__DOT__rs2_E)))) {
        vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E = 2U;
    }
    if ((((IData)(vlSelf->CPUTOP__DOT__RegWrite_W) 
          & (0U != (IData)(vlSelf->CPUTOP__DOT__rd_W))) 
         & ((IData)(vlSelf->CPUTOP__DOT__rd_W) == (IData)(vlSelf->CPUTOP__DOT__rs2_E)))) {
        vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E = 1U;
    }
    vlSelf->CPUTOP__DOT__LoadSign_D = 0U;
    vlSelf->CPUTOP__DOT__ALUSrcA_D = (IData)((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->CPUTOP__DOT__Instr_D)));
    vlSelf->CPUTOP__DOT__MemWrite_D = (IData)((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->CPUTOP__DOT__Instr_D)));
    vlSelf->CPUTOP__DOT__SizeSrc_D = 0U;
    if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D >> 6U)))) {
        if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                                  >> 2U)))) {
                        if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                            if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                                vlSelf->CPUTOP__DOT__LoadSign_D 
                                    = ((~ (vlSelf->CPUTOP__DOT__Instr_D 
                                           >> 0xeU)) 
                                       & (0x3000U != 
                                          (0x3000U 
                                           & vlSelf->CPUTOP__DOT__Instr_D)));
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->CPUTOP__DOT__Instr_D)) {
            if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                                  >> 2U)))) {
                        if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                            if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                                vlSelf->CPUTOP__DOT__SizeSrc_D 
                                    = ((0U == (7U & 
                                               (vlSelf->CPUTOP__DOT__Instr_D 
                                                >> 0xcU)))
                                        ? 2U : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->CPUTOP__DOT__Instr_D 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U));
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                              >> 2U)))) {
                    if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                            vlSelf->CPUTOP__DOT__SizeSrc_D 
                                = ((0x4000U & vlSelf->CPUTOP__DOT__Instr_D)
                                    ? ((0x2000U & vlSelf->CPUTOP__DOT__Instr_D)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->CPUTOP__DOT__Instr_D)
                                                 ? 1U
                                                 : 2U))
                                    : ((0x2000U & vlSelf->CPUTOP__DOT__Instr_D)
                                        ? 0U : ((0x1000U 
                                                 & vlSelf->CPUTOP__DOT__Instr_D)
                                                 ? 1U
                                                 : 2U)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 0U;
    if ((0x40U & vlSelf->CPUTOP__DOT__Instr_D)) {
        vlSelf->CPUTOP__DOT__RegWrite_D = (1U & (IData)(
                                                        ((0x20U 
                                                          == 
                                                          (0x30U 
                                                           & vlSelf->CPUTOP__DOT__Instr_D)) 
                                                         & ((8U 
                                                             & vlSelf->CPUTOP__DOT__Instr_D)
                                                             ? (IData)(
                                                                       (7U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->CPUTOP__DOT__Instr_D)))
                                                             : (IData)(
                                                                       (7U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->CPUTOP__DOT__Instr_D)))))));
        vlSelf->CPUTOP__DOT__ALUSrcB_D = (1U & (IData)(
                                                       (0x27U 
                                                        == 
                                                        (0x3fU 
                                                         & vlSelf->CPUTOP__DOT__Instr_D))));
        if ((0x20U & vlSelf->CPUTOP__DOT__Instr_D)) {
            if ((0x10U & vlSelf->CPUTOP__DOT__Instr_D)) {
                vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                vlSelf->CPUTOP__DOT__Branch_D = 2U;
                vlSelf->CPUTOP__DOT__Jump_D = 0U;
                vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
            } else if ((8U & vlSelf->CPUTOP__DOT__Instr_D)) {
                if ((4U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                            vlSelf->CPUTOP__DOT__ResultSrc_D = 2U;
                            vlSelf->CPUTOP__DOT__Jump_D = 2U;
                            vlSelf->CPUTOP__DOT__ALUControl_D = 0U;
                            vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 3U;
                        } else {
                            vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                            vlSelf->CPUTOP__DOT__Jump_D = 0U;
                            vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                            vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                        }
                    } else {
                        vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                        vlSelf->CPUTOP__DOT__Jump_D = 0U;
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                    }
                } else {
                    vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                    vlSelf->CPUTOP__DOT__Jump_D = 0U;
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                }
                vlSelf->CPUTOP__DOT__Branch_D = 2U;
            } else if ((4U & vlSelf->CPUTOP__DOT__Instr_D)) {
                if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        vlSelf->CPUTOP__DOT__ResultSrc_D = 2U;
                        vlSelf->CPUTOP__DOT__Jump_D = 3U;
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0U;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 0U;
                    } else {
                        vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                        vlSelf->CPUTOP__DOT__Jump_D = 0U;
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                    }
                } else {
                    vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                    vlSelf->CPUTOP__DOT__Jump_D = 0U;
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                }
                vlSelf->CPUTOP__DOT__Branch_D = 2U;
            } else {
                vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        vlSelf->CPUTOP__DOT__Branch_D 
                            = ((0x4000U & vlSelf->CPUTOP__DOT__Instr_D)
                                ? ((0x2000U & vlSelf->CPUTOP__DOT__Instr_D)
                                    ? ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)
                                        ? 7U : 6U) : 
                                   ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)
                                     ? 5U : 4U)) : 
                               ((0x2000U & vlSelf->CPUTOP__DOT__Instr_D)
                                 ? 2U : ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)
                                          ? 1U : 0U)));
                        vlSelf->CPUTOP__DOT__ALUControl_D = 1U;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 2U;
                    } else {
                        vlSelf->CPUTOP__DOT__Branch_D = 2U;
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                    }
                } else {
                    vlSelf->CPUTOP__DOT__Branch_D = 2U;
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                }
                vlSelf->CPUTOP__DOT__Jump_D = 0U;
            }
        } else {
            vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
            vlSelf->CPUTOP__DOT__Branch_D = 2U;
            vlSelf->CPUTOP__DOT__Jump_D = 0U;
            vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
            vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
        }
    } else {
        if ((0x20U & vlSelf->CPUTOP__DOT__Instr_D)) {
            vlSelf->CPUTOP__DOT__RegWrite_D = (1U & (IData)(
                                                            ((0x10U 
                                                              == 
                                                              (0x18U 
                                                               & vlSelf->CPUTOP__DOT__Instr_D)) 
                                                             & ((4U 
                                                                 & vlSelf->CPUTOP__DOT__Instr_D)
                                                                 ? 
                                                                ((vlSelf->CPUTOP__DOT__Instr_D 
                                                                  >> 1U) 
                                                                 & vlSelf->CPUTOP__DOT__Instr_D)
                                                                 : 
                                                                ((vlSelf->CPUTOP__DOT__Instr_D 
                                                                  >> 1U) 
                                                                 & vlSelf->CPUTOP__DOT__Instr_D)))));
            if ((0x10U & vlSelf->CPUTOP__DOT__Instr_D)) {
                vlSelf->CPUTOP__DOT__ALUSrcB_D = (1U 
                                                  & (IData)(
                                                            (7U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->CPUTOP__DOT__Instr_D))));
                if ((8U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                } else if ((4U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                            vlSelf->CPUTOP__DOT__ALUControl_D = 7U;
                            vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 4U;
                        } else {
                            vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                            vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                        }
                    } else {
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                    }
                } else if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        vlSelf->CPUTOP__DOT__ALUControl_D 
                            = ((0x4000U & vlSelf->CPUTOP__DOT__Instr_D)
                                ? ((0x2000U & vlSelf->CPUTOP__DOT__Instr_D)
                                    ? ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)
                                     ? ((0x40000000U 
                                         & vlSelf->CPUTOP__DOT__Instr_D)
                                         ? 0xaU : 9U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelf->CPUTOP__DOT__Instr_D)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->CPUTOP__DOT__Instr_D)
                                                    ? 5U
                                                    : 6U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->CPUTOP__DOT__Instr_D)
                                                    ? 8U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->CPUTOP__DOT__Instr_D)
                                                     ? 1U
                                                     : 0U))));
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 0U;
                    } else {
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                    }
                } else {
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                }
            } else {
                vlSelf->CPUTOP__DOT__ALUSrcB_D = (1U 
                                                  & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->CPUTOP__DOT__Instr_D))));
                if ((8U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                } else if ((4U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                } else if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0U;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 1U;
                    } else {
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                    }
                } else {
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                }
            }
            vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
        } else if ((0x10U & vlSelf->CPUTOP__DOT__Instr_D)) {
            vlSelf->CPUTOP__DOT__RegWrite_D = (1U & 
                                               ((~ 
                                                 (vlSelf->CPUTOP__DOT__Instr_D 
                                                  >> 3U)) 
                                                & ((4U 
                                                    & vlSelf->CPUTOP__DOT__Instr_D)
                                                    ? 
                                                   ((vlSelf->CPUTOP__DOT__Instr_D 
                                                     >> 1U) 
                                                    & vlSelf->CPUTOP__DOT__Instr_D)
                                                    : 
                                                   ((vlSelf->CPUTOP__DOT__Instr_D 
                                                     >> 1U) 
                                                    & vlSelf->CPUTOP__DOT__Instr_D))));
            vlSelf->CPUTOP__DOT__ALUSrcB_D = (1U & 
                                              ((~ (vlSelf->CPUTOP__DOT__Instr_D 
                                                   >> 3U)) 
                                               & ((4U 
                                                   & vlSelf->CPUTOP__DOT__Instr_D)
                                                   ? 
                                                  ((vlSelf->CPUTOP__DOT__Instr_D 
                                                    >> 1U) 
                                                   & vlSelf->CPUTOP__DOT__Instr_D)
                                                   : 
                                                  ((vlSelf->CPUTOP__DOT__Instr_D 
                                                    >> 1U) 
                                                   & vlSelf->CPUTOP__DOT__Instr_D))));
            vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
            if ((8U & vlSelf->CPUTOP__DOT__Instr_D)) {
                vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
            } else if ((4U & vlSelf->CPUTOP__DOT__Instr_D)) {
                if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0U;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 4U;
                    } else {
                        vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                        vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                    }
                } else {
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                }
            } else if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 0U;
                    if ((0x4000U & vlSelf->CPUTOP__DOT__Instr_D)) {
                        vlSelf->CPUTOP__DOT__ALUControl_D 
                            = ((0x2000U & vlSelf->CPUTOP__DOT__Instr_D)
                                ? ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelf->CPUTOP__DOT__Instr_D)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->CPUTOP__DOT__Instr_D)
                                                    ? 0xaU
                                                    : 9U)
                                                   : 4U));
                        if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)) {
                                vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 5U;
                            }
                        }
                    } else {
                        vlSelf->CPUTOP__DOT__ALUControl_D 
                            = ((0x2000U & vlSelf->CPUTOP__DOT__Instr_D)
                                ? ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)
                                    ? 5U : 6U) : ((0x1000U 
                                                   & vlSelf->CPUTOP__DOT__Instr_D)
                                                   ? 8U
                                                   : 0U));
                        if ((1U & (~ (vlSelf->CPUTOP__DOT__Instr_D 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->CPUTOP__DOT__Instr_D)) {
                                vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 5U;
                            }
                        }
                    }
                } else {
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                }
            } else {
                vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
            }
        } else {
            vlSelf->CPUTOP__DOT__RegWrite_D = (1U & (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->CPUTOP__DOT__Instr_D))));
            vlSelf->CPUTOP__DOT__ALUSrcB_D = (1U & (IData)(
                                                           (3U 
                                                            == 
                                                            (0xfU 
                                                             & vlSelf->CPUTOP__DOT__Instr_D))));
            if ((8U & vlSelf->CPUTOP__DOT__Instr_D)) {
                vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
            } else if ((4U & vlSelf->CPUTOP__DOT__Instr_D)) {
                vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
            } else if ((2U & vlSelf->CPUTOP__DOT__Instr_D)) {
                if ((1U & vlSelf->CPUTOP__DOT__Instr_D)) {
                    vlSelf->CPUTOP__DOT__ResultSrc_D = 1U;
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0U;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 0U;
                } else {
                    vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                    vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
                }
            } else {
                vlSelf->CPUTOP__DOT__ResultSrc_D = 0U;
                vlSelf->CPUTOP__DOT__ALUControl_D = 0xfU;
                vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = 7U;
            }
        }
        vlSelf->CPUTOP__DOT__Branch_D = 2U;
        vlSelf->CPUTOP__DOT__Jump_D = 0U;
    }
    vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E = 
        ((IData)(vlSelf->CPUTOP__DOT__ALUSrcA_E) ? vlSelf->CPUTOP__DOT__PC_E
          : ((0U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
              ? vlSelf->CPUTOP__DOT__RD1_E : ((1U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
                                               ? vlSelf->CPUTOP__DOT__Result_W
                                               : ((2U 
                                                   == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
                                                   ? vlSelf->CPUTOP__DOT__ALUResult_M
                                                   : vlSelf->CPUTOP__DOT__RD1_E))));
    vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardBData_E 
        = ((0U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E))
            ? vlSelf->CPUTOP__DOT__RD2_E : ((1U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E))
                                             ? vlSelf->CPUTOP__DOT__Result_W
                                             : ((2U 
                                                 == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E))
                                                 ? vlSelf->CPUTOP__DOT__ALUResult_M
                                                 : vlSelf->CPUTOP__DOT__RD2_E)));
    vlSelf->CPUTOP__DOT__ImmExt_D = ((4U & (IData)(vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D))
                                      ? ((2U & (IData)(vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->CPUTOP__DOT__Instr_D 
                                                      >> 0x14U))
                                                   : 
                                                  (0xfffff000U 
                                                   & vlSelf->CPUTOP__DOT__Instr_D)))
                                      : ((2U & (IData)(vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D))
                                          ? ((1U & (IData)(vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D))
                                              ? (((- (IData)(
                                                             (vlSelf->CPUTOP__DOT__Instr_D 
                                                              >> 0x1fU))) 
                                                  << 0x15U) 
                                                 | ((0x100000U 
                                                     & (vlSelf->CPUTOP__DOT__Instr_D 
                                                        >> 0xbU)) 
                                                    | ((0xff000U 
                                                        & vlSelf->CPUTOP__DOT__Instr_D) 
                                                       | ((0x800U 
                                                           & (vlSelf->CPUTOP__DOT__Instr_D 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->CPUTOP__DOT__Instr_D 
                                                                >> 0x14U))))))
                                              : (((- (IData)(
                                                             (vlSelf->CPUTOP__DOT__Instr_D 
                                                              >> 0x1fU))) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & (vlSelf->CPUTOP__DOT__Instr_D 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (vlSelf->CPUTOP__DOT__Instr_D 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->CPUTOP__DOT__Instr_D 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->CPUTOP__DOT__Instr_D 
                                                                >> 7U)))))))
                                          : ((1U & (IData)(vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D))
                                              ? (((- (IData)(
                                                             (vlSelf->CPUTOP__DOT__Instr_D 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->CPUTOP__DOT__Instr_D 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->CPUTOP__DOT__Instr_D 
                                                          >> 7U))))
                                              : (((- (IData)(
                                                             (vlSelf->CPUTOP__DOT__Instr_D 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->CPUTOP__DOT__Instr_D 
                                                    >> 0x14U)))));
    vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E = 
        ((IData)(vlSelf->CPUTOP__DOT__ALUSrcB_E) ? vlSelf->CPUTOP__DOT__ImmExt_E
          : vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardBData_E);
    vlSelf->CPUTOP__DOT__EXTop__DOT__signedLess_E = 
        VL_LTS_III(32, vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E, vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E);
    vlSelf->CPUTOP__DOT__EXTop__DOT__unsignedLess_E 
        = (vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
           < vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E);
    vlSelf->CPUTOP__DOT__ALUResult_E = 0U;
    vlSelf->CPUTOP__DOT__EXTop__DOT__Zero_E = 0U;
    if ((8U & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))) {
        vlSelf->CPUTOP__DOT__ALUResult_E = ((4U & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))
                                              ? ((1U 
                                                  & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))
                                                  ? 0U
                                                  : 
                                                 VL_SHIFTRS_III(32,32,5, vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E, 
                                                                (0x1fU 
                                                                 & vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)))
                                              : ((1U 
                                                  & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))
                                                  ? 
                                                 ((0x1fU 
                                                   >= vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)
                                                   ? 
                                                  (vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
                                                   >> vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)
                                                   : 0U)
                                                  : 
                                                 ((0x1fU 
                                                   >= vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)
                                                   ? 
                                                  (vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
                                                   << vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)
                                                   : 0U))));
    } else if ((4U & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))) {
        vlSelf->CPUTOP__DOT__ALUResult_E = ((2U & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))
                                             ? ((1U 
                                                 & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))
                                                 ? vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E
                                                 : 
                                                (VL_LTS_III(32, vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E, vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)
                                                  ? 1U
                                                  : 0U))
                                             : ((1U 
                                                 & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))
                                                 ? 
                                                ((vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
                                                  < vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
                                                 ^ vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)));
    } else if ((2U & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))) {
        vlSelf->CPUTOP__DOT__ALUResult_E = ((1U & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))
                                             ? (vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
                                                | vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E)
                                             : (vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
                                                & vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E));
    } else if ((1U & (IData)(vlSelf->CPUTOP__DOT__ALUControl_E))) {
        vlSelf->CPUTOP__DOT__ALUResult_E = (vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
                                            - vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E);
        vlSelf->CPUTOP__DOT__EXTop__DOT__Zero_E = (0U 
                                                   == vlSelf->CPUTOP__DOT__ALUResult_E);
    } else {
        vlSelf->CPUTOP__DOT__ALUResult_E = (vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E 
                                            + vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E);
    }
    __Vtableidx1 = (((IData)(vlSelf->CPUTOP__DOT__Jump_E) 
                     << 6U) | (((IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__Zero_E) 
                                << 5U) | (((IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__signedLess_E) 
                                           << 4U) | 
                                          (((IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__unsignedLess_E) 
                                            << 3U) 
                                           | (IData)(vlSelf->CPUTOP__DOT__Branch_E)))));
    vlSelf->CPUTOP__DOT__PCSrc_E = VCPUTOP__ConstPool__TABLE_h725ef120_0
        [__Vtableidx1];
}

VL_ATTR_COLD void VCPUTOP___024root___initial__TOP__0(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hbcb856d0__0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr = 0U;
    __Vtemp_hbcb856d0__0[0U] = 0x2e6d656dU;
    __Vtemp_hbcb856d0__0[1U] = 0x6d726f6dU;
    __Vtemp_hbcb856d0__0[2U] = 0x74724d65U;
    __Vtemp_hbcb856d0__0[3U] = 0x496e73U;
    vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NW(4, __Vtemp_hbcb856d0__0)
                                                                                , 
                                                                                std::string{"r"});
    if (VL_UNLIKELY((0U == vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file))) {
        VL_WRITEF("cannot open\357\274\232InstrMemrom.mem\n");
        VL_FINISH_MT("HexFileLoader.sv", 15, "");
    }
    while ((! (vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file ? feof(VL_CVT_I_FP(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file)) : true))) {
        vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__r 
            = VL_FSCANF_IX(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file,"%x\n",
                           32,&(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word)) ;
        if ((1U == vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__r)) {
            vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory[(0xfffU 
                                                                                & vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr)] 
                = (0xffU & vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word);
            vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory[(0xfffU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr))] 
                = (0xffU & (vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word 
                            >> 8U));
            vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory[(0xfffU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr))] 
                = (0xffU & (vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word 
                            >> 0x10U));
            vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory[(0xfffU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr))] 
                = (vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word 
                   >> 0x18U);
            vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr 
                = ((IData)(4U) + vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr);
            if (VL_UNLIKELY(VL_LTES_III(32, 0x1000U, vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr))) {
                VL_WRITEF("stackoverflow.com\n");
                VL_FINISH_MT("HexFileLoader.sv", 33, "");
            }
        }
    }
    VL_FCLOSE_I(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file); vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file = 0;
    vlSelf->CPUTOP__DOT__PC_F = 0xbfc00000U;
    __Vilp = 0U;
    while ((__Vilp <= 0xb1bU)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void VCPUTOP___024root___initial__TOP__1(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0xb1cU;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void VCPUTOP___024root___settle__TOP__1(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___settle__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0xb29U)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void VCPUTOP___024root___settle__TOP__2(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___settle__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0xb2aU;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->CPUTOP__DOT__IFTop__DOT__PCNext_F = ((0U 
                                                  == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->CPUTOP__DOT__PC_F)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                                                   ? 
                                                  (vlSelf->CPUTOP__DOT__PC_E 
                                                   + vlSelf->CPUTOP__DOT__ImmExt_E)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                                                    ? vlSelf->CPUTOP__DOT__ALUResult_E
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->CPUTOP__DOT__PC_F))));
    __Vilp = 0U;
    while ((__Vilp <= 0x64fU)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void VCPUTOP___024root___settle__TOP__3(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___settle__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0x650U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x179U)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void VCPUTOP___024root___settle__TOP__4(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___settle__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0x17aU;
    while ((__Vilp <= 0xca3U)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void VCPUTOP___024root___settle__TOP__5(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___settle__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0xca4U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory[__Vilp] 
            = vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void VCPUTOP___024root___eval_initial(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___eval_initial\n"); );
    // Body
    VCPUTOP___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VCPUTOP___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VCPUTOP___024root___eval_settle(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___eval_settle\n"); );
    // Body
    VCPUTOP___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VCPUTOP___024root___settle__TOP__1(vlSelf);
    VCPUTOP___024root___settle__TOP__2(vlSelf);
    VCPUTOP___024root___settle__TOP__3(vlSelf);
    VCPUTOP___024root___settle__TOP__4(vlSelf);
    VCPUTOP___024root___settle__TOP__5(vlSelf);
}

VL_ATTR_COLD void VCPUTOP___024root___final(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___final\n"); );
}

VL_ATTR_COLD void VCPUTOP___024root___ctor_var_reset(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__PC_F = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__Instr_D = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__PCPlus4_D = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__PC_D = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__RegWrite_D = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__MemWrite_D = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ALUSrcA_D = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ALUSrcB_D = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ALUControl_D = VL_RAND_RESET_I(4);
    vlSelf->CPUTOP__DOT__ResultSrc_D = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__SizeSrc_D = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__LoadSign_D = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__Branch_D = VL_RAND_RESET_I(3);
    vlSelf->CPUTOP__DOT__Jump_D = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__ImmExt_D = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__RegWrite_E = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__MemWrite_E = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ALUSrcA_E = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ALUSrcB_E = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ALUControl_E = VL_RAND_RESET_I(4);
    vlSelf->CPUTOP__DOT__ResultSrc_E = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__SizeSrc_E = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__LoadSign_E = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__Branch_E = VL_RAND_RESET_I(3);
    vlSelf->CPUTOP__DOT__Jump_E = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__ImmExt_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__RD1_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__RD2_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__rs1_E = VL_RAND_RESET_I(5);
    vlSelf->CPUTOP__DOT__rs2_E = VL_RAND_RESET_I(5);
    vlSelf->CPUTOP__DOT__rd_E = VL_RAND_RESET_I(5);
    vlSelf->CPUTOP__DOT__PCPlus4_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__PC_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__ALUResult_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__PCSrc_E = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__RegWrite_M = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__MemWrite_M = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ResultSrc_M = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__SizeSrc_M = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__LoadSign_M = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ALUResult_M = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__WriteData_M = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__rd_M = VL_RAND_RESET_I(5);
    vlSelf->CPUTOP__DOT__PCPlus4_M = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__ReadData_M = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__RegWrite_W = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__ResultSrc_W = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__ReadData_W = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__ALUResult_W = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__rd_W = VL_RAND_RESET_I(5);
    vlSelf->CPUTOP__DOT__PCPlus4_W = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__Result_W = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__IFTop__DOT__PCNext_F = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->CPUTOP__DOT__IFTop__DOT__Instr_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file = 0;
    vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E = VL_RAND_RESET_I(2);
    vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardBData_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E = VL_RAND_RESET_I(32);
    vlSelf->CPUTOP__DOT__EXTop__DOT__Zero_E = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__EXTop__DOT__unsignedLess_E = VL_RAND_RESET_I(1);
    vlSelf->CPUTOP__DOT__EXTop__DOT__signedLess_E = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
