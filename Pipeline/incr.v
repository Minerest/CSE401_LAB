`timescale 1ns / 1ps
module incrementer (
   input  wire [31:0] pcin,      // Input of incrementer
   output wire [31:0] pcout      // Output of incrementer
   );
   assign pcout = pcin + 1;      // Increment PC by 1, *See Comments above
endmodule // incr