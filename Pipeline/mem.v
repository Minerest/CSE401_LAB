`timescale 1ns / 1ps
module memory (
   output reg [31:0] data,    // Output of Instruction Memory
   input wire [31:0] addr     // Input of Instruction Memory
   );

// Register Declarations
   reg [31:0] MEM[0:127];  // 128 words of 32-bit memory
	reg [5:0] i;
// Initialize Registers
   initial begin
	$readmemb("risc.txt", MEM);
		
	/*
   MEM[0] <= 'h002300AA;
   MEM[1] <= 'h10654321;
   MEM[2] <= 'h00100022;
   MEM[3] <= 'h8C123456;
   MEM[4] <= 'h8F123456;
   MEM[5] <= 'hAD654321;
   MEM[6] <= 'h13012345;
   MEM[7] <= 'hAC654321;
   MEM[8] <= 'h12012345;*/
   end

   always @ (addr) data <= MEM[addr];
endmodule // mem