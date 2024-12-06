// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTWO_WAYMISSCACHE_AD__SYMS_H_
#define VERILATED_VTWO_WAYMISSCACHE_AD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtwo_waymisscache_ad.h"

// INCLUDE MODULE CLASSES
#include "Vtwo_waymisscache_ad___024root.h"

// SYMS CLASS (contains all model state)
class Vtwo_waymisscache_ad__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtwo_waymisscache_ad* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtwo_waymisscache_ad___024root TOP;

    // CONSTRUCTORS
    Vtwo_waymisscache_ad__Syms(VerilatedContext* contextp, const char* namep, Vtwo_waymisscache_ad* modelp);
    ~Vtwo_waymisscache_ad__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
