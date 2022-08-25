// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : seg.v
// Author        : Cw
// Created On    : 2022-08-18 20:31
// Last Modified : 2022-08-25 18:01
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module seg (
    input  wire [2:0] num ,
    input  wire [7:0] seg_en,
    output wire [7:0] o_seg0,
    output wire [7:0] o_seg1,
    output wire [7:0] o_seg2,
    output wire [7:0] o_seg3,
    output wire [7:0] o_seg4,
    output wire [7:0] o_seg5,
    output wire [7:0] o_seg6,
    output wire [7:0] o_seg7
);

reg  [7:0] seg_o[7:0];
wire [7:0] segs [7:0];
wire [7:0] segs_off;

assign segs_off= 8'b00000000;
assign segs[0] = 8'b11111100;                                                                 
assign segs[1] = 8'b01100000;                                                                 
assign segs[2] = 8'b11011010;                                                                 
assign segs[3] = 8'b11110010;                                                                 
assign segs[4] = 8'b01100110;                                                                 
assign segs[5] = 8'b10110110;                                                                 
assign segs[6] = 8'b10111110;                                                                 
assign segs[7] = 8'b11100000;

always @(num or seg_en) begin
   for (int i = 0; i < 8; i++) begin
       if (seg_en[i]) begin
          seg_o[i] = segs[num]; 
       end
       else begin
          seg_o[i] = segs_off; 
       end
   end 
end


assign o_seg0 = ~seg_o[0];
assign o_seg1 = ~seg_o[1];
assign o_seg2 = ~seg_o[2];
assign o_seg3 = ~seg_o[3];
assign o_seg4 = ~seg_o[4];
assign o_seg5 = ~seg_o[5];
assign o_seg6 = ~seg_o[6];
assign o_seg7 = ~seg_o[7];

endmodule
