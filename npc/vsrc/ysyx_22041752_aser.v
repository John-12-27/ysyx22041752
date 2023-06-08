// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_aser.v
// Author        : Cw
// Created On    : 2022-08-24 09:46
// Last Modified : 2023-06-03 20:30
// ---------------------------------------------------------------------------------
// Description   : 64-bit adder_suber 
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_aser #( 
    parameter WIDTH = 64   )
(
    input  [WIDTH-1:0] a        ,
    input  [WIDTH-1:0] b        ,
    input              sub      ,
    output             cout     ,
    output [WIDTH-1:0] result   
);

wire [WIDTH-1:0] x  ;
wire [WIDTH-1:0] y  ;

assign x = a;
assign y = sub ? ~b : b;
assign {cout, result} = x + y + {{WIDTH{1'b0}}, sub};

endmodule

