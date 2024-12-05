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
        bufp->chgIData(oldp+0,(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file),32);
        bufp->chgIData(oldp+1,(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__r),32);
        bufp->chgIData(oldp+2,(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word),32);
        bufp->chgIData(oldp+3,(vlSelf->CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+4,(vlSelf->CPUTOP__DOT__PCPlus4_D),32);
        bufp->chgIData(oldp+5,(vlSelf->CPUTOP__DOT__PC_D),32);
        bufp->chgBit(oldp+6,(vlSelf->CPUTOP__DOT__ALUSrcA_E));
        bufp->chgBit(oldp+7,(vlSelf->CPUTOP__DOT__ALUSrcB_E));
        bufp->chgCData(oldp+8,(vlSelf->CPUTOP__DOT__ALUControl_E),4);
        bufp->chgCData(oldp+9,(vlSelf->CPUTOP__DOT__ResultSrc_E),2);
        bufp->chgBit(oldp+10,(vlSelf->CPUTOP__DOT__LoadSign_E));
        bufp->chgCData(oldp+11,(vlSelf->CPUTOP__DOT__Branch_E),3);
        bufp->chgCData(oldp+12,(vlSelf->CPUTOP__DOT__Jump_E),2);
        bufp->chgIData(oldp+13,(vlSelf->CPUTOP__DOT__ImmExt_E),32);
        bufp->chgIData(oldp+14,(vlSelf->CPUTOP__DOT__RD1_E),32);
        bufp->chgIData(oldp+15,(vlSelf->CPUTOP__DOT__RD2_E),32);
        bufp->chgCData(oldp+16,(vlSelf->CPUTOP__DOT__rs1_E),5);
        bufp->chgCData(oldp+17,(vlSelf->CPUTOP__DOT__rs2_E),5);
        bufp->chgIData(oldp+18,(vlSelf->CPUTOP__DOT__PCPlus4_E),32);
        bufp->chgIData(oldp+19,(vlSelf->CPUTOP__DOT__PC_E),32);
        bufp->chgIData(oldp+20,((vlSelf->CPUTOP__DOT__PC_E 
                                 + vlSelf->CPUTOP__DOT__ImmExt_E)),32);
        bufp->chgCData(oldp+21,(vlSelf->CPUTOP__DOT__ResultSrc_M),2);
        bufp->chgBit(oldp+22,(vlSelf->CPUTOP__DOT__LoadSign_M));
        bufp->chgIData(oldp+23,(vlSelf->CPUTOP__DOT__PCPlus4_M),32);
        bufp->chgCData(oldp+24,(vlSelf->CPUTOP__DOT__ResultSrc_W),2);
        bufp->chgIData(oldp+25,(vlSelf->CPUTOP__DOT__ReadData_W),32);
        bufp->chgIData(oldp+26,(vlSelf->CPUTOP__DOT__ALUResult_W),32);
        bufp->chgIData(oldp+27,(vlSelf->CPUTOP__DOT__PCPlus4_W),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+28,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[1]),32);
        bufp->chgIData(oldp+30,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[2]),32);
        bufp->chgIData(oldp+31,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[3]),32);
        bufp->chgIData(oldp+32,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[4]),32);
        bufp->chgIData(oldp+33,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[5]),32);
        bufp->chgIData(oldp+34,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[6]),32);
        bufp->chgIData(oldp+35,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[7]),32);
        bufp->chgIData(oldp+36,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[8]),32);
        bufp->chgIData(oldp+37,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[9]),32);
        bufp->chgIData(oldp+38,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[10]),32);
        bufp->chgIData(oldp+39,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[11]),32);
        bufp->chgIData(oldp+40,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[12]),32);
        bufp->chgIData(oldp+41,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[13]),32);
        bufp->chgIData(oldp+42,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[14]),32);
        bufp->chgIData(oldp+43,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[15]),32);
        bufp->chgIData(oldp+44,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[16]),32);
        bufp->chgIData(oldp+45,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[17]),32);
        bufp->chgIData(oldp+46,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[18]),32);
        bufp->chgIData(oldp+47,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[19]),32);
        bufp->chgIData(oldp+48,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[20]),32);
        bufp->chgIData(oldp+49,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[21]),32);
        bufp->chgIData(oldp+50,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[22]),32);
        bufp->chgIData(oldp+51,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[23]),32);
        bufp->chgIData(oldp+52,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[24]),32);
        bufp->chgIData(oldp+53,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[25]),32);
        bufp->chgIData(oldp+54,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[26]),32);
        bufp->chgIData(oldp+55,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[27]),32);
        bufp->chgIData(oldp+56,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[28]),32);
        bufp->chgIData(oldp+57,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[29]),32);
        bufp->chgIData(oldp+58,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[30]),32);
        bufp->chgIData(oldp+59,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+60,(vlSelf->CPUTOP__DOT__PC_F),32);
        bufp->chgIData(oldp+61,(((IData)(4U) + vlSelf->CPUTOP__DOT__PC_F)),32);
        bufp->chgIData(oldp+62,(((0xbfc00U == (vlSelf->CPUTOP__DOT__PC_F 
                                               >> 0xcU))
                                  ? ((vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory
                                      [(0xfffU & ((IData)(3U) 
                                                  + vlSelf->CPUTOP__DOT__PC_F))] 
                                      << 0x18U) | (
                                                   (vlSelf->CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory
                                                    [
                                                    (0xfffU 
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
                                  : 0U)),32);
        bufp->chgIData(oldp+63,(vlSelf->CPUTOP__DOT__Instr_D),32);
        bufp->chgBit(oldp+64,(vlSelf->CPUTOP__DOT__RegWrite_D));
        bufp->chgBit(oldp+65,(vlSelf->CPUTOP__DOT__MemWrite_D));
        bufp->chgBit(oldp+66,(vlSelf->CPUTOP__DOT__ALUSrcA_D));
        bufp->chgBit(oldp+67,(vlSelf->CPUTOP__DOT__ALUSrcB_D));
        bufp->chgCData(oldp+68,(vlSelf->CPUTOP__DOT__ALUControl_D),4);
        bufp->chgCData(oldp+69,(vlSelf->CPUTOP__DOT__ResultSrc_D),2);
        bufp->chgCData(oldp+70,(vlSelf->CPUTOP__DOT__SizeSrc_D),2);
        bufp->chgBit(oldp+71,(vlSelf->CPUTOP__DOT__LoadSign_D));
        bufp->chgCData(oldp+72,(vlSelf->CPUTOP__DOT__Branch_D),3);
        bufp->chgCData(oldp+73,(vlSelf->CPUTOP__DOT__Jump_D),2);
        bufp->chgIData(oldp+74,(vlSelf->CPUTOP__DOT__ImmExt_D),32);
        bufp->chgCData(oldp+75,((0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+77,((0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                          >> 7U))),5);
        bufp->chgBit(oldp+78,(vlSelf->CPUTOP__DOT__RegWrite_E));
        bufp->chgBit(oldp+79,(vlSelf->CPUTOP__DOT__MemWrite_E));
        bufp->chgCData(oldp+80,(vlSelf->CPUTOP__DOT__SizeSrc_E),2);
        bufp->chgCData(oldp+81,(vlSelf->CPUTOP__DOT__rd_E),5);
        bufp->chgIData(oldp+82,(vlSelf->CPUTOP__DOT__ALUResult_E),32);
        bufp->chgIData(oldp+83,(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardBData_E),32);
        bufp->chgCData(oldp+84,(vlSelf->CPUTOP__DOT__PCSrc_E),2);
        bufp->chgBit(oldp+85,(vlSelf->CPUTOP__DOT__RegWrite_M));
        bufp->chgBit(oldp+86,(vlSelf->CPUTOP__DOT__MemWrite_M));
        bufp->chgCData(oldp+87,(vlSelf->CPUTOP__DOT__SizeSrc_M),2);
        bufp->chgIData(oldp+88,(vlSelf->CPUTOP__DOT__ALUResult_M),32);
        bufp->chgIData(oldp+89,(vlSelf->CPUTOP__DOT__WriteData_M),32);
        bufp->chgCData(oldp+90,(vlSelf->CPUTOP__DOT__rd_M),5);
        bufp->chgIData(oldp+91,(vlSelf->CPUTOP__DOT__ReadData_M),32);
        bufp->chgBit(oldp+92,(vlSelf->CPUTOP__DOT__RegWrite_W));
        bufp->chgCData(oldp+93,(vlSelf->CPUTOP__DOT__rd_W),5);
        bufp->chgIData(oldp+94,(vlSelf->CPUTOP__DOT__Result_W),32);
        bufp->chgCData(oldp+95,(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E),2);
        bufp->chgCData(oldp+96,(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardB_E),2);
        bufp->chgIData(oldp+97,(vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputA_E),32);
        bufp->chgIData(oldp+98,(vlSelf->CPUTOP__DOT__EXTop__DOT__ALUInputB_E),32);
        bufp->chgBit(oldp+99,(vlSelf->CPUTOP__DOT__EXTop__DOT__Zero_E));
        bufp->chgBit(oldp+100,(vlSelf->CPUTOP__DOT__EXTop__DOT__unsignedLess_E));
        bufp->chgBit(oldp+101,(vlSelf->CPUTOP__DOT__EXTop__DOT__signedLess_E));
        bufp->chgCData(oldp+102,((0x7fU & vlSelf->CPUTOP__DOT__Instr_D)),7);
        bufp->chgIData(oldp+103,((vlSelf->CPUTOP__DOT__Instr_D 
                                  >> 7U)),25);
        bufp->chgCData(oldp+104,((7U & (vlSelf->CPUTOP__DOT__Instr_D 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+105,((vlSelf->CPUTOP__DOT__Instr_D 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+106,(vlSelf->CPUTOP__DOT__IDTop__DOT__ImmSrc_D),3);
        bufp->chgBit(oldp+107,((0xbfc00U == (vlSelf->CPUTOP__DOT__PC_F 
                                             >> 0xcU))));
        bufp->chgIData(oldp+108,((0x1ffffU & vlSelf->CPUTOP__DOT__ALUResult_M)),17);
    }
    bufp->chgBit(oldp+109,(vlSelf->clk));
    bufp->chgBit(oldp+110,(vlSelf->rst));
    bufp->chgIData(oldp+111,(vlSelf->a0),32);
    bufp->chgIData(oldp+112,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr
                             [(0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+113,(vlSelf->CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr
                             [(0x1fU & (vlSelf->CPUTOP__DOT__Instr_D 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+114,(((0U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
                               ? vlSelf->CPUTOP__DOT__RD1_E
                               : ((1U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
                                   ? vlSelf->CPUTOP__DOT__Result_W
                                   : ((2U == (IData)(vlSelf->CPUTOP__DOT__EXTop__DOT__ForwardA_E))
                                       ? vlSelf->CPUTOP__DOT__ALUResult_M
                                       : vlSelf->CPUTOP__DOT__RD1_E)))),32);
    bufp->chgIData(oldp+115,(((0U == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                               ? ((IData)(4U) + vlSelf->CPUTOP__DOT__PC_F)
                               : ((1U == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                                   ? (vlSelf->CPUTOP__DOT__PC_E 
                                      + vlSelf->CPUTOP__DOT__ImmExt_E)
                                   : ((2U == (IData)(vlSelf->CPUTOP__DOT__PCSrc_E))
                                       ? vlSelf->CPUTOP__DOT__ALUResult_E
                                       : ((IData)(4U) 
                                          + vlSelf->CPUTOP__DOT__PC_F))))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
