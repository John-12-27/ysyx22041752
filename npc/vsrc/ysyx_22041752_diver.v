// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_diver.v
// Author        : Cw
// Created On    : 2022-12-14 14:01
// Last Modified : 2022-12-14 16:45
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_diver (
    //input  wire                   clk       ,
    //input  wire                   reset     ,

    input  wire [`RF_DATA_WD-1:0] dividend  ,
    input  wire [`RF_DATA_WD-1:0] divisor   ,
    //input  wire                   div_valid ,
    //input  wire                   divw      ,
    //input  wire                   div_signed,
    //input  wire                   flush     ,
    //output wire                   div_ready ,
    //output wire                   out_valid ,
    output wire [`RF_DATA_WD-1:0] quotient  ,
    output wire [`RF_DATA_WD-1:0] remainder
);
    
assign quotient  = dividend/divisor;
assign remainder = dividend%divisor;

endmodule
