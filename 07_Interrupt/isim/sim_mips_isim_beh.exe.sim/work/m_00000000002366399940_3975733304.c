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
static const char *ng0 = "//Mac/Home/Desktop/Code/Arch/06_Interrupt_sss/CP0.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {3, 0};
static int ng4[] = {2, 0};



static void Cont_30_0(char *t0)
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

LAB0:    t1 = (t0 + 19368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 16448U);
    t3 = *((char **)t2);
    t2 = (t0 + 17968);
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
LAB6:    t38 = (t0 + 18128);
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
LAB9:    t73 = (t0 + 21088);
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
    t86 = (t0 + 20928);
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

static void Always_31_1(char *t0)
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

LAB0:    t1 = (t0 + 19616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 20944);
    *((int *)t2) = 1;
    t3 = (t0 + 19648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 16288U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 16608U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 18288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 17968);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 17968);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 17968);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Always_39_2(char *t0)
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

LAB0:    t1 = (t0 + 19864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 20960);
    *((int *)t2) = 1;
    t3 = (t0 + 19896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 16288U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 18288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 16928U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 18128);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 18128);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 18128);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Always_47_3(char *t0)
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

LAB0:    t1 = (t0 + 20112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 20976);
    *((int *)t2) = 1;
    t3 = (t0 + 20144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 18448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 18448);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 18448);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 15808U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 5, 2);
    t14 = (t0 + 17488);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 32, 0LL);
    goto LAB2;

}

static void Always_51_4(char *t0)
{
    char t13[8];
    char t32[8];
    char t33[8];
    char t72[8];
    char t73[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
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

LAB0:    t1 = (t0 + 20360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 20992);
    *((int *)t2) = 1;
    t3 = (t0 + 20392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 16288U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 16928U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 16448U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:
LAB8:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 17648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t11) != 0)
        goto LAB41;

LAB42:    t14 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB43;

LAB44:    memcpy(t33, t13, 8);

LAB45:    t41 = (t33 + 4);
    t65 = *((unsigned int *)t41);
    t66 = (~(t65));
    t67 = *((unsigned int *)t33);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 17648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB59;

LAB60:
LAB61:
LAB55:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 17648);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 17648);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 18448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18448);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 18448);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 17808);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(61, ng0);

LAB17:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 15648U);
    t5 = *((char **)t4);

LAB18:    t4 = (t0 + 744);
    t11 = *((char **)t4);
    t19 = xsi_vlog_unsigned_case_compare(t5, 2, t11, 32);
    if (t19 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t19 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t19 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t19 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t19 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB16;

LAB19:    xsi_set_current_line(63, ng0);

LAB26:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng1)));
    t12 = (t0 + 17648);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(67, ng0);

LAB27:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 18288);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 15968U);
    t3 = *((char **)t2);
    t2 = (t0 + 472);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t11);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t2);
    t23 = *((unsigned int *)t11);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB29;

LAB28:    if (t24 != 0)
        goto LAB30;

LAB31:    t14 = (t13 + 4);
    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB25;

LAB23:    xsi_set_current_line(73, ng0);

LAB38:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 17648);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 18448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 18448);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = (t0 + 18448);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t14, t17, 2, 1, t18, 32, 1);
    t34 = (t0 + 17808);
    xsi_vlogvar_wait_assign_value(t34, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 18288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB29:    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB30:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(69, ng0);

LAB35:    xsi_set_current_line(70, ng0);
    t15 = (t0 + 16128U);
    t16 = *((char **)t15);
    t15 = (t0 + 18448);
    t17 = (t0 + 18448);
    t18 = (t17 + 72U);
    t34 = *((char **)t18);
    t35 = (t0 + 18448);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 15968U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t32, t33, t34, t37, 2, 1, t39, 5, 2);
    t38 = (t32 + 4);
    t40 = *((unsigned int *)t38);
    t19 = (!(t40));
    t41 = (t33 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t19 && t43);
    if (t44 == 1)
        goto LAB36;

LAB37:    goto LAB34;

