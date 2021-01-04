`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:15:16 01/02/2021
// Design Name:   fulladd
// Module Name:   /home/ericd/cse401/LAB01/tb_fulladd.v
// Project Name:  LAB01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fulladd
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
include "fulladd.v";

module tb_fulladd;

	// Inputs
	reg a, b, ci;

	// Outputs
	wire s, co;

	// Instantiate the Unit Under Test (UUT)
	fulladd FA0 (s, co, a, b, ci);

initial begin
	// Truth Table
   a = 0; b = 0; ci = 0; #100
	a = 0; b = 0; ci = 1; #100
	a = 0; b = 1; ci = 0; #100
	a = 0; b = 1; ci = 1; #100
	a = 1; b = 0; ci = 0; #100
	a = 1; b = 0; ci = 1; #100
	a = 1; b = 1; ci = 0; #100
	a = 1; b = 1; ci = 1; #100
	        
  $finish();
end
      
endmodule

