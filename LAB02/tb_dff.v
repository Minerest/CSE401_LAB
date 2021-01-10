// testbench for dff
module tb_dff;
    reg D, CLK, RST;

    wire Q, Qnot;

    dff DF1 (Q, Qnot, D, CLK, RST);

    initial begin
        $dumpfile("tb_dff.vcd");
        $dumpvars(0, tb_dff);
    end
    initial begin
        RST = 0;
        CLK = 0;
    #5  RST = 1;
        repeat (16)
    #5  CLK = ~CLK;
    end
    initial begin
        D = 1; #15
        D = 0; #15
        D = 0; #10
        D = 1;
    end
    endmodule