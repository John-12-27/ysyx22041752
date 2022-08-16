module switch(
	input  wire clk,
	input  wire rst,
	input  wire a  ,
	input  wire b  ,
	output reg  f  
);

always @(posedge clk)begin
	if(rst)
		f <= 1'b0;
	else
		f <= a ^ b;
end

endmodule
