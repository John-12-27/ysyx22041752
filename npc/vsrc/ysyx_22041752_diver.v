// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_diver.v
// Author        : Cw
// Created On    : 2022-12-14 14:01
// Last Modified : 2022-12-14 14:07
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_diver (
    input  wire [`RF_DATA_WD-1:0] x  ,
    input  wire [`RF_DATA_WD-1:0] y  ,
    output wire [`RF_DATA_WD-1:0] res,
    output wire [`RF_DATA_WD-1:0] rem
);
    
assign res = x/y;
assign rem = x%y;

endmodule
