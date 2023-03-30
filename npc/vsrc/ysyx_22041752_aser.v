// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_aser.v
// Author        : Cw
// Created On    : 2022-08-24 09:46
// Last Modified : 2023-03-29 11:28
// ---------------------------------------------------------------------------------
// Description   : 64-bit adder_suber 
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_aser (
    input  wire [63:0] a        ,
    input  wire [63:0] b        ,
    input  wire        sub      ,
    output wire        cout     ,
    output wire [63:0] result   
);


wire [63:0] x  ;
wire [63:0] y  ;

assign x = a;
assign y = sub ? ~b : b;
assign {cout, result} = x + y + {64'b0, sub};

endmodule

