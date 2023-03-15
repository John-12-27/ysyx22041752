// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_full_adder.v
// Author        : Cw
// Created On    : 2022-11-29 18:50
// Last Modified : 2022-11-29 19:00
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------

module ysyx_22041752_full_adder(
    input  wire A ,
    input  wire B ,
    input  wire Ci,
    output wire S ,
    output wire Co
);

assign Co = (A & B) | (A & Ci) | (B & Ci);
assign S  = ( A &  B &  Ci) | 
            ( A & ~B & ~Ci) |
            (~A &  B & ~Ci) |
            (~A & ~B &  Ci);

endmodule //full_adder_1
