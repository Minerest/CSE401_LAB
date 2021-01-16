// Testbench for mealy.v
`timescale 1ns / 1ps
module tb_mealy;
    //inputs
    reg Input;
    reg CLK;
    reg RST;

    //outputs
    wire Output;

    mealy m1 (Input, CLK, RST, Output);

    initial begin
        $dumpfile("tb_mealy.vcd");
        $dumpvars(0, tb_mealy);
    end
    initial begin
        RST = 0;
        CLK = 0;
    #5  RST = 1;
        repeat (30)
    #5  CLK = ~CLK;
    end
    initial begin
       Input = 0; #10 
       Input = 1; #10 
       Input = 0; #10
       Input = 1; #10 
       Input = 1; #10 
       Input = 0; #10 
       Input = 1; #10 
       Input = 0; #10 
       Input = 1; #10
       Input = 1; #10 
       Input = 0; #10
       Input = 1; #10 
       Input = 1; #10
       Input = 0; #10 
       Input = 1;
    end
endmodule
