// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<9>/*287:0*/ __Vtemp70;
    VlWide<9>/*287:0*/ __Vtemp71;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__es_allowin));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__fs_to_ds_valid));
            tracep->chgWData(oldp+2,(vlSelf->top__DOT__fs_to_ds_bus),96);
            tracep->chgWData(oldp+5,(vlSelf->top__DOT__ms_to_ws_bus),134);
            tracep->chgWData(oldp+10,(vlSelf->top__DOT__br_bus),65);
            tracep->chgWData(oldp+13,(vlSelf->top__DOT__ms_forward_bus),70);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__U_IFU_0__DOT__nextpc),64);
            tracep->chgBit(oldp+18,((1U & vlSelf->top__DOT__br_bus[2U])));
            tracep->chgQData(oldp+19,((((QData)((IData)(
                                                        vlSelf->top__DOT__br_bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__br_bus[0U])))),64);
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__U_IDU_0__DOT__br_taken));
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r),64);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__U_IDU_0__DOT__ms_rs1_hazard));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__U_IDU_0__DOT__ms_rs2_hazard));
            tracep->chgCData(oldp+26,((0x1fU & vlSelf->top__DOT__ms_forward_bus[0U])),5);
            tracep->chgQData(oldp+27,((((QData)((IData)(
                                                        vlSelf->top__DOT__ms_forward_bus[2U])) 
                                        << 0x3bU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__ms_forward_bus[1U])) 
                                         << 0x1bU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__ms_forward_bus[0U])) 
                                           >> 5U)))),64);
            tracep->chgBit(oldp+29,((1U & (vlSelf->top__DOT__ms_forward_bus[2U] 
                                           >> 5U))));
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value),64);
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__U_IDU_0__DOT__rs1_eq_rs2));
            tracep->chgBit(oldp+35,((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                   >> 0x3fU)))));
            tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3)))));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3));
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__U_IDU_0__DOT__bt_a),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r),64);
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2));
            tracep->chgQData(oldp+45,((~ vlSelf->top__DOT__U_IDU_0__DOT__rs2_value)),64);
            tracep->chgSData(oldp+47,((0xffffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value))),16);
            tracep->chgSData(oldp+48,((0xffffU & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value)))),16);
            tracep->chgSData(oldp+49,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum),16);
            tracep->chgSData(oldp+50,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn),16);
            tracep->chgSData(oldp+51,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn),16);
            tracep->chgSData(oldp+52,((0xffffU & (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                          >> 0x10U)))),16);
            tracep->chgSData(oldp+53,((0xffffU & (~ (IData)(
                                                            (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                             >> 0x10U))))),16);
            tracep->chgSData(oldp+54,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum),16);
            tracep->chgSData(oldp+55,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn),16);
            tracep->chgSData(oldp+56,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn),16);
            tracep->chgSData(oldp+57,((0xffffU & (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                          >> 0x20U)))),16);
            tracep->chgSData(oldp+58,((0xffffU & (~ (IData)(
                                                            (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                             >> 0x20U))))),16);
            tracep->chgSData(oldp+59,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum),16);
            tracep->chgSData(oldp+60,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn),16);
            tracep->chgSData(oldp+61,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn),16);
            tracep->chgSData(oldp+62,((0xffffU & (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                          >> 0x30U)))),16);
            tracep->chgSData(oldp+63,((0xffffU & (~ (IData)(
                                                            (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                             >> 0x30U))))),16);
            tracep->chgSData(oldp+64,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum),16);
            tracep->chgSData(oldp+65,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn),16);
            tracep->chgSData(oldp+66,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn),16);
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c3));
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0));
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1));
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2));
            tracep->chgSData(oldp+71,((0xffffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_a))),16);
            tracep->chgSData(oldp+72,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_0__sum),16);
            tracep->chgSData(oldp+73,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_0__DOT__pn),16);
            tracep->chgSData(oldp+74,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_0__DOT__gn),16);
            tracep->chgSData(oldp+75,((0xffffU & (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                          >> 0x10U)))),16);
            tracep->chgSData(oldp+76,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum),16);
            tracep->chgSData(oldp+77,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn),16);
            tracep->chgSData(oldp+78,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn),16);
            tracep->chgSData(oldp+79,((0xffffU & (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                          >> 0x20U)))),16);
            tracep->chgSData(oldp+80,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum),16);
            tracep->chgSData(oldp+81,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn),16);
            tracep->chgSData(oldp+82,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn),16);
            tracep->chgSData(oldp+83,((0xffffU & (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                          >> 0x30U)))),16);
            tracep->chgSData(oldp+84,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum),16);
            tracep->chgSData(oldp+85,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn),16);
            tracep->chgSData(oldp+86,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn),16);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__U_MEU_0__DOT__mem_result),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__U_MEU_0__DOT__ms_final_result),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            __Vtemp70[7U] = ((0xfffe0000U & ((0xe0000000U 
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
                                             << 5U)) 
                                | (IData)(vlSelf->top__DOT__U_IDU_0__DOT__imm_s)));
            __Vtemp70[8U] = (0x1ffffU & ((0x10000U 
                                          & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_div) 
                                             << 0x10U)) 
                                         | ((0x18000U 
                                             & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_rem) 
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
            __Vtemp71[0U] = (IData)((((QData)((IData)(
                                                      vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U]))));
            __Vtemp71[1U] = (IData)(((((QData)((IData)(
                                                       vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U]))) 
                                     >> 0x20U));
            __Vtemp71[2U] = (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value);
            __Vtemp71[3U] = (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                     >> 0x20U));
            __Vtemp71[4U] = (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value);
            __Vtemp71[5U] = (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                     >> 0x20U));
            __Vtemp71[6U] = ((0xfff00000U & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]) 
                             | (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                >> 0xcU));
            __Vtemp71[7U] = __Vtemp70[7U];
            __Vtemp71[8U] = (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_mul) 
                              << 0x11U) | __Vtemp70[8U]);
            tracep->chgWData(oldp+91,(__Vtemp71),274);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__ds_allowin));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__ds_to_es_valid));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__U_EXU_0__DOT__es_valid));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__U_MEU_0__DOT__ms_valid));
            tracep->chgWData(oldp+104,(vlSelf->top__DOT__es_to_ms_bus),139);
            tracep->chgWData(oldp+109,(vlSelf->top__DOT__ws_to_rf_bus),70);
            tracep->chgWData(oldp+112,(vlSelf->top__DOT__es_forward_bus),71);
            tracep->chgWData(oldp+115,(vlSelf->top__DOT__ws_forward_bus),70);
            tracep->chgQData(oldp+118,((((QData)((IData)(
                                                         vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U])))),64);
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid));
            tracep->chgQData(oldp+121,((((QData)((IData)(
                                                         vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U])))),64);
            tracep->chgIData(oldp+123,(vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]),32);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__U_WBU_0__DOT__rf_we));
            tracep->chgCData(oldp+125,((0x1fU & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U])),5);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U])))),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__dpi_regs[0]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__dpi_regs[1]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__dpi_regs[2]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__dpi_regs[3]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__dpi_regs[4]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__dpi_regs[5]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__dpi_regs[6]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__dpi_regs[7]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__dpi_regs[8]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__dpi_regs[9]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__dpi_regs[10]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__dpi_regs[11]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__dpi_regs[12]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__dpi_regs[13]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__dpi_regs[14]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__dpi_regs[15]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__dpi_regs[16]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__dpi_regs[17]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__dpi_regs[18]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__dpi_regs[19]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__dpi_regs[20]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__dpi_regs[21]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__dpi_regs[22]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__dpi_regs[23]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__dpi_regs[24]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__dpi_regs[25]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__dpi_regs[26]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__dpi_regs[27]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__dpi_regs[28]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__dpi_regs[29]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__dpi_regs[30]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__dpi_regs[31]),64);
            tracep->chgBit(oldp+192,(vlSelf->top__DOT__stop));
            tracep->chgBit(oldp+193,(vlSelf->top__DOT__U_IFU_0__DOT__fs_valid));
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin));
            tracep->chgQData(oldp+195,((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc)),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__U_IFU_0__DOT__fs_pc),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[1]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[2]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[3]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[4]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[5]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[6]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[7]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[8]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[9]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[10]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[11]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[12]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[13]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[14]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[15]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[16]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[17]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[18]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[19]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[20]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[21]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[22]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[23]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[24]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[25]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[26]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[27]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[28]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[29]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[30]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[31]),64);
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__U_IDU_0__DOT__ds_valid));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__U_IDU_0__DOT__ds_ready_go));
            tracep->chgWData(oldp+265,(vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r),96);
            tracep->chgQData(oldp+268,((((QData)((IData)(
                                                         vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U])))),64);
            tracep->chgBit(oldp+270,((1U & (vlSelf->top__DOT__ws_to_rf_bus[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+271,((0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])),5);
            tracep->chgQData(oldp+272,((((QData)((IData)(
                                                         vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ws_to_rf_bus[0U])))),64);
            tracep->chgBit(oldp+274,(vlSelf->top__DOT__U_IDU_0__DOT__op_mul));
            tracep->chgBit(oldp+275,(vlSelf->top__DOT__U_IDU_0__DOT__op_div));
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__U_IDU_0__DOT__op_rem));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__U_IDU_0__DOT__op_add));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__U_IDU_0__DOT__op_sub));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__U_IDU_0__DOT__op_slt));
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__U_IDU_0__DOT__op_sltu));
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__U_IDU_0__DOT__op_and));
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__U_IDU_0__DOT__op_or));
            tracep->chgBit(oldp+283,(vlSelf->top__DOT__U_IDU_0__DOT__op_xor));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__U_IDU_0__DOT__op_sll));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__U_IDU_0__DOT__op_srl));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__U_IDU_0__DOT__op_sra));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__U_IDU_0__DOT__res_sext));
            tracep->chgBit(oldp+288,(vlSelf->top__DOT__U_IDU_0__DOT__res_zext));
            tracep->chgBit(oldp+289,(vlSelf->top__DOT__U_IDU_0__DOT__src_shamt));
            tracep->chgBit(oldp+290,(vlSelf->top__DOT__U_IDU_0__DOT__src_pc));
            tracep->chgBit(oldp+291,(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_u));
            tracep->chgBit(oldp+292,(vlSelf->top__DOT__U_IDU_0__DOT__src_4));
            tracep->chgBit(oldp+293,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))));
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_i));
            tracep->chgBit(oldp+295,(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_s));
            tracep->chgBit(oldp+296,(vlSelf->top__DOT__U_IDU_0__DOT__id_rf_we));
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__U_IDU_0__DOT__id_mem_re));
            tracep->chgCData(oldp+298,(vlSelf->top__DOT__U_IDU_0__DOT__id_mem_bytes),2);
            tracep->chgCData(oldp+299,((0x3fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                 >> 0x14U))),6);
            tracep->chgIData(oldp+300,((vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                        >> 0xcU)),20);
            tracep->chgIData(oldp+301,(vlSelf->top__DOT__U_IDU_0__DOT__imm_j),21);
            tracep->chgSData(oldp+302,((vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+303,(vlSelf->top__DOT__U_IDU_0__DOT__imm_s),12);
            tracep->chgSData(oldp+304,(vlSelf->top__DOT__U_IDU_0__DOT__imm_b),13);
            tracep->chgCData(oldp+305,((0x7fU & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U])),7);
            tracep->chgCData(oldp+306,((0x1fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+307,((7U & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+308,((0x1fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+309,((0x1fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+310,((vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+311,((vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                        >> 0x1aU)),6);
            tracep->chgBit(oldp+312,(vlSelf->top__DOT__U_IDU_0__DOT__es_rs1_hazard));
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__U_IDU_0__DOT__es_rs2_hazard));
            tracep->chgBit(oldp+314,(vlSelf->top__DOT__U_IDU_0__DOT__ws_rs1_hazard));
            tracep->chgBit(oldp+315,(vlSelf->top__DOT__U_IDU_0__DOT__ws_rs2_hazard));
            tracep->chgCData(oldp+316,((0x1fU & vlSelf->top__DOT__es_forward_bus[0U])),5);
            tracep->chgCData(oldp+317,((0x1fU & vlSelf->top__DOT__ws_forward_bus[0U])),5);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         vlSelf->top__DOT__es_forward_bus[2U])) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__es_forward_bus[1U])) 
                                            << 0x1bU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__es_forward_bus[0U])) 
                                              >> 5U)))),64);
            tracep->chgQData(oldp+320,((((QData)((IData)(
                                                         vlSelf->top__DOT__ws_forward_bus[2U])) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__ws_forward_bus[1U])) 
                                            << 0x1bU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__ws_forward_bus[0U])) 
                                              >> 5U)))),64);
            tracep->chgBit(oldp+322,((1U & (vlSelf->top__DOT__es_forward_bus[2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+323,((1U & (vlSelf->top__DOT__es_forward_bus[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+324,((1U & (vlSelf->top__DOT__ws_forward_bus[2U] 
                                            >> 5U))));
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__U_IDU_0__DOT__data_r1),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__U_IDU_0__DOT__data_r2),64);
            tracep->chgBit(oldp+329,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))));
            tracep->chgBit(oldp+330,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))));
            tracep->chgBit(oldp+331,((0x67U == (0x7fU 
                                                & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))));
            tracep->chgBit(oldp+332,(vlSelf->top__DOT__U_IDU_0__DOT__inst_beq));
            tracep->chgBit(oldp+333,(vlSelf->top__DOT__U_IDU_0__DOT__inst_bne));
            tracep->chgBit(oldp+334,(vlSelf->top__DOT__U_IDU_0__DOT__inst_blt));
            tracep->chgBit(oldp+335,(vlSelf->top__DOT__U_IDU_0__DOT__inst_bge));
            tracep->chgBit(oldp+336,(vlSelf->top__DOT__U_IDU_0__DOT__inst_bltu));
            tracep->chgBit(oldp+337,(vlSelf->top__DOT__U_IDU_0__DOT__inst_bgeu));
            tracep->chgBit(oldp+338,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lb));
            tracep->chgBit(oldp+339,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lh));
            tracep->chgBit(oldp+340,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lw));
            tracep->chgBit(oldp+341,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lbu));
            tracep->chgBit(oldp+342,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lhu));
            tracep->chgBit(oldp+343,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lwu));
            tracep->chgBit(oldp+344,(vlSelf->top__DOT__U_IDU_0__DOT__inst_ld));
            tracep->chgBit(oldp+345,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sb));
            tracep->chgBit(oldp+346,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sh));
            tracep->chgBit(oldp+347,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sw));
            tracep->chgBit(oldp+348,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sd));
            tracep->chgBit(oldp+349,(vlSelf->top__DOT__U_IDU_0__DOT__inst_addi));
            tracep->chgBit(oldp+350,(vlSelf->top__DOT__U_IDU_0__DOT__inst_addiw));
            tracep->chgBit(oldp+351,(vlSelf->top__DOT__U_IDU_0__DOT__inst_slti));
            tracep->chgBit(oldp+352,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sltiu));
            tracep->chgBit(oldp+353,(vlSelf->top__DOT__U_IDU_0__DOT__inst_xori));
            tracep->chgBit(oldp+354,(vlSelf->top__DOT__U_IDU_0__DOT__inst_ori));
            tracep->chgBit(oldp+355,(vlSelf->top__DOT__U_IDU_0__DOT__inst_andi));
            tracep->chgBit(oldp+356,(vlSelf->top__DOT__U_IDU_0__DOT__inst_slli));
            tracep->chgBit(oldp+357,(vlSelf->top__DOT__U_IDU_0__DOT__inst_slliw));
            tracep->chgBit(oldp+358,(vlSelf->top__DOT__U_IDU_0__DOT__inst_srli));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__U_IDU_0__DOT__inst_srliw));
            tracep->chgBit(oldp+360,(vlSelf->top__DOT__U_IDU_0__DOT__inst_add));
            tracep->chgBit(oldp+361,(vlSelf->top__DOT__U_IDU_0__DOT__inst_addw));
            tracep->chgBit(oldp+362,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sub));
            tracep->chgBit(oldp+363,(vlSelf->top__DOT__U_IDU_0__DOT__inst_subw));
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sll));
            tracep->chgBit(oldp+365,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sllw));
            tracep->chgBit(oldp+366,(vlSelf->top__DOT__U_IDU_0__DOT__inst_slt));
            tracep->chgBit(oldp+367,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sltu));
            tracep->chgBit(oldp+368,(vlSelf->top__DOT__U_IDU_0__DOT__inst_xor));
            tracep->chgBit(oldp+369,(vlSelf->top__DOT__U_IDU_0__DOT__inst_srl));
            tracep->chgBit(oldp+370,(vlSelf->top__DOT__U_IDU_0__DOT__inst_srlw));
            tracep->chgBit(oldp+371,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sra));
            tracep->chgBit(oldp+372,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sraw));
            tracep->chgBit(oldp+373,(vlSelf->top__DOT__U_IDU_0__DOT__inst_or));
            tracep->chgBit(oldp+374,(vlSelf->top__DOT__U_IDU_0__DOT__inst_and));
            tracep->chgBit(oldp+375,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mul));
            tracep->chgBit(oldp+376,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mulh));
            tracep->chgBit(oldp+377,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mulhsu));
            tracep->chgBit(oldp+378,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mulhu));
            tracep->chgBit(oldp+379,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mulw));
            tracep->chgBit(oldp+380,(vlSelf->top__DOT__U_IDU_0__DOT__inst_div));
            tracep->chgBit(oldp+381,(vlSelf->top__DOT__U_IDU_0__DOT__inst_divu));
            tracep->chgBit(oldp+382,(vlSelf->top__DOT__U_IDU_0__DOT__inst_divw));
            tracep->chgBit(oldp+383,(vlSelf->top__DOT__U_IDU_0__DOT__inst_divuw));
            tracep->chgBit(oldp+384,(vlSelf->top__DOT__U_IDU_0__DOT__inst_rem));
            tracep->chgBit(oldp+385,(vlSelf->top__DOT__U_IDU_0__DOT__inst_remu));
            tracep->chgBit(oldp+386,(vlSelf->top__DOT__U_IDU_0__DOT__inst_remw));
            tracep->chgBit(oldp+387,(vlSelf->top__DOT__U_IDU_0__DOT__inst_remuw));
            tracep->chgBit(oldp+388,(vlSelf->top__DOT__U_IDU_0__DOT__inst_ebreak));
            tracep->chgBit(oldp+389,(vlSelf->top__DOT__U_IDU_0__DOT__inst_invalid));
            tracep->chgBit(oldp+390,((0U != (0x1fU 
                                             & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+391,((0U != (0x1fU 
                                             & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                >> 0x14U)))));
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__U_IDU_0__DOT__bt_b),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0]),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[1]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[2]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[3]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[4]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[5]),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[6]),64);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[7]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[8]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[9]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[10]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[11]),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[12]),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[13]),64);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[14]),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[15]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[16]),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[17]),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[18]),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[19]),64);
            tracep->chgQData(oldp+434,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[20]),64);
            tracep->chgQData(oldp+436,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[21]),64);
            tracep->chgQData(oldp+438,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[22]),64);
            tracep->chgQData(oldp+440,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[23]),64);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[24]),64);
            tracep->chgQData(oldp+444,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[25]),64);
            tracep->chgQData(oldp+446,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[26]),64);
            tracep->chgQData(oldp+448,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[27]),64);
            tracep->chgQData(oldp+450,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[28]),64);
            tracep->chgQData(oldp+452,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[29]),64);
            tracep->chgQData(oldp+454,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[30]),64);
            tracep->chgQData(oldp+456,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[31]),64);
            tracep->chgQData(oldp+458,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0]),64);
            tracep->chgQData(oldp+460,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[1]),64);
            tracep->chgQData(oldp+462,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[2]),64);
            tracep->chgQData(oldp+464,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[3]),64);
            tracep->chgQData(oldp+466,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[4]),64);
            tracep->chgQData(oldp+468,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[5]),64);
            tracep->chgQData(oldp+470,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[6]),64);
            tracep->chgQData(oldp+472,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[7]),64);
            tracep->chgQData(oldp+474,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[8]),64);
            tracep->chgQData(oldp+476,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[9]),64);
            tracep->chgQData(oldp+478,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[10]),64);
            tracep->chgQData(oldp+480,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[11]),64);
            tracep->chgQData(oldp+482,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[12]),64);
            tracep->chgQData(oldp+484,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[13]),64);
            tracep->chgQData(oldp+486,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[14]),64);
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[15]),64);
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[16]),64);
            tracep->chgQData(oldp+492,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[17]),64);
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[18]),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[19]),64);
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[20]),64);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[21]),64);
            tracep->chgQData(oldp+502,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[22]),64);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[23]),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[24]),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[25]),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[26]),64);
            tracep->chgQData(oldp+512,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[27]),64);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[28]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[29]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[30]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[31]),64);
            tracep->chgSData(oldp+522,((0xffffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_b))),16);
            tracep->chgSData(oldp+523,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                           >> 0x10U)))),16);
            tracep->chgSData(oldp+524,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                           >> 0x20U)))),16);
            tracep->chgSData(oldp+525,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                           >> 0x30U)))),16);
            tracep->chgWData(oldp+526,(vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r),274);
            tracep->chgBit(oldp+535,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+536,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+537,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+538,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+539,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+540,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+541,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+543,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 9U))));
            tracep->chgBit(oldp+544,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 8U))));
            tracep->chgBit(oldp+545,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 7U))));
            tracep->chgBit(oldp+546,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 6U))));
            tracep->chgBit(oldp+547,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 5U))));
            tracep->chgBit(oldp+548,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 4U))));
            tracep->chgBit(oldp+549,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                            >> 3U))));
            tracep->chgBit(oldp+550,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+551,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+552,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+553,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+554,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+556,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+557,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+558,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+559,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+560,((3U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                              >> 0x11U))),2);
            tracep->chgCData(oldp+561,((0x3fU & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                                  << 3U) 
                                                 | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                    >> 0x1dU)))),6);
            tracep->chgIData(oldp+562,((0xfffffU & 
                                        vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U])),20);
            tracep->chgSData(oldp+563,((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+564,((0xfffU & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])),12);
            tracep->chgCData(oldp+565,((0x1fU & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                 >> 0xcU))),5);
            tracep->chgQData(oldp+566,((((QData)((IData)(
                                                         vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U])))),64);
            tracep->chgQData(oldp+568,((((QData)((IData)(
                                                         vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U])))),64);
            tracep->chgQData(oldp+570,((((QData)((IData)(
                                                         vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U])))),64);
            tracep->chgQData(oldp+572,(vlSelf->top__DOT__U_EXU_0__DOT__alu_src1),64);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__U_EXU_0__DOT__alu_src2),64);
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__U_EXU_0__DOT__alu_result),64);
            tracep->chgBit(oldp+578,(vlSelf->top__DOT__U_EXU_0__DOT__mem_read_after_write));
            tracep->chgBit(oldp+579,(vlSelf->top__DOT__U_EXU_0__DOT__es_forward_valid));
            tracep->chgQData(oldp+580,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt),64);
            tracep->chgQData(oldp+582,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and),64);
            tracep->chgQData(oldp+584,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or),64);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor),64);
            tracep->chgQData(oldp+588,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll),64);
            tracep->chgQData(oldp+590,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_srl),64);
            tracep->chgWData(oldp+592,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sra),128);
            tracep->chgQData(oldp+596,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_b),64);
            tracep->chgBit(oldp+598,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_cin));
            tracep->chgQData(oldp+599,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r),64);
            tracep->chgBit(oldp+601,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3));
            tracep->chgQData(oldp+602,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res),64);
            tracep->chgBit(oldp+604,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0));
            tracep->chgBit(oldp+605,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1));
            tracep->chgBit(oldp+606,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2));
            tracep->chgQData(oldp+607,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y),64);
            tracep->chgSData(oldp+609,((0xffffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_src1))),16);
            tracep->chgSData(oldp+610,((0xffffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y))),16);
            tracep->chgSData(oldp+611,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum),16);
            tracep->chgSData(oldp+612,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn),16);
            tracep->chgSData(oldp+613,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn),16);
            tracep->chgSData(oldp+614,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                           >> 0x10U)))),16);
            tracep->chgSData(oldp+615,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y 
                                                           >> 0x10U)))),16);
            tracep->chgSData(oldp+616,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum),16);
            tracep->chgSData(oldp+617,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn),16);
            tracep->chgSData(oldp+618,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn),16);
            tracep->chgSData(oldp+619,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                           >> 0x20U)))),16);
            tracep->chgSData(oldp+620,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y 
                                                           >> 0x20U)))),16);
            tracep->chgSData(oldp+621,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum),16);
            tracep->chgSData(oldp+622,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn),16);
            tracep->chgSData(oldp+623,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn),16);
            tracep->chgSData(oldp+624,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                           >> 0x30U)))),16);
            tracep->chgSData(oldp+625,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y 
                                                           >> 0x30U)))),16);
            tracep->chgSData(oldp+626,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum),16);
            tracep->chgSData(oldp+627,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn),16);
            tracep->chgSData(oldp+628,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn),16);
            tracep->chgWData(oldp+629,(vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r),139);
            tracep->chgBit(oldp+634,((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+635,((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                            >> 9U))));
            tracep->chgCData(oldp+636,((3U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+637,((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                            >> 6U))));
            tracep->chgBit(oldp+638,((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                            >> 5U))));
            tracep->chgCData(oldp+639,((0x1fU & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U])),5);
            tracep->chgQData(oldp+640,((((QData)((IData)(
                                                         vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U])))),64);
            tracep->chgBit(oldp+642,(vlSelf->top__DOT__U_MEU_0__DOT__ms_forward_valid));
            tracep->chgWData(oldp+643,(vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r),134);
            tracep->chgBit(oldp+648,((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
                                            >> 5U))));
            tracep->chgQData(oldp+649,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[0]),64);
            tracep->chgQData(oldp+651,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[1]),64);
            tracep->chgQData(oldp+653,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[2]),64);
            tracep->chgQData(oldp+655,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[3]),64);
            tracep->chgQData(oldp+657,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[4]),64);
            tracep->chgQData(oldp+659,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[5]),64);
            tracep->chgQData(oldp+661,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[6]),64);
            tracep->chgQData(oldp+663,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[7]),64);
            tracep->chgQData(oldp+665,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[8]),64);
            tracep->chgQData(oldp+667,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[9]),64);
            tracep->chgQData(oldp+669,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[10]),64);
            tracep->chgQData(oldp+671,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[11]),64);
            tracep->chgQData(oldp+673,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[12]),64);
            tracep->chgQData(oldp+675,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[13]),64);
            tracep->chgQData(oldp+677,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[14]),64);
            tracep->chgQData(oldp+679,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[15]),64);
            tracep->chgQData(oldp+681,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[16]),64);
            tracep->chgQData(oldp+683,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[17]),64);
            tracep->chgQData(oldp+685,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[18]),64);
            tracep->chgQData(oldp+687,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[19]),64);
            tracep->chgQData(oldp+689,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[20]),64);
            tracep->chgQData(oldp+691,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[21]),64);
            tracep->chgQData(oldp+693,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[22]),64);
            tracep->chgQData(oldp+695,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[23]),64);
            tracep->chgQData(oldp+697,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[24]),64);
            tracep->chgQData(oldp+699,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[25]),64);
            tracep->chgQData(oldp+701,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[26]),64);
            tracep->chgQData(oldp+703,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[27]),64);
            tracep->chgQData(oldp+705,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[28]),64);
            tracep->chgQData(oldp+707,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[29]),64);
            tracep->chgQData(oldp+709,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[30]),64);
            tracep->chgQData(oldp+711,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[31]),64);
            tracep->chgQData(oldp+713,(vlSelf->top__DOT__u_dpi_c__DOT__rf[0]),64);
            tracep->chgQData(oldp+715,(vlSelf->top__DOT__u_dpi_c__DOT__rf[1]),64);
            tracep->chgQData(oldp+717,(vlSelf->top__DOT__u_dpi_c__DOT__rf[2]),64);
            tracep->chgQData(oldp+719,(vlSelf->top__DOT__u_dpi_c__DOT__rf[3]),64);
            tracep->chgQData(oldp+721,(vlSelf->top__DOT__u_dpi_c__DOT__rf[4]),64);
            tracep->chgQData(oldp+723,(vlSelf->top__DOT__u_dpi_c__DOT__rf[5]),64);
            tracep->chgQData(oldp+725,(vlSelf->top__DOT__u_dpi_c__DOT__rf[6]),64);
            tracep->chgQData(oldp+727,(vlSelf->top__DOT__u_dpi_c__DOT__rf[7]),64);
            tracep->chgQData(oldp+729,(vlSelf->top__DOT__u_dpi_c__DOT__rf[8]),64);
            tracep->chgQData(oldp+731,(vlSelf->top__DOT__u_dpi_c__DOT__rf[9]),64);
            tracep->chgQData(oldp+733,(vlSelf->top__DOT__u_dpi_c__DOT__rf[10]),64);
            tracep->chgQData(oldp+735,(vlSelf->top__DOT__u_dpi_c__DOT__rf[11]),64);
            tracep->chgQData(oldp+737,(vlSelf->top__DOT__u_dpi_c__DOT__rf[12]),64);
            tracep->chgQData(oldp+739,(vlSelf->top__DOT__u_dpi_c__DOT__rf[13]),64);
            tracep->chgQData(oldp+741,(vlSelf->top__DOT__u_dpi_c__DOT__rf[14]),64);
            tracep->chgQData(oldp+743,(vlSelf->top__DOT__u_dpi_c__DOT__rf[15]),64);
            tracep->chgQData(oldp+745,(vlSelf->top__DOT__u_dpi_c__DOT__rf[16]),64);
            tracep->chgQData(oldp+747,(vlSelf->top__DOT__u_dpi_c__DOT__rf[17]),64);
            tracep->chgQData(oldp+749,(vlSelf->top__DOT__u_dpi_c__DOT__rf[18]),64);
            tracep->chgQData(oldp+751,(vlSelf->top__DOT__u_dpi_c__DOT__rf[19]),64);
            tracep->chgQData(oldp+753,(vlSelf->top__DOT__u_dpi_c__DOT__rf[20]),64);
            tracep->chgQData(oldp+755,(vlSelf->top__DOT__u_dpi_c__DOT__rf[21]),64);
            tracep->chgQData(oldp+757,(vlSelf->top__DOT__u_dpi_c__DOT__rf[22]),64);
            tracep->chgQData(oldp+759,(vlSelf->top__DOT__u_dpi_c__DOT__rf[23]),64);
            tracep->chgQData(oldp+761,(vlSelf->top__DOT__u_dpi_c__DOT__rf[24]),64);
            tracep->chgQData(oldp+763,(vlSelf->top__DOT__u_dpi_c__DOT__rf[25]),64);
            tracep->chgQData(oldp+765,(vlSelf->top__DOT__u_dpi_c__DOT__rf[26]),64);
            tracep->chgQData(oldp+767,(vlSelf->top__DOT__u_dpi_c__DOT__rf[27]),64);
            tracep->chgQData(oldp+769,(vlSelf->top__DOT__u_dpi_c__DOT__rf[28]),64);
            tracep->chgQData(oldp+771,(vlSelf->top__DOT__u_dpi_c__DOT__rf[29]),64);
            tracep->chgQData(oldp+773,(vlSelf->top__DOT__u_dpi_c__DOT__rf[30]),64);
            tracep->chgQData(oldp+775,(vlSelf->top__DOT__u_dpi_c__DOT__rf[31]),64);
            tracep->chgBit(oldp+777,(vlSelf->top__DOT__u_dpi_c__DOT__stop_r0));
            tracep->chgBit(oldp+778,(vlSelf->top__DOT__u_dpi_c__DOT__stop_r1));
            tracep->chgBit(oldp+779,(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2));
            tracep->chgIData(oldp+780,(vlSelf->top__DOT__u_dpi_c__DOT__inst_r0),32);
            tracep->chgIData(oldp+781,(vlSelf->top__DOT__u_dpi_c__DOT__inst_r1),32);
            tracep->chgIData(oldp+782,(vlSelf->top__DOT__u_dpi_c__DOT__inst_r2),32);
            tracep->chgQData(oldp+783,((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2))),64);
            tracep->chgQData(oldp+785,((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid))),64);
        }
        tracep->chgBit(oldp+787,(vlSelf->clk));
        tracep->chgBit(oldp+788,(vlSelf->reset));
        tracep->chgBit(oldp+789,(vlSelf->inst_sram_en));
        tracep->chgQData(oldp+790,(vlSelf->inst_sram_addr),64);
        tracep->chgQData(oldp+792,(vlSelf->inst_sram_rdata),64);
        tracep->chgBit(oldp+794,(vlSelf->data_sram_en));
        tracep->chgCData(oldp+795,(vlSelf->data_sram_wen),8);
        tracep->chgQData(oldp+796,(vlSelf->data_sram_addr),64);
        tracep->chgQData(oldp+798,(vlSelf->data_sram_wdata),64);
        tracep->chgQData(oldp+800,(vlSelf->data_sram_rdata),64);
        tracep->chgBit(oldp+802,((1U & (~ (IData)(vlSelf->reset)))));
        tracep->chgIData(oldp+803,((IData)(vlSelf->inst_sram_rdata)),32);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
