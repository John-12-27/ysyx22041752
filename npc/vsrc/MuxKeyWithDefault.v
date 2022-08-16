module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1)
(
	input  wire [KEY_LEN-1:0]  key,
	input  wire [DATA_LEN-1:0] default_out,
	input  wire [NR_KEY*(KEY_LEN+DATA_LEN)-1:0] lut,
	output wire [DATA_LEN-1:0] out							  	
);

	MuxKeyInternal #(.NR_KEY(NR_KEY),.KEY_LEN(KEY_LEN),.DATA_LEN(DATA_LEN),.HAS_DEFAULT(1)) i0
	(
		.key				 (key),
		.default_out (default_out),
		.lut				 (lut),
		.out				 (out) 
	);

endmodule
