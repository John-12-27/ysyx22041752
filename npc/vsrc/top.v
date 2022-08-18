`default_nettype none

module top(
   input  wire       s_en ,
   input  wire [7:0] s_i  ,
   output wire [2:0] led  , 
   output wire       led_v,
   output wire [7:0] seg_0,
   output wire [7:0] seg_1,
   output wire [7:0] seg_2,
   output wire [7:0] seg_3,
   output wire [7:0] seg_4,
   output wire [7:0] seg_5,
   output wire [7:0] seg_6,
   output wire [7:0] seg_7
);

wire [2:0] encode_num;
wire       encode_v;

assign led   = encode_num;
assign led_v = encode_v;

encode83 d_encode(
    .s  (s_i  ),
    .en (s_en ),
    .r  (encode_num),
    .v  (encode_v) 
);

seg d_seg(
    .num    (encode_num),
    .seg_en (8'b0000_0001),
    .o_seg0 (seg_0),
    .o_seg1 (seg_1),
    .o_seg2 (seg_2),
    .o_seg3 (seg_3),
    .o_seg4 (seg_4),
    .o_seg5 (seg_5),
    .o_seg6 (seg_6),
    .o_seg7 (seg_7)
);



endmodule
