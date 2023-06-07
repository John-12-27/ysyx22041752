// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : bjt_cal.v
// Author        : Cw
// Created On    : 2023-06-06 09:19
// Last Modified : 2023-06-06 21:52
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module bjt_cal (
    input                             jalr         ,
    input  [11:0]                     imm_i        ,
    input  [`ysyx_22041752_PC_WD-1:0] jalr_src1    ,
    input                             branch       ,
    input  [12:0]                     imm_b        ,
    input  [`ysyx_22041752_PC_WD-1:0] es_pc        ,
    input                             b_taken_real ,
    input                             br_taken_pre ,
    input  [`ysyx_22041752_PC_WD-1:0] jt_pre       ,

    output                            pre_error    ,
    output [`ysyx_22041752_PC_WD-1:0] bj_addr
);

wire [`ysyx_22041752_PC_WD-1:0] bt_a;
wire [`ysyx_22041752_PC_WD-1:0] bt_b;
    
assign bt_a = jalr ? jalr_src1 : es_pc;

assign bt_b = branch ? {{19{imm_b[12]}},imm_b} :
                       {{20{imm_i[11]}},imm_i} ;

/* verilator lint_off PINCONNECTEMPTY */
ysyx_22041752_aser #(.WIDTH (32))
U_ASER_1(
    .a          ( bt_a      ),
    .b          ( bt_b      ),
    .sub        ( 1'b0      ),
    .cout       (           ),
    .result     ( bj_addr   )
);
/* verilator lint_on PINCONNECTEMPTY */

assign pre_error = branch ? br_taken_pre != b_taken_real :
                   jalr   ? bj_addr      != jt_pre       :
                            1'b0                         ;
                   
endmodule

