// Verilog Test Fixture Template

`timescale 1 ns / 1 ps
`include "addsub.v"



module tb_addsub;
	//inputs
	reg [4:0] a;
	reg [4:0] b;
	reg addsub;
	
	//outputs
	wire [4:0] s;
	wire co;
	wire overflow;
	
	addsub AS0 (.a(a), .b(b), .addsub(addsub), .s(s), .co(co), .overflow(overflow));

	initial begin
	
		a = 0;
		b = 0;
		addsub = 0;
		#100;
	
	
	
		a = 2;
		b = 2;
		addsub = 0;
		#100;
		
		
		
		a = 2;
		b = 2;
		addsub = 1;
		#100;
		
		
		
		a = 10;
		b = 10;
		addsub = 0;
		#100;
	
	
		a = -10;
		b = -10;
		addsub = 0;
		#100;
		
		a = 10;
		b = -10;
		addsub = 1;
		#100;
	
	end

endmodule
