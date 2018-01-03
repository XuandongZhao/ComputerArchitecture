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
static const char *ng0 = "//Mac/Home/Desktop/Code/Arch/07_AccessMem/data_ram.v";
static const char *ng1 = "data_mem.hex";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 3728);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t6[8];
    char t16[8];
    char t35[8];
    char t43[8];
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
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
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
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    int t82;
    int t83;
    int t84;
    int t85;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5464);
    *((int *)t2) = 1;
    t3 = (t0 + 4928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (!(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB10;

LAB11:    memcpy(t43, t6, 8);

LAB12:    t71 = (t43 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB30:    t5 = (t0 + 744);
    t17 = *((char **)t5);
    t62 = xsi_vlog_unsigned_case_compare(t4, 2, t17, 32);
    if (t62 == 1)
        goto LAB31;

LAB32:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t62 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t62 == 1)
        goto LAB33;

LAB34:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t62 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t62 == 1)
        goto LAB35;

LAB36:
LAB37:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 2528U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t18 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t17) == 0)
        goto LAB13;

LAB15:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;

LAB16:    t25 = (t16 + 4);
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = (~(t27));
    *((unsigned int *)t16) = t28;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB18;

LAB17:    t33 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t33 & 1U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 & 1U);
    memset(t35, 0, 8);
    t36 = (t16 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t16);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t36) != 0)
        goto LAB21;

LAB22:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 | t45);
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
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB13:    *((unsigned int *)t16) = 1;
    goto LAB16;

LAB18:    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t16) = (t29 | t30);
    t31 = *((unsigned int *)t25);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t25) = (t31 | t32);
    goto LAB17;

LAB19:    *((unsigned int *)t35) = 1;
    goto LAB22;

LAB21:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB22;

LAB23:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t6 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (~(t59));
    t61 = *((unsigned int *)t6);
    t62 = (t61 & t60);
    t63 = *((unsigned int *)t58);
    t64 = (~(t63));
    t65 = *((unsigned int *)t35);
    t66 = (t65 & t64);
    t67 = (~(t62));
    t68 = (~(t66));
    t69 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t69 & t67);
    t70 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t70 & t68);
    goto LAB25;

LAB26:    xsi_set_current_line(37, ng0);

LAB29:    xsi_set_current_line(38, ng0);
    t77 = ((char*)((ng2)));
    t78 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 4, 0LL);
    goto LAB28;

LAB31:    xsi_set_current_line(41, ng0);

LAB38:    xsi_set_current_line(42, ng0);
    t5 = ((char*)((ng2)));
    t18 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t18, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB41:    goto LAB37;

LAB33:    xsi_set_current_line(48, ng0);

LAB42:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3408);
    t5 = (t2 + 56U);
    t17 = *((char **)t5);
    t18 = (t0 + 608);
    t24 = *((char **)t18);
    t18 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t24, 32, t18, 32);
    memset(t16, 0, 8);
    t25 = (t17 + 4);
    t26 = (t6 + 4);
    t7 = *((unsigned int *)t17);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t25);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t25);
    t15 = *((unsigned int *)t26);
    t19 = (t14 | t15);
    t20 = (~(t19));
    t21 = (t13 & t20);
    if (t21 != 0)
        goto LAB46;

LAB43:    if (t19 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t16) = 1;

LAB46:    t42 = (t16 + 4);
    t22 = *((unsigned int *)t42);
    t23 = (~(t22));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t23);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(57, ng0);

LAB51:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t17 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 4, t5, 4, t17, 4);
    t18 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t18, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB49:    goto LAB37;

LAB35:    xsi_set_current_line(62, ng0);

LAB52:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3408);
    t5 = (t2 + 56U);
    t17 = *((char **)t5);
    t18 = (t0 + 608);
    t24 = *((char **)t18);
    t18 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t24, 32, t18, 32);
    memset(t16, 0, 8);
    t25 = (t17 + 4);
    t26 = (t6 + 4);
    t7 = *((unsigned int *)t17);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t25);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t25);
    t15 = *((unsigned int *)t26);
    t19 = (t14 | t15);
    t20 = (~(t19));
    t21 = (t13 & t20);
    if (t21 != 0)
        goto LAB56;

LAB53:    if (t19 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t16) = 1;

LAB56:    t42 = (t16 + 4);
    t22 = *((unsigned int *)t42);
    t23 = (~(t22));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t23);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(71, ng0);

LAB63:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t17 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 4, t5, 4, t17, 4);
    t18 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t18, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);

LAB59:    goto LAB37;

LAB39:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 1016);
    t17 = *((char **)t5);
    t5 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t5, t17, 0, 0, 2, 0LL);
    goto LAB41;

LAB45:    t36 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(49, ng0);

LAB50:    xsi_set_current_line(50, ng0);
    t47 = (t0 + 3728);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t57 = (t0 + 3728);
    t58 = (t57 + 72U);
    t71 = *((char **)t58);
    t77 = (t0 + 3728);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t80 = (t0 + 2048U);
    t81 = *((char **)t80);
    xsi_vlog_generic_get_array_select_value(t35, 32, t49, t71, t79, 2, 1, t81, 32, 2);
    t80 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t80, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB49;

LAB55:    t36 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(63, ng0);

LAB60:    xsi_set_current_line(64, ng0);
    t47 = (t0 + 2208U);
    t48 = *((char **)t47);
    t47 = (t0 + 3728);
    t49 = (t0 + 3728);
    t57 = (t49 + 72U);
    t58 = *((char **)t57);
    t71 = (t0 + 3728);
    t77 = (t71 + 64U);
    t78 = *((char **)t77);
    t79 = (t0 + 2048U);
    t80 = *((char **)t79);
    xsi_vlog_generic_convert_array_indices(t35, t43, t58, t78, 2, 1, t80, 32, 2);
    t79 = (t35 + 4);
    t30 = *((unsigned int *)t79);
    t66 = (!(t30));
    t81 = (t43 + 4);
    t31 = *((unsigned int *)t81);
    t82 = (!(t31));
    t83 = (t66 && t82);
    if (t83 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB59;

LAB61:    t32 = *((unsigned int *)t35);
    t33 = *((unsigned int *)t43);
    t84 = (t32 - t33);
    t85 = (t84 + 1);
    xsi_vlogvar_wait_assign_value(t47, t48, 0, *((unsigned int *)t43), t85, 0LL);
    goto LAB62;

}

static void Always_79_2(char *t0)
{
    char t6[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    t3 = (t0 + 5176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 2528U);
    t5 = *((char **)t4);
    t4 = (t0 + 3248);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t9) == 0)
        goto LAB6;

LAB8:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;

LAB9:    t16 = (t6 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t6) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB11;

LAB10:    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t6);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t6 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB12;

LAB13:
LAB14:    t58 = (t0 + 3088);
    xsi_vlogvar_assign_value(t58, t26, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t6) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB10;

LAB12:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t6 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t6);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB14;

}


extern void work_m_00000000001535818953_0362415942_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_33_1,(void *)Always_79_2};
	xsi_register_didat("work_m_00000000001535818953_0362415942", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000001535818953_0362415942.didat");
	xsi_register_executes(pe);
}
