// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_IDU.v
// Author        : Cw
// Created On    : 2022-10-17 21:00
// Last Modified : 2023-07-04 21:00
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_IDU (
    input                                          clk           ,
    input                                          reset         ,
    
    input                                          es_allowin    ,
    output                                         ds_allowin    ,
   
    input                                          fs_to_ds_valid,
    input  [`ysyx_22041752_FS_TO_DS_BUS_WD -1:0]   fs_to_ds_bus  ,
    
    output                                         ds_to_es_valid,
    output [`ysyx_22041752_DS_TO_ES_BUS_WD -1:0]   ds_to_es_bus  ,
    
    input  [`ysyx_22041752_WS_TO_RF_BUS_WD -1:0]   ws_to_rf_bus  ,
	
	input  [`ysyx_22041752_FORWARD_BUS_WD -1:0]    es_forward_bus,
	input  [`ysyx_22041752_FORWARD_BUS_WD-1:0]     ms_forward_bus,
	input  [`ysyx_22041752_WS_FORWARD_BUS_WD -1:0] ws_forward_bus,

    output [`ysyx_22041752_PC_WD          -1:0]    ra_data       ,
    input                                          flush         

`ifdef DPI_C
        ,
    //used to dpi-c debug
    output [`ysyx_22041752_RF_DATA_WD     -1:0]    dpi_regs [`ysyx_22041752_RF_NUM-1:0],
    output [                               0:0]    stop                                ,
    output [`ysyx_22041752_INST_WD        -1:0]    debug_ds_inst
`endif
);

reg  ds_valid   ;
wire ds_ready_go;

reg  [`ysyx_22041752_FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus_r;
wire [`ysyx_22041752_INST_WD         -1:0] ds_inst;
wire [`ysyx_22041752_PC_WD           -1:0] ds_pc  ;
wire inst_jal       ;
wire inst_jalr      ;
wire inst_beq       ;
wire inst_bne       ;
wire inst_blt       ;
wire inst_bge       ;
wire inst_bltu      ;
wire inst_bgeu      ;
wire [12:0] ds_imm_b;
wire                              br_taken;
wire [`ysyx_22041752_PC_WD-1:0]   br_target;

assign {ds_inst  ,
        ds_pc    ,
        inst_jal ,  
        inst_jalr,  
        inst_beq ,  
        inst_bne ,  
        inst_blt ,  
        inst_bge ,  
        inst_bltu,  
        inst_bgeu,
        br_taken ,
        br_target,
        ds_imm_b 
       } = fs_to_ds_bus_r;

wire                   rf_we   ;
wire [`ysyx_22041752_RF_ADDR_WD-1:0] rf_waddr;
wire [`ysyx_22041752_RF_DATA_WD-1:0] rf_wdata;
assign {rf_we   ,  //69:69
        rf_waddr,  //68:64
        rf_wdata   //63:0
       } = ws_to_rf_bus;

wire mul_u  ;
wire mul_su ;
wire mul_h  ;
wire div_u  ;
wire op_mul ;
wire op_div ;
wire op_rem ;

wire csrrs  ;
wire csrrc  ;
wire op_add ;
wire op_sub ;
wire op_slt ;
wire op_sltu;
wire op_and ;
wire op_or  ;
wire op_xor ;
wire op_sll ;
wire op_srl ;
wire op_sra ;

wire        res_sext    ;
wire        res_zext    ;
wire        src_shamt   ;
wire        src_pc      ;
wire        src_imm_u   ;
wire        src_4       ;
wire        src_0       ;
wire        src_imm_i   ;
wire        src_imm_s   ;
wire        src_csr     ;
wire        id_csr_we   ;
wire        id_rf_we    ;
wire        id_mem_we   ;
wire        id_mem_re   ;
wire [ 1:0] id_mem_bytes;
wire [ 5:0] shamt;
wire [19:0] imm_u;
wire [11:0] imm_i;
wire [11:0] imm_s;
wire [11:0] rscsr;

wire [ 6:0] opcode;
wire [ 4:0] rd;
wire [ 2:0] funct3;
wire [ 4:0] rs1;
wire [ 4:0] rs2;
wire [ 6:0] funct7;
wire [ 5:0] sh_funct6;

wire es_rs1_hazard;
wire es_rs2_hazard;
wire ms_rs1_hazard;
wire ms_rs2_hazard;
wire ws_rs1_hazard;
wire ws_rs2_hazard;

wire [`ysyx_22041752_RF_ADDR_WD-1:0] es_dest_reg;
wire [`ysyx_22041752_RF_ADDR_WD-1:0] ms_dest_reg;
wire [`ysyx_22041752_RF_ADDR_WD-1:0] ws_dest_reg;
wire [`ysyx_22041752_RF_DATA_WD-1:0] es_wreg_data;
wire [`ysyx_22041752_RF_DATA_WD-1:0] ms_wreg_data;
wire [`ysyx_22041752_RF_DATA_WD-1:0] ws_wreg_data;
wire                                 es_mem_re;
wire                                 ms_mem_re;
wire                                 es_forward_valid;
wire                                 ms_forward_valid;
wire                                 ws_forward_valid;
wire [`ysyx_22041752_RF_DATA_WD-1:0] data_r1;
wire [`ysyx_22041752_RF_DATA_WD-1:0] data_r2;
wire [`ysyx_22041752_RF_DATA_WD-1:0] rs1_value;
wire [`ysyx_22041752_RF_DATA_WD-1:0] rs2_value;

assign ds_to_es_bus = {inst_fence_i  ,
                       inst_ecall    ,
                       inst_mret     ,
                       div_u         ,
                       mul_u         ,
                       mul_su        ,
                       mul_h         ,
                       inst_jalr     ,  
                       inst_beq      ,  
                       inst_bne      ,  
                       inst_blt      ,  
                       inst_bge      ,  
                       inst_bltu     ,  
                       inst_bgeu     ,  
                       br_taken      ,
                       br_target     ,
                       ds_imm_b      ,
                       op_mul        ,
                       op_div        ,
                       op_rem        ,
                       op_add        ,   
                       op_sub        ,  
                       op_slt        ,  
                       op_sltu       ,  
                       op_and        ,  
                       op_or         ,  
                       op_xor        ,  
                       op_sll        ,  
                       op_srl        ,  
                       op_sra        ,  
                       res_sext      , 
                       res_zext      , 
                       shamt         ,  
                       src_shamt     ,  
					   src_pc        ,	
					   src_imm_u     ,  
                       src_4         ,  
                       src_0         ,
                       src_imm_i     ,  
                       src_imm_s     ,  
                       src_csr       ,
                       rscsr         ,
                       id_csr_we     ,
                       csrrc         ,
                       csrrs         ,
                       id_rf_we      ,  
                       id_mem_we     ,
                       id_mem_re     ,
                       id_mem_bytes  ,
                       rd            ,  
                       imm_s         ,  
                       imm_i         ,  
                       imm_u         ,  
                       rs1_value     ,  
                       rs2_value     ,  
                       ds_pc            
                      };

assign ds_allowin     = !ds_valid || ds_ready_go && es_allowin;
assign ds_to_es_valid = ds_valid && ds_ready_go && ~flush;
assign ds_ready_go = !(ms_mem_re && (ms_rs1_hazard || ms_rs2_hazard) ||
                       es_mem_re && (es_rs1_hazard || es_rs2_hazard));
always @(posedge clk) begin
	if(reset)begin
		ds_valid <= 1'b0;
	end
	else if(ds_allowin)begin
		ds_valid <= fs_to_ds_valid;
	end
end

always @(posedge clk) begin
    if (reset) begin
        fs_to_ds_bus_r <= 0;
    end
	else if (fs_to_ds_valid && ds_allowin) begin
        fs_to_ds_bus_r <= fs_to_ds_bus;
    end
end

wire inst_fence_i;
wire inst_lui    ;
wire inst_auipc  ;
wire inst_lb     ;
wire inst_lh     ;
wire inst_lw     ;
wire inst_lbu    ;
wire inst_lhu    ;
wire inst_lwu    ;
wire inst_ld     ;
wire inst_sb     ;
wire inst_sh     ;
wire inst_sw     ;
wire inst_sd     ;
wire inst_addi   ;
wire inst_addiw  ;
wire inst_slti   ;
wire inst_sltiu  ;
wire inst_xori   ;
wire inst_ori    ;
wire inst_andi   ;
wire inst_slli   ;
wire inst_slliw  ;
wire inst_srli   ;
wire inst_srliw  ;
wire inst_srai   ;
wire inst_sraiw  ;
wire inst_add    ;
wire inst_addw   ;
wire inst_sub    ;
wire inst_subw   ;
wire inst_sll    ;
wire inst_sllw   ;
wire inst_slt    ;
wire inst_sltu   ;
wire inst_xor    ;
wire inst_srl    ;
wire inst_srlw   ;
wire inst_sra    ;
wire inst_sraw   ;
wire inst_or     ;
wire inst_and    ;
wire inst_mul    ;
wire inst_mulh   ;
wire inst_mulhsu ;
wire inst_mulhu  ;
wire inst_mulw   ;
wire inst_div    ;
wire inst_divu   ;
wire inst_divw   ;
wire inst_divuw  ;
wire inst_rem    ;
wire inst_remu   ;
wire inst_remw   ;
wire inst_remuw  ;
wire inst_csrw   ;
wire inst_csrr   ;
wire inst_csrrs  ;
wire inst_csrrc  ;
wire inst_ecall  ;
wire inst_mret   ;
wire inst_ebreak ;
/*verilator lint_off UNUSEDSIGNAL */
wire inst_invalid;
/*verilator lint_on UNUSEDSIGNAL */

assign inst_invalid = !(inst_lui   || 
                        inst_auipc || 
                        inst_jal   || 
                        inst_jalr  || 
                        inst_beq   || 
                        inst_bne   || 
                        inst_blt   || 
                        inst_bge   || 
                        inst_bltu  || 
                        inst_bgeu  || 
                        inst_lb    || 
                        inst_lh    || 
                        inst_lw    || 
                        inst_lbu   || 
                        inst_lhu   || 
                        inst_lwu   || 
                        inst_ld    || 
                        inst_sb    || 
                        inst_sh    || 
                        inst_sw    || 
                        inst_sd    || 
                        inst_addi  || 
                        inst_addiw || 
                        inst_slti  || 
                        inst_sltiu || 
                        inst_xori  || 
                        inst_ori   || 
                        inst_andi  || 
                        inst_slli  || 
                        inst_slliw || 
                        inst_srli  || 
                        inst_srliw || 
                        inst_srai  || 
                        inst_sraiw || 
                        inst_add   || 
                        inst_addw  || 
                        inst_sub   || 
                        inst_subw  || 
                        inst_sll   || 
                        inst_sllw  || 
                        inst_slt   || 
                        inst_sltu  || 
                        inst_xor   || 
                        inst_srl   || 
                        inst_srlw  || 
                        inst_sra   || 
                        inst_sraw  || 
                        inst_or    || 
                        inst_and   || 
                        inst_mul   || 
                        inst_mulh  || 
                        inst_mulhsu|| 
                        inst_mulhu || 
                        inst_mulw  || 
                        inst_div   || 
                        inst_divu  || 
                        inst_divw  || 
                        inst_divuw || 
                        inst_rem   || 
                        inst_remu  || 
                        inst_remw  || 
                        inst_remuw ||
                        inst_csrw  ||
                        inst_csrr  ||
                        inst_csrrs ||
                        inst_csrrc ||
                        inst_ecall ||
                        inst_mret  ||
                        inst_ebreak); 

assign opcode    = ds_inst[ 6: 0];
assign rd        = ds_inst[11: 7];
assign funct3    = ds_inst[14:12];
assign rs1       = ds_inst[19:15];
assign rs2       = ds_inst[24:20];
assign funct7    = ds_inst[31:25];
assign sh_funct6 = funct7 [ 6: 1];
assign shamt     = ds_inst[25:20];
assign rscsr     = ds_inst[31:20];
assign imm_u     = ds_inst[31:12];
assign imm_i     = ds_inst[31:20]; 
assign imm_s     = {ds_inst[31:25], ds_inst[11:7]}; 

assign inst_add    = funct7 == 7'b0000000 && funct3 == 3'b0   && opcode == 7'b0110011;
assign inst_addw   = funct7 == 7'b0000000 && funct3 == 3'b0   && opcode == 7'b0111011;
assign inst_sub    = funct7 == 7'b0100000 && funct3 == 3'b0   && opcode == 7'b0110011;
assign inst_subw   = funct7 == 7'b0100000 && funct3 == 3'b0   && opcode == 7'b0111011;
assign inst_sll    = funct7 == 7'b0000000 && funct3 == 3'b001 && opcode == 7'b0110011;
assign inst_sllw   = funct7 == 7'b0000000 && funct3 == 3'b001 && opcode == 7'b0111011;
assign inst_slt    = funct7 == 7'b0000000 && funct3 == 3'b010 && opcode == 7'b0110011;
assign inst_sltu   = funct7 == 7'b0000000 && funct3 == 3'b011 && opcode == 7'b0110011;
assign inst_xor    = funct7 == 7'b0000000 && funct3 == 3'b100 && opcode == 7'b0110011;
assign inst_srl    = funct7 == 7'b0000000 && funct3 == 3'b101 && opcode == 7'b0110011;
assign inst_srlw   = funct7 == 7'b0000000 && funct3 == 3'b101 && opcode == 7'b0111011;
assign inst_sra    = funct7 == 7'b0100000 && funct3 == 3'b101 && opcode == 7'b0110011;
assign inst_sraw   = funct7 == 7'b0100000 && funct3 == 3'b101 && opcode == 7'b0111011;
assign inst_or     = funct7 == 7'b0000000 && funct3 == 3'b110 && opcode == 7'b0110011;
assign inst_and    = funct7 == 7'b0000000 && funct3 == 3'b111 && opcode == 7'b0110011;
assign inst_mul    = funct7 == 7'b0000001 && funct3 == 3'b000 && opcode == 7'b0110011; 
assign inst_mulh   = funct7 == 7'b0000001 && funct3 == 3'b001 && opcode == 7'b0110011; 
assign inst_mulhsu = funct7 == 7'b0000001 && funct3 == 3'b010 && opcode == 7'b0110011;
assign inst_mulhu  = funct7 == 7'b0000001 && funct3 == 3'b011 && opcode == 7'b0110011; 
assign inst_mulw   = funct7 == 7'b0000001 && funct3 == 3'b000 && opcode == 7'b0111011;
assign inst_div    = funct7 == 7'b0000001 && funct3 == 3'b100 && opcode == 7'b0110011; 
assign inst_divu   = funct7 == 7'b0000001 && funct3 == 3'b101 && opcode == 7'b0110011; 
assign inst_divw   = funct7 == 7'b0000001 && funct3 == 3'b100 && opcode == 7'b0111011; 
assign inst_divuw  = funct7 == 7'b0000001 && funct3 == 3'b101 && opcode == 7'b0111011; 
assign inst_rem    = funct7 == 7'b0000001 && funct3 == 3'b110 && opcode == 7'b0110011; 
assign inst_remu   = funct7 == 7'b0000001 && funct3 == 3'b111 && opcode == 7'b0110011; 
assign inst_remw   = funct7 == 7'b0000001 && funct3 == 3'b110 && opcode == 7'b0111011; 
assign inst_remuw  = funct7 == 7'b0000001 && funct3 == 3'b111 && opcode == 7'b0111011; 

assign inst_csrw   = funct3 == 3'b001 && rd == 5'b00000 && opcode == 7'b1110011;
assign inst_csrr   = funct3 == 3'b001                   && opcode == 7'b1110011;
assign inst_csrrs  = funct3 == 3'b010                   && opcode == 7'b1110011;
assign inst_csrrc  = funct3 == 3'b011                   && opcode == 7'b1110011;
assign inst_ecall  = funct7 == 7'b0000000 && rs2 == 5'b00000 && rs1 == 5'b00000 && funct3 == 3'b000 && rd == 5'b00000 && opcode == 7'b1110011;
assign inst_mret   = funct7 == 7'b0011000 && rs2 == 5'b00010 && rs1 == 5'b00000 && funct3 == 3'b000 && rd == 5'b00000 && opcode == 7'b1110011;
assign inst_ebreak = funct7 == 7'b0000000 && funct3 == 3'b000 && opcode == 7'b1110011 && 
                     rs2    == 5'b00001   && rs1    == 5'b00000 && rd   == 5'b00000;

assign inst_lui    = opcode == 7'b0110111;
assign inst_auipc  = opcode == 7'b0010111;

assign inst_fence_i= opcode == 7'b0001111 && funct3 == 3'b001;

assign inst_lb     = opcode == 7'b0000011 && funct3 == 3'b000;
assign inst_lh     = opcode == 7'b0000011 && funct3 == 3'b001;
assign inst_lw     = opcode == 7'b0000011 && funct3 == 3'b010;
assign inst_lbu    = opcode == 7'b0000011 && funct3 == 3'b100;
assign inst_lhu    = opcode == 7'b0000011 && funct3 == 3'b101;
assign inst_lwu    = opcode == 7'b0000011 && funct3 == 3'b110;
assign inst_ld     = opcode == 7'b0000011 && funct3 == 3'b011;
assign inst_sb     = opcode == 7'b0100011 && funct3 == 3'b000;
assign inst_sh     = opcode == 7'b0100011 && funct3 == 3'b001;
assign inst_sw     = opcode == 7'b0100011 && funct3 == 3'b010;
assign inst_sd     = opcode == 7'b0100011 && funct3 == 3'b011;
assign inst_addi   = opcode == 7'b0010011 && funct3 == 3'b000;
assign inst_addiw  = opcode == 7'b0011011 && funct3 == 3'b000;
assign inst_slti   = opcode == 7'b0010011 && funct3 == 3'b010;
assign inst_sltiu  = opcode == 7'b0010011 && funct3 == 3'b011;
assign inst_xori   = opcode == 7'b0010011 && funct3 == 3'b100;
assign inst_ori    = opcode == 7'b0010011 && funct3 == 3'b110;
assign inst_andi   = opcode == 7'b0010011 && funct3 == 3'b111;
assign inst_slli   = opcode == 7'b0010011 && funct3 == 3'b001 && sh_funct6 == 6'b000000 ;
assign inst_slliw  = opcode == 7'b0011011 && funct3 == 3'b001 && funct7    == 7'b0000000;
assign inst_srli   = opcode == 7'b0010011 && funct3 == 3'b101 && sh_funct6 == 6'b000000 ;
assign inst_srliw  = opcode == 7'b0011011 && funct3 == 3'b101 && funct7    == 7'b0000000;
assign inst_srai   = opcode == 7'b0010011 && funct3 == 3'b101 && sh_funct6 == 6'b010000 ;
assign inst_sraiw  = opcode == 7'b0011011 && funct3 == 3'b101 && funct7    == 7'b0100000;

assign op_mul = inst_mul  | inst_mulh  | inst_mulhsu| inst_mulhu | inst_mulw;
assign mul_u  = inst_mulhu;
assign mul_su = inst_mulhsu;
assign mul_h  = inst_mulh | inst_mulhsu| inst_mulhu;
assign div_u  = inst_divu | inst_divuw | inst_remu  | inst_remuw ;
assign op_div = inst_div  | inst_divu  | inst_divw  | inst_divuw ;
assign op_rem = inst_rem  | inst_remu  | inst_remw  | inst_remuw ;
assign op_add = inst_add  | inst_addw  | inst_auipc | inst_jal   | inst_jalr | inst_sd   | 
                inst_lb   | inst_lh    | inst_lw    | inst_lbu   | inst_lhu  | inst_addi | 
                inst_lwu  | inst_ld    | inst_sb    | inst_sh    | inst_sw   | inst_addiw|
                inst_lui  | inst_csrr  | inst_csrrs | inst_csrrc ;

assign csrrs  = inst_csrrs;
assign csrrc  = inst_csrrc;

assign op_sub = inst_sub  | inst_subw;
assign op_slt = inst_slti | inst_slt;
assign op_sltu= inst_sltiu| inst_sltu;
assign op_and = inst_andi | inst_and;
assign op_or  = inst_ori  | inst_or;
assign op_xor = inst_xori | inst_xor;
assign op_sll = inst_slli | inst_slliw | inst_sll | inst_sllw;
assign op_srl = inst_srli | inst_srliw | inst_srl | inst_srlw;
assign op_sra = inst_srai | inst_sraiw | inst_sra | inst_sraw;
assign id_csr_we = inst_csrw || inst_csrr  || inst_csrrs|| inst_csrrc ;
assign id_rf_we  = !(inst_sb || inst_sh    || inst_sw   || inst_sd    || inst_beq  || 
                    inst_bne || inst_blt   || inst_bge  || inst_bltu  || inst_bgeu ||
                    inst_csrw|| inst_ecall || inst_mret );
assign id_mem_we = inst_sb   || inst_sh    || inst_sw   || inst_sd;
assign id_mem_re = inst_lb   || inst_lh    || inst_lw   || inst_lbu   || inst_lhu  || inst_lwu   || inst_ld;
assign src_shamt = inst_slli || inst_slliw || inst_srli || inst_srliw || inst_srai || inst_sraiw; 
assign src_pc    = inst_jal  || inst_jalr  || inst_auipc;
assign src_imm_u = inst_lui  || inst_auipc;
assign src_4     = inst_jal  || inst_jalr;
assign src_0     = inst_lui  || inst_csrr  || inst_csrrs|| inst_csrrc ;
assign src_imm_i = inst_lb   || inst_lh    || inst_lw   || inst_lbu   || inst_lhu  || inst_lwu  ||
                   inst_ld   || inst_addi  || inst_addiw|| inst_slti  || inst_sltiu|| inst_xori || inst_ori || inst_andi;
assign src_imm_s = inst_sb   || inst_sh    || inst_sw   || inst_sd;
assign src_csr   = inst_csrr || inst_csrrs || inst_csrrc;
assign res_sext  = inst_lb   || inst_lh    || inst_lw   ||
                   inst_addiw|| inst_slliw || inst_srliw|| inst_sraiw || inst_addw || inst_subw || inst_sllw||
                   inst_srlw || inst_sraw  || inst_mulw || inst_divw  || inst_divuw|| inst_remw || inst_remuw;
assign res_zext  = inst_lbu  || inst_lhu   || inst_lwu;
assign id_mem_bytes = (inst_lb || inst_lbu || inst_sb) ? 2'b00 :
                      (inst_lh || inst_lhu || inst_sh) ? 2'b01 :
                      (inst_lw || inst_lwu || inst_sw) ? 2'b10 :
                                                         2'b11 ;

//read from regfile
ysyx_22041752_rf U_RF_0(
    .clk        ( clk      ),
    .reset      ( reset    ),
    .addr_r1    ( rs1      ),
    .addr_r2    ( rs2      ),
    .data_r1    ( data_r1  ),
    .data_r2    ( data_r2  ),
    .addr_w     ( rf_waddr ),
    .we         ( rf_we    ),
    .data_w     ( rf_wdata ),
    .ra_data    ( ra_data  )
`ifdef DPI_C
        ,
    .dpi_regs   ( dpi_regs )
`endif

);

wire rs1_is_not_zero;
wire rs2_is_not_zero;
assign rs1_is_not_zero = |rs1;
assign rs2_is_not_zero = |rs2;
assign {es_mem_re,es_forward_valid,es_wreg_data,es_dest_reg} = es_forward_bus;
assign {ms_mem_re,ms_forward_valid,ms_wreg_data,ms_dest_reg} = ms_forward_bus;
assign {ws_forward_valid,ws_wreg_data,ws_dest_reg} = ws_forward_bus;

assign es_rs1_hazard = (es_dest_reg == rs1) && rs1_is_not_zero && es_forward_valid;
assign es_rs2_hazard = (es_dest_reg == rs2) && rs2_is_not_zero && es_forward_valid;
assign ms_rs1_hazard = (ms_dest_reg == rs1) && rs1_is_not_zero && ms_forward_valid;
assign ms_rs2_hazard = (ms_dest_reg == rs2) && rs2_is_not_zero && ms_forward_valid;
assign ws_rs1_hazard = (ws_dest_reg == rs1) && rs1_is_not_zero && ws_forward_valid;
assign ws_rs2_hazard = (ws_dest_reg == rs2) && rs2_is_not_zero && ws_forward_valid;

assign rs1_value = es_rs1_hazard ? es_wreg_data : 
                   ms_rs1_hazard ? ms_wreg_data :
                   ws_rs1_hazard ? ws_wreg_data :
                                      data_r1   ;
assign rs2_value = es_rs2_hazard ? es_wreg_data :
                   ms_rs2_hazard ? ms_wreg_data :
                   ws_rs2_hazard ? ws_wreg_data :
                                      data_r2   ;

`ifdef DPI_C
assign stop = inst_ebreak & ds_valid ;
assign debug_ds_inst = ds_inst;
`endif
endmodule

