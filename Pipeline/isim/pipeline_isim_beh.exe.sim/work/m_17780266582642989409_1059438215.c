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
static const char *ng0 = "/home/ericd/CSE401_LAB/Pipeline/alu_control.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {32U, 0U};
static unsigned int ng4[] = {34U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {36U, 0U};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {42U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {3U, 0U};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 3, 0LL);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5264);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 3384U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB31;

LAB28:    if (t18 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3384U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t6) = 1;

LAB47:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(70, ng0);

LAB52:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB50:
LAB42:
LAB34:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t28 = (t0 + 3224U);
    t29 = *((char **)t28);

LAB14:    t28 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t28, 6);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 6, t2, 6);
    if (t30 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB27:    goto LAB12;

LAB15:    xsi_set_current_line(42, ng0);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 3, 0LL);
    goto LAB27;

LAB17:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB27;

LAB19:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB27;

LAB30:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(55, ng0);

LAB35:    xsi_set_current_line(56, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    goto LAB34;

LAB38:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(60, ng0);

LAB43:    xsi_set_current_line(61, ng0);
    t21 = ((char*)((ng5)));
    t22 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    goto LAB42;

LAB46:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(65, ng0);

LAB51:    xsi_set_current_line(66, ng0);
    t21 = ((char*)((ng12)));
    t22 = (t0 + 3784);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 0LL);
    goto LAB50;

}


extern void work_m_17780266582642989409_1059438215_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_35_1};
	xsi_register_didat("work_m_17780266582642989409_1059438215", "isim/pipeline_isim_beh.exe.sim/work/m_17780266582642989409_1059438215.didat");
	xsi_register_executes(pe);
}
