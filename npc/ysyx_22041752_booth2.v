// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_booth2.v
// Author        : Cw
// Created On    : 2022-11-29 17:01
// Last Modified : 2022-11-29 21:34
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_booth2(
    input  wire [2*`RF_DATA_WD-1:0] X,
    input  wire [              2:0] y,
    output wire [2*`RF_DATA_WD-1:0] p,
    output wire                     c
);
wire [7:0] B;
genvar i;
generate
    for(i=0;i<8;i=i+1)begin
        :Booth_judge_singals
        assign B[i] = (y == i);
    end
endgenerate 

//选择输出的控制信号
//wire add_zero;
wire add_X   ;
wire add_X_n ;
wire add_2X  ;
wire add_2X_n;
//assign add_zero = B[7] | B[0];
assign add_X    = B[1] | B[2];
assign add_X_n  = B[5] | B[6];
assign add_2X   = B[3]       ;
assign add_2X_n = B[4]       ;

//输出部分积为输入信号相反数时为取反后的数加1得到相反数的补码
assign c = add_X_n | add_2X_n;

//输出部分积
assign p = add_X    ?  X        :
           add_X_n  ? ~X        :
           add_2X   ?  {X[2*`RF_DATA_WD-2:0],1'b0} :
           add_2X_n ? ~{X[2*`RF_DATA_WD-2:0],1'b0} :
           2*`RF_DATA_WD'b0;
endmodule
