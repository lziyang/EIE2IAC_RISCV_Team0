// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtwo_waymisscache_ad.h for the primary calling header

#ifndef VERILATED_VTWO_WAYMISSCACHE_AD___024ROOT_H_
#define VERILATED_VTWO_WAYMISSCACHE_AD___024ROOT_H_  // guard

#include "verilated.h"

class Vtwo_waymisscache_ad__Syms;

class Vtwo_waymisscache_ad___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(MemValid_wire,0,0);
    VL_OUT8(Hit,0,0);
    VL_OUT8(Miss,0,0);
    VL_OUT8(MemRead_wire,0,0);
    VL_OUT8(MemWrite_wire,0,0);
    CData/*0:0*/ two_waymisscache_ad__DOT__Hit1;
    CData/*0:0*/ two_waymisscache_ad__DOT__Hit0;
    CData/*0:0*/ two_waymisscache_ad__DOT__MemWriteM;
    CData/*0:0*/ two_waymisscache_ad__DOT__MemReadM;
    CData/*0:0*/ two_waymisscache_ad__DOT__Miss_comb;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN(ALUResultM,31,0);
    VL_OUT(Data,31,0);
    VL_IN(Datamem_wire,31,0);
    VL_OUT(MemAddress_wire,31,0);
    VL_OUT(MemWriteData_wire,31,0);
    IData/*31:0*/ two_waymisscache_ad__DOT__latched_data;
    IData/*31:0*/ two_waymisscache_ad__DOT__WriteDataM;
    IData/*31:0*/ two_waymisscache_ad__DOT__unnamedblk1__DOT__i;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 4> two_waymisscache_ad__DOT__valid;
    VlUnpacked<VlUnpacked<IData/*27:0*/, 2>, 4> two_waymisscache_ad__DOT__tag_cache;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 4> two_waymisscache_ad__DOT__data_cache;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 4> two_waymisscache_ad__DOT__dirty_bit;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtwo_waymisscache_ad__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtwo_waymisscache_ad___024root(Vtwo_waymisscache_ad__Syms* symsp, const char* name);
    ~Vtwo_waymisscache_ad___024root();
    VL_UNCOPYABLE(Vtwo_waymisscache_ad___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
