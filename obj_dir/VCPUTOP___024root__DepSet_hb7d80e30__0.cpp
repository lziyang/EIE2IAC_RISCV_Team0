// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTOP.h for the primary calling header

#include "verilated.h"

#include "VCPUTOP___024root.h"

VL_INLINE_OPT void VCPUTOP___024root___sequent__TOP__0(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->CPUTOP__DOT__LoadSign_M = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->CPUTOP__DOT__LoadSign_E));
    if (vlSelf->rst) {
        vlSelf->CPUTOP__DOT__Branch_E = 0U;
        vlSelf->CPUTOP__DOT__Jump_E = 0U;
        vlSelf->CPUTOP__DOT__ALUControl_E = 0U;
        vlSelf->CPUTOP__DOT__ImmExt_E = 0U;
        vlSelf->CPUTOP__DOT__PC_E = 0U;
        vlSelf->CPUTOP__DOT__ReadData_W = 0U;
        vlSelf->CPUTOP__DOT__ResultSrc_W = 0U;
        vlSelf->CPUTOP__DOT__PCPlus4_W = 0U;
        vlSelf->CPUTOP__DOT__ALUResult_W = 0U;
        vlSelf->CPUTOP__DOT__RD1_E = 0U;
        vlSelf->CPUTOP__DOT__RD2_E = 0U;
        vlSelf->CPUTOP__DOT__rs1_E = 0U;
        vlSelf->CPUTOP__DOT__rs2_E = 0U;
        vlSelf->CPUTOP__DOT__PC_D = 0U;
        vlSelf->CPUTOP__DOT__ResultSrc_M = 0U;
        vlSelf->CPUTOP__DOT__PCPlus4_M = 0U;
        vlSelf->CPUTOP__DOT__ResultSrc_E = 0U;
        vlSelf->CPUTOP__DOT__PCPlus4_E = 0U;
        vlSelf->CPUTOP__DOT__PCPlus4_D = 0U;
    } else {
        vlSelf->CPUTOP__DOT__Branch_E = vlSelf->CPUTOP__DOT__Branch_D;
        vlSelf->CPUTOP__DOT__Jump_E = vlSelf->CPUTOP__DOT__Jump_D;
        vlSelf->CPUTOP__DOT__ALUControl_E = vlSelf->CPUTOP__DOT__ALUControl_D;
        vlSelf->CPUTOP__DOT__ImmExt_E = vlSelf->CPUTOP__DOT__ImmExt_D;
        vlSelf->CPUTOP__DOT__PC_E = vlSelf->CPUTOP__DOT__PC_D;
        vlSelf->CPUTOP__DOT__ReadData_W = vlSelf->CPUTOP__DOT__ReadData_M;
        vlSelf->CPUTOP__DOT__ResultSrc_W = vlSelf->CPUTOP__DOT__ResultSrc_M;
        vlSelf->CPUTOP__DOT__PCPlus4_W = vlSelf->CPUTOP__DOT__PCPlus4_M;
        vlSelf->CPUTOP__DOT__ALUResult_W = vlSelf->CPUTOP__DOT__ALUResult_M;
        vlSelf->CPUTOP__DOT__RD1_E = vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr
            [(0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                       >> 0xfU))];
        vlSelf->CPUTOP__DOT__RD2_E = vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr
            [(0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                       >> 0x14U))];
        vlSelf->CPUTOP__DOT__rs1_E = (0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                               >> 0xfU));
        vlSelf->CPUTOP__DOT__rs2_E = (0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                               >> 0x14U));
        vlSelf->CPUTOP__DOT__PC_D = vlSelf->CPUTOP__DOT__PC_F;
        vlSelf->CPUTOP__DOT__ResultSrc_M = vlSelf->CPUTOP__DOT__ResultSrc_E;
        vlSelf->CPUTOP__DOT__PCPlus4_M = vlSelf->CPUTOP__DOT__PCPlus4_E;
        vlSelf->CPUTOP__DOT__ResultSrc_E = vlSelf->CPUTOP__DOT__ResultSrc_D;
        vlSelf->CPUTOP__DOT__PCPlus4_E = vlSelf->CPUTOP__DOT__PCPlus4_D;
        vlSelf->CPUTOP__DOT__PCPlus4_D = ((IData)(4U) 
                                          + vlSelf->CPUTOP__DOT__PC_F);
    }
    vlSelf->CPUTOP__DOT__ALUSrcB_E = ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->CPUTOP__DOT__ALUSrcB_D));
    vlSelf->CPUTOP__DOT__ALUSrcA_E = ((~ (IData)(vlSelf->rst)) 
                                      & (IData)(vlSelf->CPUTOP__DOT__ALUSrcA_D));
    vlSelf->CPUTOP__DOT__LoadSign_E = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->CPUTOP__DOT__LoadSign_D));
}

