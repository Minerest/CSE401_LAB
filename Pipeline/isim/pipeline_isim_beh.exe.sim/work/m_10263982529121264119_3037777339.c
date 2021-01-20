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
static const char *ng0 = "/home/ericd/CSE401_LAB/Pipeline/control.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {12U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {35U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {43U, 0U};
static unsigned int ng9[] = {1U, 8U};
static unsigned int ng10[] = {0U, 1U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {2U, 8U};
static unsigned int ng13[] = {32U, 0U};
static const char *ng14 = "Opcode not recognized.";



static void Initial_19_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(20, ng0);

LAB2:    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2128);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 3, 0LL);
    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3928);
    *((int *)t2) = 1;
    t3 = (t0 + 3640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1728U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(67, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB20:    xsi_set_current_line(36, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 2128);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 4, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(43, ng0);

LAB21:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2128);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(49, ng0);

LAB22:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2128);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(55, ng0);

LAB23:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2128);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(62, ng0);

LAB24:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2128);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB19;

}


extern void work_m_10263982529121264119_3037777339_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Always_33_1};
	xsi_register_didat("work_m_10263982529121264119_3037777339", "isim/pipeline_isim_beh.exe.sim/work/m_10263982529121264119_3037777339.didat");
	xsi_register_executes(pe);
}
