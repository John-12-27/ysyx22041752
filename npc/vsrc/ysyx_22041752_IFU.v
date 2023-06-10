// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_IFU.v
// Author        : Cw
// Created On    : 2022-10-17 20:50
// Last Modified : 2023-06-08 22:26
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_IFU (
    input                                        clk            ,
    input                                        reset          ,
    
    input                                        ds_allowin     ,
    
    output                                       fs_to_ds_valid ,
    output [`ysyx_22041752_FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus   ,
    
    output                                       inst_en        ,
    output [`ysyx_22041752_SRAM_ADDR_WD-1:0]     inst_addr      ,
/* verilator lint_off UNUSEDSIGNAL */
    input  [`ysyx_22041752_SRAM_DATA_WD-1:0]     inst_rdata     ,
/* verilator lint_on UNUSEDSIGNAL */

    input  [`ysyx_22041752_PC_WD       -1:0]     ra_data        ,
    input                                        flush          , 
    input  [`ysyx_22041752_PC_WD-1:0]            flush_pc       ,
    input                                        flush_pc_p4    
`ifdef DPI_C
    ,
    output [`ysyx_22041752_PC_WD-1:0]            debug_fs_pc
`endif
);

reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;

wire [`ysyx_22041752_PC_WD-1:0] seq_bj_pc;
wire [`ysyx_22041752_PC_WD-1:0] nextpc;

wire fs_inst_jal  ;
wire fs_inst_jalr ;
wire fs_inst_beq  ;
wire fs_inst_bne  ;
wire fs_inst_blt  ;
wire fs_inst_bge  ;
wire fs_inst_bltu ;
wire fs_inst_bgeu ;
wire [12:0] imm_b ;

reg  [`ysyx_22041752_INST_WD-1:0] fs_inst;
reg  [`ysyx_22041752_PC_WD-1:0]   fs_pc;
wire                              br_taken;
wire [`ysyx_22041752_PC_WD-1:0]   br_target;
assign fs_to_ds_bus = {fs_inst      , 
                       fs_pc        ,
                       fs_inst_jal  ,
                       fs_inst_jalr ,                       
                       fs_inst_beq  ,
                       fs_inst_bne  ,
                       fs_inst_blt  ,
                       fs_inst_bge  ,
                       fs_inst_bltu ,
                       fs_inst_bgeu ,
                       br_taken     ,
                       br_target    ,
                       imm_b        
                      };

//// pre-IF stage
//reg [2:0] ftfsm_pre;
//reg [2:0] ftfsm_nxt;
//parameter IDLE       =0;
//parameter REQUEST    =1;
//parameter RESPONSE   =2;
//parameter GET_INST   =3;
//parameter DROP_REQ   =4;
//parameter DROP_RESP  =5;
//parameter DROPED     =6;
//always @(posedge clk) begin
    //if (reset) begin
        //ftfsm_pre <= IDLE;
    //end
    //else begin
        //ftfsm_pre <= ftfsm_nxt;
    //end
//end
//assign ftfsm_nxt = (ftfsm_pre==IDLE || ftfsm_pre==GET_INST || ftfsm_pre==DROPED) && !reset && fs_allowin ? REQUEST    :
                    //ftfsm_pre==REQUEST                                           && !flush && inst_ready ? RESPONSE   :
                    //ftfsm_pre==REQUEST                                           &&  flush &&!inst_ready ? DROP_REQ   :
                    //ftfsm_pre==REQUEST                                           &&  flush && inst_ready ? DROP_RESP  :
                    //ftfsm_pre==RESPONSE                                          && !flush && inst_valid ? GET_INST   :
                    //ftfsm_pre==RESPONSE                                          &&  flush &&!inst_valid ? DROP_RESP  :
                    //ftfsm_pre==RESPONSE                                          &&  flush && inst_valid ? DROPED     :
                    //ftfsm_pre==GET_INST                                                                  ? IDLE       :
                    //ftfsm_pre==DROP_REQ                                          &&           inst_ready ? DROP_RESP  :
                    //ftfsm_pre==DROP_RESP                                         &&           inst_valid ? DROPED     :
                    //ftfsm_pre==DROPED                                                                    ? IDLE       :
                                                                                                           //ftfsm_pre  ;

//reg [`ysyx_22041752_PC_WD-1:0] flush_pc_r;
//always @(posedge clk) begin
    //if (reset) begin
        //flush_pc_r <= 0;
    //end
    //else if(flush) begin
        //flush_pc_r <= seq_bj_pc;
    //end
//end
//reg flush_pc_rv;
//always @(posedge clk) begin
    //if (reset) begin
        //flush_pc_rv <= 0;
    //end
    //else if (ftfsm_pre==DROPED) begin
        //flush_pc_rv <= 1;
    //end
    //else if (flush_pc_rv && ftfsm_pre==GET_INST) begin
        //flush_pc_rv <= 0;
    //end
//end

assign nextpc  = //flush       ? flush_pc   :
                 //flush_pc_rv ? flush_pc_r :
                               seq_bj_pc  ; 

assign to_fs_valid  = ~reset;//ftfsm_pre==GET_INST;

assign fs_ready_go    = 1;//inst_valid;
assign fs_allowin     = !fs_valid || fs_ready_go && ds_allowin;
assign fs_to_ds_valid =  fs_valid && fs_ready_go && ~flush;
always @(posedge clk) begin
    if (reset) begin
        fs_valid <= 1'b0;
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;
    end
end

always @(posedge clk) begin
    if (reset) begin
        fs_pc <= `ysyx_22041752_RESET_PC_VALUE;   
    end
    else if (to_fs_valid && fs_allowin) begin
        fs_pc <= nextpc;
    end
end

assign inst_en    = to_fs_valid && fs_allowin; //(ftfsm_pre==REQUEST || ftfsm_pre==DROP_REQ) && !inst_ready;
assign inst_addr  = nextpc;
assign fs_inst    = inst_rdata[`ysyx_22041752_INST_WD-1:0];

//always @(posedge clk) begin
    //if (ftfsm_pre==GET_INST || ftfsm_pre==DROPED) begin
        //fs_inst <= inst_rdata[31:0];
    //end
//end

/*=======================================================================================*/
/*=======================================================================================*/
/*=======================================================================================*/
wire [ 6:0] opcode = fs_inst[ 6: 0];
wire [ 2:0] funct3 = fs_inst[14:12];
assign imm_b  = {fs_inst[31], fs_inst[7], fs_inst[30:25], fs_inst[11:8], 1'b0};
wire [11:0] imm_i  = fs_inst[31:20]; 
wire [20:0] imm_j  = {fs_inst[31], fs_inst[19:12], fs_inst[20], fs_inst[30:21], 1'b0}; 

assign fs_inst_jal    = opcode == 7'b1101111;
assign fs_inst_jalr   = opcode == 7'b1100111;
assign fs_inst_beq    = opcode == 7'b1100011 && funct3 == 3'b000;
assign fs_inst_bne    = opcode == 7'b1100011 && funct3 == 3'b001;
assign fs_inst_blt    = opcode == 7'b1100011 && funct3 == 3'b100;
assign fs_inst_bge    = opcode == 7'b1100011 && funct3 == 3'b101;
assign fs_inst_bltu   = opcode == 7'b1100011 && funct3 == 3'b110;
assign fs_inst_bgeu   = opcode == 7'b1100011 && funct3 == 3'b111;

assign br_taken=(fs_inst_beq  || 
                 fs_inst_bne  || 
                 fs_inst_blt  || 
                 fs_inst_bge  || 
                 fs_inst_bltu || 
                 fs_inst_bgeu) && imm_b[12] || fs_inst_jal || fs_inst_jalr;


wire [`ysyx_22041752_PC_WD-1:0] bt_a;
wire [`ysyx_22041752_PC_WD-1:0] bt_b;
wire [`ysyx_22041752_PC_WD-1:0] bt_c;

assign bt_a = flush ? flush_pc : fs_inst_jalr ? ra_data : fs_pc;

assign bt_b = (fs_inst_beq || fs_inst_bne || fs_inst_blt || fs_inst_bge || fs_inst_bltu || fs_inst_bgeu) ? {{19{imm_b[12]}},imm_b} :
               fs_inst_jalr                                                               ? {{20{imm_i[11]}},imm_i} :
                                                                                         {{11{imm_j[20]}},imm_j} ;

assign bt_c = flush &&!flush_pc_p4 ? 0    : 
              flush && flush_pc_p4 ? 4    : 
              br_taken             ? bt_b : 
                                     4    ;
assign br_target = seq_bj_pc;

/* verilator lint_off PINCONNECTEMPTY */
ysyx_22041752_aser #(.WIDTH (32))
U_ASER_1(
    .a          ( bt_a      ),
    .b          ( bt_c      ),
    .sub        ( 1'b0      ),
    .cout       (           ),
    .result     ( seq_bj_pc )
);
/* verilator lint_on PINCONNECTEMPTY */


`ifdef DPI_C
assign debug_fs_pc = fs_pc;
`endif
endmodule

