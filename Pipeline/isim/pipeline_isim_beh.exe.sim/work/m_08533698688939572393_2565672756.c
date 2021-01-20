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
static const char *ng0 = "%0d\t %0b\t %0b\t %0b\t %0b\t %0d\t %0d\t %0d\t %0d\t %0d\t";
static const char *ng1 = "/home/ericd/CSE401_LAB/Pipeline/execute.v";
static const char *ng2 = "Time\t WB\t branch\t memread\t memwrite\t ADD\t ZERO\t alu\t rdata2\t fivebitmux\t";

void Monitor_42_1(char *);
void Monitor_42_1(char *);


static void Monitor_42_1_Func(char *t0)
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
    t3 = (t0 + 2808U);
    t4 = *((char **)t3);
    t3 = (t0 + 2968U);
    t5 = *((char **)t3);
    t3 = (t0 + 3128U);
    t6 = *((char **)t3);
    t3 = (t0 + 3288U);
    t7 = *((char **)t3);
    t3 = (t0 + 3928U);
    t8 = *((char **)t3);
    t3 = (t0 + 3448U);
    t9 = *((char **)t3);
    t3 = (t0 + 3608U);
    t10 = *((char **)t3);
    t3 = (t0 + 3768U);
    t11 = *((char **)t3);
    t3 = (t0 + 4088U);
    t12 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 3, ng0, 11, t0, (char)118, t1, 64, (char)118, t4, 2, (char)118, t5, 1, (char)118, t6, 1, (char)118, t7, 1, (char)118, t8, 32, (char)118, t9, 1, (char)118, t10, 32, (char)118, t11, 32, (char)118, t12, 5);

LAB1:    return;
}

static void Initial_40_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng1);

LAB4:    xsi_set_current_line(41, ng1);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(42, ng1);
    Monitor_42_1(t0);
    xsi_set_current_line(44, ng1);
    t2 = (t0 + 6008);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(44, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_42_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6256);
    t2 = (t0 + 6768);
    xsi_vlogfile_monitor((void *)Monitor_42_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_08533698688939572393_2565672756_init()
{
	static char *pe[] = {(void *)Initial_40_0,(void *)Monitor_42_1};
	xsi_register_didat("work_m_08533698688939572393_2565672756", "isim/pipeline_isim_beh.exe.sim/work/m_08533698688939572393_2565672756.didat");
	xsi_register_executes(pe);
}
