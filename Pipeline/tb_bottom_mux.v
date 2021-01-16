module test;
// Wire P o r t s
wire [4:0] Y;
// R e g i s t e r D e c l a r a t i o n s
reg [4:0] A, B;
reg sel;

bottom_mux mux1 (Y, A, B, sel); // i n s t a n t i a t e t h e mux

initial begin
	#10
	A = 5'b01010;
	B = 5'b10101;
	sel = 1'b1;
	#10;
	A = 5'b00000;
	#10;
	sel = 1'b1;
	#10;
	B = 5'b11111;
	#5 ;
	A = 5'b00101;
	#5 ;
	sel = 1'b0;
	B = 5'b11101;
	#5;
	sel = 1'bx ;
end
always @(A or B or sel)
 $display ("At t = %0d sel = %b A = %b B = %b Y = %b", $time,
sel, A, B, Y) ;
endmodule // test