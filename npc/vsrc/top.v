`default_nettype none

module top(
	input  wire [1:0] s2,
	input  wire [1:0] s4,
	input  wire [1:0] s6,
	input  wire [1:0] s8,
	input  wire [1:0] s0,
	output wire [1:0]	l
);
/*
mux21e d_mux21(
	.a(s0),
	.b(s1),
	.s(s2),
	.y(l0)
);

mux41b d_mux41(
	.a (s3),
	.s (s7),
	.y (l1)
);
*/
mux41_2 d_mux41_2(
	.x0 (s2),
	.x1 (s4),
	.x2 (s6),
	.x3 (s8),
	.y  (s0),
	.f  (l) 
);

endmodule
