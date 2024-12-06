// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtwo_waymisscache_ad__Syms.h"


VL_ATTR_COLD void Vtwo_waymisscache_ad___024root__trace_init_sub__TOP__0(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBit(c+42,"rst", false,-1);
    tracep->declBus(c+43,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+44,"Data", false,-1, 31,0);
    tracep->declBus(c+45,"Datamem_wire", false,-1, 31,0);
    tracep->declBit(c+46,"MemValid_wire", false,-1);
    tracep->declBit(c+47,"Hit", false,-1);
    tracep->declBit(c+48,"Miss", false,-1);
    tracep->declBit(c+49,"MemRead_wire", false,-1);
    tracep->declBit(c+50,"MemWrite_wire", false,-1);
    tracep->declBus(c+51,"MemAddress_wire", false,-1, 31,0);
    tracep->declBus(c+52,"MemWriteData_wire", false,-1, 31,0);
    tracep->pushNamePrefix("two_waymisscache_ad ");
    tracep->declBus(c+55,"NUM_SET", false,-1, 31,0);
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBit(c+42,"rst", false,-1);
    tracep->declBus(c+43,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+44,"Data", false,-1, 31,0);
    tracep->declBus(c+45,"Datamem_wire", false,-1, 31,0);
    tracep->declBit(c+46,"MemValid_wire", false,-1);
    tracep->declBit(c+47,"Hit", false,-1);
    tracep->declBit(c+48,"Miss", false,-1);
    tracep->declBit(c+49,"MemRead_wire", false,-1);
    tracep->declBit(c+50,"MemWrite_wire", false,-1);
    tracep->declBus(c+51,"MemAddress_wire", false,-1, 31,0);
    tracep->declBus(c+52,"MemWriteData_wire", false,-1, 31,0);
    tracep->pushNamePrefix("valid");
    tracep->pushNamePrefix("[0]");
    tracep->declBit(c+4,"[0]", false,-1);
    tracep->declBit(c+5,"[1]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBit(c+6,"[0]", false,-1);
    tracep->declBit(c+7,"[1]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBit(c+8,"[0]", false,-1);
    tracep->declBit(c+9,"[1]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBit(c+10,"[0]", false,-1);
    tracep->declBit(c+11,"[1]", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_cache");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+12,"[0]", false,-1, 27,0);
    tracep->declBus(c+13,"[1]", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+14,"[0]", false,-1, 27,0);
    tracep->declBus(c+15,"[1]", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+16,"[0]", false,-1, 27,0);
    tracep->declBus(c+17,"[1]", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+18,"[0]", false,-1, 27,0);
    tracep->declBus(c+19,"[1]", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_cache");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+20,"[0]", false,-1, 31,0);
    tracep->declBus(c+21,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+22,"[0]", false,-1, 31,0);
    tracep->declBus(c+23,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+24,"[0]", false,-1, 31,0);
    tracep->declBus(c+25,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+26,"[0]", false,-1, 31,0);
    tracep->declBus(c+27,"[1]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dirty_bit");
    tracep->pushNamePrefix("[0]");
    tracep->declBit(c+28,"[0]", false,-1);
    tracep->declBit(c+29,"[1]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBit(c+30,"[0]", false,-1);
    tracep->declBit(c+31,"[1]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBit(c+32,"[0]", false,-1);
    tracep->declBit(c+33,"[1]", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBit(c+34,"[0]", false,-1);
    tracep->declBit(c+35,"[1]", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+36,"latched_data", false,-1, 31,0);
    tracep->declBit(c+1,"Hit1", false,-1);
    tracep->declBit(c+2,"Hit0", false,-1);
    tracep->declBit(c+37,"MemWriteM", false,-1);
    tracep->declBit(c+38,"MemReadM", false,-1);
    tracep->declBus(c+39,"WriteDataM", false,-1, 31,0);
    tracep->declBit(c+3,"Miss_comb", false,-1);
    tracep->declBus(c+53,"Tag", false,-1, 27,0);
    tracep->declBus(c+54,"Set", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+40,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root__trace_init_top(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root__trace_init_top\n"); );
    // Body
    Vtwo_waymisscache_ad___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtwo_waymisscache_ad___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtwo_waymisscache_ad___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root__trace_register(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtwo_waymisscache_ad___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtwo_waymisscache_ad___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtwo_waymisscache_ad___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root__trace_full_sub_0(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root__trace_full_top_0\n"); );
    // Init
    Vtwo_waymisscache_ad___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_waymisscache_ad___024root*>(voidSelf);
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtwo_waymisscache_ad___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root__trace_full_sub_0(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_waymisscache_ad___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->two_waymisscache_ad__DOT__Hit1));
    bufp->fullBit(oldp+2,(vlSelf->two_waymisscache_ad__DOT__Hit0));
    bufp->fullBit(oldp+3,(vlSelf->two_waymisscache_ad__DOT__Miss_comb));
    bufp->fullBit(oldp+4,(vlSelf->two_waymisscache_ad__DOT__valid
                          [0U][0U]));
    bufp->fullBit(oldp+5,(vlSelf->two_waymisscache_ad__DOT__valid
                          [0U][1U]));
    bufp->fullBit(oldp+6,(vlSelf->two_waymisscache_ad__DOT__valid
                          [1U][0U]));
    bufp->fullBit(oldp+7,(vlSelf->two_waymisscache_ad__DOT__valid
                          [1U][1U]));
    bufp->fullBit(oldp+8,(vlSelf->two_waymisscache_ad__DOT__valid
                          [2U][0U]));
    bufp->fullBit(oldp+9,(vlSelf->two_waymisscache_ad__DOT__valid
                          [2U][1U]));
    bufp->fullBit(oldp+10,(vlSelf->two_waymisscache_ad__DOT__valid
                           [3U][0U]));
    bufp->fullBit(oldp+11,(vlSelf->two_waymisscache_ad__DOT__valid
                           [3U][1U]));
    bufp->fullIData(oldp+12,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                             [0U][0U]),28);
    bufp->fullIData(oldp+13,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                             [0U][1U]),28);
    bufp->fullIData(oldp+14,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                             [1U][0U]),28);
    bufp->fullIData(oldp+15,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                             [1U][1U]),28);
    bufp->fullIData(oldp+16,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                             [2U][0U]),28);
    bufp->fullIData(oldp+17,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                             [2U][1U]),28);
    bufp->fullIData(oldp+18,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                             [3U][0U]),28);
    bufp->fullIData(oldp+19,(vlSelf->two_waymisscache_ad__DOT__tag_cache
                             [3U][1U]),28);
    bufp->fullIData(oldp+20,(vlSelf->two_waymisscache_ad__DOT__data_cache
                             [0U][0U]),32);
    bufp->fullIData(oldp+21,(vlSelf->two_waymisscache_ad__DOT__data_cache
                             [0U][1U]),32);
    bufp->fullIData(oldp+22,(vlSelf->two_waymisscache_ad__DOT__data_cache
                             [1U][0U]),32);
    bufp->fullIData(oldp+23,(vlSelf->two_waymisscache_ad__DOT__data_cache
                             [1U][1U]),32);
    bufp->fullIData(oldp+24,(vlSelf->two_waymisscache_ad__DOT__data_cache
                             [2U][0U]),32);
    bufp->fullIData(oldp+25,(vlSelf->two_waymisscache_ad__DOT__data_cache
                             [2U][1U]),32);
    bufp->fullIData(oldp+26,(vlSelf->two_waymisscache_ad__DOT__data_cache
                             [3U][0U]),32);
    bufp->fullIData(oldp+27,(vlSelf->two_waymisscache_ad__DOT__data_cache
                             [3U][1U]),32);
    bufp->fullBit(oldp+28,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [0U][0U]));
    bufp->fullBit(oldp+29,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [0U][1U]));
    bufp->fullBit(oldp+30,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [1U][0U]));
    bufp->fullBit(oldp+31,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [1U][1U]));
    bufp->fullBit(oldp+32,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [2U][0U]));
    bufp->fullBit(oldp+33,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [2U][1U]));
    bufp->fullBit(oldp+34,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [3U][0U]));
    bufp->fullBit(oldp+35,(vlSelf->two_waymisscache_ad__DOT__dirty_bit
                           [3U][1U]));
    bufp->fullIData(oldp+36,(vlSelf->two_waymisscache_ad__DOT__latched_data),32);
    bufp->fullBit(oldp+37,(vlSelf->two_waymisscache_ad__DOT__MemWriteM));
    bufp->fullBit(oldp+38,(vlSelf->two_waymisscache_ad__DOT__MemReadM));
    bufp->fullIData(oldp+39,(vlSelf->two_waymisscache_ad__DOT__WriteDataM),32);
    bufp->fullIData(oldp+40,(vlSelf->two_waymisscache_ad__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+41,(vlSelf->clk));
    bufp->fullBit(oldp+42,(vlSelf->rst));
    bufp->fullIData(oldp+43,(vlSelf->ALUResultM),32);
    bufp->fullIData(oldp+44,(vlSelf->Data),32);
    bufp->fullIData(oldp+45,(vlSelf->Datamem_wire),32);
    bufp->fullBit(oldp+46,(vlSelf->MemValid_wire));
    bufp->fullBit(oldp+47,(vlSelf->Hit));
    bufp->fullBit(oldp+48,(vlSelf->Miss));
    bufp->fullBit(oldp+49,(vlSelf->MemRead_wire));
    bufp->fullBit(oldp+50,(vlSelf->MemWrite_wire));
    bufp->fullIData(oldp+51,(vlSelf->MemAddress_wire),32);
    bufp->fullIData(oldp+52,(vlSelf->MemWriteData_wire),32);
    bufp->fullIData(oldp+53,((vlSelf->ALUResultM >> 4U)),28);
    bufp->fullCData(oldp+54,((3U & (vlSelf->ALUResultM 
                                    >> 2U))),2);
    bufp->fullIData(oldp+55,(4U),32);
}
