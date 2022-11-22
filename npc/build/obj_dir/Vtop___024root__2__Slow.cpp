// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x40U & ((0xffffffc0U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                       ^ (0xffffffc0U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                    | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                       & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                   << 6U)))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                       ^ (0xffffff80U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 6U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                          | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                             & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                         << 7U)))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                        ^ (0xffffff00U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                                << 8U)))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x200U & ((0xfffffe00U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                        ^ (0xfffffe00U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                                << 9U)))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                        ^ (0xfffffc00U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                                << 0xaU)))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x800U & ((0xfffff800U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                        ^ (0xfffff800U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                                << 0xbU)))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x1000U & ((0xfffff000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                         ^ (0xfffff000U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                                << 0xcU)))))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x2000U & ((0xffffe000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                         ^ (0xffffe000U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                                << 0xdU)))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x4000U & ((0xffffc000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                         ^ (0xffffc000U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                                << 0xeU)))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
                         ^ (0xffff8000U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                << 0xeU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))) 
                                                                                << 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2 
        = (1U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                  >> 0xfU) | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                               >> 0xfU) & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                            >> 0xeU) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                               >> 0xeU) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                     >> 0xdU) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                        >> 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                           >> 0xcU) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                              >> 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                 >> 0xbU) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                    >> 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                       >> 0xaU) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                          >> 9U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                             >> 9U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 8U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 6U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 5U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 4U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                >> 1U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1))))))))))))))))))))))))))))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4496]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4497]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4498]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4499]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4500]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4501]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4502]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4503]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4504]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4505]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4506]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4507]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4508]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4509]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4510]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4511]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__sum)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum)));
    }
    if (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2) 
         ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__c2 
            = vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2;
    }
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3 
        = (1U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                  >> 0xfU) | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                               >> 0xfU) & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            >> 0xeU) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               >> 0xeU) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     >> 0xdU) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        >> 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           >> 0xcU) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              >> 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 >> 0xbU) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    >> 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       >> 0xaU) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          >> 9U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             >> 9U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 8U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 6U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 5U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 4U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                >> 1U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                        | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                           & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                       << 1U))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (0xfffffffcU & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                    << 2U)))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                    ^ (0xfffffff8U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                          << 3U)))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xfffffff0U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                       << 4U)))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x20U & ((0xffffffe0U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffffe0U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                             << 5U)))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x40U & ((0xffffffc0U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffffc0U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                   << 6U)))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                       ^ (0xffffff80U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 6U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                         << 7U)))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xffffff00U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 8U)))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x200U & ((0xfffffe00U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffffe00U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 9U)))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffffc00U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xaU)))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x800U & ((0xfffff800U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                        ^ (0xfffff800U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xbU)))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x1000U & ((0xfffff000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xfffff000U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xcU)))))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x2000U & ((0xffffe000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffffe000U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xdU)))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x4000U & ((0xffffc000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffffc000U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xeU)))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
                         ^ (0xffff8000U & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                << 0xeU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2))) 
                                                                                << 0xfU)))))))))))))))))))))))))))))))));
    if (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3) 
         ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_cout))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_cout 
            = vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4561]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4562]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4563]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4564]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4565]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4566]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4567]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4568]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4569]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4570]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4571]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4572]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4573]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4574]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4575]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[4576]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__sum)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)));
    }
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
        = (((QData)((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum)) 
            << 0x30U) | (((QData)((IData)((((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)))) 
                          << 0x10U) | (QData)((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result)))) {
        ++(vlSymsp->__Vcoverage[4164]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4165]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4166]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4167]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4168]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4169]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4170]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4171]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4172]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__adder_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->data_sram_addr = vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r;
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
        = (QData)((IData)((1U & ((0x800U & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U])
                                  ? (~ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3))
                                  : (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                             >> 0x3fU))))));
    if ((1U & ((IData)(vlSelf->data_sram_addr) ^ (IData)(vlSelf->top__DOT____Vtogcov__data_sram_addr)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | (IData)((IData)((1U & (IData)(vlSelf->data_sram_addr)))));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->data_sram_addr >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__data_sram_addr 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__data_sram_addr 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__data_sram_addr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->data_sram_addr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt)))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3640]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3641]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3642]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3643]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3644]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3645]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3646]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3647]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3648]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3649]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3650]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__r_slt) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
        = (((((((((- (QData)((IData)((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                             >> 0xeU) 
                                            | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                               >> 0xdU)))))) 
                  & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r) 
                 | ((- (QData)((IData)((1U & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                               >> 0xcU) 
                                              | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                 >> 0xbU)))))) 
                    & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt)) 
                | ((- (QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                             >> 0xaU))))) 
                   & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and)) 
               | ((- (QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 9U))))) 
                  & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or)) 
              | ((- (QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                           >> 8U))))) 
                 & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor)) 
             | ((- (QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                          >> 7U))))) 
                & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll)) 
            | ((- (QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 6U))))) 
               & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_srl)) 
           | ((- (QData)((IData)((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                        >> 5U))))) 
              & (((QData)((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sra[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sra[0U])))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res)))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4243]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4244]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4247]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4248]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4249]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4250]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4251]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4252]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4253]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4254]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4255]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4256]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4257]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4258]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4259]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4260]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4261]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4262]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4263]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4264]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4265]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4266]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4267]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4268]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4269]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4270]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4271]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4272]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4273]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4274]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4275]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4276]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4277]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4278]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4279]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4281]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4283]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4284]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4285]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4286]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4287]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4288]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4289]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4290]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT____Vtogcov__res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__U_EXU_0__DOT__alu_result = ((0x10U 
                                                   & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res)))
                                                   : vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res);
    if ((1U & ((IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_result) 
               ^ (IData)(vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result)))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3536]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_EXU_0__DOT____Vtogcov__alu_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__es_to_ms_bus[0U] = (IData)((((QData)((IData)(
                                                                   vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U]))));
    vlSelf->top__DOT__es_to_ms_bus[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U]))) 
                                                  >> 0x20U));
    vlSelf->top__DOT__es_to_ms_bus[2U] = (IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_result);
    vlSelf->top__DOT__es_to_ms_bus[3U] = (IData)((vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                  >> 0x20U));
    vlSelf->top__DOT__es_to_ms_bus[4U] = ((0x400U & 
                                           (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            << 6U)) 
                                          | ((0x200U 
                                              & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                 << 6U)) 
                                             | ((0x180U 
                                                 & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                    >> 0xaU)) 
                                                | ((0x40U 
                                                    & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                       >> 0xdU)) 
                                                   | ((0x20U 
                                                       & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                          >> 0x10U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                            >> 0xcU)))))));
    vlSelf->top__DOT__es_forward_bus[0U] = (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_result) 
                                             << 5U) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                  >> 0xcU)));
    vlSelf->top__DOT__es_forward_bus[1U] = (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_result) 
                                             >> 0x1bU) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                        >> 0x20U)) 
                                               << 5U));
    vlSelf->top__DOT__es_forward_bus[2U] = (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__mem_read_after_write) 
                                             << 6U) 
                                            | (((IData)(vlSelf->top__DOT__U_EXU_0__DOT__es_forward_valid) 
                                                << 5U) 
                                               | ((IData)(
                                                          (vlSelf->top__DOT__U_EXU_0__DOT__alu_result 
                                                           >> 0x20U)) 
                                                  >> 0x1bU)));
    if ((1U & (vlSelf->top__DOT__es_to_ms_bus[0U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (1U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((2U & (vlSelf->top__DOT__es_to_ms_bus[0U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (2U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((4U & (vlSelf->top__DOT__es_to_ms_bus[0U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (4U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((8U & (vlSelf->top__DOT__es_to_ms_bus[0U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (8U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x10U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x20U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x40U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x80U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x100U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x200U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x400U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x800U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x1000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x2000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x4000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x8000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x10000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x20000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x40000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x80000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x100000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x200000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x400000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x800000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x1000000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x2000000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x4000000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x8000000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x10000000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x20000000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__es_to_ms_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x40000000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if (((vlSelf->top__DOT__es_to_ms_bus[0U] ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[0U]) 
               | (0x80000000U & vlSelf->top__DOT__es_to_ms_bus[0U]));
    }
    if ((1U & (vlSelf->top__DOT__es_to_ms_bus[1U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (1U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((2U & (vlSelf->top__DOT__es_to_ms_bus[1U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (2U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((4U & (vlSelf->top__DOT__es_to_ms_bus[1U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (4U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((8U & (vlSelf->top__DOT__es_to_ms_bus[1U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (8U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x10U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x20U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x40U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x80U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x100U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x200U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x400U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x800U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x1000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x2000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x4000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x8000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x10000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x20000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x40000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x80000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x100000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x200000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x400000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x800000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x1000000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x2000000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x4000000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x8000000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x10000000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x20000000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__es_to_ms_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x40000000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if (((vlSelf->top__DOT__es_to_ms_bus[1U] ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[1U]) 
               | (0x80000000U & vlSelf->top__DOT__es_to_ms_bus[1U]));
    }
    if ((1U & (vlSelf->top__DOT__es_to_ms_bus[2U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (1U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((2U & (vlSelf->top__DOT__es_to_ms_bus[2U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (2U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((4U & (vlSelf->top__DOT__es_to_ms_bus[2U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (4U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((8U & (vlSelf->top__DOT__es_to_ms_bus[2U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (8U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x10U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x20U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x40U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x80U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x100U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x200U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x400U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x800U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x1000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x2000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x4000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x8000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x10000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x20000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x40000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x80000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x100000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x200000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x400000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x800000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x1000000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x2000000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x4000000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x8000000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x10000000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x20000000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__es_to_ms_bus[2U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x40000000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if (((vlSelf->top__DOT__es_to_ms_bus[2U] ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[2U]) 
               | (0x80000000U & vlSelf->top__DOT__es_to_ms_bus[2U]));
    }
    if ((1U & (vlSelf->top__DOT__es_to_ms_bus[3U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (1U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((2U & (vlSelf->top__DOT__es_to_ms_bus[3U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (2U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((4U & (vlSelf->top__DOT__es_to_ms_bus[3U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (4U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((8U & (vlSelf->top__DOT__es_to_ms_bus[3U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (8U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x10U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x20U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x40U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x80U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x100U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x200U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x400U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x800U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x1000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x2000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x4000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x8000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x10000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x20000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x40000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x80000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x100000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x200000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x400000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x800000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x1000000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x2000000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x4000000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x8000000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x10000000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x20000000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__es_to_ms_bus[3U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x40000000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if (((vlSelf->top__DOT__es_to_ms_bus[3U] ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[3U]) 
               | (0x80000000U & vlSelf->top__DOT__es_to_ms_bus[3U]));
    }
    if ((1U & (vlSelf->top__DOT__es_to_ms_bus[4U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x7feU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (1U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((2U & (vlSelf->top__DOT__es_to_ms_bus[4U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x7fdU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (2U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((4U & (vlSelf->top__DOT__es_to_ms_bus[4U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x7fbU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (4U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((8U & (vlSelf->top__DOT__es_to_ms_bus[4U] ^ 
               vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x7f7U & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (8U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__es_to_ms_bus[4U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x7efU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (0x10U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__es_to_ms_bus[4U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x7dfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (0x20U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__es_to_ms_bus[4U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x7bfU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (0x40U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__es_to_ms_bus[4U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x77fU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (0x80U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__es_to_ms_bus[4U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x6ffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (0x100U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__es_to_ms_bus[4U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x5ffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (0x200U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__es_to_ms_bus[4U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U] 
            = ((0x3ffU & vlSelf->top__DOT____Vtogcov__es_to_ms_bus[4U]) 
               | (0x400U & vlSelf->top__DOT__es_to_ms_bus[4U]));
    }
    if ((1U & (vlSelf->top__DOT__es_forward_bus[0U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (1U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((2U & (vlSelf->top__DOT__es_forward_bus[0U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (2U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((4U & (vlSelf->top__DOT__es_forward_bus[0U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (4U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((8U & (vlSelf->top__DOT__es_forward_bus[0U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (8U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__es_forward_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x10U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__es_forward_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x20U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__es_forward_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x40U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__es_forward_bus[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x80U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__es_forward_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x100U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__es_forward_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x200U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__es_forward_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x400U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__es_forward_bus[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x800U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x1000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x2000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x4000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x8000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x10000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x20000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x40000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x80000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x100000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x200000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x400000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x800000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x1000000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x2000000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x4000000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x8000000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x10000000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x20000000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__es_forward_bus[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x40000000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if (((vlSelf->top__DOT__es_forward_bus[0U] ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[0U]) 
               | (0x80000000U & vlSelf->top__DOT__es_forward_bus[0U]));
    }
    if ((1U & (vlSelf->top__DOT__es_forward_bus[1U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (1U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((2U & (vlSelf->top__DOT__es_forward_bus[1U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (2U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((4U & (vlSelf->top__DOT__es_forward_bus[1U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (4U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((8U & (vlSelf->top__DOT__es_forward_bus[1U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (8U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__es_forward_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x10U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__es_forward_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x20U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__es_forward_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x40U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__es_forward_bus[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x80U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__es_forward_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x100U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__es_forward_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x200U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__es_forward_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x400U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__es_forward_bus[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x800U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x1000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x2000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x4000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x8000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x10000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x20000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x40000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x80000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x100000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x200000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x400000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x800000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x1000000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x2000000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x4000000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x8000000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x10000000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x20000000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__es_forward_bus[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x40000000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if (((vlSelf->top__DOT__es_forward_bus[1U] ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__es_forward_bus[1U]) 
               | (0x80000000U & vlSelf->top__DOT__es_forward_bus[1U]));
    }
    if ((1U & (vlSelf->top__DOT__es_forward_bus[2U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[2U] 
            = ((0x7eU & vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]) 
               | (1U & vlSelf->top__DOT__es_forward_bus[2U]));
    }
    if ((2U & (vlSelf->top__DOT__es_forward_bus[2U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[2U] 
            = ((0x7dU & vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]) 
               | (2U & vlSelf->top__DOT__es_forward_bus[2U]));
    }
    if ((4U & (vlSelf->top__DOT__es_forward_bus[2U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[2U] 
            = ((0x7bU & vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]) 
               | (4U & vlSelf->top__DOT__es_forward_bus[2U]));
    }
    if ((8U & (vlSelf->top__DOT__es_forward_bus[2U] 
               ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[2U] 
            = ((0x77U & vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]) 
               | (8U & vlSelf->top__DOT__es_forward_bus[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__es_forward_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[2U] 
            = ((0x6fU & vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]) 
               | (0x10U & vlSelf->top__DOT__es_forward_bus[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__es_forward_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[2U] 
            = ((0x5fU & vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]) 
               | (0x20U & vlSelf->top__DOT__es_forward_bus[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__es_forward_bus[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->top__DOT____Vtogcov__es_forward_bus[2U] 
            = ((0x3fU & vlSelf->top__DOT____Vtogcov__es_forward_bus[2U]) 
               | (0x40U & vlSelf->top__DOT__es_forward_bus[2U]));
    }
    vlSelf->top__DOT__U_IDU_0__DOT__es_rs2_hazard = 
        ((((0x1fU & vlSelf->top__DOT__es_forward_bus[0U]) 
           == (0x1fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                        >> 0x14U))) & (0U != (0x1fU 
                                              & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                 >> 0x14U)))) 
         & (vlSelf->top__DOT__es_forward_bus[2U] >> 5U));
    vlSelf->top__DOT__U_IDU_0__DOT__es_rs1_hazard = 
        ((((0x1fU & vlSelf->top__DOT__es_forward_bus[0U]) 
           == (0x1fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                        >> 0xfU))) & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                >> 0xfU)))) 
         & (vlSelf->top__DOT__es_forward_bus[2U] >> 5U));
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__es_rs2_hazard) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__es_rs2_hazard))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__es_rs2_hazard 
            = vlSelf->top__DOT__U_IDU_0__DOT__es_rs2_hazard;
    }
    vlSelf->top__DOT__U_IDU_0__DOT__rs2_value = ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__es_rs2_hazard)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__es_forward_bus[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT__es_forward_bus[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT__es_forward_bus[0U])) 
                                                        >> 5U)))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__ms_rs2_hazard)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ms_forward_bus[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__ms_forward_bus[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__ms_forward_bus[0U])) 
                                                         >> 5U)))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__ws_rs2_hazard)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__ws_forward_bus[2U])) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__ws_forward_bus[1U])) 
                                                        << 0x1bU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__ws_forward_bus[0U])) 
                                                          >> 5U)))
                                                    : vlSelf->top__DOT__U_IDU_0__DOT__data_r2)));
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__es_rs1_hazard) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__es_rs1_hazard))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__es_rs1_hazard 
            = vlSelf->top__DOT__U_IDU_0__DOT__es_rs1_hazard;
    }
    vlSelf->top__DOT__U_IDU_0__DOT__ds_ready_go = (1U 
                                                   & (~ 
                                                      ((vlSelf->top__DOT__es_forward_bus[2U] 
                                                        >> 6U) 
                                                       & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__es_rs1_hazard) 
                                                          | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__es_rs2_hazard)))));
    vlSelf->top__DOT__U_IDU_0__DOT__rs1_value = ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__es_rs1_hazard)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__es_forward_bus[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT__es_forward_bus[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT__es_forward_bus[0U])) 
                                                        >> 5U)))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__ms_rs1_hazard)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ms_forward_bus[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__ms_forward_bus[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__ms_forward_bus[0U])) 
                                                         >> 5U)))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__ws_rs1_hazard)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__ws_forward_bus[2U])) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__ws_forward_bus[1U])) 
                                                        << 0x1bU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__ws_forward_bus[0U])) 
                                                          >> 5U)))
                                                    : vlSelf->top__DOT__U_IDU_0__DOT__data_r1)));
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value)))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs2_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value)) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | (IData)((IData)((1U & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value))))));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 1U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 1U)))))) 
                  << 1U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 2U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 2U)))))) 
                  << 2U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 3U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 3U)))))) 
                  << 3U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 4U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 4U)))))) 
                  << 4U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 5U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 5U)))))) 
                  << 5U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 6U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 6U)))))) 
                  << 6U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 7U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 7U)))))) 
                  << 7U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 8U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 8U)))))) 
                  << 8U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 9U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                               >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 9U)))))) 
                  << 9U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0xaU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                 >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0xaU)))))) 
                  << 0xaU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0xbU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                 >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0xbU)))))) 
                  << 0xbU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0xcU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                 >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0xcU)))))) 
                  << 0xcU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0xdU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                 >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0xdU)))))) 
                  << 0xdU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0xeU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                 >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0xeU)))))) 
                  << 0xeU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0xfU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                 >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0xfU)))))) 
                  << 0xfU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x10U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x10U)))))) 
                  << 0x10U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x11U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x11U)))))) 
                  << 0x11U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x12U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x12U)))))) 
                  << 0x12U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x13U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x13U)))))) 
                  << 0x13U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x14U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x14U)))))) 
                  << 0x14U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x15U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x15U)))))) 
                  << 0x15U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x16U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x16U)))))) 
                  << 0x16U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x17U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x17U)))))) 
                  << 0x17U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x18U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x18U)))))) 
                  << 0x18U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x19U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x19U)))))) 
                  << 0x19U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x1aU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x1aU)))))) 
                  << 0x1aU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x1bU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x1bU)))))) 
                  << 0x1bU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x1cU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x1cU)))))) 
                  << 0x1cU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x1dU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x1dU)))))) 
                  << 0x1dU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x1eU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x1eU)))))) 
                  << 0x1eU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x1fU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x1fU)))))) 
                  << 0x1fU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x20U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x20U)))))) 
                  << 0x20U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x21U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x21U)))))) 
                  << 0x21U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x22U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x22U)))))) 
                  << 0x22U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x23U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x23U)))))) 
                  << 0x23U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x24U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x24U)))))) 
                  << 0x24U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x25U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x25U)))))) 
                  << 0x25U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x26U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x26U)))))) 
                  << 0x26U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x27U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x27U)))))) 
                  << 0x27U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x28U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x28U)))))) 
                  << 0x28U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x29U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x29U)))))) 
                  << 0x29U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x2aU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x2aU)))))) 
                  << 0x2aU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x2bU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x2bU)))))) 
                  << 0x2bU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x2cU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x2cU)))))) 
                  << 0x2cU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x2dU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x2dU)))))) 
                  << 0x2dU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x2eU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x2eU)))))) 
                  << 0x2eU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x2fU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x2fU)))))) 
                  << 0x2fU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x30U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x30U)))))) 
                  << 0x30U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x31U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x31U)))))) 
                  << 0x31U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x32U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x32U)))))) 
                  << 0x32U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x33U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x33U)))))) 
                  << 0x33U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x34U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x34U)))))) 
                  << 0x34U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x35U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x35U)))))) 
                  << 0x35U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x36U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x36U)))))) 
                  << 0x36U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x37U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x37U)))))) 
                  << 0x37U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x38U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x38U)))))) 
                  << 0x38U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x39U))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x39U)))))) 
                  << 0x39U));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x3aU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x3aU)))))) 
                  << 0x3aU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x3bU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x3bU)))))) 
                  << 0x3bU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x3cU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x3cU)))))) 
                  << 0x3cU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x3dU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x3dU)))))) 
                  << 0x3dU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x3eU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x3eU)))))) 
                  << 0x3eU));
    }
    if ((1U & ((~ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                           >> 0x3fU))) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
                                                  >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__y) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 0x3fU)))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__ds_ready_go) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__ds_ready_go))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__ds_ready_go 
            = vlSelf->top__DOT__U_IDU_0__DOT__ds_ready_go;
    }
    vlSelf->top__DOT__ds_to_es_valid = ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__ds_valid) 
                                        & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__ds_ready_go));
    vlSelf->top__DOT__ds_allowin = (1U & ((~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__ds_valid)) 
                                          | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__ds_ready_go) 
                                             & (IData)(vlSelf->top__DOT__es_allowin))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value)))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_value) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__U_IDU_0__DOT__rs1_eq_rs2 = (vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                  == vlSelf->top__DOT__U_IDU_0__DOT__rs2_value);
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                             >> 0x30U)) & (~ (IData)(
                                                     (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                      >> 0x30U))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (2U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x31U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x31U)))) 
                    << 1U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (4U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x32U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x32U)))) 
                    << 2U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (8U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x33U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x33U)))) 
                    << 3U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x10U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x34U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x34U)))) 
                       << 4U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x20U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x35U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x35U)))) 
                       << 5U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x40U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x36U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x36U)))) 
                       << 6U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x80U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x37U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x37U)))) 
                       << 7U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x100U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x38U)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x38U)))) 
                        << 8U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x200U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x39U)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x39U)))) 
                        << 9U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x400U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x3aU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x3aU)))) 
                        << 0xaU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x800U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x3bU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x3bU)))) 
                        << 0xbU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x3cU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x3cU)))) 
                         << 0xcU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x3dU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x3dU)))) 
                         << 0xdU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x3eU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x3eU)))) 
                         << 0xeU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x3fU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x3fU)))) 
                         << 0xfU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                             >> 0x30U)) ^ (~ (IData)(
                                                     (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                      >> 0x30U))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (2U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x31U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x31U)))) 
                    << 1U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (4U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x32U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x32U)))) 
                    << 2U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (8U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x33U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x33U)))) 
                    << 3U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x10U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x34U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x34U)))) 
                       << 4U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x20U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x35U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x35U)))) 
                       << 5U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x40U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x36U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x36U)))) 
                       << 6U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x80U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x37U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x37U)))) 
                       << 7U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x100U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x38U)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x38U)))) 
                        << 8U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x200U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x39U)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x39U)))) 
                        << 9U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x400U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x3aU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x3aU)))) 
                        << 0xaU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x800U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x3bU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x3bU)))) 
                        << 0xbU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x3cU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x3cU)))) 
                         << 0xcU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x3dU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x3dU)))) 
                         << 0xdU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x3eU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x3eU)))) 
                         << 0xeU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x3fU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x3fU)))) 
                         << 0xfU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                             >> 0x20U)) & (~ (IData)(
                                                     (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                      >> 0x20U))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (2U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x21U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x21U)))) 
                    << 1U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (4U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x22U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x22U)))) 
                    << 2U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (8U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x23U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x23U)))) 
                    << 3U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x10U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x24U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x24U)))) 
                       << 4U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x20U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x25U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x25U)))) 
                       << 5U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x40U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x26U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x26U)))) 
                       << 6U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x80U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x27U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x27U)))) 
                       << 7U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x100U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x28U)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x28U)))) 
                        << 8U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x200U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x29U)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x29U)))) 
                        << 9U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x400U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x2aU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x2aU)))) 
                        << 0xaU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x800U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x2bU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x2bU)))) 
                        << 0xbU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x2cU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x2cU)))) 
                         << 0xcU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x2dU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x2dU)))) 
                         << 0xdU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x2eU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x2eU)))) 
                         << 0xeU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x2fU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x2fU)))) 
                         << 0xfU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                             >> 0x20U)) ^ (~ (IData)(
                                                     (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                      >> 0x20U))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (2U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x21U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x21U)))) 
                    << 1U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (4U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x22U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x22U)))) 
                    << 2U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (8U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x23U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x23U)))) 
                    << 3U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x10U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x24U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x24U)))) 
                       << 4U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x20U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x25U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x25U)))) 
                       << 5U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x40U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x26U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x26U)))) 
                       << 6U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x80U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x27U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x27U)))) 
                       << 7U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x100U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x28U)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x28U)))) 
                        << 8U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x200U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x29U)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x29U)))) 
                        << 9U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x400U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x2aU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x2aU)))) 
                        << 0xaU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x800U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x2bU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x2bU)))) 
                        << 0xbU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x2cU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x2cU)))) 
                         << 0xcU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x2dU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x2dU)))) 
                         << 0xdU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x2eU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x2eU)))) 
                         << 0xeU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x2fU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x2fU)))) 
                         << 0xfU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                             >> 0x10U)) & (~ (IData)(
                                                     (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                      >> 0x10U))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (2U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x11U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x11U)))) 
                    << 1U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (4U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x12U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x12U)))) 
                    << 2U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (8U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x13U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x13U)))) 
                    << 3U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x10U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x14U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x14U)))) 
                       << 4U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x20U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x15U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x15U)))) 
                       << 5U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x40U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x16U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x16U)))) 
                       << 6U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x80U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x17U)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x17U)))) 
                       << 7U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x100U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x18U)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x18U)))) 
                        << 8U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x200U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x19U)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x19U)))) 
                        << 9U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x400U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x1aU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x1aU)))) 
                        << 0xaU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x800U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x1bU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x1bU)))) 
                        << 0xbU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x1cU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x1cU)))) 
                         << 0xcU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x1dU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x1dU)))) 
                         << 0xdU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x1eU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x1eU)))) 
                         << 0xeU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x1fU)) & (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x1fU)))) 
                         << 0xfU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                             >> 0x10U)) ^ (~ (IData)(
                                                     (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                      >> 0x10U))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (2U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x11U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x11U)))) 
                    << 1U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (4U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x12U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x12U)))) 
                    << 2U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (8U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 0x13U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 0x13U)))) 
                    << 3U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x10U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x14U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x14U)))) 
                       << 4U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x20U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x15U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x15U)))) 
                       << 5U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x40U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x16U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x16U)))) 
                       << 6U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x80U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x17U)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x17U)))) 
                       << 7U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x100U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x18U)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x18U)))) 
                        << 8U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x200U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x19U)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x19U)))) 
                        << 9U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x400U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x1aU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x1aU)))) 
                        << 0xaU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x800U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0x1bU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0x1bU)))) 
                        << 0xbU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x1cU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x1cU)))) 
                         << 0xcU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x1dU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x1dU)))) 
                         << 0xdU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x1eU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x1eU)))) 
                         << 0xeU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0x1fU)) ^ (~ (IData)(
                                                           (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                            >> 0x1fU)))) 
                         << 0xfU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value) 
                    & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value)))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (2U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 1U)) & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 1U)))) 
                    << 1U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (4U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 2U)) & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 2U)))) 
                    << 2U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (8U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 3U)) & (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 3U)))) 
                    << 3U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x10U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 4U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 4U)))) 
                       << 4U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x20U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 5U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 5U)))) 
                       << 5U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x40U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 6U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 6U)))) 
                       << 6U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x80U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 7U)) & (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 7U)))) 
                       << 7U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x100U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 8U)) & (~ (IData)(
                                                       (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                        >> 8U)))) 
                        << 8U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x200U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 9U)) & (~ (IData)(
                                                       (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                        >> 9U)))) 
                        << 9U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x400U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0xaU)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0xaU)))) 
                        << 0xaU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x800U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0xbU)) & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0xbU)))) 
                        << 0xbU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0xcU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0xcU)))) 
                         << 0xcU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0xdU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0xdU)))) 
                         << 0xdU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0xeU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0xeU)))) 
                         << 0xeU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0xfU)) & (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0xfU)))) 
                         << 0xfU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value) 
                    ^ (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value)))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (2U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 1U)) ^ (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 1U)))) 
                    << 1U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (4U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 2U)) ^ (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 2U)))) 
                    << 2U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (8U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                              >> 3U)) ^ (~ (IData)(
                                                   (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                    >> 3U)))) 
                    << 3U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x10U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 4U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 4U)))) 
                       << 4U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x20U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 5U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 5U)))) 
                       << 5U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x40U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 6U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 6U)))) 
                       << 6U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x80U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 7U)) ^ (~ (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                       >> 7U)))) 
                       << 7U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x100U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 8U)) ^ (~ (IData)(
                                                       (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                        >> 8U)))) 
                        << 8U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x200U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 9U)) ^ (~ (IData)(
                                                       (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                        >> 9U)))) 
                        << 9U)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x400U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0xaU)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0xaU)))) 
                        << 0xaU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x800U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                  >> 0xbU)) ^ (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0xbU)))) 
                        << 0xbU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x1000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0xcU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0xcU)))) 
                         << 0xcU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x2000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0xdU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0xdU)))) 
                         << 0xdU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x4000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0xeU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0xeU)))) 
                         << 0xeU)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
           | (0x8000U & (((IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                   >> 0xfU)) ^ (~ (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                           >> 0xfU)))) 
                         << 0xfU)));
    vlSelf->top__DOT__U_IDU_0__DOT__bt_a = ((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))
                                             ? vlSelf->top__DOT__U_IDU_0__DOT__rs1_value
                                             : (((QData)((IData)(
                                                                 vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U]))));
    if (((IData)(vlSelf->top__DOT__ds_to_es_valid) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__ds_to_es_valid))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT____Vtogcov__ds_to_es_valid 
            = vlSelf->top__DOT__ds_to_es_valid;
    }
    if (((IData)(vlSelf->top__DOT__ds_allowin) ^ (IData)(vlSelf->top__DOT____Vtogcov__ds_allowin))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT____Vtogcov__ds_allowin = vlSelf->top__DOT__ds_allowin;
    }
    vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin = (1U 
                                                  & ((~ (IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_valid)) 
                                                     | (IData)(vlSelf->top__DOT__ds_allowin)));
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_eq_rs2) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_eq_rs2))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__rs1_eq_rs2 
            = vlSelf->top__DOT__U_IDU_0__DOT__rs1_eq_rs2;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT____Vtogcov__pn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__gn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT____Vtogcov__pn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__gn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__pn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)));
    }
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (1U & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                    ^ (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                        | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                       << 1U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                    ^ (0xfffffffcU & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                     | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                    << 2U)))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                    ^ (0xfffffff8U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                           | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                          << 3U)))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                       ^ (0xfffffff0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                       << 4U)))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x20U & ((0xffffffe0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                       ^ (0xffffffe0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                              | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                             << 5U)))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x40U & ((0xffffffc0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                       ^ (0xffffffc0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                    | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                   << 6U)))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                       ^ (0xffffff80U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                       << 6U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                          | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                         << 7U)))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                        ^ (0xffffff00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                                << 8U)))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x200U & ((0xfffffe00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                        ^ (0xfffffe00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                                << 9U)))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                        ^ (0xfffffc00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                                << 0xaU)))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x800U & ((0xfffff800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                        ^ (0xfffff800U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                                << 0xbU)))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x1000U & ((0xfffff000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                         ^ (0xfffff000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                                << 0xcU)))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x2000U & ((0xffffe000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                         ^ (0xffffe000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                                << 0xdU)))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x4000U & ((0xffffc000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                         ^ (0xffffc000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                                << 0xeU)))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                         ^ (0xffff8000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                << 0xeU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)) 
                                                                                << 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0 
        = (1U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                  >> 0xfU) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                               >> 0xfU) & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                            >> 0xeU) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                               >> 0xeU) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                     >> 0xdU) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                        >> 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                           >> 0xcU) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                              >> 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                 >> 0xbU) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                    >> 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                       >> 0xaU) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                          >> 9U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                             >> 9U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                >> 8U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                >> 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                >> 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                >> 6U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                >> 5U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                >> 4U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                >> 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                >> 1U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn) 
                                                                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn)))))))))))))))))))))))))))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_a) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a)))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_a)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__U_IDU_0__DOT____Vtogcov__bt_a) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn 
        = (0xffffU & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                               >> 0x30U)) & (IData)(
                                                    (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                     >> 0x30U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn 
        = (0xffffU & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                               >> 0x30U)) ^ (IData)(
                                                    (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                     >> 0x30U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn 
        = (0xffffU & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                               >> 0x20U)) & (IData)(
                                                    (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                     >> 0x20U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn 
        = (0xffffU & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                               >> 0x20U)) ^ (IData)(
                                                    (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                     >> 0x20U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn 
        = (0xffffU & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                               >> 0x10U)) & (IData)(
                                                    (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                     >> 0x10U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn 
        = (0xffffU & ((IData)((vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                               >> 0x10U)) ^ (IData)(
                                                    (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                     >> 0x10U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_0__DOT__gn 
        = (0xffffU & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_a) 
                      & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_b)));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_0__DOT__pn 
        = (0xffffU & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_a) 
                      ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_b)));
    if (((IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin) 
         ^ (IData)(vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_allowin))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelf->top__DOT__U_IFU_0__DOT____Vtogcov__fs_allowin 
            = vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin;
    }
    vlSelf->inst_sram_en = ((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin));
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT____Vtogcov__sum)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum)));
    }
    if (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0) 
         ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__c0))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vtogcov__c0 
            = vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0;
    }
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                    ^ (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                       << 1U))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (4U & ((0xfffffffcU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                    ^ (0xfffffffcU & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                     | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                        & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                    << 2U)))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                    ^ (0xfffffff8U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                       << 1U) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                           | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                              & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                          << 3U)))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                       ^ (0xfffffff0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                       << 4U)))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x20U & ((0xffffffe0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                       ^ (0xffffffe0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                              | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                 & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                             << 5U)))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x40U & ((0xffffffc0U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                       ^ (0xffffffc0U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                    | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                       & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                   << 6U)))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                       ^ (0xffffff80U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                          << 1U) | 
                                         (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                           << 1U) & 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               << 2U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     << 3U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        << 4U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           << 4U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 5U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 6U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                          | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                             & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                         << 7U)))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                        ^ (0xffffff00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                                << 8U)))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x200U & ((0xfffffe00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                        ^ (0xfffffe00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                                << 9U)))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                        ^ (0xfffffc00U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                                << 0xaU)))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x800U & ((0xfffff800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                        ^ (0xfffff800U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                           << 1U) | 
                                          (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                            << 1U) 
                                           & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                  << 2U) 
                                                 & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                        << 3U) 
                                                       & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                              << 4U) 
                                                             & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                    << 5U) 
                                                                   & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                          << 6U) 
                                                                         & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                               & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                                << 0xbU)))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x1000U & ((0xfffff000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                         ^ (0xfffff000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                                << 0xcU)))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x2000U & ((0xffffe000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                         ^ (0xffffe000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                                << 0xdU)))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x4000U & ((0xffffc000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                         ^ (0xffffc000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                                << 0xeU)))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum 
        = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum)) 
           | (0x8000U & ((0xffff8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn)) 
                         ^ (0xffff8000U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            << 1U) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               << 1U) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     << 2U) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           << 3U) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                              << 4U) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                 << 4U) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                       << 5U) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 9U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xaU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xbU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xcU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xdU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                << 0xeU) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))) 
                                                                                << 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1 
        = (1U & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                  >> 0xfU) | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                               >> 0xfU) & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                            >> 0xeU) 
                                           | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                               >> 0xeU) 
                                              & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                  >> 0xdU) 
                                                 | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                     >> 0xdU) 
                                                    & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                        >> 0xcU) 
                                                       | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                           >> 0xcU) 
                                                          & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                              >> 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                 >> 0xbU) 
                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                    >> 0xaU) 
                                                                   | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                       >> 0xaU) 
                                                                      & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                          >> 9U) 
                                                                         | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                             >> 9U) 
                                                                            & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 8U) 
                                                                               | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 8U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 7U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 7U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 6U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 6U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 5U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 5U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 4U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 4U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 3U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                >> 1U) 
                                                                                | (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn) 
                                                                                | ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn) 
                                                                                & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0))))))))))))))))))))))))))))))))));
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__gn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (4U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (8U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xffefU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x10U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x20U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x40U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                  ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x80U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x100U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x200U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x400U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                   ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x800U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xefffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn) 
                    ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT____Vtogcov__pn)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (1U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn) 
               ^ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__gn)))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__gn 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT____Vtogcov__gn)) 
               | (2U & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn)));
    }
}
