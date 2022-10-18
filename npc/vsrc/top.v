// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : top.v
// Author        : Cw
// Created On    : 2022-10-17 21:44
// Last Modified : 2022-10-18 19:44
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module top (
    input  wire        clk,
    input  wire        rst,
    output wire [63:0] addr,
    input  wire [31:0] inst_i
);
   
wire [31:0] inst;
wire [ 4: 0] addr_r1;
wire [ 4: 0] addr_r2 = 5'b0;
wire [63: 0] data_r1;
wire [63: 0] imm;
wire [ 4: 0] addr_w ;
wire         we      = 1'b1;
wire [63: 0] data_w ;

ysyx_22041752_IFU u_ysyx_22041752_ifu_0(
    .clk                            ( clk                           ),
    .rst                            ( rst                           ),
    .addr                           ( addr                          ),
    .inst_i                         ( inst_i                        ),
    .inst_o                         ( inst                          )
);

/* verilator lint_off PINCONNECTEMPTY */
ysyx_22041752_IDU u_ysyx_22041752_idu_0(
    .inst_i                         ( inst                          ),
    .addr_reg1                      ( addr_r1                       ),
    .add_op                         (                           ),
    .addr_dest                      ( addr_w                        ),
    .imm_src                        ( imm                           )
);

ysyx_22041752_regfiles u_ysyx_22041752_regfiles_0(
    .clk                            ( clk                           ),
    .addr_r1                        ( addr_r1                       ),
    .addr_r2                        ( addr_r2                       ),
    .data_r1                        ( data_r1                       ),
    .data_r2                        (                               ),
    .addr_w                         ( addr_w                        ),
    .we                             ( we                            ),
    .data_w                         ( data_w                        )
);

/* verilator lint_on PINCONNECTEMPTY */
ysyx_22041752_ADDU u_ysyx_22041752_addu_0(
    .src1                           ( data_r1                       ),
    .src2                           ( imm                           ),
    .result                         ( data_w                        )
);

endmodule