VL_INLINE_OPT void VCPUTOP___024root___sequent__TOP__1(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0;
    IData/*31:0*/ __Vdlyvval__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0;
    CData/*0:0*/ __Vdlyvset__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0;
    IData/*16:0*/ __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0;
    IData/*16:0*/ __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v1;
    IData/*16:0*/ __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v2;
    IData/*16:0*/ __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v3;
    IData/*16:0*/ __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4;
    CData/*7:0*/ __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4;
    CData/*0:0*/ __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4;
    IData/*16:0*/ __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v5;
    CData/*7:0*/ __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v5;
    IData/*16:0*/ __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6;
    CData/*7:0*/ __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6;
    CData/*0:0*/ __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6;
    // Body
    __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0 = 0U;
    __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4 = 0U;
    __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6 = 0U;
    __Vdlyvset__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0 = 0U;
    if (vlSelf->CPUTOP__DOT__MemWrite_M) {
        if ((0U == (IData)(vlSelf->CPUTOP__DOT__SizeSrc_M))) {
            __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0 
                = (0xffU & vlSelf->CPUTOP__DOT__WriteData_M);
            __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0 = 1U;
            __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0 
                = (0x1ffffU & vlSelf->CPUTOP__DOT__ALUResult_M);
            __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v1 
                = (0xffU & (vlSelf->CPUTOP__DOT__WriteData_M 
                            >> 8U));
            __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelf->CPUTOP__DOT__ALUResult_M));
            __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v2 
                = (0xffU & (vlSelf->CPUTOP__DOT__WriteData_M 
                            >> 0x10U));
            __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelf->CPUTOP__DOT__ALUResult_M));
            __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v3 
                = (vlSelf->CPUTOP__DOT__WriteData_M 
                   >> 0x18U);
            __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelf->CPUTOP__DOT__ALUResult_M));
        } else if ((1U == (IData)(vlSelf->CPUTOP__DOT__SizeSrc_M))) {
            __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4 
                = (0xffU & vlSelf->CPUTOP__DOT__WriteData_M);
            __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4 = 1U;
            __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4 
                = (0x1ffffU & vlSelf->CPUTOP__DOT__ALUResult_M);
            __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v5 
                = (0xffU & (vlSelf->CPUTOP__DOT__WriteData_M 
                            >> 8U));
            __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v5 
                = (0x1ffffU & ((IData)(1U) + vlSelf->CPUTOP__DOT__ALUResult_M));
        } else if ((2U == (IData)(vlSelf->CPUTOP__DOT__SizeSrc_M))) {
            __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6 
                = (0xffU & vlSelf->CPUTOP__DOT__WriteData_M);
            __Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6 = 1U;
            __Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6 
                = (0x1ffffU & vlSelf->CPUTOP__DOT__ALUResult_M);
        }
    }
    if (((IData)(vlSelf->CPUTOP__DOT__RegWrite_W) & 
         (0U != (IData)(vlSelf->CPUTOP__DOT__rd_W)))) {
        __Vdlyvval__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0 
            = vlSelf->CPUTOP__DOT__Result_W;
        __Vdlyvset__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0 = 1U;
        __Vdlyvdim0__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0 
            = vlSelf->CPUTOP__DOT__rd_W;
    }
    if (__Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0) {
        vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0] 
            = __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v0;
        vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v1] 
            = __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v1;
        vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v2] 
            = __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v2;
        vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v3] 
            = __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v3;
    }
    if (__Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4) {
        vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4] 
            = __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v4;
        vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v5] 
            = __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v5;
    }
    if (__Vdlyvset__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6) {
        vlSelf->CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory[__Vdlyvdim0__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6] 
            = __Vdlyvval__CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory__v6;
    }
    if (__Vdlyvset__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0) {
        vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[__Vdlyvdim0__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0] 
            = __Vdlyvval__CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr__v0;
    }
    vlSelf->a0 = vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr
        [0xaU];
}

