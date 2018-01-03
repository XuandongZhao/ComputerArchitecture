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
static const char *ng0 = "//Mac/Home/Desktop/Code/Arch/05_31Ins_1/alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {65536, 0};



static void Always_17_0(char *t0)
{
    char t8[8];
    char t40[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    t1 = (t0 + 15360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 15680);
    *((int *)t2) = 1;
    t3 = (t0 + 15392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 14440);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 13880U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 3192);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 3328);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 3736);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 3872);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3464);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 3600);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 4416);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 4008);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 4280);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 4144);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);

LAB28:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 13560U);
    t5 = *((char **)t2);
    t2 = (t0 + 13720U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 14440);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB9:    xsi_set_current_line(23, ng0);

LAB29:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 13560U);
    t5 = *((char **)t2);
    t2 = (t0 + 13720U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 14440);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB11:    xsi_set_current_line(26, ng0);

LAB30:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 13560U);
    t5 = *((char **)t2);
    t2 = (t0 + 13720U);
    t7 = *((char **)t2);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t2 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB31;

LAB32:
LAB33:    t39 = (t0 + 14440);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB27;

LAB13:    xsi_set_current_line(29, ng0);

LAB34:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 13560U);
    t5 = *((char **)t2);
    t2 = (t0 + 13720U);
    t7 = *((char **)t2);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t2 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB35;

LAB36:
LAB37:    t39 = (t0 + 14440);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 32);
    goto LAB27;

LAB15:    xsi_set_current_line(32, ng0);

LAB38:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 14040U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t14 = (t11 & t10);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 13560U);
    t4 = *((char **)t2);
    t2 = (t0 + 13720U);
    t5 = *((char **)t2);
    memset(t41, 0, 8);
    t2 = (t4 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB43;

LAB42:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB44;

LAB45:    t13 = (t0 + 14440);
    xsi_vlogvar_assign_value(t13, t41, 0, 0, 32);

LAB41:    goto LAB27;

LAB17:    xsi_set_current_line(38, ng0);

LAB47:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 13720U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_multiply(t8, 32, t5, 32, t2, 32);
    t7 = (t0 + 14440);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB27;

LAB19:    xsi_set_current_line(41, ng0);

LAB48:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 14040U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t14 = (t11 & t10);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 13720U);
    t4 = *((char **)t2);
    t2 = (t0 + 13560U);
    t5 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 32, t4, 32, t5, 32);
    t2 = (t0 + 14440);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);

LAB51:    goto LAB27;

LAB21:    xsi_set_current_line(47, ng0);

LAB52:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 13560U);
    t5 = *((char **)t2);
    t2 = (t0 + 13720U);
    t7 = *((char **)t2);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t2 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB53;

LAB54:
LAB55:    t21 = (t0 + 14440);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 32);
    goto LAB27;

LAB23:    xsi_set_current_line(50, ng0);

LAB56:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 13720U);
    t5 = *((char **)t2);
    t2 = (t0 + 13560U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 14440);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB27;

LAB25:    xsi_set_current_line(53, ng0);

LAB57:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 13560U);
    t5 = *((char **)t2);
    t2 = (t0 + 13720U);
    t7 = *((char **)t2);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t40) = t11;
    t2 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t40 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB58;

LAB59:
LAB60:    memset(t8, 0, 8);
    t39 = (t8 + 4);
    t42 = (t40 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    *((unsigned int *)t8) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB62;

LAB61:    t45 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 4294967295U);
    t47 = (t0 + 14440);
    xsi_vlogvar_assign_value(t47, t8, 0, 0, 32);
    goto LAB27;

LAB31:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB33;

LAB35:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB37;

LAB39:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 13560U);
    t12 = *((char **)t7);
    t7 = (t0 + 13720U);
    t13 = *((char **)t7);
    memset(t41, 0, 8);
    xsi_vlog_signed_less(t41, 32, t12, 32, t13, 32);
    t7 = (t0 + 14440);
    xsi_vlogvar_assign_value(t7, t41, 0, 0, 32);
    goto LAB41;

LAB43:    t12 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t41) = 1;
    goto LAB45;

LAB49:    xsi_set_current_line(43, ng0);
    t7 = (t0 + 13720U);
    t12 = *((char **)t7);
    t7 = (t0 + 13560U);
    t13 = *((char **)t7);
    memset(t40, 0, 8);
    xsi_vlog_signed_arith_rshift(t40, 32, t12, 32, t13, 32);
    t7 = (t0 + 14440);
    xsi_vlogvar_assign_value(t7, t40, 0, 0, 32);
    goto LAB51;

LAB53:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    goto LAB55;

LAB58:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB60;

LAB62:    t37 = *((unsigned int *)t8);
    t38 = *((unsigned int *)t42);
    *((unsigned int *)t8) = (t37 | t38);
    t43 = *((unsigned int *)t39);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t39) = (t43 | t44);
    goto LAB61;

}


extern void work_m_00000000001391942420_2725559894_init()
{
	static char *pe[] = {(void *)Always_17_0};
	xsi_register_didat("work_m_00000000001391942420_2725559894", "isim/alu_isim_beh.exe.sim/work/m_00000000001391942420_2725559894.didat");
	xsi_register_executes(pe);
}
