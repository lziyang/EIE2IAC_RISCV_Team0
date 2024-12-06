// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtwo_waymisscache_ad.h"
#include "Vtwo_waymisscache_ad__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtwo_waymisscache_ad::Vtwo_waymisscache_ad(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtwo_waymisscache_ad__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , MemValid_wire{vlSymsp->TOP.MemValid_wire}
    , Hit{vlSymsp->TOP.Hit}
    , Miss{vlSymsp->TOP.Miss}
    , MemRead_wire{vlSymsp->TOP.MemRead_wire}
    , MemWrite_wire{vlSymsp->TOP.MemWrite_wire}
    , ALUResultM{vlSymsp->TOP.ALUResultM}
    , Data{vlSymsp->TOP.Data}
    , Datamem_wire{vlSymsp->TOP.Datamem_wire}
    , MemAddress_wire{vlSymsp->TOP.MemAddress_wire}
    , MemWriteData_wire{vlSymsp->TOP.MemWriteData_wire}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtwo_waymisscache_ad::Vtwo_waymisscache_ad(const char* _vcname__)
    : Vtwo_waymisscache_ad(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtwo_waymisscache_ad::~Vtwo_waymisscache_ad() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtwo_waymisscache_ad___024root___eval_initial(Vtwo_waymisscache_ad___024root* vlSelf);
void Vtwo_waymisscache_ad___024root___eval_settle(Vtwo_waymisscache_ad___024root* vlSelf);
void Vtwo_waymisscache_ad___024root___eval(Vtwo_waymisscache_ad___024root* vlSelf);
#ifdef VL_DEBUG
void Vtwo_waymisscache_ad___024root___eval_debug_assertions(Vtwo_waymisscache_ad___024root* vlSelf);
#endif  // VL_DEBUG
void Vtwo_waymisscache_ad___024root___final(Vtwo_waymisscache_ad___024root* vlSelf);

static void _eval_initial_loop(Vtwo_waymisscache_ad__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtwo_waymisscache_ad___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtwo_waymisscache_ad___024root___eval_settle(&(vlSymsp->TOP));
        Vtwo_waymisscache_ad___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtwo_waymisscache_ad::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtwo_waymisscache_ad::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtwo_waymisscache_ad___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtwo_waymisscache_ad___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtwo_waymisscache_ad::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtwo_waymisscache_ad::final() {
    Vtwo_waymisscache_ad___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtwo_waymisscache_ad::hierName() const { return vlSymsp->name(); }
const char* Vtwo_waymisscache_ad::modelName() const { return "Vtwo_waymisscache_ad"; }
unsigned Vtwo_waymisscache_ad::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtwo_waymisscache_ad::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtwo_waymisscache_ad___024root__trace_init_top(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtwo_waymisscache_ad___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_waymisscache_ad___024root*>(voidSelf);
    Vtwo_waymisscache_ad__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtwo_waymisscache_ad___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtwo_waymisscache_ad___024root__trace_register(Vtwo_waymisscache_ad___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtwo_waymisscache_ad::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtwo_waymisscache_ad___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
