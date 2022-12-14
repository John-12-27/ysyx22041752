// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_mul.v
// Author        : Cw
// Created On    : 2022-11-29 16:07
// Last Modified : 2022-12-14 13:38
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_mul(
    //input  wire                    mul_clk    ,
    //input  wire                    reset      ,
    //input  wire                    mul_u      ,
    //input  wire                    mul_su     ,
    input  wire                    mul_h      ,
    input  wire [`RF_DATA_WD-1:0]  x          ,
    input  wire [`RF_DATA_WD-1:0]  y          ,
    output wire [`RF_DATA_WD-1:0]  res
);

wire [2*`RF_DATA_WD-1:0] r;
assign r   = x*y;
assign res = mul_h ? r[2*`RF_DATA_WD-1:`RF_DATA_WD] : r[`RF_DATA_WD-1:0];

endmodule
