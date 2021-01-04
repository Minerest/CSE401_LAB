`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:14:10 01/02/2021 
// Design Name: 
// Module Name:    fulladd 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*
module fulladd(s, co, a, b, ci);
	input a,b, ci;
	output s, co;

	assign s = a ^ b ^ ci;
	assign co = a & b | b & ci | ci & a;

endmodule
*/
 module fulladd(s, co, a, b, ci);
	input a,b, ci;
	output s, co;

	wire x1;
	wire p1, p2, p3;

	xor
		U1a(x1, a, ci),
		U1b(s, x1, b);
		
	and
		U2a(p1, a, b),
		U2b(p2, a, ci),
		U2c(p3, b, ci);
		
	or
		U3a(co, p1, p2, p3);

endmodule