LAB36:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t47 = (t45 - t46);
    t48 = (t47 + 1);
    xsi_vlogvar_wait_assign_value(t15, t16, 0, *((unsigned int *)t33), t48, 0LL);
    goto LAB37;

LAB39:    *((unsigned int *)t13) = 1;
    goto LAB42;

LAB41:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB42;

LAB43:    t15 = (t0 + 18288);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t32, 0, 8);
    t18 = (t17 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t17);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t18) != 0)
        goto LAB48;

LAB49:    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t32);
    t30 = (t28 & t29);
    *((unsigned int *)t33) = t30;
    t35 = (t13 + 4);
    t36 = (t32 + 4);
    t37 = (t33 + 4);
    t31 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t42 = (t31 | t40);
    *((unsigned int *)t37) = t42;
    t45 = *((unsigned int *)t37);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB45;

LAB46:    *((unsigned int *)t32) = 1;
    goto LAB49;

LAB48:    t34 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB49;

LAB50:    t49 = *((unsigned int *)t33);
    t50 = *((unsigned int *)t37);
    *((unsigned int *)t33) = (t49 | t50);
    t38 = (t13 + 4);
    t39 = (t32 + 4);
    t51 = *((unsigned int *)t13);
    t52 = (~(t51));
    t53 = *((unsigned int *)t38);
    t54 = (~(t53));
    t55 = *((unsigned int *)t32);
    t56 = (~(t55));
    t57 = *((unsigned int *)t39);
    t58 = (~(t57));
    t19 = (t52 & t54);
    t43 = (t56 & t58);
    t59 = (~(t19));
    t60 = (~(t43));
    t61 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t61 & t59);
    t62 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB52;

LAB53:    xsi_set_current_line(80, ng0);

LAB56:    xsi_set_current_line(81, ng0);
    t70 = ((char*)((ng1)));
    t71 = (t0 + 18448);
    t74 = (t0 + 18448);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 18448);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t80 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t72, t73, t76, t79, 2, 1, t80, 32, 1);
    t81 = (t72 + 4);
    t82 = *((unsigned int *)t81);
    t44 = (!(t82));
    t83 = (t73 + 4);
    t84 = *((unsigned int *)t83);
    t47 = (!(t84));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB57;

LAB58:    goto LAB55;

LAB57:    t85 = *((unsigned int *)t72);
    t86 = *((unsigned int *)t73);
    t87 = (t85 - t86);
    t88 = (t87 + 1);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, *((unsigned int *)t73), t88, 0LL);
    goto LAB58;

LAB59:    xsi_set_current_line(83, ng0);

LAB62:    xsi_set_current_line(84, ng0);
    t12 = (t0 + 16768U);
    t14 = *((char **)t12);
    t12 = (t0 + 18448);
    t15 = (t0 + 18448);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 18448);
    t34 = (t18 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t13, t32, t17, t35, 2, 1, t36, 32, 1);
    t37 = (t13 + 4);
    t20 = *((unsigned int *)t37);
    t19 = (!(t20));
    t38 = (t32 + 4);
    t21 = *((unsigned int *)t38);
    t43 = (!(t21));
    t44 = (t19 && t43);
    if (t44 == 1)
        goto LAB63;

LAB64:    goto LAB61;

LAB63:    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t32);
    t47 = (t22 - t23);
    t48 = (t47 + 1);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, *((unsigned int *)t32), t48, 0LL);
    goto LAB64;

}

static void Always_90_5(char *t0)
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

LAB0:    t1 = (t0 + 20608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 21008);
    *((int *)t2) = 1;
    t3 = (t0 + 20640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 18448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 18448);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 18448);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 15488U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 5, 2);
    t14 = (t0 + 17328);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000002366399940_3975733304_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Always_31_1,(void *)Always_39_2,(void *)Always_47_3,(void *)Always_51_4,(void *)Always_90_5};
	xsi_register_didat("work_m_00000000002366399940_3975733304", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000002366399940_3975733304.didat");
	xsi_register_executes(pe);
}
