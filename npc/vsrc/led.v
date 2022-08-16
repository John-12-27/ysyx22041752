module led(
	input  wire        clk,
	input  wire        rst,
	output reg  [15:0] led
);

reg [15:0] cnt;
always @(posedge clk)begin
	if(rst)
		cnt <= 16'hffff;
	else
		cnt <= cnt - 1;
end

always @(posedge clk)begin
	if(rst)
		led <= 16'h0001;
	else if(cnt==16'h0)
		led <= {led[14:0],led[15]};
end

endmodule
