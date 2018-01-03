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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//Mac/Home/Desktop/Code/Arch/07_AccessMem/CP0.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {9, 0};
static int ng5[] = {3, 0};
static int ng6[] = {2, 0};



static void Cont_31_0(char *t0)
{
    char t6[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
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
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 19800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 16720U);
    t3 = *((char **)t2);
    t2 = (t0 + 18240);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t10 = (t3 + 4);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 18400);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t42 = *((unsigned int *)t6);
    t43 = *((unsigned int *)t40);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t6 + 4);
    t46 = (t40 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB7;

LAB8:
LAB9:    t73 = (t0 + 21520);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t77, 0, 8);
    t78 = 1U;
    t79 = t78;
    t80 = (t41 + 4);
    t81 = *((unsigned int *)t41);
    t78 = (t78 & t81);
    t82 = *((unsigned int *)t80);
    t79 = (t79 & t82);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 | t78);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 | t79);
    xsi_driver_vfirst_trans(t73, 0, 0);
    t86 = (t0 + 21360);
    *((int *)t86) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    goto LAB6;

LAB7:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t6 + 4);
    t56 = (t40 + 4);
    t57 = *((unsigned int *)t6);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB9;

}

static void Always_32_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 20048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 21376);
    *((int *)t2) = 1;
    t3 = (t0 + 20080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 16560U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 16880U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 18560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 18240);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 18240);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 18240);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB15;

}

static void Always_42_2(char *t0)
{
    char t4[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;

LAB0:    t1 = (t0 + 20296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 21392);
    *((int *)t2) = 1;
    t3 = (t0 + 20328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 16560U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 16560U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 18560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 17200U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB20:
LAB17:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(44, ng0);
    t29 = (t0 + 18880);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t31, 32, t32, 32);
    t34 = (t0 + 18880);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 32, 0LL);
    goto LAB14;

LAB15:    xsi_set_current_line(46, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 18400);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB17;

LAB18:    xsi_set_current_line(48, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 18400);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    goto LAB20;

LAB21:    xsi_set_current_line(50, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 18400);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB23;

}

static void Always_52_3(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 20544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 21408);
    *((int *)t2) = 1;
    t3 = (t0 + 20576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 18720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 18720);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 18720);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 16080U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 5, 2);
    t14 = (t0 + 17760);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 32, 0LL);
    goto LAB2;

}

static void Always_56_4(char *t0)
{
    char t8[8];
    char t9[8];
    char t41[8];
    char t72[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;

LAB0:    t1 = (t0 + 20792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 21424);
    *((int *)t2) = 1;
    t3 = (t0 + 20824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 18880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 18720);
    t10 = (t0 + 18720);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 18720);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t8, t9, t12, t15, 2, 1, t16, 32, 1);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t9 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 16560U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t18 = *((unsigned int *)t2);
    t21 = (~(t18));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t21);
    t28 = (t25 != 0);
    if (t28 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 17200U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t18 = *((unsigned int *)t2);
    t21 = (~(t18));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t21);
    t28 = (t25 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 16720U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t18 = *((unsigned int *)t2);
    t21 = (~(t18));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t21);
    t28 = (t25 != 0);
    if (t28 > 0)
        goto LAB16;

LAB17:
LAB18:
LAB14:
LAB10:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 17920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t18 = *((unsigned int *)t6);
    t21 = (~(t18));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t21);
    t28 = (t25 & 1U);
    if (t28 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t6) != 0)
        goto LAB43;

LAB44:    t10 = (t8 + 4);
    t29 = *((unsigned int *)t8);
    t30 = *((unsigned int *)t10);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB45;

LAB46:    memcpy(t41, t8, 8);

LAB47:    t45 = (t41 + 4);
    t65 = *((unsigned int *)t45);
    t66 = (~(t65));
    t67 = *((unsigned int *)t41);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 17920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 4);
    t18 = *((unsigned int *)t6);
    t21 = (~(t18));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t21);
    t28 = (t25 != 0);
    if (t28 > 0)
        goto LAB61;

LAB62:
LAB63:
LAB57:    goto LAB2;

LAB6:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t9);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, *((unsigned int *)t9), t27, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);

LAB11:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 17920);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB10;

LAB12:    xsi_set_current_line(63, ng0);

LAB15:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 17920);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 18720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18720);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t10 = (t0 + 18720);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t4, t7, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 18080);
    xsi_vlogvar_wait_assign_value(t14, t8, 0, 0, 32, 0LL);
    goto LAB14;

LAB16:    xsi_set_current_line(67, ng0);

LAB19:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 15920U);
    t5 = *((char **)t4);

LAB20:    t4 = (t0 + 880);
    t6 = *((char **)t4);
    t19 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 32);
    if (t19 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t19 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t19 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t19 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t19 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB18;

LAB21:    xsi_set_current_line(69, ng0);

LAB28:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng1)));
    t7 = (t0 + 17920);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(73, ng0);

LAB29:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 18560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 16240U);
    t3 = *((char **)t2);
    t2 = (t0 + 472);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t6 = (t4 + 4);
    t18 = *((unsigned int *)t3);
    t21 = *((unsigned int *)t4);
    t24 = (t18 ^ t21);
    t25 = *((unsigned int *)t2);
    t28 = *((unsigned int *)t6);
    t29 = (t25 ^ t28);
    t30 = (t24 | t29);
    t31 = *((unsigned int *)t2);
    t32 = *((unsigned int *)t6);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB31;

