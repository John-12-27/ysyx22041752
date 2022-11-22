// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+788,"clk", false,-1);
        tracep->declBit(c+789,"reset", false,-1);
        tracep->declBit(c+790,"inst_sram_en", false,-1);
        tracep->declQuad(c+791,"inst_sram_addr", false,-1, 63,0);
        tracep->declQuad(c+793,"inst_sram_rdata", false,-1, 63,0);
        tracep->declBit(c+795,"data_sram_en", false,-1);
        tracep->declBus(c+796,"data_sram_wen", false,-1, 7,0);
        tracep->declQuad(c+797,"data_sram_addr", false,-1, 63,0);
        tracep->declQuad(c+799,"data_sram_wdata", false,-1, 63,0);
        tracep->declQuad(c+801,"data_sram_rdata", false,-1, 63,0);
        tracep->declBit(c+788,"top clk", false,-1);
        tracep->declBit(c+789,"top reset", false,-1);
        tracep->declBit(c+790,"top inst_sram_en", false,-1);
        tracep->declQuad(c+791,"top inst_sram_addr", false,-1, 63,0);
        tracep->declQuad(c+793,"top inst_sram_rdata", false,-1, 63,0);
        tracep->declBit(c+795,"top data_sram_en", false,-1);
        tracep->declBus(c+796,"top data_sram_wen", false,-1, 7,0);
        tracep->declQuad(c+797,"top data_sram_addr", false,-1, 63,0);
        tracep->declQuad(c+799,"top data_sram_wdata", false,-1, 63,0);
        tracep->declQuad(c+801,"top data_sram_rdata", false,-1, 63,0);
        tracep->declBit(c+101,"top ds_allowin", false,-1);
        tracep->declBit(c+1,"top es_allowin", false,-1);
        tracep->declBit(c+805,"top ms_allowin", false,-1);
        tracep->declBit(c+805,"top ws_allowin", false,-1);
        tracep->declBit(c+2,"top fs_to_ds_valid", false,-1);
        tracep->declBit(c+102,"top ds_to_es_valid", false,-1);
        tracep->declBit(c+103,"top es_to_ms_valid", false,-1);
        tracep->declBit(c+104,"top ms_to_ws_valid", false,-1);
        tracep->declArray(c+3,"top fs_to_ds_bus", false,-1, 95,0);
        tracep->declArray(c+92,"top ds_to_es_bus", false,-1, 273,0);
        tracep->declArray(c+105,"top es_to_ms_bus", false,-1, 138,0);
        tracep->declArray(c+6,"top ms_to_ws_bus", false,-1, 133,0);
        tracep->declArray(c+110,"top ws_to_rf_bus", false,-1, 69,0);
        tracep->declArray(c+11,"top br_bus", false,-1, 64,0);
        tracep->declArray(c+113,"top es_forward_bus", false,-1, 70,0);
        tracep->declArray(c+14,"top ms_forward_bus", false,-1, 69,0);
        tracep->declArray(c+116,"top ws_forward_bus", false,-1, 69,0);
        tracep->declQuad(c+806,"top mul_result", false,-1, 63,0);
        tracep->declQuad(c+808,"top div_result", false,-1, 63,0);
        tracep->declQuad(c+810,"top div_complete", false,-1, 63,0);
        tracep->declQuad(c+119,"top debug_wb_pc", false,-1, 63,0);
        tracep->declBit(c+121,"top debug_ws_valid", false,-1);
        tracep->declQuad(c+122,"top debug_ms_pc", false,-1, 63,0);
        tracep->declBus(c+124,"top debug_wb_inst", false,-1, 31,0);
        tracep->declBit(c+125,"top debug_wb_rf_wen", false,-1);
        tracep->declBus(c+126,"top debug_wb_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+127,"top debug_wb_rf_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+129+i*2,"top dpi_regs", true,(i+0), 63,0);}}
        tracep->declBus(c+193,"top stop", false,-1, 0,0);
        tracep->declBit(c+788,"top U_IFU_0 clk", false,-1);
        tracep->declBit(c+789,"top U_IFU_0 reset", false,-1);
        tracep->declBit(c+101,"top U_IFU_0 ds_allowin", false,-1);
        tracep->declArray(c+11,"top U_IFU_0 br_bus", false,-1, 64,0);
        tracep->declBit(c+2,"top U_IFU_0 fs_to_ds_valid", false,-1);
        tracep->declArray(c+3,"top U_IFU_0 fs_to_ds_bus", false,-1, 95,0);
        tracep->declBit(c+790,"top U_IFU_0 inst_en", false,-1);
        tracep->declQuad(c+791,"top U_IFU_0 inst_addr", false,-1, 63,0);
        tracep->declQuad(c+793,"top U_IFU_0 inst_rdata", false,-1, 63,0);
        tracep->declBit(c+194,"top U_IFU_0 fs_valid", false,-1);
        tracep->declBit(c+805,"top U_IFU_0 fs_ready_go", false,-1);
        tracep->declBit(c+195,"top U_IFU_0 fs_allowin", false,-1);
        tracep->declBit(c+803,"top U_IFU_0 to_fs_valid", false,-1);
        tracep->declQuad(c+196,"top U_IFU_0 seq_pc", false,-1, 63,0);
        tracep->declQuad(c+17,"top U_IFU_0 nextpc", false,-1, 63,0);
        tracep->declBit(c+19,"top U_IFU_0 br_taken", false,-1);
        tracep->declQuad(c+20,"top U_IFU_0 br_target", false,-1, 63,0);
        tracep->declBus(c+804,"top U_IFU_0 fs_inst", false,-1, 31,0);
        tracep->declQuad(c+198,"top U_IFU_0 fs_pc", false,-1, 63,0);
        tracep->declBit(c+788,"top U_IDU_0 clk", false,-1);
        tracep->declBit(c+789,"top U_IDU_0 reset", false,-1);
        tracep->declBit(c+1,"top U_IDU_0 es_allowin", false,-1);
        tracep->declBit(c+101,"top U_IDU_0 ds_allowin", false,-1);
        tracep->declBit(c+2,"top U_IDU_0 fs_to_ds_valid", false,-1);
        tracep->declArray(c+3,"top U_IDU_0 fs_to_ds_bus", false,-1, 95,0);
        tracep->declBit(c+102,"top U_IDU_0 ds_to_es_valid", false,-1);
        tracep->declArray(c+92,"top U_IDU_0 ds_to_es_bus", false,-1, 273,0);
        tracep->declArray(c+11,"top U_IDU_0 br_bus", false,-1, 64,0);
        tracep->declArray(c+110,"top U_IDU_0 ws_to_rf_bus", false,-1, 69,0);
        tracep->declArray(c+113,"top U_IDU_0 es_forward_bus", false,-1, 70,0);
        tracep->declArray(c+14,"top U_IDU_0 ms_forward_bus", false,-1, 69,0);
        tracep->declArray(c+116,"top U_IDU_0 ws_forward_bus", false,-1, 69,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+200+i*2,"top U_IDU_0 dpi_regs", true,(i+0), 63,0);}}
        tracep->declBus(c+193,"top U_IDU_0 stop", false,-1, 0,0);
        tracep->declBus(c+124,"top U_IDU_0 debug_wb_inst", false,-1, 31,0);
        tracep->declBit(c+264,"top U_IDU_0 ds_valid", false,-1);
        tracep->declBit(c+265,"top U_IDU_0 ds_ready_go", false,-1);
        tracep->declArray(c+266,"top U_IDU_0 fs_to_ds_bus_r", false,-1, 95,0);
        tracep->declBus(c+124,"top U_IDU_0 ds_inst", false,-1, 31,0);
        tracep->declQuad(c+269,"top U_IDU_0 ds_pc", false,-1, 63,0);
        tracep->declBit(c+271,"top U_IDU_0 rf_we", false,-1);
        tracep->declBus(c+272,"top U_IDU_0 rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+273,"top U_IDU_0 rf_wdata", false,-1, 63,0);
        tracep->declBit(c+22,"top U_IDU_0 br_taken", false,-1);
        tracep->declQuad(c+23,"top U_IDU_0 br_target", false,-1, 63,0);
        tracep->declBit(c+275,"top U_IDU_0 op_mul", false,-1);
        tracep->declBit(c+276,"top U_IDU_0 op_div", false,-1);
        tracep->declBit(c+277,"top U_IDU_0 op_rem", false,-1);
        tracep->declBit(c+278,"top U_IDU_0 op_add", false,-1);
        tracep->declBit(c+279,"top U_IDU_0 op_sub", false,-1);
        tracep->declBit(c+280,"top U_IDU_0 op_slt", false,-1);
        tracep->declBit(c+281,"top U_IDU_0 op_sltu", false,-1);
        tracep->declBit(c+282,"top U_IDU_0 op_and", false,-1);
        tracep->declBit(c+283,"top U_IDU_0 op_or", false,-1);
        tracep->declBit(c+284,"top U_IDU_0 op_xor", false,-1);
        tracep->declBit(c+285,"top U_IDU_0 op_sll", false,-1);
        tracep->declBit(c+286,"top U_IDU_0 op_srl", false,-1);
        tracep->declBit(c+287,"top U_IDU_0 op_sra", false,-1);
        tracep->declBit(c+288,"top U_IDU_0 res_sext", false,-1);
        tracep->declBit(c+289,"top U_IDU_0 res_zext", false,-1);
        tracep->declBit(c+290,"top U_IDU_0 src_shamt", false,-1);
        tracep->declBit(c+291,"top U_IDU_0 src_pc", false,-1);
        tracep->declBit(c+292,"top U_IDU_0 src_imm_u", false,-1);
        tracep->declBit(c+293,"top U_IDU_0 src_4", false,-1);
        tracep->declBit(c+294,"top U_IDU_0 src_0", false,-1);
        tracep->declBit(c+295,"top U_IDU_0 src_imm_i", false,-1);
        tracep->declBit(c+296,"top U_IDU_0 src_imm_s", false,-1);
        tracep->declBit(c+297,"top U_IDU_0 id_rf_we", false,-1);
        tracep->declBit(c+296,"top U_IDU_0 id_mem_we", false,-1);
        tracep->declBit(c+298,"top U_IDU_0 id_mem_re", false,-1);
        tracep->declBus(c+299,"top U_IDU_0 id_mem_bytes", false,-1, 1,0);
        tracep->declBus(c+300,"top U_IDU_0 shamt", false,-1, 5,0);
        tracep->declBus(c+301,"top U_IDU_0 imm_u", false,-1, 19,0);
        tracep->declBus(c+302,"top U_IDU_0 imm_j", false,-1, 20,0);
        tracep->declBus(c+303,"top U_IDU_0 imm_i", false,-1, 11,0);
        tracep->declBus(c+304,"top U_IDU_0 imm_s", false,-1, 11,0);
        tracep->declBus(c+305,"top U_IDU_0 imm_b", false,-1, 12,0);
        tracep->declBus(c+306,"top U_IDU_0 opcode", false,-1, 6,0);
        tracep->declBus(c+307,"top U_IDU_0 rd", false,-1, 4,0);
        tracep->declBus(c+308,"top U_IDU_0 funct3", false,-1, 2,0);
        tracep->declBus(c+309,"top U_IDU_0 rs1", false,-1, 4,0);
        tracep->declBus(c+310,"top U_IDU_0 rs2", false,-1, 4,0);
        tracep->declBus(c+311,"top U_IDU_0 funct7", false,-1, 6,0);
        tracep->declBus(c+312,"top U_IDU_0 sh_funct6", false,-1, 5,0);
        tracep->declBit(c+313,"top U_IDU_0 es_rs1_hazard", false,-1);
        tracep->declBit(c+314,"top U_IDU_0 es_rs2_hazard", false,-1);
        tracep->declBit(c+25,"top U_IDU_0 ms_rs1_hazard", false,-1);
        tracep->declBit(c+26,"top U_IDU_0 ms_rs2_hazard", false,-1);
        tracep->declBit(c+315,"top U_IDU_0 ws_rs1_hazard", false,-1);
        tracep->declBit(c+316,"top U_IDU_0 ws_rs2_hazard", false,-1);
        tracep->declBus(c+317,"top U_IDU_0 es_dest_reg", false,-1, 4,0);
        tracep->declBus(c+27,"top U_IDU_0 ms_dest_reg", false,-1, 4,0);
        tracep->declBus(c+318,"top U_IDU_0 ws_dest_reg", false,-1, 4,0);
        tracep->declQuad(c+319,"top U_IDU_0 es_wreg_data", false,-1, 63,0);
        tracep->declQuad(c+28,"top U_IDU_0 ms_wreg_data", false,-1, 63,0);
        tracep->declQuad(c+321,"top U_IDU_0 ws_wreg_data", false,-1, 63,0);
        tracep->declBit(c+323,"top U_IDU_0 lw_read_after_write", false,-1);
        tracep->declBit(c+324,"top U_IDU_0 es_forward_valid", false,-1);
        tracep->declBit(c+30,"top U_IDU_0 ms_forward_valid", false,-1);
        tracep->declBit(c+325,"top U_IDU_0 ws_forward_valid", false,-1);
        tracep->declQuad(c+326,"top U_IDU_0 data_r1", false,-1, 63,0);
        tracep->declQuad(c+328,"top U_IDU_0 data_r2", false,-1, 63,0);
        tracep->declQuad(c+31,"top U_IDU_0 rs1_value", false,-1, 63,0);
        tracep->declQuad(c+33,"top U_IDU_0 rs2_value", false,-1, 63,0);
        tracep->declBit(c+294,"top U_IDU_0 inst_lui", false,-1);
        tracep->declBit(c+330,"top U_IDU_0 inst_auipc", false,-1);
        tracep->declBit(c+331,"top U_IDU_0 inst_jal", false,-1);
        tracep->declBit(c+332,"top U_IDU_0 inst_jalr", false,-1);
        tracep->declBit(c+333,"top U_IDU_0 inst_beq", false,-1);
        tracep->declBit(c+334,"top U_IDU_0 inst_bne", false,-1);
        tracep->declBit(c+335,"top U_IDU_0 inst_blt", false,-1);
        tracep->declBit(c+336,"top U_IDU_0 inst_bge", false,-1);
        tracep->declBit(c+337,"top U_IDU_0 inst_bltu", false,-1);
        tracep->declBit(c+338,"top U_IDU_0 inst_bgeu", false,-1);
        tracep->declBit(c+339,"top U_IDU_0 inst_lb", false,-1);
        tracep->declBit(c+340,"top U_IDU_0 inst_lh", false,-1);
        tracep->declBit(c+341,"top U_IDU_0 inst_lw", false,-1);
        tracep->declBit(c+342,"top U_IDU_0 inst_lbu", false,-1);
        tracep->declBit(c+343,"top U_IDU_0 inst_lhu", false,-1);
        tracep->declBit(c+344,"top U_IDU_0 inst_lwu", false,-1);
        tracep->declBit(c+345,"top U_IDU_0 inst_ld", false,-1);
        tracep->declBit(c+346,"top U_IDU_0 inst_sb", false,-1);
        tracep->declBit(c+347,"top U_IDU_0 inst_sh", false,-1);
        tracep->declBit(c+348,"top U_IDU_0 inst_sw", false,-1);
        tracep->declBit(c+349,"top U_IDU_0 inst_sd", false,-1);
        tracep->declBit(c+350,"top U_IDU_0 inst_addi", false,-1);
        tracep->declBit(c+351,"top U_IDU_0 inst_addiw", false,-1);
        tracep->declBit(c+352,"top U_IDU_0 inst_slti", false,-1);
        tracep->declBit(c+353,"top U_IDU_0 inst_sltiu", false,-1);
        tracep->declBit(c+354,"top U_IDU_0 inst_xori", false,-1);
        tracep->declBit(c+355,"top U_IDU_0 inst_ori", false,-1);
        tracep->declBit(c+356,"top U_IDU_0 inst_andi", false,-1);
        tracep->declBit(c+357,"top U_IDU_0 inst_slli", false,-1);
        tracep->declBit(c+358,"top U_IDU_0 inst_slliw", false,-1);
        tracep->declBit(c+359,"top U_IDU_0 inst_srli", false,-1);
        tracep->declBit(c+360,"top U_IDU_0 inst_srliw", false,-1);
        tracep->declBit(c+359,"top U_IDU_0 inst_srai", false,-1);
        tracep->declBit(c+360,"top U_IDU_0 inst_sraiw", false,-1);
        tracep->declBit(c+361,"top U_IDU_0 inst_add", false,-1);
        tracep->declBit(c+362,"top U_IDU_0 inst_addw", false,-1);
        tracep->declBit(c+363,"top U_IDU_0 inst_sub", false,-1);
        tracep->declBit(c+364,"top U_IDU_0 inst_subw", false,-1);
        tracep->declBit(c+365,"top U_IDU_0 inst_sll", false,-1);
        tracep->declBit(c+366,"top U_IDU_0 inst_sllw", false,-1);
        tracep->declBit(c+367,"top U_IDU_0 inst_slt", false,-1);
        tracep->declBit(c+368,"top U_IDU_0 inst_sltu", false,-1);
        tracep->declBit(c+369,"top U_IDU_0 inst_xor", false,-1);
        tracep->declBit(c+370,"top U_IDU_0 inst_srl", false,-1);
        tracep->declBit(c+371,"top U_IDU_0 inst_srlw", false,-1);
        tracep->declBit(c+372,"top U_IDU_0 inst_sra", false,-1);
        tracep->declBit(c+373,"top U_IDU_0 inst_sraw", false,-1);
        tracep->declBit(c+374,"top U_IDU_0 inst_or", false,-1);
        tracep->declBit(c+375,"top U_IDU_0 inst_and", false,-1);
        tracep->declBit(c+376,"top U_IDU_0 inst_mul", false,-1);
        tracep->declBit(c+377,"top U_IDU_0 inst_mulh", false,-1);
        tracep->declBit(c+378,"top U_IDU_0 inst_mulhsu", false,-1);
        tracep->declBit(c+379,"top U_IDU_0 inst_mulhu", false,-1);
        tracep->declBit(c+380,"top U_IDU_0 inst_mulw", false,-1);
        tracep->declBit(c+381,"top U_IDU_0 inst_div", false,-1);
        tracep->declBit(c+382,"top U_IDU_0 inst_divu", false,-1);
        tracep->declBit(c+383,"top U_IDU_0 inst_divw", false,-1);
        tracep->declBit(c+384,"top U_IDU_0 inst_divuw", false,-1);
        tracep->declBit(c+385,"top U_IDU_0 inst_rem", false,-1);
        tracep->declBit(c+386,"top U_IDU_0 inst_remu", false,-1);
        tracep->declBit(c+387,"top U_IDU_0 inst_remw", false,-1);
        tracep->declBit(c+388,"top U_IDU_0 inst_remuw", false,-1);
        tracep->declBit(c+389,"top U_IDU_0 inst_ebreak", false,-1);
        tracep->declBit(c+390,"top U_IDU_0 inst_invalid", false,-1);
        tracep->declBit(c+391,"top U_IDU_0 rs1_is_not_zero", false,-1);
        tracep->declBit(c+392,"top U_IDU_0 rs2_is_not_zero", false,-1);
        tracep->declBit(c+35,"top U_IDU_0 rs1_eq_rs2", false,-1);
        tracep->declBit(c+36,"top U_IDU_0 rs1_l_rs2", false,-1);
        tracep->declBit(c+37,"top U_IDU_0 rs1u_l_rs2u", false,-1);
        tracep->declBit(c+38,"top U_IDU_0 bc_co", false,-1);
        tracep->declQuad(c+39,"top U_IDU_0 bt_a", false,-1, 63,0);
        tracep->declQuad(c+393,"top U_IDU_0 bt_b", false,-1, 63,0);
        tracep->declQuad(c+41,"top U_IDU_0 bc_r", false,-1, 63,0);
        tracep->declBit(c+788,"top U_IDU_0 U_YSYX_22041752_RF_0 clk", false,-1);
        tracep->declBus(c+309,"top U_IDU_0 U_YSYX_22041752_RF_0 addr_r1", false,-1, 4,0);
        tracep->declBus(c+310,"top U_IDU_0 U_YSYX_22041752_RF_0 addr_r2", false,-1, 4,0);
        tracep->declQuad(c+326,"top U_IDU_0 U_YSYX_22041752_RF_0 data_r1", false,-1, 63,0);
        tracep->declQuad(c+328,"top U_IDU_0 U_YSYX_22041752_RF_0 data_r2", false,-1, 63,0);
        tracep->declBus(c+272,"top U_IDU_0 U_YSYX_22041752_RF_0 addr_w", false,-1, 4,0);
        tracep->declBit(c+271,"top U_IDU_0 U_YSYX_22041752_RF_0 we", false,-1);
        tracep->declQuad(c+273,"top U_IDU_0 U_YSYX_22041752_RF_0 data_w", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+395+i*2,"top U_IDU_0 U_YSYX_22041752_RF_0 dpi_regs", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+459+i*2,"top U_IDU_0 U_YSYX_22041752_RF_0 regs", true,(i+0), 63,0);}}
        tracep->declQuad(c+31,"top U_IDU_0 U_YSYX_22041752_ASER64_0 a", false,-1, 63,0);
        tracep->declQuad(c+33,"top U_IDU_0 U_YSYX_22041752_ASER64_0 b", false,-1, 63,0);
        tracep->declBit(c+805,"top U_IDU_0 U_YSYX_22041752_ASER64_0 sub", false,-1);
        tracep->declBit(c+38,"top U_IDU_0 U_YSYX_22041752_ASER64_0 cout", false,-1);
        tracep->declQuad(c+41,"top U_IDU_0 U_YSYX_22041752_ASER64_0 result", false,-1, 63,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_0 DATA_LEN", false,-1, 31,0);
        tracep->declBit(c+43,"top U_IDU_0 U_YSYX_22041752_ASER64_0 c0", false,-1);
        tracep->declBit(c+44,"top U_IDU_0 U_YSYX_22041752_ASER64_0 c1", false,-1);
        tracep->declBit(c+45,"top U_IDU_0 U_YSYX_22041752_ASER64_0 c2", false,-1);
        tracep->declBit(c+38,"top U_IDU_0 U_YSYX_22041752_ASER64_0 c3", false,-1);
        tracep->declQuad(c+41,"top U_IDU_0 U_YSYX_22041752_ASER64_0 r", false,-1, 63,0);
        tracep->declQuad(c+31,"top U_IDU_0 U_YSYX_22041752_ASER64_0 x", false,-1, 63,0);
        tracep->declQuad(c+46,"top U_IDU_0 U_YSYX_22041752_ASER64_0 y", false,-1, 63,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+48,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 a", false,-1, 15,0);
        tracep->declBus(c+49,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 b", false,-1, 15,0);
        tracep->declBit(c+805,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 cin", false,-1);
        tracep->declBit(c+43,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 cout", false,-1);
        tracep->declBus(c+50,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 sum", false,-1, 15,0);
        tracep->declBus(c+51,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 pn", false,-1, 15,0);
        tracep->declBus(c+52,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+53,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 a", false,-1, 15,0);
        tracep->declBus(c+54,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 b", false,-1, 15,0);
        tracep->declBit(c+43,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 cin", false,-1);
        tracep->declBit(c+44,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 cout", false,-1);
        tracep->declBus(c+55,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 sum", false,-1, 15,0);
        tracep->declBus(c+56,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 pn", false,-1, 15,0);
        tracep->declBus(c+57,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+58,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 a", false,-1, 15,0);
        tracep->declBus(c+59,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 b", false,-1, 15,0);
        tracep->declBit(c+44,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 cin", false,-1);
        tracep->declBit(c+45,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 cout", false,-1);
        tracep->declBus(c+60,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 sum", false,-1, 15,0);
        tracep->declBus(c+61,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 pn", false,-1, 15,0);
        tracep->declBus(c+62,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+63,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 a", false,-1, 15,0);
        tracep->declBus(c+64,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 b", false,-1, 15,0);
        tracep->declBit(c+45,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 cin", false,-1);
        tracep->declBit(c+38,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 cout", false,-1);
        tracep->declBus(c+65,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 sum", false,-1, 15,0);
        tracep->declBus(c+66,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 pn", false,-1, 15,0);
        tracep->declBus(c+67,"top U_IDU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 gn", false,-1, 15,0);
        tracep->declQuad(c+39,"top U_IDU_0 U_YSYX_22041752_ASER64_1 a", false,-1, 63,0);
        tracep->declQuad(c+393,"top U_IDU_0 U_YSYX_22041752_ASER64_1 b", false,-1, 63,0);
        tracep->declBit(c+813,"top U_IDU_0 U_YSYX_22041752_ASER64_1 sub", false,-1);
        tracep->declBit(c+68,"top U_IDU_0 U_YSYX_22041752_ASER64_1 cout", false,-1);
        tracep->declQuad(c+23,"top U_IDU_0 U_YSYX_22041752_ASER64_1 result", false,-1, 63,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_1 DATA_LEN", false,-1, 31,0);
        tracep->declBit(c+69,"top U_IDU_0 U_YSYX_22041752_ASER64_1 c0", false,-1);
        tracep->declBit(c+70,"top U_IDU_0 U_YSYX_22041752_ASER64_1 c1", false,-1);
        tracep->declBit(c+71,"top U_IDU_0 U_YSYX_22041752_ASER64_1 c2", false,-1);
        tracep->declBit(c+68,"top U_IDU_0 U_YSYX_22041752_ASER64_1 c3", false,-1);
        tracep->declQuad(c+23,"top U_IDU_0 U_YSYX_22041752_ASER64_1 r", false,-1, 63,0);
        tracep->declQuad(c+39,"top U_IDU_0 U_YSYX_22041752_ASER64_1 x", false,-1, 63,0);
        tracep->declQuad(c+393,"top U_IDU_0 U_YSYX_22041752_ASER64_1 y", false,-1, 63,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+72,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_0 a", false,-1, 15,0);
        tracep->declBus(c+523,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_0 b", false,-1, 15,0);
        tracep->declBit(c+813,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_0 cin", false,-1);
        tracep->declBit(c+69,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_0 cout", false,-1);
        tracep->declBus(c+73,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_0 sum", false,-1, 15,0);
        tracep->declBus(c+74,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_0 pn", false,-1, 15,0);
        tracep->declBus(c+75,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_0 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+76,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_1 a", false,-1, 15,0);
        tracep->declBus(c+524,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_1 b", false,-1, 15,0);
        tracep->declBit(c+69,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_1 cin", false,-1);
        tracep->declBit(c+70,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_1 cout", false,-1);
        tracep->declBus(c+77,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_1 sum", false,-1, 15,0);
        tracep->declBus(c+78,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_1 pn", false,-1, 15,0);
        tracep->declBus(c+79,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_1 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+80,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_2 a", false,-1, 15,0);
        tracep->declBus(c+525,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_2 b", false,-1, 15,0);
        tracep->declBit(c+70,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_2 cin", false,-1);
        tracep->declBit(c+71,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_2 cout", false,-1);
        tracep->declBus(c+81,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_2 sum", false,-1, 15,0);
        tracep->declBus(c+82,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_2 pn", false,-1, 15,0);
        tracep->declBus(c+83,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_2 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+84,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_3 a", false,-1, 15,0);
        tracep->declBus(c+526,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_3 b", false,-1, 15,0);
        tracep->declBit(c+71,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_3 cin", false,-1);
        tracep->declBit(c+68,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_3 cout", false,-1);
        tracep->declBus(c+85,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_3 sum", false,-1, 15,0);
        tracep->declBus(c+86,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_3 pn", false,-1, 15,0);
        tracep->declBus(c+87,"top U_IDU_0 U_YSYX_22041752_ASER64_1 u_adder_p_3 gn", false,-1, 15,0);
        tracep->declBit(c+788,"top U_EXU_0 clk", false,-1);
        tracep->declBit(c+789,"top U_EXU_0 reset", false,-1);
        tracep->declBit(c+805,"top U_EXU_0 ms_allowin", false,-1);
        tracep->declBit(c+1,"top U_EXU_0 es_allowin", false,-1);
        tracep->declBit(c+102,"top U_EXU_0 ds_to_es_valid", false,-1);
        tracep->declArray(c+92,"top U_EXU_0 ds_to_es_bus", false,-1, 273,0);
        tracep->declBit(c+103,"top U_EXU_0 es_to_ms_valid", false,-1);
        tracep->declArray(c+105,"top U_EXU_0 es_to_ms_bus", false,-1, 138,0);
        tracep->declArray(c+113,"top U_EXU_0 es_forward_bus", false,-1, 70,0);
        tracep->declBit(c+795,"top U_EXU_0 data_sram_en", false,-1);
        tracep->declBus(c+796,"top U_EXU_0 data_sram_wen", false,-1, 7,0);
        tracep->declQuad(c+797,"top U_EXU_0 data_sram_addr", false,-1, 63,0);
        tracep->declQuad(c+799,"top U_EXU_0 data_sram_wdata", false,-1, 63,0);
        tracep->declBit(c+103,"top U_EXU_0 es_valid", false,-1);
        tracep->declBit(c+805,"top U_EXU_0 es_ready_go", false,-1);
        tracep->declArray(c+527,"top U_EXU_0 ds_to_es_bus_r", false,-1, 273,0);
        tracep->declBit(c+536,"top U_EXU_0 op_mul", false,-1);
        tracep->declBit(c+537,"top U_EXU_0 op_div", false,-1);
        tracep->declBit(c+538,"top U_EXU_0 op_rem", false,-1);
        tracep->declBit(c+539,"top U_EXU_0 op_add", false,-1);
        tracep->declBit(c+540,"top U_EXU_0 op_sub", false,-1);
        tracep->declBit(c+541,"top U_EXU_0 op_slt", false,-1);
        tracep->declBit(c+542,"top U_EXU_0 op_sltu", false,-1);
        tracep->declBit(c+543,"top U_EXU_0 op_and", false,-1);
        tracep->declBit(c+544,"top U_EXU_0 op_or", false,-1);
        tracep->declBit(c+545,"top U_EXU_0 op_xor", false,-1);
        tracep->declBit(c+546,"top U_EXU_0 op_sll", false,-1);
        tracep->declBit(c+547,"top U_EXU_0 op_srl", false,-1);
        tracep->declBit(c+548,"top U_EXU_0 op_sra", false,-1);
        tracep->declBit(c+549,"top U_EXU_0 res_sext", false,-1);
        tracep->declBit(c+550,"top U_EXU_0 res_zext", false,-1);
        tracep->declBit(c+551,"top U_EXU_0 src_shamt", false,-1);
        tracep->declBit(c+552,"top U_EXU_0 src_pc", false,-1);
        tracep->declBit(c+553,"top U_EXU_0 src_imm_u", false,-1);
        tracep->declBit(c+554,"top U_EXU_0 src_4", false,-1);
        tracep->declBit(c+555,"top U_EXU_0 src_0", false,-1);
        tracep->declBit(c+556,"top U_EXU_0 src_imm_i", false,-1);
        tracep->declBit(c+557,"top U_EXU_0 src_imm_s", false,-1);
        tracep->declBit(c+558,"top U_EXU_0 es_rf_we", false,-1);
        tracep->declBit(c+559,"top U_EXU_0 es_mem_we", false,-1);
        tracep->declBit(c+560,"top U_EXU_0 es_mem_re", false,-1);
        tracep->declBus(c+561,"top U_EXU_0 es_mem_bytes", false,-1, 1,0);
        tracep->declBus(c+562,"top U_EXU_0 shamt", false,-1, 5,0);
        tracep->declBus(c+563,"top U_EXU_0 imm_u", false,-1, 19,0);
        tracep->declBus(c+564,"top U_EXU_0 imm_i", false,-1, 11,0);
        tracep->declBus(c+565,"top U_EXU_0 imm_s", false,-1, 11,0);
        tracep->declBus(c+566,"top U_EXU_0 rd", false,-1, 4,0);
        tracep->declQuad(c+567,"top U_EXU_0 rs1_value", false,-1, 63,0);
        tracep->declQuad(c+569,"top U_EXU_0 rs2_value", false,-1, 63,0);
        tracep->declQuad(c+571,"top U_EXU_0 es_pc", false,-1, 63,0);
        tracep->declQuad(c+573,"top U_EXU_0 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+575,"top U_EXU_0 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+577,"top U_EXU_0 alu_result", false,-1, 63,0);
        tracep->declBit(c+579,"top U_EXU_0 mem_read_after_write", false,-1);
        tracep->declBit(c+580,"top U_EXU_0 es_forward_valid", false,-1);
        tracep->declBit(c+539,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_add", false,-1);
        tracep->declBit(c+540,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_sub", false,-1);
        tracep->declBit(c+541,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_slt", false,-1);
        tracep->declBit(c+542,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_sltu", false,-1);
        tracep->declBit(c+543,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_and", false,-1);
        tracep->declBit(c+544,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_or", false,-1);
        tracep->declBit(c+545,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_xor", false,-1);
        tracep->declBit(c+546,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_sll", false,-1);
        tracep->declBit(c+547,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_srl", false,-1);
        tracep->declBit(c+548,"top U_EXU_0 U_YSYX_22041752_ALU_0 op_sra", false,-1);
        tracep->declBit(c+549,"top U_EXU_0 U_YSYX_22041752_ALU_0 res_sext", false,-1);
        tracep->declQuad(c+573,"top U_EXU_0 U_YSYX_22041752_ALU_0 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+575,"top U_EXU_0 U_YSYX_22041752_ALU_0 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+577,"top U_EXU_0 U_YSYX_22041752_ALU_0 alu_result", false,-1, 63,0);
        tracep->declQuad(c+797,"top U_EXU_0 U_YSYX_22041752_ALU_0 mem_result", false,-1, 63,0);
        tracep->declQuad(c+581,"top U_EXU_0 U_YSYX_22041752_ALU_0 r_slt", false,-1, 63,0);
        tracep->declQuad(c+583,"top U_EXU_0 U_YSYX_22041752_ALU_0 r_and", false,-1, 63,0);
        tracep->declQuad(c+585,"top U_EXU_0 U_YSYX_22041752_ALU_0 r_or", false,-1, 63,0);
        tracep->declQuad(c+587,"top U_EXU_0 U_YSYX_22041752_ALU_0 r_xor", false,-1, 63,0);
        tracep->declQuad(c+589,"top U_EXU_0 U_YSYX_22041752_ALU_0 r_sll", false,-1, 63,0);
        tracep->declQuad(c+591,"top U_EXU_0 U_YSYX_22041752_ALU_0 r_srl", false,-1, 63,0);
        tracep->declArray(c+593,"top U_EXU_0 U_YSYX_22041752_ALU_0 r_sra", false,-1, 127,0);
        tracep->declQuad(c+573,"top U_EXU_0 U_YSYX_22041752_ALU_0 adder_a", false,-1, 63,0);
        tracep->declQuad(c+597,"top U_EXU_0 U_YSYX_22041752_ALU_0 adder_b", false,-1, 63,0);
        tracep->declBit(c+599,"top U_EXU_0 U_YSYX_22041752_ALU_0 adder_cin", false,-1);
        tracep->declQuad(c+600,"top U_EXU_0 U_YSYX_22041752_ALU_0 adder_result", false,-1, 63,0);
        tracep->declBit(c+602,"top U_EXU_0 U_YSYX_22041752_ALU_0 adder_cout", false,-1);
        tracep->declQuad(c+603,"top U_EXU_0 U_YSYX_22041752_ALU_0 res", false,-1, 63,0);
        tracep->declQuad(c+573,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 a", false,-1, 63,0);
        tracep->declQuad(c+597,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 b", false,-1, 63,0);
        tracep->declBit(c+599,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 sub", false,-1);
        tracep->declBit(c+602,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 cout", false,-1);
        tracep->declQuad(c+600,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 result", false,-1, 63,0);
        tracep->declBus(c+812,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 DATA_LEN", false,-1, 31,0);
        tracep->declBit(c+605,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 c0", false,-1);
        tracep->declBit(c+606,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 c1", false,-1);
        tracep->declBit(c+607,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 c2", false,-1);
        tracep->declBit(c+602,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 c3", false,-1);
        tracep->declQuad(c+600,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 r", false,-1, 63,0);
        tracep->declQuad(c+573,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 x", false,-1, 63,0);
        tracep->declQuad(c+608,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 y", false,-1, 63,0);
        tracep->declBus(c+812,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+610,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 a", false,-1, 15,0);
        tracep->declBus(c+611,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 b", false,-1, 15,0);
        tracep->declBit(c+599,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 cin", false,-1);
        tracep->declBit(c+605,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 cout", false,-1);
        tracep->declBus(c+612,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 sum", false,-1, 15,0);
        tracep->declBus(c+613,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 pn", false,-1, 15,0);
        tracep->declBus(c+614,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_0 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+615,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 a", false,-1, 15,0);
        tracep->declBus(c+616,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 b", false,-1, 15,0);
        tracep->declBit(c+605,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 cin", false,-1);
        tracep->declBit(c+606,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 cout", false,-1);
        tracep->declBus(c+617,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 sum", false,-1, 15,0);
        tracep->declBus(c+618,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 pn", false,-1, 15,0);
        tracep->declBus(c+619,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_1 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+620,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 a", false,-1, 15,0);
        tracep->declBus(c+621,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 b", false,-1, 15,0);
        tracep->declBit(c+606,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 cin", false,-1);
        tracep->declBit(c+607,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 cout", false,-1);
        tracep->declBus(c+622,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 sum", false,-1, 15,0);
        tracep->declBus(c+623,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 pn", false,-1, 15,0);
        tracep->declBus(c+624,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_2 gn", false,-1, 15,0);
        tracep->declBus(c+812,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+625,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 a", false,-1, 15,0);
        tracep->declBus(c+626,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 b", false,-1, 15,0);
        tracep->declBit(c+607,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 cin", false,-1);
        tracep->declBit(c+602,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 cout", false,-1);
        tracep->declBus(c+627,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 sum", false,-1, 15,0);
        tracep->declBus(c+628,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 pn", false,-1, 15,0);
        tracep->declBus(c+629,"top U_EXU_0 U_YSYX_22041752_ALU_0 U_YSYX_22041752_ASER64_0 u_adder_p_3 gn", false,-1, 15,0);
        tracep->declBit(c+788,"top U_MEU_0 clk", false,-1);
        tracep->declBit(c+789,"top U_MEU_0 reset", false,-1);
        tracep->declBit(c+805,"top U_MEU_0 ws_allowin", false,-1);
        tracep->declBit(c+805,"top U_MEU_0 ms_allowin", false,-1);
        tracep->declBit(c+103,"top U_MEU_0 es_to_ms_valid", false,-1);
        tracep->declArray(c+105,"top U_MEU_0 es_to_ms_bus", false,-1, 138,0);
        tracep->declBit(c+104,"top U_MEU_0 ms_to_ws_valid", false,-1);
        tracep->declArray(c+6,"top U_MEU_0 ms_to_ws_bus", false,-1, 133,0);
        tracep->declQuad(c+801,"top U_MEU_0 data_sram_rdata", false,-1, 63,0);
        tracep->declArray(c+14,"top U_MEU_0 ms_forward_bus", false,-1, 69,0);
        tracep->declQuad(c+122,"top U_MEU_0 debug_ms_pc", false,-1, 63,0);
        tracep->declBit(c+104,"top U_MEU_0 ms_valid", false,-1);
        tracep->declBit(c+805,"top U_MEU_0 ms_ready_go", false,-1);
        tracep->declArray(c+630,"top U_MEU_0 es_to_ms_bus_r", false,-1, 138,0);
        tracep->declBit(c+635,"top U_MEU_0 res_sext", false,-1);
        tracep->declBit(c+636,"top U_MEU_0 res_zext", false,-1);
        tracep->declBus(c+637,"top U_MEU_0 ms_mem_bytes", false,-1, 1,0);
        tracep->declBit(c+638,"top U_MEU_0 ms_mem_re", false,-1);
        tracep->declBit(c+639,"top U_MEU_0 ms_rf_we", false,-1);
        tracep->declBus(c+640,"top U_MEU_0 rd", false,-1, 4,0);
        tracep->declQuad(c+641,"top U_MEU_0 alu_result", false,-1, 63,0);
        tracep->declQuad(c+122,"top U_MEU_0 ms_pc", false,-1, 63,0);
        tracep->declQuad(c+88,"top U_MEU_0 mem_result", false,-1, 63,0);
        tracep->declQuad(c+90,"top U_MEU_0 ms_final_result", false,-1, 63,0);
        tracep->declBit(c+643,"top U_MEU_0 ms_forward_valid", false,-1);
        tracep->declBit(c+788,"top U_WBU_0 clk", false,-1);
        tracep->declBit(c+789,"top U_WBU_0 reset", false,-1);
        tracep->declBit(c+805,"top U_WBU_0 ws_allowin", false,-1);
        tracep->declBit(c+104,"top U_WBU_0 ms_to_ws_valid", false,-1);
        tracep->declArray(c+6,"top U_WBU_0 ms_to_ws_bus", false,-1, 133,0);
        tracep->declArray(c+110,"top U_WBU_0 ws_to_rf_bus", false,-1, 69,0);
        tracep->declArray(c+116,"top U_WBU_0 ws_forward_bus", false,-1, 69,0);
        tracep->declQuad(c+119,"top U_WBU_0 debug_wb_pc", false,-1, 63,0);
        tracep->declBit(c+121,"top U_WBU_0 debug_ws_valid", false,-1);
        tracep->declBit(c+125,"top U_WBU_0 debug_wb_rf_wen", false,-1);
        tracep->declBus(c+126,"top U_WBU_0 debug_wb_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+127,"top U_WBU_0 debug_wb_rf_wdata", false,-1, 63,0);
        tracep->declBit(c+121,"top U_WBU_0 ws_valid", false,-1);
        tracep->declBit(c+805,"top U_WBU_0 ws_ready_go", false,-1);
        tracep->declArray(c+644,"top U_WBU_0 ms_to_ws_bus_r", false,-1, 133,0);
        tracep->declBit(c+649,"top U_WBU_0 ws_rf_we", false,-1);
        tracep->declBus(c+126,"top U_WBU_0 rd", false,-1, 4,0);
        tracep->declQuad(c+127,"top U_WBU_0 ws_r", false,-1, 63,0);
        tracep->declQuad(c+119,"top U_WBU_0 ws_pc", false,-1, 63,0);
        tracep->declBit(c+125,"top U_WBU_0 rf_we", false,-1);
        tracep->declBus(c+126,"top U_WBU_0 rf_waddr", false,-1, 4,0);
        tracep->declQuad(c+127,"top U_WBU_0 rf_wdata", false,-1, 63,0);
        tracep->declBit(c+125,"top U_WBU_0 ws_forward_valid", false,-1);
        tracep->declBit(c+788,"top u_dpi_c clk", false,-1);
        tracep->declBit(c+193,"top u_dpi_c stop", false,-1);
        tracep->declBit(c+121,"top u_dpi_c ws_valid", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+650+i*2,"top u_dpi_c dpi_regs", true,(i+0), 63,0);}}
        tracep->declQuad(c+122,"top u_dpi_c debug_ms_pc", false,-1, 63,0);
        tracep->declQuad(c+119,"top u_dpi_c debug_wb_pc", false,-1, 63,0);
        tracep->declBus(c+124,"top u_dpi_c debug_wb_inst", false,-1, 31,0);
        tracep->declBit(c+125,"top u_dpi_c debug_wb_rf_wen", false,-1);
        tracep->declBus(c+126,"top u_dpi_c debug_wb_rf_wnum", false,-1, 4,0);
        tracep->declQuad(c+127,"top u_dpi_c debug_wb_rf_wdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+714+i*2,"top u_dpi_c rf", true,(i+0), 63,0);}}
        tracep->declBit(c+778,"top u_dpi_c stop_r0", false,-1);
        tracep->declBit(c+779,"top u_dpi_c stop_r1", false,-1);
        tracep->declBit(c+780,"top u_dpi_c stop_r2", false,-1);
        tracep->declBus(c+781,"top u_dpi_c inst_r0", false,-1, 31,0);
        tracep->declBus(c+782,"top u_dpi_c inst_r1", false,-1, 31,0);
        tracep->declBus(c+783,"top u_dpi_c inst_r2", false,-1, 31,0);
        tracep->declQuad(c+784,"top u_dpi_c Halt", false,-1, 63,0);
        tracep->declQuad(c+786,"top u_dpi_c Valid", false,-1, 63,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<9>/*287:0*/ __Vtemp63;
    VlWide<9>/*287:0*/ __Vtemp64;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__es_allowin));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__fs_to_ds_valid));
        tracep->fullWData(oldp+3,(vlSelf->top__DOT__fs_to_ds_bus),96);
        tracep->fullWData(oldp+6,(vlSelf->top__DOT__ms_to_ws_bus),134);
        tracep->fullWData(oldp+11,(vlSelf->top__DOT__br_bus),65);
        tracep->fullWData(oldp+14,(vlSelf->top__DOT__ms_forward_bus),70);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__U_IFU_0__DOT__nextpc),64);
        tracep->fullBit(oldp+19,((1U & vlSelf->top__DOT__br_bus[2U])));
        tracep->fullQData(oldp+20,((((QData)((IData)(
                                                     vlSelf->top__DOT__br_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__br_bus[0U])))),64);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__U_IDU_0__DOT__br_taken));
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__r),64);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__U_IDU_0__DOT__ms_rs1_hazard));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__U_IDU_0__DOT__ms_rs2_hazard));
        tracep->fullCData(oldp+27,((0x1fU & vlSelf->top__DOT__ms_forward_bus[0U])),5);
        tracep->fullQData(oldp+28,((((QData)((IData)(
                                                     vlSelf->top__DOT__ms_forward_bus[2U])) 
                                     << 0x3bU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__ms_forward_bus[1U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__ms_forward_bus[0U])) 
                                                     >> 5U)))),64);
        tracep->fullBit(oldp+30,((1U & (vlSelf->top__DOT__ms_forward_bus[2U] 
                                        >> 5U))));
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value),64);
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__U_IDU_0__DOT__rs1_eq_rs2));
        tracep->fullBit(oldp+36,((1U & (IData)((vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r 
                                                >> 0x3fU)))));
        tracep->fullBit(oldp+37,((1U & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3)))));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3));
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__U_IDU_0__DOT__bt_a),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r),64);
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2));
        tracep->fullQData(oldp+46,((~ vlSelf->top__DOT__U_IDU_0__DOT__rs2_value)),64);
        tracep->fullSData(oldp+48,((0xffffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value))),16);
        tracep->fullSData(oldp+49,((0xffffU & (~ (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value)))),16);
        tracep->fullSData(oldp+50,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum),16);
        tracep->fullSData(oldp+51,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn),16);
        tracep->fullSData(oldp+52,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn),16);
        tracep->fullSData(oldp+53,((0xffffU & (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                       >> 0x10U)))),16);
        tracep->fullSData(oldp+54,((0xffffU & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x10U))))),16);
        tracep->fullSData(oldp+55,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum),16);
        tracep->fullSData(oldp+56,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn),16);
        tracep->fullSData(oldp+57,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn),16);
        tracep->fullSData(oldp+58,((0xffffU & (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                       >> 0x20U)))),16);
        tracep->fullSData(oldp+59,((0xffffU & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x20U))))),16);
        tracep->fullSData(oldp+60,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum),16);
        tracep->fullSData(oldp+61,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn),16);
        tracep->fullSData(oldp+62,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn),16);
        tracep->fullSData(oldp+63,((0xffffU & (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                                       >> 0x30U)))),16);
        tracep->fullSData(oldp+64,((0xffffU & (~ (IData)(
                                                         (vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                                          >> 0x30U))))),16);
        tracep->fullSData(oldp+65,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum),16);
        tracep->fullSData(oldp+66,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn),16);
        tracep->fullSData(oldp+67,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn),16);
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c3));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c0));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c1));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__c2));
        tracep->fullSData(oldp+72,((0xffffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_a))),16);
        tracep->fullSData(oldp+73,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_0__sum),16);
        tracep->fullSData(oldp+74,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_0__DOT__pn),16);
        tracep->fullSData(oldp+75,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_0__DOT__gn),16);
        tracep->fullSData(oldp+76,((0xffffU & (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                       >> 0x10U)))),16);
        tracep->fullSData(oldp+77,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_1__sum),16);
        tracep->fullSData(oldp+78,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__pn),16);
        tracep->fullSData(oldp+79,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_1__DOT__gn),16);
        tracep->fullSData(oldp+80,((0xffffU & (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                       >> 0x20U)))),16);
        tracep->fullSData(oldp+81,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_2__sum),16);
        tracep->fullSData(oldp+82,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__pn),16);
        tracep->fullSData(oldp+83,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_2__DOT__gn),16);
        tracep->fullSData(oldp+84,((0xffffU & (IData)(
                                                      (vlSelf->top__DOT__U_IDU_0__DOT__bt_a 
                                                       >> 0x30U)))),16);
        tracep->fullSData(oldp+85,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT____Vcellout__u_adder_p_3__sum),16);
        tracep->fullSData(oldp+86,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__pn),16);
        tracep->fullSData(oldp+87,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_ASER64_1__DOT__u_adder_p_3__DOT__gn),16);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__U_MEU_0__DOT__mem_result),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__U_MEU_0__DOT__ms_final_result),64);
        __Vtemp63[7U] = ((0xfffe0000U & ((0xe0000000U 
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
        __Vtemp63[8U] = (0x1ffffU & ((0x10000U & ((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_div) 
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
        __Vtemp64[0U] = (IData)((((QData)((IData)(vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U]))));
        __Vtemp64[1U] = (IData)(((((QData)((IData)(
                                                   vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U]))) 
                                 >> 0x20U));
        __Vtemp64[2U] = (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs2_value);
        __Vtemp64[3U] = (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs2_value 
                                 >> 0x20U));
        __Vtemp64[4U] = (IData)(vlSelf->top__DOT__U_IDU_0__DOT__rs1_value);
        __Vtemp64[5U] = (IData)((vlSelf->top__DOT__U_IDU_0__DOT__rs1_value 
                                 >> 0x20U));
        __Vtemp64[6U] = ((0xfff00000U & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]) 
                         | (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                            >> 0xcU));
        __Vtemp64[7U] = __Vtemp63[7U];
        __Vtemp64[8U] = (((IData)(vlSelf->top__DOT__U_IDU_0__DOT__op_mul) 
                          << 0x11U) | __Vtemp63[8U]);
        tracep->fullWData(oldp+92,(__Vtemp64),274);
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__ds_allowin));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__ds_to_es_valid));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__U_EXU_0__DOT__es_valid));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__U_MEU_0__DOT__ms_valid));
        tracep->fullWData(oldp+105,(vlSelf->top__DOT__es_to_ms_bus),139);
        tracep->fullWData(oldp+110,(vlSelf->top__DOT__ws_to_rf_bus),70);
        tracep->fullWData(oldp+113,(vlSelf->top__DOT__es_forward_bus),71);
        tracep->fullWData(oldp+116,(vlSelf->top__DOT__ws_forward_bus),70);
        tracep->fullQData(oldp+119,((((QData)((IData)(
                                                      vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[0U])))),64);
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid));
        tracep->fullQData(oldp+122,((((QData)((IData)(
                                                      vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[0U])))),64);
        tracep->fullIData(oldp+124,(vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]),32);
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__U_WBU_0__DOT__rf_we));
        tracep->fullCData(oldp+126,((0x1fU & vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U])),5);
        tracep->fullQData(oldp+127,((((QData)((IData)(
                                                      vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[2U])))),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__dpi_regs[0]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__dpi_regs[1]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__dpi_regs[2]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__dpi_regs[3]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__dpi_regs[4]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__dpi_regs[5]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__dpi_regs[6]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__dpi_regs[7]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__dpi_regs[8]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__dpi_regs[9]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__dpi_regs[10]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__dpi_regs[11]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__dpi_regs[12]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__dpi_regs[13]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__dpi_regs[14]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__dpi_regs[15]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__dpi_regs[16]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__dpi_regs[17]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__dpi_regs[18]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__dpi_regs[19]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__dpi_regs[20]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__dpi_regs[21]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__dpi_regs[22]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__dpi_regs[23]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__dpi_regs[24]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__dpi_regs[25]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__dpi_regs[26]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__dpi_regs[27]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__dpi_regs[28]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__dpi_regs[29]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__dpi_regs[30]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__dpi_regs[31]),64);
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__stop));
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__U_IFU_0__DOT__fs_valid));
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__U_IFU_0__DOT__fs_allowin));
        tracep->fullQData(oldp+196,((4ULL + vlSelf->top__DOT__U_IFU_0__DOT__fs_pc)),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__U_IFU_0__DOT__fs_pc),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[0]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[1]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[2]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[3]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[4]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[5]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[6]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[7]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[8]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[9]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[10]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[11]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[12]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[13]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[14]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[15]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[16]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[17]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[18]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[19]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[20]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[21]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[22]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[23]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[24]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[25]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[26]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[27]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[28]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[29]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[30]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT____Vcellout__U_IDU_0__dpi_regs[31]),64);
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__U_IDU_0__DOT__ds_valid));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__U_IDU_0__DOT__ds_ready_go));
        tracep->fullWData(oldp+266,(vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r),96);
        tracep->fullQData(oldp+269,((((QData)((IData)(
                                                      vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[0U])))),64);
        tracep->fullBit(oldp+271,((1U & (vlSelf->top__DOT__ws_to_rf_bus[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+272,((0x1fU & vlSelf->top__DOT__ws_to_rf_bus[2U])),5);
        tracep->fullQData(oldp+273,((((QData)((IData)(
                                                      vlSelf->top__DOT__ws_to_rf_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ws_to_rf_bus[0U])))),64);
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__U_IDU_0__DOT__op_mul));
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__U_IDU_0__DOT__op_div));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__U_IDU_0__DOT__op_rem));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__U_IDU_0__DOT__op_add));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__U_IDU_0__DOT__op_sub));
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__U_IDU_0__DOT__op_slt));
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__U_IDU_0__DOT__op_sltu));
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__U_IDU_0__DOT__op_and));
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__U_IDU_0__DOT__op_or));
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__U_IDU_0__DOT__op_xor));
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__U_IDU_0__DOT__op_sll));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__U_IDU_0__DOT__op_srl));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__U_IDU_0__DOT__op_sra));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__U_IDU_0__DOT__res_sext));
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__U_IDU_0__DOT__res_zext));
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__U_IDU_0__DOT__src_shamt));
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__U_IDU_0__DOT__src_pc));
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_u));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__U_IDU_0__DOT__src_4));
        tracep->fullBit(oldp+294,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))));
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_i));
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__U_IDU_0__DOT__src_imm_s));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__U_IDU_0__DOT__id_rf_we));
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__U_IDU_0__DOT__id_mem_re));
        tracep->fullCData(oldp+299,(vlSelf->top__DOT__U_IDU_0__DOT__id_mem_bytes),2);
        tracep->fullCData(oldp+300,((0x3fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                              >> 0x14U))),6);
        tracep->fullIData(oldp+301,((vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                     >> 0xcU)),20);
        tracep->fullIData(oldp+302,(vlSelf->top__DOT__U_IDU_0__DOT__imm_j),21);
        tracep->fullSData(oldp+303,((vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+304,(vlSelf->top__DOT__U_IDU_0__DOT__imm_s),12);
        tracep->fullSData(oldp+305,(vlSelf->top__DOT__U_IDU_0__DOT__imm_b),13);
        tracep->fullCData(oldp+306,((0x7fU & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U])),7);
        tracep->fullCData(oldp+307,((0x1fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                              >> 7U))),5);
        tracep->fullCData(oldp+308,((7U & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+309,((0x1fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+310,((0x1fU & (vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+311,((vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+312,((vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                     >> 0x1aU)),6);
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__U_IDU_0__DOT__es_rs1_hazard));
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__U_IDU_0__DOT__es_rs2_hazard));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__U_IDU_0__DOT__ws_rs1_hazard));
        tracep->fullBit(oldp+316,(vlSelf->top__DOT__U_IDU_0__DOT__ws_rs2_hazard));
        tracep->fullCData(oldp+317,((0x1fU & vlSelf->top__DOT__es_forward_bus[0U])),5);
        tracep->fullCData(oldp+318,((0x1fU & vlSelf->top__DOT__ws_forward_bus[0U])),5);
        tracep->fullQData(oldp+319,((((QData)((IData)(
                                                      vlSelf->top__DOT__es_forward_bus[2U])) 
                                      << 0x3bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__es_forward_bus[1U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__es_forward_bus[0U])) 
                                                      >> 5U)))),64);
        tracep->fullQData(oldp+321,((((QData)((IData)(
                                                      vlSelf->top__DOT__ws_forward_bus[2U])) 
                                      << 0x3bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ws_forward_bus[1U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__ws_forward_bus[0U])) 
                                                      >> 5U)))),64);
        tracep->fullBit(oldp+323,((1U & (vlSelf->top__DOT__es_forward_bus[2U] 
                                         >> 6U))));
        tracep->fullBit(oldp+324,((1U & (vlSelf->top__DOT__es_forward_bus[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+325,((1U & (vlSelf->top__DOT__ws_forward_bus[2U] 
                                         >> 5U))));
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__U_IDU_0__DOT__data_r1),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__U_IDU_0__DOT__data_r2),64);
        tracep->fullBit(oldp+330,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))));
        tracep->fullBit(oldp+331,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))));
        tracep->fullBit(oldp+332,((0x67U == (0x7fU 
                                             & vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U]))));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__U_IDU_0__DOT__inst_beq));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__U_IDU_0__DOT__inst_bne));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__U_IDU_0__DOT__inst_blt));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__U_IDU_0__DOT__inst_bge));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__U_IDU_0__DOT__inst_bltu));
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__U_IDU_0__DOT__inst_bgeu));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lb));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lh));
        tracep->fullBit(oldp+341,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lw));
        tracep->fullBit(oldp+342,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lbu));
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lhu));
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__U_IDU_0__DOT__inst_lwu));
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__U_IDU_0__DOT__inst_ld));
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sb));
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sh));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sw));
        tracep->fullBit(oldp+349,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sd));
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__U_IDU_0__DOT__inst_addi));
        tracep->fullBit(oldp+351,(vlSelf->top__DOT__U_IDU_0__DOT__inst_addiw));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__U_IDU_0__DOT__inst_slti));
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sltiu));
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__U_IDU_0__DOT__inst_xori));
        tracep->fullBit(oldp+355,(vlSelf->top__DOT__U_IDU_0__DOT__inst_ori));
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__U_IDU_0__DOT__inst_andi));
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__U_IDU_0__DOT__inst_slli));
        tracep->fullBit(oldp+358,(vlSelf->top__DOT__U_IDU_0__DOT__inst_slliw));
        tracep->fullBit(oldp+359,(vlSelf->top__DOT__U_IDU_0__DOT__inst_srli));
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__U_IDU_0__DOT__inst_srliw));
        tracep->fullBit(oldp+361,(vlSelf->top__DOT__U_IDU_0__DOT__inst_add));
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__U_IDU_0__DOT__inst_addw));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sub));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__U_IDU_0__DOT__inst_subw));
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sll));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sllw));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__U_IDU_0__DOT__inst_slt));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sltu));
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__U_IDU_0__DOT__inst_xor));
        tracep->fullBit(oldp+370,(vlSelf->top__DOT__U_IDU_0__DOT__inst_srl));
        tracep->fullBit(oldp+371,(vlSelf->top__DOT__U_IDU_0__DOT__inst_srlw));
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sra));
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__U_IDU_0__DOT__inst_sraw));
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__U_IDU_0__DOT__inst_or));
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__U_IDU_0__DOT__inst_and));
        tracep->fullBit(oldp+376,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mul));
        tracep->fullBit(oldp+377,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mulh));
        tracep->fullBit(oldp+378,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mulhsu));
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mulhu));
        tracep->fullBit(oldp+380,(vlSelf->top__DOT__U_IDU_0__DOT__inst_mulw));
        tracep->fullBit(oldp+381,(vlSelf->top__DOT__U_IDU_0__DOT__inst_div));
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__U_IDU_0__DOT__inst_divu));
        tracep->fullBit(oldp+383,(vlSelf->top__DOT__U_IDU_0__DOT__inst_divw));
        tracep->fullBit(oldp+384,(vlSelf->top__DOT__U_IDU_0__DOT__inst_divuw));
        tracep->fullBit(oldp+385,(vlSelf->top__DOT__U_IDU_0__DOT__inst_rem));
        tracep->fullBit(oldp+386,(vlSelf->top__DOT__U_IDU_0__DOT__inst_remu));
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__U_IDU_0__DOT__inst_remw));
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__U_IDU_0__DOT__inst_remuw));
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__U_IDU_0__DOT__inst_ebreak));
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__U_IDU_0__DOT__inst_invalid));
        tracep->fullBit(oldp+391,((0U != (0x1fU & (
                                                   vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                   >> 0xfU)))));
        tracep->fullBit(oldp+392,((0U != (0x1fU & (
                                                   vlSelf->top__DOT__U_IDU_0__DOT__fs_to_ds_bus_r[2U] 
                                                   >> 0x14U)))));
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__U_IDU_0__DOT__bt_b),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[0]),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[1]),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[2]),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[3]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[4]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[5]),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[6]),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[7]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[8]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[9]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[10]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[11]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[12]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[13]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[14]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[15]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[16]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[17]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[18]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[19]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[20]),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[21]),64);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[22]),64);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[23]),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[24]),64);
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[25]),64);
        tracep->fullQData(oldp+447,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[26]),64);
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[27]),64);
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[28]),64);
        tracep->fullQData(oldp+453,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[29]),64);
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[30]),64);
        tracep->fullQData(oldp+457,(vlSelf->top__DOT__U_IDU_0__DOT____Vcellout__U_YSYX_22041752_RF_0__dpi_regs[31]),64);
        tracep->fullQData(oldp+459,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[0]),64);
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[1]),64);
        tracep->fullQData(oldp+463,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[2]),64);
        tracep->fullQData(oldp+465,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[3]),64);
        tracep->fullQData(oldp+467,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[4]),64);
        tracep->fullQData(oldp+469,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[5]),64);
        tracep->fullQData(oldp+471,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[6]),64);
        tracep->fullQData(oldp+473,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[7]),64);
        tracep->fullQData(oldp+475,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[8]),64);
        tracep->fullQData(oldp+477,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[9]),64);
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[10]),64);
        tracep->fullQData(oldp+481,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[11]),64);
        tracep->fullQData(oldp+483,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[12]),64);
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[13]),64);
        tracep->fullQData(oldp+487,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[14]),64);
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[15]),64);
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[16]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[17]),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[18]),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[19]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[20]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[21]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[22]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[23]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[24]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[25]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[26]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[27]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[28]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[29]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[30]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__U_IDU_0__DOT__U_YSYX_22041752_RF_0__DOT__regs[31]),64);
        tracep->fullSData(oldp+523,((0xffffU & (IData)(vlSelf->top__DOT__U_IDU_0__DOT__bt_b))),16);
        tracep->fullSData(oldp+524,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+525,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+526,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_IDU_0__DOT__bt_b 
                                                        >> 0x30U)))),16);
        tracep->fullWData(oldp+527,(vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r),274);
        tracep->fullBit(oldp+536,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 0x11U))));
        tracep->fullBit(oldp+537,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+538,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+539,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+540,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+541,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 0xcU))));
        tracep->fullBit(oldp+542,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+543,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+544,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 9U))));
        tracep->fullBit(oldp+545,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 8U))));
        tracep->fullBit(oldp+546,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 7U))));
        tracep->fullBit(oldp+547,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 6U))));
        tracep->fullBit(oldp+548,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 5U))));
        tracep->fullBit(oldp+549,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 4U))));
        tracep->fullBit(oldp+550,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                         >> 3U))));
        tracep->fullBit(oldp+551,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+552,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x1bU))));
        tracep->fullBit(oldp+553,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+554,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+555,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x18U))));
        tracep->fullBit(oldp+556,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x17U))));
        tracep->fullBit(oldp+557,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+558,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+559,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+560,((1U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+561,((3U & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                           >> 0x11U))),2);
        tracep->fullCData(oldp+562,((0x3fU & ((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[8U] 
                                               << 3U) 
                                              | (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                                 >> 0x1dU)))),6);
        tracep->fullIData(oldp+563,((0xfffffU & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U])),20);
        tracep->fullSData(oldp+564,((vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[6U] 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+565,((0xfffU & vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U])),12);
        tracep->fullCData(oldp+566,((0x1fU & (vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[7U] 
                                              >> 0xcU))),5);
        tracep->fullQData(oldp+567,((((QData)((IData)(
                                                      vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[4U])))),64);
        tracep->fullQData(oldp+569,((((QData)((IData)(
                                                      vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[2U])))),64);
        tracep->fullQData(oldp+571,((((QData)((IData)(
                                                      vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_EXU_0__DOT__ds_to_es_bus_r[0U])))),64);
        tracep->fullQData(oldp+573,(vlSelf->top__DOT__U_EXU_0__DOT__alu_src1),64);
        tracep->fullQData(oldp+575,(vlSelf->top__DOT__U_EXU_0__DOT__alu_src2),64);
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__U_EXU_0__DOT__alu_result),64);
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__U_EXU_0__DOT__mem_read_after_write));
        tracep->fullBit(oldp+580,(vlSelf->top__DOT__U_EXU_0__DOT__es_forward_valid));
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_slt),64);
        tracep->fullQData(oldp+583,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_and),64);
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_or),64);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_xor),64);
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sll),64);
        tracep->fullQData(oldp+591,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_srl),64);
        tracep->fullWData(oldp+593,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__r_sra),128);
        tracep->fullQData(oldp+597,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_b),64);
        tracep->fullBit(oldp+599,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__adder_cin));
        tracep->fullQData(oldp+600,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__r),64);
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c3));
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__res),64);
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c0));
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c1));
        tracep->fullBit(oldp+607,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__c2));
        tracep->fullQData(oldp+608,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y),64);
        tracep->fullSData(oldp+610,((0xffffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__alu_src1))),16);
        tracep->fullSData(oldp+611,((0xffffU & (IData)(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y))),16);
        tracep->fullSData(oldp+612,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_0__sum),16);
        tracep->fullSData(oldp+613,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__pn),16);
        tracep->fullSData(oldp+614,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_0__DOT__gn),16);
        tracep->fullSData(oldp+615,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+616,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y 
                                                        >> 0x10U)))),16);
        tracep->fullSData(oldp+617,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_1__sum),16);
        tracep->fullSData(oldp+618,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__pn),16);
        tracep->fullSData(oldp+619,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_1__DOT__gn),16);
        tracep->fullSData(oldp+620,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+621,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y 
                                                        >> 0x20U)))),16);
        tracep->fullSData(oldp+622,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_2__sum),16);
        tracep->fullSData(oldp+623,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__pn),16);
        tracep->fullSData(oldp+624,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_2__DOT__gn),16);
        tracep->fullSData(oldp+625,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_EXU_0__DOT__alu_src1 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+626,((0xffffU & (IData)(
                                                       (vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__y 
                                                        >> 0x30U)))),16);
        tracep->fullSData(oldp+627,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT____Vcellout__u_adder_p_3__sum),16);
        tracep->fullSData(oldp+628,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__pn),16);
        tracep->fullSData(oldp+629,(vlSelf->top__DOT__U_EXU_0__DOT__U_YSYX_22041752_ALU_0__DOT__U_YSYX_22041752_ASER64_0__DOT__u_adder_p_3__DOT__gn),16);
        tracep->fullWData(oldp+630,(vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r),139);
        tracep->fullBit(oldp+635,((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+636,((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                         >> 9U))));
        tracep->fullCData(oldp+637,((3U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                           >> 7U))),2);
        tracep->fullBit(oldp+638,((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                         >> 6U))));
        tracep->fullBit(oldp+639,((1U & (vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U] 
                                         >> 5U))));
        tracep->fullCData(oldp+640,((0x1fU & vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[4U])),5);
        tracep->fullQData(oldp+641,((((QData)((IData)(
                                                      vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__U_MEU_0__DOT__es_to_ms_bus_r[2U])))),64);
        tracep->fullBit(oldp+643,(vlSelf->top__DOT__U_MEU_0__DOT__ms_forward_valid));
        tracep->fullWData(oldp+644,(vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r),134);
        tracep->fullBit(oldp+649,((1U & (vlSelf->top__DOT__U_WBU_0__DOT__ms_to_ws_bus_r[4U] 
                                         >> 5U))));
        tracep->fullQData(oldp+650,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[0]),64);
        tracep->fullQData(oldp+652,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[1]),64);
        tracep->fullQData(oldp+654,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[2]),64);
        tracep->fullQData(oldp+656,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[3]),64);
        tracep->fullQData(oldp+658,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[4]),64);
        tracep->fullQData(oldp+660,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[5]),64);
        tracep->fullQData(oldp+662,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[6]),64);
        tracep->fullQData(oldp+664,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[7]),64);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[8]),64);
        tracep->fullQData(oldp+668,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[9]),64);
        tracep->fullQData(oldp+670,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[10]),64);
        tracep->fullQData(oldp+672,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[11]),64);
        tracep->fullQData(oldp+674,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[12]),64);
        tracep->fullQData(oldp+676,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[13]),64);
        tracep->fullQData(oldp+678,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[14]),64);
        tracep->fullQData(oldp+680,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[15]),64);
        tracep->fullQData(oldp+682,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[16]),64);
        tracep->fullQData(oldp+684,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[17]),64);
        tracep->fullQData(oldp+686,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[18]),64);
        tracep->fullQData(oldp+688,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[19]),64);
        tracep->fullQData(oldp+690,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[20]),64);
        tracep->fullQData(oldp+692,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[21]),64);
        tracep->fullQData(oldp+694,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[22]),64);
        tracep->fullQData(oldp+696,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[23]),64);
        tracep->fullQData(oldp+698,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[24]),64);
        tracep->fullQData(oldp+700,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[25]),64);
        tracep->fullQData(oldp+702,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[26]),64);
        tracep->fullQData(oldp+704,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[27]),64);
        tracep->fullQData(oldp+706,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[28]),64);
        tracep->fullQData(oldp+708,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[29]),64);
        tracep->fullQData(oldp+710,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[30]),64);
        tracep->fullQData(oldp+712,(vlSelf->top__DOT____Vcellinp__u_dpi_c__dpi_regs[31]),64);
        tracep->fullQData(oldp+714,(vlSelf->top__DOT__u_dpi_c__DOT__rf[0]),64);
        tracep->fullQData(oldp+716,(vlSelf->top__DOT__u_dpi_c__DOT__rf[1]),64);
        tracep->fullQData(oldp+718,(vlSelf->top__DOT__u_dpi_c__DOT__rf[2]),64);
        tracep->fullQData(oldp+720,(vlSelf->top__DOT__u_dpi_c__DOT__rf[3]),64);
        tracep->fullQData(oldp+722,(vlSelf->top__DOT__u_dpi_c__DOT__rf[4]),64);
        tracep->fullQData(oldp+724,(vlSelf->top__DOT__u_dpi_c__DOT__rf[5]),64);
        tracep->fullQData(oldp+726,(vlSelf->top__DOT__u_dpi_c__DOT__rf[6]),64);
        tracep->fullQData(oldp+728,(vlSelf->top__DOT__u_dpi_c__DOT__rf[7]),64);
        tracep->fullQData(oldp+730,(vlSelf->top__DOT__u_dpi_c__DOT__rf[8]),64);
        tracep->fullQData(oldp+732,(vlSelf->top__DOT__u_dpi_c__DOT__rf[9]),64);
        tracep->fullQData(oldp+734,(vlSelf->top__DOT__u_dpi_c__DOT__rf[10]),64);
        tracep->fullQData(oldp+736,(vlSelf->top__DOT__u_dpi_c__DOT__rf[11]),64);
        tracep->fullQData(oldp+738,(vlSelf->top__DOT__u_dpi_c__DOT__rf[12]),64);
        tracep->fullQData(oldp+740,(vlSelf->top__DOT__u_dpi_c__DOT__rf[13]),64);
        tracep->fullQData(oldp+742,(vlSelf->top__DOT__u_dpi_c__DOT__rf[14]),64);
        tracep->fullQData(oldp+744,(vlSelf->top__DOT__u_dpi_c__DOT__rf[15]),64);
        tracep->fullQData(oldp+746,(vlSelf->top__DOT__u_dpi_c__DOT__rf[16]),64);
        tracep->fullQData(oldp+748,(vlSelf->top__DOT__u_dpi_c__DOT__rf[17]),64);
        tracep->fullQData(oldp+750,(vlSelf->top__DOT__u_dpi_c__DOT__rf[18]),64);
        tracep->fullQData(oldp+752,(vlSelf->top__DOT__u_dpi_c__DOT__rf[19]),64);
        tracep->fullQData(oldp+754,(vlSelf->top__DOT__u_dpi_c__DOT__rf[20]),64);
        tracep->fullQData(oldp+756,(vlSelf->top__DOT__u_dpi_c__DOT__rf[21]),64);
        tracep->fullQData(oldp+758,(vlSelf->top__DOT__u_dpi_c__DOT__rf[22]),64);
        tracep->fullQData(oldp+760,(vlSelf->top__DOT__u_dpi_c__DOT__rf[23]),64);
        tracep->fullQData(oldp+762,(vlSelf->top__DOT__u_dpi_c__DOT__rf[24]),64);
        tracep->fullQData(oldp+764,(vlSelf->top__DOT__u_dpi_c__DOT__rf[25]),64);
        tracep->fullQData(oldp+766,(vlSelf->top__DOT__u_dpi_c__DOT__rf[26]),64);
        tracep->fullQData(oldp+768,(vlSelf->top__DOT__u_dpi_c__DOT__rf[27]),64);
        tracep->fullQData(oldp+770,(vlSelf->top__DOT__u_dpi_c__DOT__rf[28]),64);
        tracep->fullQData(oldp+772,(vlSelf->top__DOT__u_dpi_c__DOT__rf[29]),64);
        tracep->fullQData(oldp+774,(vlSelf->top__DOT__u_dpi_c__DOT__rf[30]),64);
        tracep->fullQData(oldp+776,(vlSelf->top__DOT__u_dpi_c__DOT__rf[31]),64);
        tracep->fullBit(oldp+778,(vlSelf->top__DOT__u_dpi_c__DOT__stop_r0));
        tracep->fullBit(oldp+779,(vlSelf->top__DOT__u_dpi_c__DOT__stop_r1));
        tracep->fullBit(oldp+780,(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2));
        tracep->fullIData(oldp+781,(vlSelf->top__DOT__u_dpi_c__DOT__inst_r0),32);
        tracep->fullIData(oldp+782,(vlSelf->top__DOT__u_dpi_c__DOT__inst_r1),32);
        tracep->fullIData(oldp+783,(vlSelf->top__DOT__u_dpi_c__DOT__inst_r2),32);
        tracep->fullQData(oldp+784,((QData)((IData)(vlSelf->top__DOT__u_dpi_c__DOT__stop_r2))),64);
        tracep->fullQData(oldp+786,((QData)((IData)(vlSelf->top__DOT__U_WBU_0__DOT__ws_valid))),64);
        tracep->fullBit(oldp+788,(vlSelf->clk));
        tracep->fullBit(oldp+789,(vlSelf->reset));
        tracep->fullBit(oldp+790,(vlSelf->inst_sram_en));
        tracep->fullQData(oldp+791,(vlSelf->inst_sram_addr),64);
        tracep->fullQData(oldp+793,(vlSelf->inst_sram_rdata),64);
        tracep->fullBit(oldp+795,(vlSelf->data_sram_en));
        tracep->fullCData(oldp+796,(vlSelf->data_sram_wen),8);
        tracep->fullQData(oldp+797,(vlSelf->data_sram_addr),64);
        tracep->fullQData(oldp+799,(vlSelf->data_sram_wdata),64);
        tracep->fullQData(oldp+801,(vlSelf->data_sram_rdata),64);
        tracep->fullBit(oldp+803,((1U & (~ (IData)(vlSelf->reset)))));
        tracep->fullIData(oldp+804,((IData)(vlSelf->inst_sram_rdata)),32);
        tracep->fullBit(oldp+805,(1U));
        tracep->fullQData(oldp+806,(vlSelf->top__DOT__mul_result),64);
        tracep->fullQData(oldp+808,(vlSelf->top__DOT__div_result),64);
        tracep->fullQData(oldp+810,(vlSelf->top__DOT__div_complete),64);
        tracep->fullIData(oldp+812,(0x10U),32);
        tracep->fullBit(oldp+813,(0U));
    }
}
