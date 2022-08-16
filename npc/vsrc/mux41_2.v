module mux41_2(
	input  wire [1:0] x0,
	input  wire [1:0] x1,
	input  wire [1:0] x2,
	input  wire [1:0] x3,
	input  wire [1:0] y ,
	output wire	[1:0]	f
);

MuxKey #(.NR_KEY(4), .KEY_LEN(2), .DATA_LEN(2)) i0
(
	.key (y),
	.lut ({2'b00,x0,2'b01,x1,2'b10,x2,2'b11,x3}),
	.out (f)
);

endmodule
