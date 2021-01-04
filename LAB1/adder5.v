//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:21:21 01/02/2021 
// Design Name: 
// Module Name:    adder5 
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
`timescale 1ns / 1ps
`include "fulladd.v"

module adder5 (input [4:0] a,
               input [4:0] b,
               input ci,
               output [4:0] s,
               output co,
					output overflow);

	//input a0, a1, a2, a3, a4,
	  //    b0, b1, b2, b3, b4;
	//input ci;

	//output s0, s1, s2, s3, s4;
	//output co;

	wire c0, c1, c2, c3;


	fulladd FA0 (.s(s[0]), .co(c0), .a(a[0]), .b(b[0]), .ci(ci));
	fulladd FA1 (.s(s[1]), .co(c1), .a(a[1]), .b(b[1]), .ci(c0));
	fulladd FA2 (.s(s[2]), .co(c2), .a(a[2]), .b(b[2]), .ci(c1));
	fulladd FA3 (.s(s[3]), .co(c3), .a(a[3]), .b(b[3]), .ci(c2));
	fulladd FA4 (.s(s[4]), .co(co), .a(a[4]), .b(b[4]), .ci(c3));
	
	assign overflow = ((s[4] ^ co) & (~(a[4] ^ b[4])));
	//assign overflow = (ci ^ co);
	//assign overflow = (ci ^ co);
	/*
	fulladd FA1 (a1, b1, c0, s1, c1);
	fulladd FA2 (a2, b2, c1, s2, c2);
	fulladd FA3 (a3, b3, c2, s3, c3);
	fulladd FA4 (a4, b4, c3, s4, co);
	*/

endmodule