LAB30:    if (t33 != 0)
        goto LAB32;

LAB33:    t10 = (t8 + 4);
    t36 = *((unsigned int *)t10);
    t37 = (~(t36));
    t38 = *((unsigned int *)t8);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB27;

LAB25:    xsi_set_current_line(80, ng0);

LAB40:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 17920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 18720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 18720);
    t7 = (t6 + 72U);
    t10 = *((char **)t7);
    t11 = (t0 + 18720);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t4, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t0 + 18080);
    xsi_vlogvar_wait_assign_value(t15, t8, 0, 0, 32, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 18560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB31:    *((unsigned int *)t8) = 1;
    goto LAB33;

LAB32:    t7 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(75, ng0);

LAB37:    xsi_set_current_line(76, ng0);
    t11 = (t0 + 16400U);
    t12 = *((char **)t11);
    t11 = (t0 + 18720);
    t13 = (t0 + 18720);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 18720);
    t17 = (t16 + 64U);
    t20 = *((char **)t17);
    t42 = (t0 + 16240U);
    t43 = *((char **)t42);
    xsi_vlog_generic_convert_array_indices(t9, t41, t15, t20, 2, 1, t43, 5, 2);
    t42 = (t9 + 4);
    t44 = *((unsigned int *)t42);
    t19 = (!(t44));
    t45 = (t41 + 4);
    t46 = *((unsigned int *)t45);
    t22 = (!(t46));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB38;

LAB39:    goto LAB36;

LAB38:    t47 = *((unsigned int *)t9);
    t48 = *((unsigned int *)t41);
    t26 = (t47 - t48);
    t27 = (t26 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t41), t27, 0LL);
    goto LAB39;

LAB41:    *((unsigned int *)t8) = 1;
    goto LAB44;

LAB43:    t7 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB44;

LAB45:    t11 = (t0 + 18560);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t9, 0, 8);
    t14 = (t13 + 4);
    t32 = *((unsigned int *)t14);
    t33 = (~(t32));
    t34 = *((unsigned int *)t13);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t14) != 0)
        goto LAB50;

LAB51:    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t9);
    t39 = (t37 & t38);
    *((unsigned int *)t41) = t39;
    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t20 = (t41 + 4);
    t40 = *((unsigned int *)t16);
    t44 = *((unsigned int *)t17);
    t46 = (t40 | t44);
    *((unsigned int *)t20) = t46;
    t47 = *((unsigned int *)t20);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t9) = 1;
    goto LAB51;

LAB50:    t15 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB51;

LAB52:    t49 = *((unsigned int *)t41);
    t50 = *((unsigned int *)t20);
    *((unsigned int *)t41) = (t49 | t50);
    t42 = (t8 + 4);
    t43 = (t9 + 4);
    t51 = *((unsigned int *)t8);
    t52 = (~(t51));
    t53 = *((unsigned int *)t42);
    t54 = (~(t53));
    t55 = *((unsigned int *)t9);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t19 = (t52 & t54);
    t22 = (t56 & t58);
    t59 = (~(t19));
    t60 = (~(t22));
    t61 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t61 & t59);
    t62 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t62 & t60);
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t59);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t60);
    goto LAB54;

LAB55:    xsi_set_current_line(87, ng0);

LAB58:    xsi_set_current_line(88, ng0);
    t70 = ((char*)((ng1)));
    t71 = (t0 + 18720);
    t74 = (t0 + 18720);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 18720);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t72, t73, t76, t79, 2, 1, t80, 32, 1);
    t81 = (t72 + 4);
    t82 = *((unsigned int *)t81);
    t23 = (!(t82));
    t83 = (t73 + 4);
    t84 = *((unsigned int *)t83);
    t26 = (!(t84));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB59;

LAB60:    goto LAB57;

LAB59:    t85 = *((unsigned int *)t72);
    t86 = *((unsigned int *)t73);
    t87 = (t85 - t86);
    t88 = (t87 + 1);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, *((unsigned int *)t73), t88, 0LL);
    goto LAB60;

LAB61:    xsi_set_current_line(90, ng0);

LAB64:    xsi_set_current_line(91, ng0);
    t7 = (t0 + 17040U);
    t10 = *((char **)t7);
    t7 = (t0 + 18720);
    t11 = (t0 + 18720);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 18720);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t8, t9, t13, t16, 2, 1, t17, 32, 1);
    t20 = (t8 + 4);
    t29 = *((unsigned int *)t20);
    t19 = (!(t29));
    t42 = (t9 + 4);
    t30 = *((unsigned int *)t42);
    t22 = (!(t30));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB65;

LAB66:    goto LAB63;

LAB65:    t31 = *((unsigned int *)t8);
    t32 = *((unsigned int *)t9);
    t26 = (t31 - t32);
    t27 = (t26 + 1);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, *((unsigned int *)t9), t27, 0LL);
    goto LAB66;

}

static void Always_97_5(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 21040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 21440);
    *((int *)t2) = 1;
    t3 = (t0 + 21072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 18720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 18720);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 18720);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 15760U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 5, 2);
    t14 = (t0 + 17600);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000000564267948_3975733304_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Always_32_1,(void *)Always_42_2,(void *)Always_52_3,(void *)Always_56_4,(void *)Always_97_5};
	xsi_register_didat("work_m_00000000000564267948_3975733304", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000000564267948_3975733304.didat");
	xsi_register_executes(pe);
}
