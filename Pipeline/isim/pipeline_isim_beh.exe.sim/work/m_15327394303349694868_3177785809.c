/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "%0d\t %0d\t %0d\t %h\t %h\t %0d";
static const char *ng1 = "/home/ericd/CSE401_LAB/Pipeline/ifetch.v";
static const char *ng2 = "Time\t PC\t npc\t dataout of MEM\t IF_ID_instr\t IF_ID_npc";

void Monitor_35_1(char *);
void Monitor_35_1(char *);


static void Monitor_35_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t5 = *((char **)t3);
    t3 = (t0 + 1848U);
    t6 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng0, 7, t0, (char)118, t1, 64, (char)118, t4, 32, (char)118, t5, 32, (char)118, t6, 32, (char)118, t7, 32, (char)118, t8, 32);

LAB1:    return;
}

static void Initial_33_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng1);

LAB4:    xsi_set_current_line(34, ng1);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(35, ng1);
    Monitor_35_1(t0);
    xsi_set_current_line(36, ng1);
    t2 = (t0 + 3128);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(36, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_35_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3376);
    t2 = (t0 + 3888);
    xsi_vlogfile_monitor((void *)Monitor_35_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_15327394303349694868_3177785809_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Monitor_35_1};
	xsi_register_didat("work_m_15327394303349694868_3177785809", "isim/pipeline_isim_beh.exe.sim/work/m_15327394303349694868_3177785809.didat");
	xsi_register_executes(pe);
}
