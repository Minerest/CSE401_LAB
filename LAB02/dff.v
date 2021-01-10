// dff.v
`timescale 1ns / 1ps
module dff (Q, Qnot, D, CLK, RST);
    output Q, Qnot;
    input D, CLK, RST;
    reg Q;
    assign Qnot = ~Q;
    always @(posedge CLK or negedge RST)
        if (~RST) Q = 1'b0;
        else Q = D;
endmodule
