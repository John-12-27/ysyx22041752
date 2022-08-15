`default_nettype none

module top(
	input  wire	clk  ,
	input  wire reset,
	input  wire s1	 ,
	input  wire s2	 ,
	output wire	r
);

switch d_switch(
	.a(s1),
	.b(s2),
	.f(r)
);

endmodule
