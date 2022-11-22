// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__12\n"); );
    // Body
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                    ^ (0xfffffffcU & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                     | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                        & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                    << 2U)))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                    ^ (0xfffffff8U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                           | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                              & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                          << 3U)))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                       ^ (0xfffffff0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                       << 4U)))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x20U & ((0xffffffe0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                       ^ (0xffffffe0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                              | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                 & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                             << 5U)))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x40U & ((0xffffffc0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                       ^ (0xffffffc0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                    | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                       & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                   << 6U)))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                       ^ (0xffffff80U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 6U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                          | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                             & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                         << 7U)))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                        ^ (0xffffff00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                                << 8U)))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x200U & ((0xfffffe00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                        ^ (0xfffffe00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                                << 9U)))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                        ^ (0xfffffc00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                                << 0xaU)))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x800U & ((0xfffff800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                        ^ (0xfffff800U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                                << 0xbU)))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x1000U & ((0xfffff000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                         ^ (0xfffff000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                                << 0xcU)))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x2000U & ((0xffffe000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                         ^ (0xffffe000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                                << 0xdU)))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x4000U & ((0xffffc000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                         ^ (0xffffc000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                                << 0xeU)))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn)) 
                         ^ (0xffff8000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xeU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))) 
                                                                                << 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1 
        = (1U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                  >> 0xfU) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                               >> 0xfU) & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                            >> 0xeU) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                               >> 0xeU) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                     >> 0xdU) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                        >> 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                           >> 0xcU) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                              >> 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                 >> 0xbU) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                    >> 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                       >> 0xaU) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                          >> 9U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                             >> 9U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 8U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 6U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 5U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 4U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 1U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0))))))))))))))))))))))))))))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__c2 
            = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2;
    }
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3 
        = (1U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                  >> 0xfU) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                               >> 0xfU) & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            >> 0xeU) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               >> 0xeU) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     >> 0xdU) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        >> 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           >> 0xcU) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              >> 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 >> 0xbU) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    >> 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       >> 0xaU) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          >> 9U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             >> 9U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 8U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 6U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 5U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 4U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 1U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                       << 1U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (0xfffffffcU & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                    << 2U)))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (0xfffffff8U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                          << 3U)))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xfffffff0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                       << 4U)))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x20U & ((0xffffffe0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffffe0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                             << 5U)))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x40U & ((0xffffffc0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffffc0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                   << 6U)))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffff80U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 6U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                         << 7U)))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xffffff00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 8U)))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x200U & ((0xfffffe00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffffe00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 9U)))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffffc00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xaU)))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x800U & ((0xfffff800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffff800U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xbU)))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x1000U & ((0xfffff000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xfffff000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xcU)))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x2000U & ((0xffffe000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffffe000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xdU)))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x4000U & ((0xffffc000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffffc000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xeU)))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffff8000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xeU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xfU)))))))))))))))))))))))))))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT____Vtogcov__sum)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)));
    }
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vtogcov__c1 
            = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1;
    }
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                    ^ (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                       << 1U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                    ^ (0xfffffffcU & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                     | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                        & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                    << 2U)))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                    ^ (0xfffffff8U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                           | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                              & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                          << 3U)))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                       ^ (0xfffffff0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                       << 4U)))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x20U & ((0xffffffe0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                       ^ (0xffffffe0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                              | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                 & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                             << 5U)))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x40U & ((0xffffffc0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                       ^ (0xffffffc0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                    | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                       & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                   << 6U)))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                       ^ (0xffffff80U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 6U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                          | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                             & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                         << 7U)))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                        ^ (0xffffff00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                                << 8U)))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x200U & ((0xfffffe00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                        ^ (0xfffffe00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                                << 9U)))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                        ^ (0xfffffc00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                                << 0xaU)))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x800U & ((0xfffff800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                        ^ (0xfffff800U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                                << 0xbU)))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x1000U & ((0xfffff000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                         ^ (0xfffff000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                                << 0xcU)))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x2000U & ((0xffffe000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                         ^ (0xffffe000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                                << 0xdU)))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x4000U & ((0xffffc000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                         ^ (0xffffc000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                                << 0xeU)))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn)) 
                         ^ (0xffff8000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xeU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))) 
                                                                                << 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2 
        = (1U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                  >> 0xfU) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                               >> 0xfU) & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                            >> 0xeU) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                               >> 0xeU) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                     >> 0xdU) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                        >> 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                           >> 0xcU) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                              >> 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                 >> 0xbU) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                    >> 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                       >> 0xaU) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                          >> 9U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                             >> 9U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 8U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 6U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 5U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 4U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 1U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1))))))))))))))))))))))))))))))))));
    if ((1U & ((~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3)) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1u_l_rs2u)))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1u_l_rs2u 
            = (1U & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3)));
    }
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_co))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_co 
            = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
        = (((QData)((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
            << 0x30U) | (((QData)((IData)((((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)))) 
                          << 0x10U) | (QData)((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vtogcov__c2 
            = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2;
    }
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c3 
        = (1U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                  >> 0xfU) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                               >> 0xfU) & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            >> 0xeU) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               >> 0xeU) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     >> 0xdU) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        >> 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           >> 0xcU) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                              >> 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                 >> 0xbU) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                    >> 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                       >> 0xaU) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                          >> 9U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                             >> 9U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 8U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 6U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 5U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 4U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 1U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                       << 1U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (0xfffffffcU & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                     | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                        & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                    << 2U)))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (0xfffffff8U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                           | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                              & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                          << 3U)))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xfffffff0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                       << 4U)))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x20U & ((0xffffffe0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffffe0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                              | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                 & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                             << 5U)))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x40U & ((0xffffffc0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffffc0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                    | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                       & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                   << 6U)))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffff80U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 6U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                          | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                             & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                         << 7U)))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xffffff00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                                << 8U)))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x200U & ((0xfffffe00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffffe00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                                << 9U)))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffffc00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                                << 0xaU)))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x800U & ((0xfffff800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffff800U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                                << 0xbU)))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x1000U & ((0xfffff000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xfffff000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                                << 0xcU)))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x2000U & ((0xffffe000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffffe000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                                << 0xdU)))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x4000U & ((0xffffc000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffffc000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                                << 0xeU)))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffff8000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xeU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2))) 
                                                                                << 0xfU)))))))))))))))))))))))))))))))));
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3fU)) ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_l_rs2)))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_l_rs2 
            = (1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                             >> 0x3fU)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r)))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bc_r) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__U_IDU_0__DOT__br_taken = ((((
                                                   ((((((IData)(vlSelf->top__DOT__U_IDU_0__DOT__inst_beq) 
                                                        & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_eq_rs2)) 
                                                       | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__inst_bne) 
                                                          & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_eq_rs2)))) 
                                                      | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__inst_blt) 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                                    >> 0x3fU)))) 
                                                     | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__inst_bge) 
                                                        & (~ (IData)(
                                                                     (vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                                      >> 0x3fU))))) 
                                                    | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__inst_bltu) 
                                                       & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3)))) 
                                                   | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__inst_bgeu) 
                                                      & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3))) 
                                                  | (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))) 
                                                 | (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))) 
                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__ds_valid));
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c3) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vtogcov__cout))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vtogcov__cout 
            = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c3;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)));
    }
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
        = (((QData)((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum)) 
            << 0x30U) | (((QData)((IData)((((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum)))) 
                          << 0x10U) | (QData)((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_0__sum))));
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__br_taken) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_taken))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_taken 
            = vlSelf->top__DOT__U_IDU_0__DOT__br_taken;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target)))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__br_target) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__br_bus[0U] = (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r);
    vlSelf->top__DOT__br_bus[1U] = (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r 
                                            >> 0x20U));
    vlSelf->top__DOT__br_bus[2U] = vlSelf->top__DOT__U_IDU_0__DOT__br_taken;
    vlSelf->top__DOT__fs_to_ds_valid = ((IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_valid) 
                                        & (~ vlSelf->top__DOT__br_bus[2U]));
    if ((1U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffffffeU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (1U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((2U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffffffdU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (2U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((4U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffffffbU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (4U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((8U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffffff7U 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (8U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffffffefU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x10U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffffffdfU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x20U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffffffbfU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x40U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffffff7fU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x80U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffffeffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x100U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffffdffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x200U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffffbffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x400U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x800U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__br_bus[0U] ^ 
                    vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffffefffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x1000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__br_bus[0U] ^ 
                    vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffffdfffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x2000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__br_bus[0U] ^ 
                    vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffffbfffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x4000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__br_bus[0U] ^ 
                    vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffff7fffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x8000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__br_bus[0U] ^ 
                     vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffeffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x10000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__br_bus[0U] ^ 
                     vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffdffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x20000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__br_bus[0U] ^ 
                     vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfffbffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x40000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__br_bus[0U] ^ 
                     vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x80000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__br_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffefffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x100000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__br_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffdfffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x200000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__br_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xffbfffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x400000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__br_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xff7fffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x800000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__br_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfeffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x1000000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__br_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfdffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x2000000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__br_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xfbffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x4000000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__br_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x8000000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__br_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xefffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x10000000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__br_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xdfffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x20000000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__br_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0xbfffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x40000000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if (((vlSelf->top__DOT__br_bus[0U] ^ vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->top__DOT____Vtogcov__br_bus[0U] = (
                                                   (0x7fffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[0U]) 
                                                   | (0x80000000U 
                                                      & vlSelf->top__DOT__br_bus[0U]));
    }
    if ((1U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffffffeU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (1U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((2U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffffffdU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (2U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((4U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffffffbU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (4U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((8U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffffff7U 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (8U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffffffefU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x10U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffffffdfU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x20U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffffffbfU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x40U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffffff7fU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x80U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffffeffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x100U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffffdffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x200U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffffbffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x400U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffff7ffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x800U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__br_bus[1U] ^ 
                    vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffffefffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x1000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__br_bus[1U] ^ 
                    vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffffdfffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x2000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__br_bus[1U] ^ 
                    vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffffbfffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x4000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__br_bus[1U] ^ 
                    vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffff7fffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x8000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__br_bus[1U] ^ 
                     vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffeffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x10000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__br_bus[1U] ^ 
                     vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffdffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x20000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__br_bus[1U] ^ 
                     vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfffbffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x40000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__br_bus[1U] ^ 
                     vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfff7ffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x80000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__br_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffefffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x100000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__br_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffdfffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x200000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__br_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xffbfffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x400000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__br_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xff7fffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x800000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__br_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfeffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x1000000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__br_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfdffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x2000000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__br_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xfbffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x4000000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__br_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xf7ffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x8000000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__br_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xefffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x10000000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__br_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xdfffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x20000000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__br_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0xbfffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x40000000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if (((vlSelf->top__DOT__br_bus[1U] ^ vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->top__DOT____Vtogcov__br_bus[1U] = (
                                                   (0x7fffffffU 
                                                    & vlSelf->top__DOT____Vtogcov__br_bus[1U]) 
                                                   | (0x80000000U 
                                                      & vlSelf->top__DOT__br_bus[1U]));
    }
    if ((1U & (vlSelf->top__DOT__br_bus[2U] ^ vlSelf->top__DOT____Vtogcov__br_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->top__DOT____Vtogcov__br_bus[2U] = (1U 
                                                   & vlSelf->top__DOT__br_bus[2U]);
    }
    vlSelf->top__DOT__U_IFU_0__DOT__nextpc = ((1U & 
                                               vlSelf->top__DOT__br_bus[2U])
                                               ? (((QData)((IData)(
                                                                   vlSelf->top__DOT__br_bus[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__br_bus[0U])))
                                               : (4ULL 
                                                  + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc));
    if (((IData)(vlSelf->top__DOT__fs_to_ds_valid) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__fs_to_ds_valid))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT____Vtogcov__fs_to_ds_valid 
            = vlSelf->top__DOT__fs_to_ds_valid;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IFU_0__DOT__nextpc) 
               ^ (IData)(vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc)))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_IFU_0__DOT__nextpc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IFU_0__DOT__nextpc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->inst_sram_addr = vlSelf->top__DOT__U_IFU_0__DOT__nextpc;
    if ((1U & ((IData)(vlSelf->inst_sram_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__inst_sram_addr)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->inst_sram_addr)))));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->inst_sram_addr >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__inst_sram_addr 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__inst_sram_addr 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__inst_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->inst_sram_addr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

void Vtop___024root___combo__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___combo__TOP__11(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__6(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop___024root___sequent__TOP__8(vlSelf);
        Vtop___024root___sequent__TOP__9(vlSelf);
    }
    Vtop___024root___combo__TOP__11(vlSelf);
    Vtop___024root___combo__TOP__12(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
