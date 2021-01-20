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
static const char *ng0 = "%0d\t %0b\t %0b\t %0b\t %0d\t %0d\t %0d\t %0d\t %0d\t %0d\t";
static const char *ng1 = "/home/ericd/CSE401_LAB/Pipeline/idecode.v";
static const char *ng2 = "Time\t WB\t M\t EX\t NPCout\t rdata1\t rdata2\t sign_e\t in2016\t in1511";

void Monitor_67_1(char *);
void Monitor_67_1(char *);


static void Monitor_67_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t5 = *((char **)t3);
    t3 = (t0 + 3608U);
    t6 = *((char **)t3);
    t3 = (t0 + 2648U);
    t7 = *((char **)t3);
    t3 = (t0 + 2808U);
    t8 = *((char **)t3);
    t3 = (t0 + 2968U);
    t9 = *((char **)t3);
    t3 = (t0 + 3128U);
    t10 = *((char **)t3);
    t3 = (t0 + 3288U);
    t11 = *((char **)t3);
    t3 = (t0 + 3448U);
    t12 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng0, 11, t0, (char)118, t1, 64, (char)118, t4, 2, (char)118, t5, 3, (char)118, t6, 4, (char)118, t7, 32, (char)118, t8, 32, (char)118, t9, 32, (char)118, t10, 32, (char)118, t11, 5, (char)118, t12, 5);

LAB1:    return;
}

static void Initial_65_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng1);

LAB4:    xsi_set_current_line(66, ng1);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(67, ng1);
    Monitor_67_1(t0);
    xsi_set_current_line(69, ng1);
    t2 = (t0 + 5368);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(69, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_67_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5616);
    t2 = (t0 + 6128);
    xsi_vlogfile_monitor((void *)Monitor_67_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_13622677063863929244_1881838423_init()
{
	static char *pe[] = {(void *)Initial_65_0,(void *)Monitor_67_1};
	xsi_register_didat("work_m_13622677063863929244_1881838423", "isim/pipeline_isim_beh.exe.sim/work/m_13622677063863929244_1881838423.didat");
	xsi_register_executes(pe);
}
