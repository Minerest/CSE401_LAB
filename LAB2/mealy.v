// mealy machine
`timescale 1ns / 1ps
module mealy (I, CLK, RST, O);
    input I, CLK, RST;
    output O;
    output NO;

    wire AND1, AND2, AND3, AND4, AND5, AND6, AND7, AND8;
    wire OR1, OR2, OR3;
    wire Q0, QN0, Q1, QN1;
   
    and
        
        AndGate1(AND1, QN0, I),
        AndGate2(AND2, QN0, Q1),
        AndGate3(AND3, I, Q1),
        
        AndGate4(AND4, Q0, QN1),
        AndGate5(AND5, AND4, I),
        
        AndGate6(AND6, Q1, QN0),
        AndGate7(AND7, AND6, ~I),
        
        AndGate8(O, Q0, Q1);

    or
        OrGate1(OR1, AND1, AND2),
        OrGate2(OR2, OR1, AND3),
        OrGate3(OR3, AND5, AND7);

    dff D0 (Q0, QN0, OR2, CLK, RST);
    dff D1 (Q1, QN1, OR3, CLK, RST);

   // and (D0, I, 1);
   // dff DF1(O, NO, D0, CLK, RST);
endmodule
