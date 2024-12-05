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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ CPUTOP__DOT__RegWrite_D;
        CData/*0:0*/ CPUTOP__DOT__MemWrite_D;
        CData/*0:0*/ CPUTOP__DOT__ALUSrcA_D;
        CData/*0:0*/ CPUTOP__DOT__ALUSrcB_D;
        CData/*3:0*/ CPUTOP__DOT__ALUControl_D;
        CData/*1:0*/ CPUTOP__DOT__ResultSrc_D;
        CData/*1:0*/ CPUTOP__DOT__SizeSrc_D;
        CData/*0:0*/ CPUTOP__DOT__LoadSign_D;
        CData/*2:0*/ CPUTOP__DOT__Branch_D;
        CData/*1:0*/ CPUTOP__DOT__Jump_D;
        CData/*0:0*/ CPUTOP__DOT__RegWrite_E;
        CData/*0:0*/ CPUTOP__DOT__MemWrite_E;
        CData/*0:0*/ CPUTOP__DOT__ALUSrcA_E;
        CData/*0:0*/ CPUTOP__DOT__ALUSrcB_E;
        CData/*3:0*/ CPUTOP__DOT__ALUControl_E;
        CData/*1:0*/ CPUTOP__DOT__ResultSrc_E;
        CData/*1:0*/ CPUTOP__DOT__SizeSrc_E;
        CData/*0:0*/ CPUTOP__DOT__LoadSign_E;
        CData/*2:0*/ CPUTOP__DOT__Branch_E;
        CData/*1:0*/ CPUTOP__DOT__Jump_E;
        CData/*4:0*/ CPUTOP__DOT__rs1_E;
        CData/*4:0*/ CPUTOP__DOT__rs2_E;
        CData/*4:0*/ CPUTOP__DOT__rd_E;
        CData/*1:0*/ CPUTOP__DOT__PCSrc_E;
        CData/*0:0*/ CPUTOP__DOT__RegWrite_M;
        CData/*0:0*/ CPUTOP__DOT__MemWrite_M;
        CData/*1:0*/ CPUTOP__DOT__ResultSrc_M;
        CData/*1:0*/ CPUTOP__DOT__SizeSrc_M;
        CData/*0:0*/ CPUTOP__DOT__LoadSign_M;
        CData/*4:0*/ CPUTOP__DOT__rd_M;
        CData/*0:0*/ CPUTOP__DOT__RegWrite_W;
        CData/*1:0*/ CPUTOP__DOT__ResultSrc_W;
        CData/*4:0*/ CPUTOP__DOT__rd_W;
        CData/*2:0*/ CPUTOP__DOT__IDTop__DOT__ImmSrc_D;
        CData/*1:0*/ CPUTOP__DOT__EXTop__DOT__ForwardA_E;
        CData/*1:0*/ CPUTOP__DOT__EXTop__DOT__ForwardB_E;
        CData/*0:0*/ CPUTOP__DOT__EXTop__DOT__Zero_E;
        CData/*0:0*/ CPUTOP__DOT__EXTop__DOT__unsignedLess_E;
        CData/*0:0*/ CPUTOP__DOT__EXTop__DOT__signedLess_E;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst;
        VL_OUT(a0,31,0);
        IData/*31:0*/ CPUTOP__DOT__PC_F;
        IData/*31:0*/ CPUTOP__DOT__Instr_D;
        IData/*31:0*/ CPUTOP__DOT__PCPlus4_D;
        IData/*31:0*/ CPUTOP__DOT__PC_D;
        IData/*31:0*/ CPUTOP__DOT__ImmExt_D;
        IData/*31:0*/ CPUTOP__DOT__ImmExt_E;
        IData/*31:0*/ CPUTOP__DOT__RD1_E;
        IData/*31:0*/ CPUTOP__DOT__RD2_E;
        IData/*31:0*/ CPUTOP__DOT__PCPlus4_E;
        IData/*31:0*/ CPUTOP__DOT__PC_E;
        IData/*31:0*/ CPUTOP__DOT__ALUResult_E;
        IData/*31:0*/ CPUTOP__DOT__ALUResult_M;
        IData/*31:0*/ CPUTOP__DOT__WriteData_M;
        IData/*31:0*/ CPUTOP__DOT__PCPlus4_M;
        IData/*31:0*/ CPUTOP__DOT__ReadData_M;
        IData/*31:0*/ CPUTOP__DOT__ReadData_W;
        IData/*31:0*/ CPUTOP__DOT__ALUResult_W;
        IData/*31:0*/ CPUTOP__DOT__PCPlus4_W;
        IData/*31:0*/ CPUTOP__DOT__Result_W;
        IData/*31:0*/ CPUTOP__DOT__IFTop__DOT__PCNext_F;
    };
    struct {
        IData/*31:0*/ CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__file;
        IData/*31:0*/ CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__r;
        IData/*31:0*/ CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__instr_word;
        IData/*31:0*/ CPUTOP__DOT__IFTop__DOT__HexFileLoader__DOT__unnamedblk1__DOT__addr;
        IData/*31:0*/ CPUTOP__DOT__EXTop__DOT__ForwardBData_E;
        IData/*31:0*/ CPUTOP__DOT__EXTop__DOT__ALUInputA_E;
        IData/*31:0*/ CPUTOP__DOT__EXTop__DOT__ALUInputB_E;
        VlUnpacked<CData/*7:0*/, 4096> CPUTOP__DOT__IFTop__DOT__Instr_memory;
        VlUnpacked<CData/*7:0*/, 4096> CPUTOP__DOT__IFTop__DOT____Vcellout__HexFileLoader__Instr_memory;
        VlUnpacked<CData/*7:0*/, 4096> CPUTOP__DOT__IFTop__DOT____Vcellinp__InstructionMemory__Instr_memory;
        VlUnpacked<IData/*31:0*/, 32> CPUTOP__DOT__IDTop__DOT__RegisterFile__DOT__registerarr;
        VlUnpacked<CData/*7:0*/, 131072> CPUTOP__DOT__MEMTop__DOT__DataMemory__DOT__memory;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

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