extern const VlUnpacked<CData/*1:0*/, 256> VCPUTOP__ConstPool__TABLE_h725ef120_0;

VL_INLINE_OPT void VCPUTOP___024root___sequent__TOP__2(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___sequent__TOP__2\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->CPUTOP__DOT__Result_W = ((0U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc_W))
                                      ? vlSelf->CPUTOP__DOT__ALUResult_W
                                      : ((1U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc_W))
                                          ? vlSelf->CPUTOP__DOT__ReadData_W
                                          : ((2U == (IData)(vlSelf->CPUTOP__DOT__ResultSrc_W))
                                              ? vlSelf->CPUTOP__DOT__PCPlus4_W
                                              : 0U)));
    vlSelf->CPUTOP__DOT__MemWrite_M = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->CPUTOP__DOT__MemWrite_E));
    if (vlSelf->rst) {
        vlSelf->CPUTOP__DOT__SizeSrc_M = 0U;
        vlSelf->CPUTOP__DOT__WriteData_M = 0U;
        vlSelf->CPUTOP__DOT__ALUResult_M = 0U;
        vlSelf->CPUTOP__DOT__rd_W = 0U;
        vlSelf->CPUTOP__DOT__SizeSrc_E = 0U;
        vlSelf->CPUTOP__DOT__rd_M = 0U;
        vlSelf->CPUTOP__DOT__rd_E = 0U;
        vlSelf->CPUTOP__DOT__Instr_D = 0U;
        vlSelf->CPUTOP__DOT__PC_F = 0xbfc00000U;
    } else {
        vlSelf->CPUTOP__DOT__SizeSrc_M = vlSelf->CPUTOP__DOT__SizeSrc_E;
        vlSelf->CPUTOP__DOT__WriteData_M = vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardBData_E;
        vlSelf->CPUTOP__DOT__ALUResult_M = vlSelf->CPUTOP__DOT__ALUResult_E;
        vlSelf->CPUTOP__DOT__rd_W = vlSelf->CPUTOP__DOT__rd_M;
        vlSelf->CPUTOP__DOT__SizeSrc_E = vlSelf->CPUTOP__DOT__SizeSrc_D;
        vlSelf->CPUTOP__DOT__rd_M = vlSelf->CPUTOP__DOT__rd_E;
        vlSelf->CPUTOP__DOT__rd_E = (0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                              >> 7U));
        vlSelf->CPUTOP__DOT__Instr_D = ((0xbfc00U == 
                                         (vlSelf->CPUTOP__DOT__PC_F 
                                          >> 0xcU))
                                         ? ((vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory
                                             [(0xfffU 
                                               & ((IData)(3U) 
                                                  + vlSelf->CPUTOP__DOT__PC_F))] 
                                             << 0x18U) 
                                            | ((vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory
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
                                         : 0U);
        vlSelf->CPUTOP__DOT__PC_F = vlSelf->CPUTOP__DOT__IFTop__DOT__PCNext_F;
    }
    vlSelf->CPUTOP__DOT__RegWrite_W = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->CPUTOP__DOT__RegWrite_M));
    vlSelf->CPUTOP__DOT__MemWrite_E = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->CPUTOP__DOT__MemWrite_D));
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
    vlSelf->CPUTOP__DOT__RegWrite_M = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->CPUTOP__DOT__RegWrite_E));
    vlSelf->CPUTOP__DOT__RegWrite_E = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->CPUTOP__DOT__RegWrite_D));
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
}

void VCPUTOP___024root___eval(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VCPUTOP___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VCPUTOP___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VCPUTOP___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void VCPUTOP___024root___eval_debug_assertions(VCPUTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
