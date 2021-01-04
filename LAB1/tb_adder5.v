`timescale 1ns / 1ns
`include "adder5.v"

module tb_adder5;

    reg [4:0] a;
    reg [4:0] b;
    
    reg ci;

    wire [4:0] s;
    wire co;
	 wire overflow;

    adder5 UUT (.a(a), .b(b), .ci(ci), .s(s), .co(co), .overflow(overflow));

    initial begin
        //$dumpfile("tb_adder5.vcd");
        //$dumpvars (0, tb_adder5);
        // 6 + 1
        //a0 = 0; a1 = 0; a2 =  1; a3 = 1; a4 = 0; b0 = 0; b1 = 0; b2 = 0; b3 = 0; b4 = 1; ci = 0; #30;
        // 2 + 15
        //a0 = 0; a1 = 0; a2 =  0; a3 = 1; a4 = 0; b0 = 0; b1 = 1; b2 = 1; b3 = 1; b4 = 1; ci = 0; #30;
		  ci = 0;
		  a = 0;
		  b = 0;
		  #100;
		  
		  
		  a = 6;
		  b = 1;
		  #100;
		  
		  a = 2;
		  b = 15;
		  #100;
		  
		  a = -3;
		  b = 4;
		  #100;
		  
		  a = -5;
		  b = -12;
		  #100;
		  
		  
		  
    end

endmodule
