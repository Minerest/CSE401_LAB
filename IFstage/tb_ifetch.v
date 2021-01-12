// Testbench ifetch
`timescale 1ns / 1ps
module tb_ifetch;
    // inputs
    reg EX_MEM_PCSrc;
    reg [31:0] EX_MEM_NPC;

    // Outputs
    output [31:0] IF_ID_instr;
    output [31:0] IF_ID_npc;

    ifetch uut (.IF_ID_instr(IF_ID_instr), .IF_ID_npc(IF_ID_npc), .EX_MEM_PCSrc(EX_MEM_PCSrc), .EX_MEM_NPC(EX_MEM_NPC));

    initial begin
        $dumpfile("tb_ifetch.vcd");
        $dumpvars(0, tb_ifetch);
        EX_MEM_NPC = 0;
        EX_MEM_PCSrc = 0;
        #9
        EX_MEM_NPC = 5;
        EX_MEM_PCSrc = 1;
        #1
        EX_MEM_PCSrc = 0;
        #10
        $finish;
    end
    endmodule