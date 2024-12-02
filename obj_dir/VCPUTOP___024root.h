// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPUTOP.h for the primary calling header

#ifndef VERILATED_VCPUTOP___024ROOT_H_
#define VERILATED_VCPUTOP___024ROOT_H_  // guard

#include "verilated.h"

class VCPUTOP__Syms;

class VCPUTOP___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ CPUTOP__DOT__RegWrite;
    CData/*0:0*/ CPUTOP__DOT__ALUSrcA;
    CData/*0:0*/ CPUTOP__DOT__ALUSrcB;
    CData/*1:0*/ CPUTOP__DOT__PCSrc;
    CData/*3:0*/ CPUTOP__DOT__ALUControl;
    CData/*0:0*/ CPUTOP__DOT__Zero;
    CData/*0:0*/ CPUTOP__DOT__MemWrite;
    CData/*1:0*/ CPUTOP__DOT__ResultSrc;
    CData/*0:0*/ CPUTOP__DOT__signedLess;
    CData/*0:0*/ CPUTOP__DOT__unsignedLess;
    CData/*1:0*/ CPUTOP__DOT__SizeSrc;
    CData/*0:0*/ CPUTOP__DOT__LoadSign;
    CData/*2:0*/ CPUTOP__DOT__InstrTop__DOT__ImmSrc;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_OUT(a0,31,0);
    IData/*31:0*/ CPUTOP__DOT__PC;
    IData/*31:0*/ CPUTOP__DOT__Instr;
    IData/*31:0*/ CPUTOP__DOT__ImmExt;
    IData/*31:0*/ CPUTOP__DOT__PCTop__DOT__PCNext;
    IData/*31:0*/ CPUTOP__DOT__ALUTop__DOT__SrcA;
    IData/*31:0*/ CPUTOP__DOT__ALUTop__DOT__SrcB;
    IData/*31:0*/ CPUTOP__DOT__ALUTop__DOT__RD2;
    IData/*31:0*/ CPUTOP__DOT__ALUTop__DOT__ALUResult;
    IData/*31:0*/ CPUTOP__DOT__ALUTop__DOT__ReadData;
    VlUnpacked<CData/*7:0*/, 4096> CPUTOP__DOT__InstrTop__DOT__InstructionMemory__DOT__Instr_memory;
    VlUnpacked<IData/*31:0*/, 32> CPUTOP__DOT__ALUTop__DOT__RegisterFile__DOT__registerarr;
    VlUnpacked<CData/*7:0*/, 131072> CPUTOP__DOT__ALUTop__DOT__DataMemory__DOT__memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VCPUTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPUTOP___024root(VCPUTOP__Syms* symsp, const char* name);
    ~VCPUTOP___024root();
    VL_UNCOPYABLE(VCPUTOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
