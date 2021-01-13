
module bottom_mux(
	output wire [4:0] y,
	input wire [4:0] a, b,
	
	input wire sel
	);
	
	assign y = sel ? a : b;
	
endmodule //bottom_mux