`timescale 1ns / 1ps
module pipeline ();
  // ifetch
  wire [31:0] IF_ID_instr, IF_ID_npc;
  wire EX_MEM_PCSrc;
  wire [31:0] EX_MEM_NPC;

  // idecode
  wire	 [4:0]	MEM_WB_rd;
  wire				MEM_WB_regwrite;
  wire	 [31:0]	WB_mux_writedata;
  wire	[1:0]		wb_ctlout;
  wire	[2:0]		m_ctlout;
  wire				regdst, alusrc;
  wire	[1:0]		aluop; 
  wire	[31:0]	npcout, rdata1out, rdata2out, s_extendout;
  wire	[4:0]		instrout_2016, instrout_1511;

  // execute
  wire [1:0] wb_ctlout_pipe;
  wire branch, memread, memwrite;
  wire zero;
  wire [31:0] alu_result, rdata2out_pipe;
  wire [4:0] five_bit_muxout;

  // memory
  wire MEM_WB_memtoreg;
  wire [31:0] read_data, mem_alu_result;
   
   initial begin
      $dumpfile("pipeline.vcd");
      $dumpvars(0, pipeline);
   end
   
   ifetch ifetch1(.IF_ID_instr(IF_ID_instr),
                    .IF_ID_npc(IF_ID_npc),
                    .EX_MEM_PCSrc(EX_MEM_PCSrc),
                    .EX_MEM_NPC(EX_MEM_NPC) );

   IDECODE IDECODE1 (IF_ID_instr, IF_ID_npc, MEM_WB_rd, MEM_WB_regwrite, WB_mux_writedata,
                     wb_ctlout, m_ctlout, regdst, alusrc, aluop, npcout, rdata1out, rdata2out,
                     s_extendout, instrout_2016, instrout_1511);
   
   EXECUTE EXECUTE1 (wb_ctlout, m_ctlout, regdst, alusrc, aluop, npcout, rdata1out, rdata2out,
                     s_extendout, instrout_2016, instrout_1511, wb_ctlout_pipe, branch, memread,
                     memwrite, zero, alu_result, rdata2out_pipe, EX_MEM_NPC, five_bit_muxout);
   
   MEMORY MEMORY1 (.wb_ctlout(wb_ctlout_pipe), .branch(branch), .memread(memread), .memwrite(memwrite),
                  .zero(zero), .alu_result(alu_result), .rdata2out(rdata2out_pipe), .five_bit_muxout(five_bit_muxout),
                  .MEM_PCSrc(EX_MEM_PCSrc), .MEM_WB_regwrite(MEM_WB_regwrite), .MEM_WB_memtoreg(MEM_WB_memtoreg),
                  .read_data(read_data), .mem_alu_result(mem_alu_result), .mem_write_reg(MEM_WB_rd));
   
   writeback writeback1 (MEM_WB_memtoreg, read_data, mem_alu_result, WB_mux_writedata);


endmodule // pipeline
