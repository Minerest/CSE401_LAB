`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:25:35 01/11/2021
// Design Name:   mux
// Module Name:   /home/ericd/cse401/LAB04/tb_mux.v
// Project Name:  LAB04
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_mux;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	reg sel;

	// Outputs
	wire [31:0] y;

	// Instantiate the Unit Under Test (UUT)
	mux uut (
		.y(y), 
		.a(a), 
		.b(b), 
		.sel(sel)
	);

	initial begin
        $dumpfile("tb_mux.vcd");
        $dumpvars(0, tb_mux);
		// Initialize Inputs
		a = 0;
		b = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		a = 1;
		b = 2;
		sel = 0;
		#100;
		
		a = 5;
		b = 0;
		sel = 1;
		#100;
		
		
		a = 10;
		b = 1;
		sel = 1;
		#100;
		
		
		a = 25;
		b = 3;
		sel = 0;
		#100;
		
		sel = 1'bx;
		#100;	
	end
      
endmodule

