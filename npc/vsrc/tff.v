// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : tff.v
// Author        : Cw
// Created On    : 2022-08-25 22:38
// Last Modified : 2022-08-25 23:26
// ---------------------------------------------------------------------------------
// Description   : T flip-flop
//
//
// -FHDR----------------------------------------------------------------------------
module tff #(RST_VALUE=0)
(
    input  wire rst,
    input  wire clk,
    input  wire t  ,
    output reg  q
);
always @(posedge clk) begin
    if(rst)
        q <= RST_VALUE;
    else
        q <= t^q;
end    
endmodule
