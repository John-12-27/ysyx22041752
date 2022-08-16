module mux21e(
	input  wire a,
	input  wire b,
	input  wire s,
	output wire y
);

MuxKey #(.NR_KEY(2),.KEY_LEN(1),.DATA_LEN(1)) i0
(
	.key(s),
	.lut({1'b0,a,1'b1,b}),
	.out(y)
);

endmodule
