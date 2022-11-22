// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void halt(const svOpenArrayHandle s);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__halt__Vdpioc2_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const QData/*63:0*/ &s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__halt__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps s__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar s__Vopenarray (&s__Vopenprops, &s);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    halt(&s__Vopenarray);
}

extern "C" void valid(const svOpenArrayHandle s);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__valid__Vdpioc2_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const QData/*63:0*/ &s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__valid__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps s__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar s__Vopenarray (&s__Vopenprops, &s);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    valid(&s__Vopenarray);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__set_gpr_ptr__Vdpioc2_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__set_pc_ptr__Vdpioc2_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__set_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    set_pc_ptr(&a__Vopenarray);
}

extern "C" void set_dnpc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__set_dnpc_ptr__Vdpioc2_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__set_dnpc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    set_dnpc_ptr(&a__Vopenarray);
}

extern "C" void set_inst_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__set_inst_ptr__Vdpioc2_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const IData/*31:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dpi_c__DOT__set_inst_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    set_inst_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__6\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if ((1U & ((~ (IData)(vlSelf->reset)) ^ (IData)(vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__to_fs_valid)))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__to_fs_valid 
            = (1U & (~ (IData)(vlSelf->reset)));
    }
    if ((1U & ((IData)(vlSelf->inst_sram_rdata) ^ (IData)(vlSelf->top__DOT____Vtogcov__inst_sram_rdata)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->inst_sram_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_rdata >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__inst_sram_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->data_sram_rdata) ^ (IData)(vlSelf->top__DOT____Vtogcov__data_sram_rdata)))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->data_sram_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_rdata >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_rdata 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT____Vtogcov__data_sram_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__7\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v8;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v10;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v12;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v14;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v15;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v17;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v18;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v19;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v20;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v21;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v22;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v23;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v24;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v25;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v26;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v27;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v28;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v29;
    CData/*0:0*/ __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v30;
    VlWide<9>/*287:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp39;
    VlWide<4>/*127:0*/ __Vtemp40;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v2;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v3;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v4;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v5;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v6;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v7;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v8;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v9;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v10;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v11;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v12;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v13;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v14;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v15;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v16;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v17;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v18;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v19;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v20;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v21;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v22;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v23;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v24;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v25;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v26;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v27;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v28;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v29;
    QData/*63:0*/ __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v30;
    // Body
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v1 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v2 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v3 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v4 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v5 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v6 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v7 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v8 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v9 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v10 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v11 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v12 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v13 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v14 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v15 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v16 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v17 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v18 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v19 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v20 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v21 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v22 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v23 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v24 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v25 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v26 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v27 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v28 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v29 = 0U;
    __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v30 = 0U;
    ++(vlSymsp->__Vcoverage[1675]);
    ++(vlSymsp->__Vcoverage[1679]);
    ++(vlSymsp->__Vcoverage[2149]);
    ++(vlSymsp->__Vcoverage[2152]);
    ++(vlSymsp->__Vcoverage[2415]);
    ++(vlSymsp->__Vcoverage[2418]);
    ++(vlSymsp->__Vcoverage[2421]);
    ++(vlSymsp->__Vcoverage[2424]);
    ++(vlSymsp->__Vcoverage[2427]);
    ++(vlSymsp->__Vcoverage[2430]);
    ++(vlSymsp->__Vcoverage[2433]);
    ++(vlSymsp->__Vcoverage[2436]);
    ++(vlSymsp->__Vcoverage[2439]);
    ++(vlSymsp->__Vcoverage[2442]);
    ++(vlSymsp->__Vcoverage[2445]);
    ++(vlSymsp->__Vcoverage[2448]);
    ++(vlSymsp->__Vcoverage[2451]);
    ++(vlSymsp->__Vcoverage[2454]);
    ++(vlSymsp->__Vcoverage[2457]);
    ++(vlSymsp->__Vcoverage[2460]);
    ++(vlSymsp->__Vcoverage[2463]);
    ++(vlSymsp->__Vcoverage[2466]);
    ++(vlSymsp->__Vcoverage[2469]);
    ++(vlSymsp->__Vcoverage[2472]);
    ++(vlSymsp->__Vcoverage[2475]);
    ++(vlSymsp->__Vcoverage[2478]);
    ++(vlSymsp->__Vcoverage[2481]);
    ++(vlSymsp->__Vcoverage[2484]);
    ++(vlSymsp->__Vcoverage[2487]);
    ++(vlSymsp->__Vcoverage[2490]);
    ++(vlSymsp->__Vcoverage[2493]);
    ++(vlSymsp->__Vcoverage[2496]);
    ++(vlSymsp->__Vcoverage[2499]);
    ++(vlSymsp->__Vcoverage[2502]);
    ++(vlSymsp->__Vcoverage[2505]);
    ++(vlSymsp->__Vcoverage[3578]);
    ++(vlSymsp->__Vcoverage[3581]);
    ++(vlSymsp->__Vcoverage[3584]);
    ++(vlSymsp->__Vcoverage[4832]);
    ++(vlSymsp->__Vcoverage[4835]);
    ++(vlSymsp->__Vcoverage[4841]);
    ++(vlSymsp->__Vcoverage[4844]);
    ++(vlSymsp->__Vcoverage[4880]);
    ++(vlSymsp->__Vcoverage[4881]);
    ++(vlSymsp->__Vcoverage[4882]);
    ++(vlSymsp->__Vcoverage[4979]);
    ++(vlSymsp->__Vcoverage[4980]);
    ++(vlSymsp->__Vcoverage[4981]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[1674]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[1678]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[2148]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[3576]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[3577]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[4831]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[4829]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[4840]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[4838]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin) {
            ++(vlSymsp->__Vcoverage[1672]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin)))) {
            ++(vlSymsp->__Vcoverage[1673]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin))) {
            ++(vlSymsp->__Vcoverage[1676]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin))))) {
            ++(vlSymsp->__Vcoverage[1677]);
        }
    }
    if (((IData)(vlSelf->top__DOT__fs_to_ds_valid) 
         & (IData)(vlSelf->top__DOT__ds_allowin))) {
        ++(vlSymsp->__Vcoverage[2150]);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__fs_to_ds_valid) 
                  & (IData)(vlSelf->top__DOT__ds_allowin))))) {
        ++(vlSymsp->__Vcoverage[2151]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->top__DOT__ds_allowin) {
            ++(vlSymsp->__Vcoverage[2146]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__ds_allowin)))) {
            ++(vlSymsp->__Vcoverage[2147]);
        }
    }
    if (vlSelf->top__DOT__es_allowin) {
        ++(vlSymsp->__Vcoverage[3579]);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__es_allowin)))) {
        ++(vlSymsp->__Vcoverage[3580]);
    }
    if (((IData)(vlSelf->top__DOT__ds_to_es_valid) 
         & (IData)(vlSelf->top__DOT__es_allowin))) {
        ++(vlSymsp->__Vcoverage[3582]);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ds_to_es_valid) 
                  & (IData)(vlSelf->top__DOT__es_allowin))))) {
        ++(vlSymsp->__Vcoverage[3583]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (1U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2413]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (1U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2414]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (2U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2416]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (2U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2417]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (3U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2419]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (3U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2420]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (4U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2422]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (4U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2423]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (5U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2425]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (5U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2426]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (6U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2428]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (6U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2429]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (7U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2431]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (7U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2432]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (8U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2434]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (8U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2435]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (9U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2437]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (9U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2438]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xaU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2440]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0xaU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2441]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xbU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2443]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0xbU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2444]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xcU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2446]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0xcU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2447]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xdU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2449]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0xdU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2450]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xeU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2452]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0xeU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2453]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xfU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2455]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0xfU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2456]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x10U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2458]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x10U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2459]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x11U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2461]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x11U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2462]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x12U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2464]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x12U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2465]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x13U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2467]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x13U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2468]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x14U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2470]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x14U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2471]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x15U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2473]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x15U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2474]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x16U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2476]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x16U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2477]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x17U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2479]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x17U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2480]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x18U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2482]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x18U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2483]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x19U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2485]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x19U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2486]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1aU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2488]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x1aU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2489]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1bU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2491]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x1bU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2492]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1cU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2494]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x1cU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2495]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1dU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2497]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x1dU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2498]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1eU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2500]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x1eU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2501]);
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1fU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        ++(vlSymsp->__Vcoverage[2503]);
    }
    if ((1U & (~ ((vlSelf->top__DOT__ws_to_rf_bus[2U] 
                   >> 5U) & (0x1fU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))))) {
        ++(vlSymsp->__Vcoverage[2504]);
    }
    if (vlSelf->top__DOT__U_EXU_0__DOT__es_valid) {
        ++(vlSymsp->__Vcoverage[4833]);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__es_valid)))) {
        ++(vlSymsp->__Vcoverage[4834]);
    }
    if (vlSelf->top__DOT__U_MEU_0__DOT__ms_valid) {
        ++(vlSymsp->__Vcoverage[4842]);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__U_MEU_0__DOT__ms_valid)))) {
        ++(vlSymsp->__Vcoverage[4843]);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__U_IFU_0__DOT__fs_valid = 0U;
    } else if (vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin) {
        vlSelf->top__DOT__U_IFU_0__DOT__fs_valid = 
            (1U & (~ (IData)(vlSelf->reset)));
    }
    vlSelf->top__DOT__u_dpi_c__DOT__stop_r2 = vlSelf->top__DOT__u_dpi_c__DOT__stop_r1;
    if (vlSelf->reset) {
        vlSelf->top__DOT__U_IFU_0__DOT__fs_pc = 0x7ffffffcULL;
    } else if (((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin))) {
        vlSelf->top__DOT__U_IFU_0__DOT__fs_pc = vlSelf->top__DOT__U_IFU_0__DOT__nextpc;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__U_IDU_0__DOT__ds_valid = 0U;
    } else if (vlSelf->top__DOT__ds_allowin) {
        vlSelf->top__DOT__U_IDU_0__DOT__ds_valid = vlSelf->top__DOT__fs_to_ds_valid;
    }
    vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 = vlSelf->top__DOT__u_dpi_c__DOT__inst_r1;
    vlSelf->top__DOT__U_WBU_0__DOT__ws_valid = ((~ (IData)(vlSelf->reset)) 
                                                & (IData)(vlSelf->top__DOT__U_MEU_0__DOT__ms_valid));
    if (vlSelf->top__DOT__U_MEU_0__DOT__ms_valid) {
        vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
            = vlSelf->top__DOT__ms_to_ws_bus[0U];
        vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
            = vlSelf->top__DOT__ms_to_ws_bus[1U];
        vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
            = vlSelf->top__DOT__ms_to_ws_bus[2U];
        vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
            = vlSelf->top__DOT__ms_to_ws_bus[3U];
        vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
            = vlSelf->top__DOT__ms_to_ws_bus[4U];
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (1U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v0 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v0 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (2U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v1 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v1 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (3U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v2 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v2 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (4U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v3 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v3 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (5U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v4 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v4 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (6U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v5 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v5 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (7U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v6 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v6 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (8U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v7 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v7 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (9U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v8 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v8 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xaU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v9 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v9 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xbU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v10 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v10 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xcU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v11 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v11 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xdU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v12 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v12 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xeU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v13 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v13 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0xfU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v14 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v14 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x10U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v15 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v15 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x11U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v16 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v16 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x12U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v17 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v17 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x13U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v18 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v18 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x14U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v19 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v19 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x15U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v20 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v20 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x16U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v21 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v21 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x17U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v22 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v22 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x18U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v23 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v23 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x19U == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v24 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v24 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1aU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v25 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v25 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1bU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v26 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v26 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1cU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v27 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v27 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1dU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v28 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v28 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1eU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v29 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v29 = 1U;
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[2U] >> 5U) 
         & (0x1fU == (0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])))) {
        __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v30 
            = (((QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ws_to_rf_bus[0U])));
        __Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v30 = 1U;
    }
    if (vlSelf->top__DOT__U_EXU_0__DOT__es_valid) {
        vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
            = vlSelf->top__DOT__es_to_ms_bus[0U];
        vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
            = vlSelf->top__DOT__es_to_ms_bus[1U];
        vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
            = vlSelf->top__DOT__es_to_ms_bus[2U];
        vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
            = vlSelf->top__DOT__es_to_ms_bus[3U];
        vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
            = vlSelf->top__DOT__es_to_ms_bus[4U];
    }
    if (((IData)(vlSelf->top__DOT__ds_to_es_valid) 
         & (IData)(vlSelf->top__DOT__es_allowin))) {
        __Vtemp31[7U] = ((0xfffe0000U & ((0xe0000000U 
                                          & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                             << 9U)) 
                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_shamt) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_pc) 
                                                << 0x1bU) 
                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_u) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_4) 
                                                      << 0x19U) 
                                                     | (((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U])) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_i) 
                                                            << 0x17U) 
                                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_s) 
                                                               << 0x16U) 
                                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__id_rf_we) 
                                                                  << 0x15U) 
                                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_s) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__id_mem_re) 
                                                                        << 0x13U) 
                                                                       | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__id_mem_bytes) 
                                                                          << 0x11U))))))))))))) 
                         | ((0x1f000U & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                         << 5U)) | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__imm_s)));
        __Vtemp31[8U] = (0x1ffffU & ((0x10000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_div) 
                                                  << 0x10U)) 
                                     | ((0x18000U & 
                                         ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_rem) 
                                          << 0xfU)) 
                                        | ((0x1c000U 
                                            & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_add) 
                                               << 0xeU)) 
                                           | ((0x1e000U 
                                               & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_sub) 
                                                  << 0xdU)) 
                                              | ((0x1f000U 
                                                  & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_slt) 
                                                     << 0xcU)) 
                                                 | ((0x1f800U 
                                                     & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_sltu) 
                                                        << 0xbU)) 
                                                    | ((0x1fc00U 
                                                        & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_and) 
                                                           << 0xaU)) 
                                                       | ((0x1fe00U 
                                                           & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_or) 
                                                              << 9U)) 
                                                          | ((0x1ff00U 
                                                              & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_xor) 
                                                                 << 8U)) 
                                                             | ((0x1ff80U 
                                                                 & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_sll) 
                                                                    << 7U)) 
                                                                | ((0x1ffc0U 
                                                                    & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_srl) 
                                                                       << 6U)) 
                                                                   | ((0x1ffe0U 
                                                                       & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_sra) 
                                                                          << 5U)) 
                                                                      | ((0x1fff0U 
                                                                          & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__res_sext) 
                                                                             << 4U)) 
                                                                         | ((0x1fff8U 
                                                                             & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__res_zext) 
                                                                                << 3U)) 
                                                                            | ((7U 
                                                                                & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                                                >> 0x17U)) 
                                                                               | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_shamt) 
                                                                                >> 4U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_pc) 
                                                                                >> 5U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_u) 
                                                                                >> 6U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_4) 
                                                                                >> 7U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U])) 
                                                                                >> 8U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_i) 
                                                                                >> 9U)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_s) 
                                                                                >> 0xaU)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__id_rf_we) 
                                                                                >> 0xbU)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_s) 
                                                                                >> 0xcU)) 
                                                                                | ((0x1ffffU 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__id_mem_re) 
                                                                                >> 0xdU)) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__id_mem_bytes) 
                                                                                >> 0xfU)))))))))))))))))))))))))));
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
            = (IData)((((QData)((IData)(vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U]))));
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
            = (IData)(((((QData)((IData)(vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U]))) 
                       >> 0x20U));
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
            = (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value);
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
            = (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                       >> 0x20U));
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
            = (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value);
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
            = (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                       >> 0x20U));
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
            = ((0xfff00000U & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]) 
               | (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                  >> 0xcU));
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
            = __Vtemp31[7U];
        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
            = (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_mul) 
                << 0x11U) | __Vtemp31[8U]);
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v0) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[1U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v0;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v1) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[2U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v1;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v2) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[3U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v2;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v3) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[4U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v3;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v4) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[5U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v4;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v5) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[6U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v5;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v6) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[7U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v6;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v7) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[8U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v7;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v8) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[9U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v8;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v9) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0xaU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v9;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v10) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0xbU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v10;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v11) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0xcU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v11;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v12) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0xdU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v12;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v13) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0xeU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v13;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v14) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0xfU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v14;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v15) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x10U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v15;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v16) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x11U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v16;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v17) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x12U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v17;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v18) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x13U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v18;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v19) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x14U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v19;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v20) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x15U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v20;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v21) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x16U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v21;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v22) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x17U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v22;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v23) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x18U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v23;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v24) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x19U] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v24;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v25) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x1aU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v25;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v26) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x1bU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v26;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v27) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x1cU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v27;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v28) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x1dU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v28;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v29) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x1eU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v29;
    }
    if (__Vdlyvset__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v30) {
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0x1fU] 
            = __Vdlyvval__top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs__v30;
    }
    if (((IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_valid) 
         ^ (IData)(vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_valid))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_valid 
            = vlSelf->top__DOT__U_IFU_0__DOT__fs_valid;
    }
    vlSelf->top__DOT__u_dpi_c__DOT__stop_r1 = vlSelf->top__DOT__u_dpi_c__DOT__stop_r0;
    if (((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2) 
         ^ (IData)(vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__stop_r2))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__stop_r2 
            = vlSelf->top__DOT__u_dpi_c__DOT__stop_r2;
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4982]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4983]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4984]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4985]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4986]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4987]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4988]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4989]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4990]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4991]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4992]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4993]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4994]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4995]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4996]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4997]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4998]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4999]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5000]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5001]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5002]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5003]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5004]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5005]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5006]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5007]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5008]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5009]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5010]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5011]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5012]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5013]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5014]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5015]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5016]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5017]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5018]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5019]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5020]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5021]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5022]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5031]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5032]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5033]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5034]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5035]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5036]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5037]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5038]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5039]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5040]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5041]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5042]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5043]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5044]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Halt) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__fs_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
               ^ (IData)(vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc)))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_pc)))));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__seq_pc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__ds_valid) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__ds_valid))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__ds_valid 
            = vlSelf->top__DOT__U_IDU_0__DOT__ds_valid;
    }
    if ((1U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
               ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4947]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffffffeU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (1U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((2U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
               ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4948]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffffffdU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (2U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((4U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
               ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4949]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffffffbU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (4U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((8U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
               ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4950]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffffff7U & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (8U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x10U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                  ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4951]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffffffefU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x10U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x20U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                  ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4952]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffffffdfU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x20U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x40U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                  ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4953]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffffffbfU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x40U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x80U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                  ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4954]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffffff7fU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x80U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x100U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                   ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4955]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffffeffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x100U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x200U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                   ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4956]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffffdffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x200U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x400U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                   ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4957]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffffbffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x400U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x800U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                   ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4958]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffff7ffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x800U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x1000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                    ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4959]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffffefffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x1000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x2000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                    ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4960]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffffdfffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x2000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x4000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                    ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4961]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffffbfffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x4000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x8000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                    ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4962]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffff7fffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x8000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x10000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                     ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4963]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffeffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x10000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x20000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                     ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4964]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffdffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x20000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x40000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                     ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4965]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfffbffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x40000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x80000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                     ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4966]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfff7ffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x80000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x100000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                      ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4967]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffefffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x100000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x200000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                      ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4968]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffdfffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x200000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x400000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                      ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4969]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xffbfffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x400000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x800000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                      ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4970]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xff7fffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x800000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x1000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                       ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4971]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfeffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x1000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x2000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                       ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4972]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfdffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x2000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x4000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                       ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4973]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xfbffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x4000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x8000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                       ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4974]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xf7ffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x8000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x10000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                        ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4975]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xefffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x10000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x20000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                        ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4976]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xdfffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x20000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if ((0x40000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 
                        ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2))) {
        ++(vlSymsp->__Vcoverage[4977]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0xbfffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x40000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    if (((vlSelf->top__DOT__u_dpi_c__DOT__inst_r2 ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4978]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2 
            = ((0x7fffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r2) 
               | (0x80000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r2));
    }
    vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 = vlSelf->top__DOT__u_dpi_c__DOT__inst_r0;
    if (((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_ws_valid))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelf->top__DOT____Vtogcov__debug_ws_valid 
            = vlSelf->top__DOT__U_WBU_0__DOT__ws_valid;
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5045]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5046]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5047]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5048]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5049]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5050]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5051]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5052]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5053]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5054]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5055]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5056]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5057]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5058]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5059]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5060]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5061]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5062]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5063]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5064]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5065]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5066]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5067]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5068]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5069]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5070]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5071]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5072]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5073]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5074]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5075]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5076]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5077]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5078]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5079]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5080]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5081]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5082]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5083]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5084]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5085]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5086]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5087]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5088]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5089]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5090]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5091]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5092]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5093]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5094]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5095]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5096]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5097]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5098]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5099]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5100]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5101]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5102]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5103]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5104]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5105]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5106]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5107]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__Valid) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((0x20U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
                  ^ vlSelf->top__DOT__U_WBU_0__DOT____Vtogcov__ms_to_ws_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4837]);
        vlSelf->top__DOT__U_WBU_0__DOT____Vtogcov__ms_to_ws_bus_r[4U] 
            = ((0x1fU & vlSelf->top__DOT__U_WBU_0__DOT____Vtogcov__ms_to_ws_bus_r[4U]) 
               | (0x20U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U]));
    }
    if ((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum 
            = ((0x1eU & (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)) 
               | (1U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U]));
    }
    if ((2U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum 
            = ((0x1dU & (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)) 
               | (2U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U]));
    }
    if ((4U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum 
            = ((0x1bU & (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)) 
               | (4U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U]));
    }
    if ((8U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum 
            = ((0x17U & (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)) 
               | (8U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum 
            = ((0xfU & (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wnum)) 
               | (0x10U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U]));
    }
    if ((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_pc)))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | (IData)((IData)((1U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U]))));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 1U)))) << 1U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 2U)))) << 2U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 3U)))) << 3U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 4U)))) << 4U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 5U)))) << 5U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 6U)))) << 6U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 7U)))) << 7U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 8U)))) << 8U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 9U)))) << 9U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0xaU)))) 
                << 0xaU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0xbU)))) 
                << 0xbU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0xcU)))) 
                << 0xcU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0xdU)))) 
                << 0xdU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0xeU)))) 
                << 0xeU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0xfU)))) 
                << 0xfU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x10U)))) 
                << 0x10U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x11U)))) 
                << 0x11U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x12U)))) 
                << 0x12U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x13U)))) 
                << 0x13U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x14U)))) 
                << 0x14U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x15U)))) 
                << 0x15U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x16U)))) 
                << 0x16U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x17U)))) 
                << 0x17U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x18U)))) 
                << 0x18U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x19U)))) 
                << 0x19U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x1aU)))) 
                << 0x1aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x1bU)))) 
                << 0x1bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x1cU)))) 
                << 0x1cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x1dU)))) 
                << 0x1dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                       >> 0x1eU)))) 
                << 0x1eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U] 
                                 >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U]))) 
                << 0x20U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 1U)))) << 0x21U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 2U)))) << 0x22U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 3U)))) << 0x23U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 4U)))) << 0x24U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 5U)))) << 0x25U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 6U)))) << 0x26U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 7U)))) << 0x27U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 8U)))) << 0x28U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 9U)))) << 0x29U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0xaU)))) 
                << 0x2aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0xbU)))) 
                << 0x2bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0xcU)))) 
                << 0x2cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0xdU)))) 
                << 0x2dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0xeU)))) 
                << 0x2eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0xfU)))) 
                << 0x2fU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x10U)))) 
                << 0x30U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x11U)))) 
                << 0x31U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x12U)))) 
                << 0x32U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x13U)))) 
                << 0x33U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x14U)))) 
                << 0x34U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x15U)))) 
                << 0x35U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x16U)))) 
                << 0x36U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x17U)))) 
                << 0x37U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x18U)))) 
                << 0x38U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x19U)))) 
                << 0x39U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x1aU)))) 
                << 0x3aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x1bU)))) 
                << 0x3bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x1cU)))) 
                << 0x3cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x1dU)))) 
                << 0x3dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                       >> 0x1eU)))) 
                << 0x3eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_pc 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelf->top__DOT____Vtogcov__debug_wb_pc = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_pc) 
             | ((QData)((IData)((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U] 
                                 >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata)))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | (IData)((IData)((1U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U]))));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_wb_rf_wdata) 
               | ((QData)((IData)((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    vlSelf->top__DOT__U_WBU_0__DOT__rf_we = ((vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
                                              >> 5U) 
                                             & (IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid));
    vlSelf->top__DOT__U_MEU_0__DOT__ms_valid = ((~ (IData)(vlSelf->reset)) 
                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__es_valid));
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[1U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [1U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[2U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [2U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[3U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [3U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[4U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [4U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[5U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [5U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[6U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [6U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[7U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [7U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[8U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [8U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[9U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [9U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0xaU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0xaU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0xbU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0xbU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0xcU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0xcU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0xdU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0xdU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0xeU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0xeU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0xfU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0xfU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x10U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x10U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x11U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x11U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x12U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x12U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x13U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x13U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x14U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x14U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x15U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x15U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x16U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x16U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x17U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x17U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x18U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x18U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x19U] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x19U];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x1aU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x1aU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x1bU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x1bU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x1cU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x1cU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x1dU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x1dU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x1eU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x1eU];
    vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0x1fU] 
        = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs
        [0x1fU];
    if ((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_ms_pc)))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | (IData)((IData)((1U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U]))));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 1U)))) << 1U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 2U)))) << 2U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 3U)))) << 3U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 4U)))) << 4U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 5U)))) << 5U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 6U)))) << 6U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 7U)))) << 7U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 8U)))) << 8U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 9U)))) << 9U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0xaU)))) 
                << 0xaU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0xbU)))) 
                << 0xbU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0xcU)))) 
                << 0xcU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0xdU)))) 
                << 0xdU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0xeU)))) 
                << 0xeU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0xfU)))) 
                << 0xfU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x10U)))) 
                << 0x10U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x11U)))) 
                << 0x11U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x12U)))) 
                << 0x12U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x13U)))) 
                << 0x13U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x14U)))) 
                << 0x14U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x15U)))) 
                << 0x15U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x16U)))) 
                << 0x16U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x17U)))) 
                << 0x17U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x18U)))) 
                << 0x18U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x19U)))) 
                << 0x19U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x1aU)))) 
                << 0x1aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x1bU)))) 
                << 0x1bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x1cU)))) 
                << 0x1cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x1dU)))) 
                << 0x1dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                       >> 0x1eU)))) 
                << 0x1eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U] 
                                 >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U]))) 
                << 0x20U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 1U)))) << 0x21U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 2U)))) << 0x22U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 3U)))) << 0x23U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 4U)))) << 0x24U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 5U)))) << 0x25U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 6U)))) << 0x26U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 7U)))) << 0x27U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 8U)))) << 0x28U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 9U)))) << 0x29U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0xaU)))) 
                << 0x2aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0xbU)))) 
                << 0x2bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0xcU)))) 
                << 0x2cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0xdU)))) 
                << 0x2dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0xeU)))) 
                << 0x2eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0xfU)))) 
                << 0x2fU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x10U)))) 
                << 0x30U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x11U)))) 
                << 0x31U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x12U)))) 
                << 0x32U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x13U)))) 
                << 0x33U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x14U)))) 
                << 0x34U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x15U)))) 
                << 0x35U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x16U)))) 
                << 0x36U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x17U)))) 
                << 0x37U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x18U)))) 
                << 0x38U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x19U)))) 
                << 0x39U));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x1aU)))) 
                << 0x3aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x1bU)))) 
                << 0x3bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x1cU)))) 
                << 0x3cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x1dU)))) 
                << 0x3dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                       >> 0x1eU)))) 
                << 0x3eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT____Vtogcov__debug_ms_pc 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelf->top__DOT____Vtogcov__debug_ms_pc = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__debug_ms_pc) 
             | ((QData)((IData)((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U] 
                                 >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4626]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (1U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((2U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4627]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (2U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((4U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4628]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (4U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((8U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4629]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (8U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4630]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x10U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4631]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x20U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4632]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x40U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4633]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x80U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4634]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x100U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4635]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x200U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4636]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x400U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4637]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x800U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                    ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4638]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x1000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                    ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4639]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x2000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                    ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4640]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x4000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                    ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4641]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x8000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                     ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4642]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x10000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                     ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4643]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x20000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                     ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4644]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x40000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                     ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4645]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x80000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                      ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4646]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x100000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                      ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4647]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x200000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                      ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4648]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x400000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                      ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4649]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x800000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                       ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4650]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x1000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                       ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4651]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x2000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                       ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4652]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x4000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                       ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4653]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x8000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                        ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4654]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x10000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                        ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4655]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x20000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
                        ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]))) {
        ++(vlSymsp->__Vcoverage[4656]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x40000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if (((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U] 
          ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4657]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[2U]) 
               | (0x80000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U]));
    }
    if ((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4658]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (1U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((2U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4659]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (2U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((4U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4660]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (4U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((8U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4661]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (8U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4662]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x10U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4663]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x20U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4664]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x40U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4665]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x80U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4666]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x100U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4667]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x200U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4668]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x400U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4669]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x800U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                    ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4670]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x1000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                    ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4671]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x2000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                    ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4672]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x4000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                    ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4673]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x8000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                     ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4674]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x10000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                     ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4675]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x20000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                     ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4676]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x40000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                     ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4677]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x80000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                      ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4678]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x100000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                      ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4679]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x200000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                      ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4680]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x400000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                      ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4681]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x800000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                       ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4682]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x1000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                       ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4683]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x2000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                       ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4684]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x4000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                       ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4685]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x8000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                        ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4686]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x10000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                        ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4687]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x20000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
                        ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]))) {
        ++(vlSymsp->__Vcoverage[4688]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x40000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if (((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U] 
          ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4689]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[3U]) 
               | (0x80000000U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U]));
    }
    if ((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x7feU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (1U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((2U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4691]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x7fdU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (2U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((4U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x7fbU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (4U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((8U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
               ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x7f7U & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (8U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x7efU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (0x10U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x7dfU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (0x20U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x7bfU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (0x40U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                  ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x77fU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (0x80U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x6ffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (0x100U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x5ffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (0x200U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                   ^ vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U] 
            = ((0x3ffU & vlSelf->top__DOT__U_MEU_0__DOT____Vtogcov__es_to_ms_bus_r[4U]) 
               | (0x400U & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U]));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 0x11U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_mul)))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_mul 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 0x11U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 0x10U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_div)))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_div 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 0x10U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 0xfU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_rem)))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_rem 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 0xfU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 0xeU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_add)))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_add 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 0xeU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 0xdU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_sub)))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_sub 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 0xdU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 0xcU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_slt)))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_slt 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 0xcU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 0xbU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_sltu)))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_sltu 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 0xbU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 0xaU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_and)))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_and 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 0xaU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 9U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_or)))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_or 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 9U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 8U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_xor)))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_xor 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 8U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 7U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_sll)))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_sll 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 7U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 6U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_srl)))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_srl 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 6U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 5U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_sra)))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__op_sra 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 5U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 4U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__res_sext)))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__res_sext 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 4U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 3U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__res_zext)))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__res_zext 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                     >> 3U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x1cU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_shamt)))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_shamt 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x1cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x1bU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_pc)))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_pc 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x1bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x1aU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_imm_u)))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_imm_u 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x1aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x19U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_4)))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_4 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x19U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x18U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_0)))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_0 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x18U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x17U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_imm_i)))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_imm_i 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x17U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x16U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_imm_s)))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__src_imm_s 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x16U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x15U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_rf_we)))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_rf_we 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x15U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x14U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_we)))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_we 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x14U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x13U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_re)))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_re 
            = (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                     >> 0x13U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x11U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_bytes)))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_bytes 
            = ((2U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_bytes)) 
               | (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0x11U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x12U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_bytes) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_bytes 
            = ((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_mem_bytes)) 
               | (2U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0x11U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0xcU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd)))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd 
            = ((0x1eU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd)) 
               | (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0xdU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd 
            = ((0x1dU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd)) 
               | (2U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0xeU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd 
            = ((0x1bU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd)) 
               | (4U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0xfU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd 
            = ((0x17U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd)) 
               | (8U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0xcU)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x10U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd) 
                             >> 4U)))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd 
            = ((0xfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rd)) 
               | (0x10U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                           >> 0xcU)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x1dU) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt)))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt 
            = ((0x3eU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt)) 
               | (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0x1dU)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x1eU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt 
            = ((0x3dU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt)) 
               | (2U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0x1dU)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                >> 0x1fU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt 
            = ((0x3bU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt)) 
               | (4U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                        >> 0x1dU)));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
               ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt) 
                  >> 3U)))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt 
            = ((0x37U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt)) 
               | (8U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                        << 3U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 1U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt) 
                          >> 4U)))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt 
            = ((0x2fU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt)) 
               | (0x10U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                           << 3U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                >> 2U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt) 
                          >> 5U)))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt 
            = ((0x1fU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__shamt)) 
               | (0x20U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                           << 3U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x14U) ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xffeU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                        >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x15U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xffdU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (2U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                        >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x16U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xffbU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (4U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                        >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x17U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xff7U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (8U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                        >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x18U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 4U)))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xfefU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (0x10U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                           >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x19U) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 5U)))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (0x20U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                           >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x1aU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 6U)))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (0x40U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                           >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x1bU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 7U)))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (0x80U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                           >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x1cU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 8U)))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xeffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (0x100U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                            >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x1dU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 9U)))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xdffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (0x200U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                            >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x1eU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0xbffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (0x400U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                            >> 0x14U)));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                >> 0x1fU) ^ ((IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i) 
                             >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_i)) 
               | (0x800U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                            >> 0x14U)));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xffeU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (1U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((2U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xffdU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (2U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((4U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xffbU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (4U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((8U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xff7U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (8U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xfefU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (0x10U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (0x20U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (0x40U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (0x80U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((0x100U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xeffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (0x100U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((0x200U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xdffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (0x200U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((0x400U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0xbffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (0x400U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((0x800U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_s)) 
               | (0x800U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
               ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xffffeU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (1U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((2U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
               ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xffffdU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (2U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((4U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
               ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xffffbU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (4U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((8U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
               ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xffff7U & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (8U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                  ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xfffefU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x10U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                  ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xfffdfU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x20U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                  ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xfffbfU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x40U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                  ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xfff7fU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x80U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x100U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                   ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xffeffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x100U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x200U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                   ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xffdffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x200U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x400U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                   ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xffbffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x400U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x800U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                   ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xff7ffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x800U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                    ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xfefffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x1000U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                    ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xfdfffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x2000U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                    ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xfbfffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x4000U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                    ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xf7fffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x8000U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                     ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xeffffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x10000U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                     ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xdffffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x20000U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                     ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0xbffffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x40000U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                     ^ vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u 
            = ((0x7ffffU & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__imm_u) 
               | (0x80000U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U]));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value)))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | (IData)((IData)((1U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U]))));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
               ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value)))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | (IData)((IData)((1U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U]))));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
               ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc)))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | (IData)((IData)((1U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U]))));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
               ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 1U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 2U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 3U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 4U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 5U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 6U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 7U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 8U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 9U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0xaU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0xbU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0xcU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0xdU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0xeU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0xfU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x10U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x11U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x12U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x13U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x14U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x15U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x16U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x17U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x18U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x19U) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__es_pc) 
               | ((QData)((IData)((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    vlSelf->data_sram_wdata = (((QData)((IData)(vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U])));
    vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 = ((0x8000000U 
                                                 & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U])))
                                                 : 
                                                ((0x1000000U 
                                                  & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                       >> 4U) 
                                                      & (((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                           >> 7U) 
                                                          | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                             >> 6U)) 
                                                         | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                            >> 5U))))
                                                   ? (QData)((IData)(
                                                                     vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U]))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U]))))));
    vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 = ((0x2000000U 
                                                 & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])
                                                 ? 4ULL
                                                 : 
                                                ((0x4000000U 
                                                  & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                                                                                >> 0x13U)))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                                                                     << 0xcU))))
                                                  : 
                                                 ((0x800000U 
                                                   & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                                                                      >> 0x14U))))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U]))))
                                                    : 
                                                   ((0x10000000U 
                                                     & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])
                                                     ? (QData)((IData)(
                                                                       (0x3fU 
                                                                        & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                                            << 3U) 
                                                                           | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                                              >> 0x1dU)))))
                                                     : 
                                                    ((1U 
                                                      & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                          >> 4U) 
                                                         & (((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                              >> 7U) 
                                                             | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                                >> 6U)) 
                                                            | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                               >> 5U))))
                                                      ? (QData)((IData)(
                                                                        (0x1fU 
                                                                         & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U])))
                                                      : 
                                                     ((1U 
                                                       & (((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                            >> 7U) 
                                                           | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                              >> 6U)) 
                                                          | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                             >> 5U)))
                                                       ? (QData)((IData)(
                                                                         (0x3fU 
                                                                          & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U]))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_cin 
        = (1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                  >> 0xdU) | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                              >> 0xcU)));
    if (((IData)(vlSelf->top__DOT__U_WBU_0__DOT__rf_we) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__debug_wb_rf_wen))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelf->top__DOT____Vtogcov__debug_wb_rf_wen 
            = vlSelf->top__DOT__U_WBU_0__DOT__rf_we;
    }
    vlSelf->top__DOT__ws_to_rf_bus[0U] = vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U];
    vlSelf->top__DOT__ws_to_rf_bus[1U] = vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U];
    vlSelf->top__DOT__ws_to_rf_bus[2U] = (((IData)(vlSelf->top__DOT__U_WBU_0__DOT__rf_we) 
                                           << 5U) | 
                                          (0x1fU & 
                                           vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U]));
    vlSelf->top__DOT__ws_forward_bus[0U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U])))) 
                                             << 5U) 
                                            | (0x1fU 
                                               & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U]));
    vlSelf->top__DOT__ws_forward_bus[1U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U])))) 
                                             >> 0x1bU) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U]))) 
                                                        >> 0x20U)) 
                                               << 5U));
    vlSelf->top__DOT__ws_forward_bus[2U] = (((IData)(vlSelf->top__DOT__U_WBU_0__DOT__rf_we) 
                                             << 5U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U]))) 
                                                        >> 0x20U)) 
                                               >> 0x1bU));
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x1fU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x1fU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x1eU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x1eU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x1dU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x1dU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x1cU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x1cU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x1bU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x1bU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x1aU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x1aU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x19U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x19U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x18U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x18U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x17U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x17U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x16U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x16U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x15U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x15U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x14U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x14U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x13U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x13U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x12U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x12U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x11U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x11U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0x10U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0x10U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0xfU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0xfU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0xeU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0xeU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0xdU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0xdU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0xcU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0xcU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0xbU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0xbU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0xaU] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0xaU];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[9U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [9U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[8U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [8U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[7U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [7U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[6U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [6U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[5U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [5U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[4U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [4U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[3U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [3U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[2U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [2U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[1U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [1U];
    vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0U] 
        = vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs
        [0U];
    if ((1U & ((IData)(vlSelf->data_sram_wdata) ^ (IData)(vlSelf->top__DOT____Vtogcov__data_sram_wdata)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->data_sram_wdata)))));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_wdata >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_wdata 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->top__DOT____Vtogcov__data_sram_wdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_src1) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1)))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_src1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_src2) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2)))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_src2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
        = (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
           & vlSelf->top__DOT__U_EXU_0__DOT__alu_src2);
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
        = (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
           | vlSelf->top__DOT__U_EXU_0__DOT__alu_src2);
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
        = (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
           ^ vlSelf->top__DOT__U_EXU_0__DOT__alu_src2);
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
        = VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__U_EXU_0__DOT__alu_src1, vlSelf->top__DOT__U_EXU_0__DOT__alu_src2);
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_srl 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__U_EXU_0__DOT__alu_src1, vlSelf->top__DOT__U_EXU_0__DOT__alu_src2);
    __Vtemp39[0U] = (IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_src1);
    __Vtemp39[1U] = (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                             >> 0x20U));
    __Vtemp39[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                           >> 0x3fU)))))));
    __Vtemp39[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    VL_SHIFTR_WWQ(128,128,64, __Vtemp40, __Vtemp39, vlSelf->top__DOT__U_EXU_0__DOT__alu_src2);
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sra[0U] 
        = __Vtemp40[0U];
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sra[1U] 
        = __Vtemp40[1U];
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sra[2U] 
        = __Vtemp40[2U];
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sra[3U] 
        = __Vtemp40[3U];
    if (vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_cin) {
        ++(vlSymsp->__Vcoverage[4361]);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_cin)))) {
        ++(vlSymsp->__Vcoverage[4362]);
    }
    if (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_cin) 
         ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_cin))) {
        ++(vlSymsp->__Vcoverage[4163]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_cin 
            = vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_cin;
    }
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_b 
        = ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_cin)
            ? (~ vlSelf->top__DOT__U_EXU_0__DOT__alu_src2)
            : vlSelf->top__DOT__U_EXU_0__DOT__alu_src2);
    if (((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r1) 
         ^ (IData)(vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__stop_r1))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__stop_r1 
            = vlSelf->top__DOT__u_dpi_c__DOT__stop_r1;
    }
    vlSelf->top__DOT__u_dpi_c__DOT__stop_r0 = vlSelf->top__DOT__stop;
    if ((1U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
               ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffffffeU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (1U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((2U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
               ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffffffdU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (2U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((4U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
               ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffffffbU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (4U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((8U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
               ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffffff7U & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (8U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x10U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                  ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4919]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffffffefU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x10U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x20U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                  ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4920]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffffffdfU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x20U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x40U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                  ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4921]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffffffbfU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x40U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x80U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                  ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4922]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffffff7fU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x80U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x100U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                   ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4923]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffffeffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x100U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x200U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                   ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4924]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffffdffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x200U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x400U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                   ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffffbffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x400U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x800U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                   ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4926]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffff7ffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x800U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x1000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                    ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4927]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffffefffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x1000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x2000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                    ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4928]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffffdfffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x2000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x4000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                    ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4929]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffffbfffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x4000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x8000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                    ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4930]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffff7fffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x8000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x10000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                     ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4931]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffeffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x10000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x20000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                     ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4932]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffdffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x20000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x40000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                     ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4933]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfffbffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x40000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x80000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                     ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4934]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfff7ffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x80000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x100000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                      ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4935]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffefffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x100000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x200000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                      ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4936]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffdfffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x200000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x400000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                      ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4937]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xffbfffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x400000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x800000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                      ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4938]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xff7fffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x800000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x1000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                       ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4939]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfeffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x1000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x2000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                       ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4940]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfdffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x2000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x4000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                       ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4941]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xfbffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x4000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x8000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                       ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4942]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xf7ffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x8000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x10000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                        ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4943]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xefffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x10000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x20000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                        ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4944]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xdfffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x20000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if ((0x40000000U & (vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 
                        ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1))) {
        ++(vlSymsp->__Vcoverage[4945]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0xbfffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x40000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    if (((vlSelf->top__DOT__u_dpi_c__DOT__inst_r1 ^ vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4946]);
        vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1 
            = ((0x7fffffffU & vlSelf->top__DOT__u_dpi_c__DOT____Vtogcov__inst_r1) 
               | (0x80000000U & vlSelf->top__DOT__u_dpi_c__DOT__inst_r1));
    }
    vlSelf->top__DOT__u_dpi_c__DOT__inst_r0 = vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U];
    if ((1U & (vlSelf->top__DOT__ws_to_rf_bus[0U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (1U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((2U & (vlSelf->top__DOT__ws_to_rf_bus[0U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (2U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((4U & (vlSelf->top__DOT__ws_to_rf_bus[0U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (4U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((8U & (vlSelf->top__DOT__ws_to_rf_bus[0U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (8U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x10U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x20U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x40U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x80U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x100U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x200U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x400U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x800U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x1000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x2000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x4000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x8000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x10000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x20000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x40000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x80000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x100000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x200000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x400000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x800000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x1000000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x2000000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x4000000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x8000000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x10000000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x20000000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ws_to_rf_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x40000000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[0U] ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[0U]) 
               | (0x80000000U & vlSelf->top__DOT__ws_to_rf_bus[0U]));
    }
    if ((1U & (vlSelf->top__DOT__ws_to_rf_bus[1U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (1U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((2U & (vlSelf->top__DOT__ws_to_rf_bus[1U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (2U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((4U & (vlSelf->top__DOT__ws_to_rf_bus[1U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (4U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((8U & (vlSelf->top__DOT__ws_to_rf_bus[1U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (8U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x10U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x20U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x40U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x80U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x100U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x200U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x400U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x800U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x1000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x2000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x4000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x8000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x10000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x20000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x40000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x80000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x100000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x200000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x400000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x800000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x1000000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x2000000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x4000000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x8000000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x10000000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x20000000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ws_to_rf_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x40000000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if (((vlSelf->top__DOT__ws_to_rf_bus[1U] ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[1U]) 
               | (0x80000000U & vlSelf->top__DOT__ws_to_rf_bus[1U]));
    }
    if ((1U & (vlSelf->top__DOT__ws_to_rf_bus[2U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U] 
            = ((0x3eU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]) 
               | (1U & vlSelf->top__DOT__ws_to_rf_bus[2U]));
    }
    if ((2U & (vlSelf->top__DOT__ws_to_rf_bus[2U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U] 
            = ((0x3dU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]) 
               | (2U & vlSelf->top__DOT__ws_to_rf_bus[2U]));
    }
    if ((4U & (vlSelf->top__DOT__ws_to_rf_bus[2U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U] 
            = ((0x3bU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]) 
               | (4U & vlSelf->top__DOT__ws_to_rf_bus[2U]));
    }
    if ((8U & (vlSelf->top__DOT__ws_to_rf_bus[2U] ^ 
               vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U] 
            = ((0x37U & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]) 
               | (8U & vlSelf->top__DOT__ws_to_rf_bus[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__ws_to_rf_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U] 
            = ((0x2fU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]) 
               | (0x10U & vlSelf->top__DOT__ws_to_rf_bus[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__ws_to_rf_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U] 
            = ((0x1fU & vlSelf->top__DOT____Vtogcov__ws_to_rf_bus[2U]) 
               | (0x20U & vlSelf->top__DOT__ws_to_rf_bus[2U]));
    }
    if ((1U & (vlSelf->top__DOT__ws_forward_bus[0U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (1U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((2U & (vlSelf->top__DOT__ws_forward_bus[0U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (2U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((4U & (vlSelf->top__DOT__ws_forward_bus[0U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (4U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((8U & (vlSelf->top__DOT__ws_forward_bus[0U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (8U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x10U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x20U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x40U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x80U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x100U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x200U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x400U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x800U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x1000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x2000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x4000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x8000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x10000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x20000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x40000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x80000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x100000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x200000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x400000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x800000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x1000000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x2000000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x4000000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x8000000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x10000000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x20000000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ws_forward_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x40000000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if (((vlSelf->top__DOT__ws_forward_bus[0U] ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[0U]) 
               | (0x80000000U & vlSelf->top__DOT__ws_forward_bus[0U]));
    }
    if ((1U & (vlSelf->top__DOT__ws_forward_bus[1U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (1U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((2U & (vlSelf->top__DOT__ws_forward_bus[1U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (2U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((4U & (vlSelf->top__DOT__ws_forward_bus[1U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (4U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((8U & (vlSelf->top__DOT__ws_forward_bus[1U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (8U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x10U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x20U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x40U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x80U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x100U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x200U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x400U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x800U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x1000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x2000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x4000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x8000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x10000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x20000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x40000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x80000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x100000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x200000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x400000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x800000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x1000000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x2000000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x4000000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x8000000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x10000000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x20000000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ws_forward_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x40000000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if (((vlSelf->top__DOT__ws_forward_bus[1U] ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[1U]) 
               | (0x80000000U & vlSelf->top__DOT__ws_forward_bus[1U]));
    }
    if ((1U & (vlSelf->top__DOT__ws_forward_bus[2U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U] 
            = ((0x3eU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]) 
               | (1U & vlSelf->top__DOT__ws_forward_bus[2U]));
    }
    if ((2U & (vlSelf->top__DOT__ws_forward_bus[2U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U] 
            = ((0x3dU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]) 
               | (2U & vlSelf->top__DOT__ws_forward_bus[2U]));
    }
    if ((4U & (vlSelf->top__DOT__ws_forward_bus[2U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U] 
            = ((0x3bU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]) 
               | (4U & vlSelf->top__DOT__ws_forward_bus[2U]));
    }
    if ((8U & (vlSelf->top__DOT__ws_forward_bus[2U] 
               ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U] 
            = ((0x37U & vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]) 
               | (8U & vlSelf->top__DOT__ws_forward_bus[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__ws_forward_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U] 
            = ((0x2fU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]) 
               | (0x10U & vlSelf->top__DOT__ws_forward_bus[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__ws_forward_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U] 
            = ((0x1fU & vlSelf->top__DOT____Vtogcov__ws_forward_bus[2U]) 
               | (0x20U & vlSelf->top__DOT__ws_forward_bus[2U]));
    }
    if (((IData)(vlSelf->top__DOT__U_MEU_0__DOT__ms_valid) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__ms_to_ws_valid))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT____Vtogcov__ms_to_ws_valid 
            = vlSelf->top__DOT__U_MEU_0__DOT__ms_valid;
    }
    vlSelf->top__DOT__U_MEU_0__DOT__ms_forward_valid 
        = ((vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
            >> 5U) & (IData)(vlSelf->top__DOT__U_MEU_0__DOT__ms_valid));
    if (vlSelf->reset) {
        vlSelf->top__DOT__U_EXU_0__DOT__es_valid = 0U;
    }
    if (vlSelf->top__DOT__es_allowin) {
        vlSelf->top__DOT__U_EXU_0__DOT__es_valid = vlSelf->top__DOT__ds_to_es_valid;
    }
    vlSelf->top__DOT__dpi_regs[0x1fU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x1fU];
    vlSelf->top__DOT__dpi_regs[0x1eU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x1eU];
    vlSelf->top__DOT__dpi_regs[0x1dU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x1dU];
    vlSelf->top__DOT__dpi_regs[0x1cU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x1cU];
    vlSelf->top__DOT__dpi_regs[0x1bU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x1bU];
    vlSelf->top__DOT__dpi_regs[0x1aU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x1aU];
    vlSelf->top__DOT__dpi_regs[0x19U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x19U];
    vlSelf->top__DOT__dpi_regs[0x18U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x18U];
    vlSelf->top__DOT__dpi_regs[0x17U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x17U];
    vlSelf->top__DOT__dpi_regs[0x16U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x16U];
    vlSelf->top__DOT__dpi_regs[0x15U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x15U];
    vlSelf->top__DOT__dpi_regs[0x14U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x14U];
    vlSelf->top__DOT__dpi_regs[0x13U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x13U];
    vlSelf->top__DOT__dpi_regs[0x12U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x12U];
    vlSelf->top__DOT__dpi_regs[0x11U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x11U];
    vlSelf->top__DOT__dpi_regs[0x10U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0x10U];
    vlSelf->top__DOT__dpi_regs[0xfU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0xfU];
    vlSelf->top__DOT__dpi_regs[0xeU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0xeU];
    vlSelf->top__DOT__dpi_regs[0xdU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0xdU];
    vlSelf->top__DOT__dpi_regs[0xcU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0xcU];
    vlSelf->top__DOT__dpi_regs[0xbU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0xbU];
    vlSelf->top__DOT__dpi_regs[0xaU] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0xaU];
    vlSelf->top__DOT__dpi_regs[9U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [9U];
    vlSelf->top__DOT__dpi_regs[8U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [8U];
    vlSelf->top__DOT__dpi_regs[7U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [7U];
    vlSelf->top__DOT__dpi_regs[6U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [6U];
    vlSelf->top__DOT__dpi_regs[5U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [5U];
    vlSelf->top__DOT__dpi_regs[4U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [4U];
    vlSelf->top__DOT__dpi_regs[3U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [3U];
    vlSelf->top__DOT__dpi_regs[2U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [2U];
    vlSelf->top__DOT__dpi_regs[1U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [1U];
    vlSelf->top__DOT__dpi_regs[0U] = vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs
        [0U];
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and)))) {
        ++(vlSymsp->__Vcoverage[3651]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3652]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3653]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3654]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3655]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3656]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3657]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3658]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3659]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3660]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3661]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3662]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3663]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3664]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3665]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3666]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3667]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3668]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3669]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3670]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3671]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3672]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3674]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3675]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3676]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3677]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3678]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3679]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3680]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3681]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3689]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3690]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3691]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3692]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3693]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3694]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3695]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3696]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_and) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or)))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3745]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3746]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3747]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3748]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_or) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor)))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3788]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3789]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3791]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_xor) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll)))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_sll) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
}
