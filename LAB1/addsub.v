`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:18:37 01/03/2021 
// Design Name: 
// Module Name:    addsub 
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

include "adder5.v";


module addsub(
	input [4:0] a,
	input [4:0] b,
	input addsub,
	output [4:0] s,
	output co,
	output overflow
);
	
	reg [4:0] b_copy;
	reg ci;
	
	
	always @ (*)
	begin
		assign ci = 0;
		assign b_copy = b;
		if (addsub == 1)
			assign b_copy = ~b_copy + 1;
	end
	
	adder5 A5 (.a(a), .b(b_copy), .ci(ci), .s(s), .co(co), .overflow(overflow));

	
endmodule
