`timescale 1ns / 1ps
module pipeline ();
  // ifetch
  wire [31:0] IF_ID_instr, IF_ID_npc;
  reg EX_MEM_PCSrc;
  reg [31:0] EX_MEM_NPC;

  // idecode
  reg  [31:0]	IF_ID_instrout;
  reg  [31:0]	IF_ID_npcout;
  reg	 [4:0]	MEM_WB_rd;
  reg				MEM_WB_regwrite;
  reg	 [31:0]	WB_mux5_writedata;
  wire	[1:0]		wb_ctlout;
  wire	[2:0]		m_ctlout;
  wire				regdst, alusrc;
  wire	[1:0]		aluop; 
  wire	[31:0]	npcout, rdata1out, rdata2out, s_extendout;
  wire	[4:0]		instrout_2016, instrout_151;
   
   
   initial begin
      $dumpfile("pipeline.vcd");
      $dumpvars(0, pipeline);
   end
   
   ifetch ifetch1(.IF_ID_instr(IF_ID_instr),
                    .IF_ID_npc(IF_ID_npc),
                    .EX_MEM_PCSrc(EX_MEM_PCSrc),
                    .EX_MEM_NPC(EX_MEM_NPC) );

   initial begin
   EX_MEM_PCSrc <= 0;
   EX_MEM_NPC <= 0;
   end

   IDECODE IDECODE1 (IF_ID_instr, IF_ID_npc, MEM_WB_rd, MEM_WB_regwrite, WB_mux5_writedata,
                     wb_ctlout, m_ctlout, regdst, alusrc, aluop, npcout, rdata1out, rdata2out,
                     s_extendout, instr_2016, instrout_1511);
   
   initial begin
      
   end

endmodule // pipeline
