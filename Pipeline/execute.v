/* execute.v */
`timescale 1ns / 1ps
module EXECUTE(
	input		wire	[1:0]		wb_ctl,
	input		wire	[2:0]		m_ctl,
	input		wire				regdst, alusrc,
	input		wire	[1:0]		aluop, 
	input		wire	[31:0]	npcout, rdata1, rdata2, s_extendout,
	input		wire	[4:0]		instrout_2016, instrout_1511,
	output	wire	[1:0]		wb_ctlout,
	output	wire				branch, memread, memwrite,
	output	wire				zero,
	output	wire	[31:0]	alu_result, rdata2out, add_result,
	output	wire	[4:0]		five_bit_muxout
	);

	// signals
	wire	[31:0]	adder_out, b, aluout;
	wire	[4:0]		muxout;
	wire	[2:0]		control;
	wire				aluzero;
	
	// instantiations
    // have at it, wire this using Fig 3.1
	adder add (.add_in1(npcout), .add_in2(s_extendout), .add_out(adder_out));

	alu alu   (.a(rdata1), .b(b), .control(control), .result(aluout), .zero(aluzero));

	alu_control alu_control (.funct(s_extendout[5:0]), .aluop(aluop), .select(control));

	mux mux2 (.y(b), .a(s_extendout), .b(rdata2), .sel(alusrc));

	bottom_mux bottom_mux2 (.y(muxout), .a(instrout_1511), .b(instrout_2016), .sel(regdst));

	ex_mem ex_mem (.ctlwb_out(wb_ctl), .ctlm_out(m_ctl), .adder_out(adder_out), .aluzero(aluzero),
				   .aluout(aluout), .readdat2(rdata2), .muxout(muxout), .wb_ctlout(wb_ctlout),																			
				   .branch(branch), .memread(memread), .memwrite(memwrite), .add_result(add_result), .zero(zero), .alu_result(alu_result),
				   .rdata2out(rdata2out), .five_bit_muxout(five_bit_muxout));

	initial begin    
        $display("Time\t WB\t branch\t memread\t memwrite\t ADD\t ZERO\t alu\t rdata2\t fivebitmux\t"); 
        $monitor("%0d\t %0b\t %0b\t %0b\t %0b\t %0d\t %0d\t %0d\t %0d\t %0d\t",
        $time, wb_ctlout, branch, memread, memwrite, add_result, zero, alu_result, rdata2out, five_bit_muxout); 
        #24 $finish;
end
endmodule // IEXECUTE
