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
static const char *ng0 = "/home/ericd/cse401/LAB1/addsub.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};

static void NetReassign_40_1(char *);
static void NetReassign_41_2(char *);
static void NetReassign_43_3(char *);


static void Always_38_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4384);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2408);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 5920);
    *((int *)t5) = 1;
    NetReassign_40_1(t0);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 5924);
    *((int *)t3) = 1;
    NetReassign_41_2(t0);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);
    t26 = (t0 + 2248);
    xsi_set_assignedflag(t26);
    t27 = (t0 + 5928);
    *((int *)t27) = 1;
    NetReassign_43_3(t0);
    goto LAB12;

}

static void NetReassign_40_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5920);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2408);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_41_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t3 = 0;
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 5924);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 4400);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 5, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 4400);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_43_3(char *t0)
{
    char t4[8];
    char t18[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
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
    char *t17;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t3 = 0;
    t2 = (t0 + 2248);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t4) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB4:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 4294967295U);
    t17 = ((char*)((ng1)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 32, t17, 32);
    t19 = (t0 + 5928);
    if (*((int *)t19) > 0)
        goto LAB6;

LAB7:
LAB1:    return;
LAB5:    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB4;

LAB6:    t20 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t20, t18, 0, 0, 0, 5, ((int*)(t19)));
    t3 = 1;
    goto LAB7;

}


extern void work_m_08868573486282055977_1782896117_init()
{
	static char *pe[] = {(void *)Always_38_0,(void *)NetReassign_40_1,(void *)NetReassign_41_2,(void *)NetReassign_43_3};
	xsi_register_didat("work_m_08868573486282055977_1782896117", "isim/tb_addsub_isim_beh.exe.sim/work/m_08868573486282055977_1782896117.didat");
	xsi_register_executes(pe);
}
