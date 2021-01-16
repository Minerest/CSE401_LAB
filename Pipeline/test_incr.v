`timescale 1ns/1ps
module test_incr;

	wire [31:0] pcout;

	reg [31:0] pcin;
	
	incrementer uut ( pcin, pcout );
	
	initial begin
	
		$dumpfile("testincr.vcd");
		$dumpvars(0, test_incr);
	
		pcin = 3;
		#10
		pcin = 15;
		#10
		pcin = 64;
		#10
		$finish;
	end
	
	always @(pcin)
		#1 $display ("Time = %0d\tpcin=%0d\tpcout=%0d", $time, pcin, pcout);

endmodule