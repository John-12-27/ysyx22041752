// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : adder_s.v
// Author        : Cw
// Created On    : 2022-08-22 21:30
// Last Modified : 2022-08-25 15:57
// ---------------------------------------------------------------------------------
// Description   : 8-bit adder 
//
//
// -FHDR----------------------------------------------------------------------------
module adder_s (
    input  wire [7:0] a        ,
    input  wire [7:0] b        ,
    input  wire       cin      ,
    output reg  [7:0] s        ,
    output reg        overflow ,
    output reg        cout
);

always @(a or b or cin) begin
   {cout,s} = a+b+{7'b0,cin};
end 

always @(a or b or cin) begin
   overflow = (a[7]==b[7])&&(s[7]!=a[7]);
end

endmodule
