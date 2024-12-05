// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUTOP.h for the primary calling header

#include "verilated.h"

#include "VCPUTOP__Syms.h"
#include "VCPUTOP___024root.h"

void VCPUTOP___024root___ctor_var_reset(VCPUTOP___024root* vlSelf);

VCPUTOP___024root::VCPUTOP___024root(VCPUTOP__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPUTOP___024root___ctor_var_reset(this);
}

void VCPUTOP___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCPUTOP___024root::~VCPUTOP___024root() {
}
