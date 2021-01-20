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
static const char *ng0 = "/home/ericd/CSE401_LAB/Pipeline/data_memory.v";
static int ng1[] = {0, 0};
static const char *ng2 = "data.txt";
static int ng3[] = {6, 0};
static int ng4[] = {256, 0};
static int ng5[] = {1, 0};
static const char *ng6 = "From Data Memory (data.txt):";
static const char *ng7 = "\tDMEM[%0d] = %0h";
static const char *ng8 = "From Data Memory (initial):";
static int ng9[] = {10, 0};
static const char *ng10 = "\tDMEM[%0d] = %0d";
static const char *ng11 = "\t...";
static int ng12[] = {255, 0};



static void Initial_15_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(15, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(20, ng0);
    t1 = (t0 + 2088);
    xsi_vlogfile_readmemb(ng2, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(23, ng0);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(27, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(28, ng0);
    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB8:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(33, ng0);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB11:    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng9)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2088);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2088);
    t15 = (t14 + 64U);
    t18 = *((char **)t15);
    t19 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t13, t18, 2, 1, t19, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)119, t1, 32, (char)118, t5, 32);

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t18 = (t0 + 2088);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2088);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2248);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB7;

LAB9:    xsi_set_current_line(29, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2088);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2248);
    t27 = (t26 + 56U);
    t30 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t16, 32, t19, t22, t25, 2, 1, t30, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)119, t14, 32, (char)118, t16, 32);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB8;

LAB12:    xsi_set_current_line(34, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2088);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2248);
    t27 = (t26 + 56U);
    t30 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t16, 32, t19, t22, t25, 2, 1, t30, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)119, t14, 32, (char)118, t16, 32);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2248);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB11;

}

static void Always_42_1(char *t0)
{
    char t6[8];
    char t19[8];
    char t35[8];
    char t43[8];
    char t83[8];
    char t84[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    int t94;
    char *t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3728);
    *((int *)t2) = 1;
    t3 = (t0 + 3440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t43, t6, 8);

LAB12:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t2) != 0)
        goto LAB31;

LAB32:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB33;

LAB34:    memcpy(t43, t6, 8);

LAB35:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = (t17 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB16;

LAB13:    if (t31 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t19) = 1;

LAB16:    memset(t35, 0, 8);
    t36 = (t19 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t36) != 0)
        goto LAB19;

LAB20:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t6 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t35) = 1;
    goto LAB20;

LAB19:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB21:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t6 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB23;

LAB24:    xsi_set_current_line(45, ng0);
    t81 = (t0 + 1208U);
    t82 = *((char **)t81);
    t81 = (t0 + 2088);
    t85 = (t0 + 2088);
    t86 = (t85 + 72U);
    t87 = *((char **)t86);
    t88 = (t0 + 2088);
    t89 = (t88 + 64U);
    t90 = *((char **)t89);
    t91 = (t0 + 1048U);
    t92 = *((char **)t91);
    xsi_vlog_generic_convert_array_indices(t83, t84, t87, t90, 2, 1, t92, 32, 2);
    t91 = (t83 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (!(t93));
    t95 = (t84 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (!(t96));
    t98 = (t94 && t97);
    if (t98 == 1)
        goto LAB27;

LAB28:    goto LAB26;

LAB27:    t99 = *((unsigned int *)t83);
    t100 = *((unsigned int *)t84);
    t101 = (t99 - t100);
    t102 = (t101 + 1);
    xsi_vlogvar_wait_assign_value(t81, t82, 0, *((unsigned int *)t84), t102, 0LL);
    goto LAB28;

LAB29:    *((unsigned int *)t6) = 1;
    goto LAB32;

LAB31:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB33:    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t17 = (t13 + 4);
    t18 = (t12 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t12);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t18);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB39;

LAB36:    if (t31 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t19) = 1;

LAB39:    memset(t35, 0, 8);
    t21 = (t19 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t21) != 0)
        goto LAB42;

LAB43:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t36 = (t6 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB38:    t20 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t35) = 1;
    goto LAB43;

LAB42:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB43;

LAB44:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB46;

LAB47:    xsi_set_current_line(47, ng0);
    t58 = (t0 + 2088);
    t75 = (t58 + 56U);
    t81 = *((char **)t75);
    t82 = (t0 + 2088);
    t85 = (t82 + 72U);
    t86 = *((char **)t85);
    t87 = (t0 + 2088);
    t88 = (t87 + 64U);
    t89 = *((char **)t88);
    t90 = (t0 + 1048U);
    t91 = *((char **)t90);
    xsi_vlog_generic_get_array_select_value(t83, 32, t81, t86, t89, 2, 1, t91, 32, 2);
    t90 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t90, t83, 0, 0, 32, 0LL);
    goto LAB49;

}


extern void work_m_16544487924587851054_3258266500_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Always_42_1};
	xsi_register_didat("work_m_16544487924587851054_3258266500", "isim/pipeline_isim_beh.exe.sim/work/m_16544487924587851054_3258266500.didat");
	xsi_register_executes(pe);
}
