`default_nettype none

module top(
	input  wire				 clk,
	input  wire 			 rst,
	output wire [15:0] led	
);

led d_led(
	.clk (clk),
	.rst (rst),
	.led (led)
);

endmodule
