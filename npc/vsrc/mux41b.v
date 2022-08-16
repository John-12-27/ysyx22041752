module mux41b(
	input  wire [3:0] a,
	input  wire [1:0] s,
	output wire				y
);

MuxKeyWithDefault #(.NR_KEY(4),.KEY_LEN(2),.DATA_LEN(1)) i0
(
	.key				 (s),
	.default_out (1'b0),
	.lut				 ({2'b00,a[0],2'b01,a[1],2'b10,a[2],2'b11,a[3]}),
	.out				 (y)	
);

endmodule
