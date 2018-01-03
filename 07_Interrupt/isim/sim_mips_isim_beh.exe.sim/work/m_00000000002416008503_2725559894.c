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
static const char *ng0 = "//Mac/Home/Desktop/Code/Arch/06_Interrupt_sss/alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {65536, 0};



static void Always_17_0(char *t0)
{
    char t8[8];
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    t1 = (t0 + 17128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 17448);
    *((int *)t2) = 1;
    t3 = (t0 + 17160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 16208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 15648U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 4144);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 5504);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 4280);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 4688);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 4824);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 4416);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 4552);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 5368);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 4960);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 5232);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 5096);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);

LAB30:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 15328U);
    t5 = *((char **)t2);
    t2 = (t0 + 15488U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 16208);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB29;

LAB9:    xsi_set_current_line(23, ng0);

LAB31:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 15328U);
    t5 = *((char **)t2);
    t2 = (t0 + 15488U);
    t7 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t5, 32, t7, 32);
    t2 = (t0 + 16208);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 32);
    goto LAB29;

LAB11:    xsi_set_current_line(26, ng0);

LAB32:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 15328U);
    t5 = *((char **)t2);
    t2 = (t0 + 15488U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 16208);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB29;

LAB13:    xsi_set_current_line(29, ng0);

LAB33:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 15328U);
    t5 = *((char **)t2);
    t2 = (t0 + 15488U);
    t7 = *((char **)t2);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t8) = t13;
    t2 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB34;

LAB35:
LAB36:    t41 = (t0 + 16208);
    xsi_vlogvar_assign_value(t41, t8, 0, 0, 32);
    goto LAB29;

LAB15:    xsi_set_current_line(32, ng0);

LAB37:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 15328U);
    t5 = *((char **)t2);
    t2 = (t0 + 15488U);
    t7 = *((char **)t2);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t2 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB38;

LAB39:
LAB40:    t41 = (t0 + 16208);
    xsi_vlogvar_assign_value(t41, t8, 0, 0, 32);
    goto LAB29;

LAB17:    xsi_set_current_line(35, ng0);

LAB41:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 15808U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 15328U);
    t4 = *((char **)t2);
    t2 = (t0 + 15488U);
    t5 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t4 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB46;

LAB45:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB47;

LAB48:    t15 = (t0 + 16208);
    xsi_vlogvar_assign_value(t15, t10, 0, 0, 32);

LAB44:    goto LAB29;

LAB19:    xsi_set_current_line(41, ng0);

LAB50:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 15488U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_multiply(t8, 32, t5, 32, t2, 32);
    t7 = (t0 + 16208);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB29;

LAB21:    xsi_set_current_line(44, ng0);

LAB51:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 15808U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t16 = (t13 & t12);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 15488U);
    t4 = *((char **)t2);
    t2 = (t0 + 15328U);
    t5 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 32, t4, 32, t5, 32);
    t2 = (t0 + 16208);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);

LAB54:    goto LAB29;

LAB23:    xsi_set_current_line(50, ng0);

LAB55:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 15328U);
    t5 = *((char **)t2);
    t2 = (t0 + 15488U);
    t7 = *((char **)t2);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t2 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB56;

LAB57:
LAB58:    t23 = (t0 + 16208);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 32);
    goto LAB29;

LAB25:    xsi_set_current_line(53, ng0);

LAB59:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 15488U);
    t5 = *((char **)t2);
    t2 = (t0 + 15328U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_lshift(t8, 32, t5, 32, t7, 32);
    t2 = (t0 + 16208);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB29;

LAB27:    xsi_set_current_line(56, ng0);

LAB60:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 15328U);
    t5 = *((char **)t2);
    t2 = (t0 + 15488U);
    t7 = *((char **)t2);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t9) = t13;
    t2 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB61;

LAB62:
LAB63:    memset(t8, 0, 8);
    t41 = (t8 + 4);
    t42 = (t9 + 4);
    t37 = *((unsigned int *)t9);
    t38 = (~(t37));
    *((unsigned int *)t8) = t38;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB65;

LAB64:    t45 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t46 & 4294967295U);
    t47 = (t0 + 16208);
    xsi_vlogvar_assign_value(t47, t8, 0, 0, 32);
    goto LAB29;

LAB34:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    t40 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t40 & t36);
    goto LAB36;

LAB38:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t35 & t31);
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t32);
    goto LAB40;

LAB42:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 15328U);
    t14 = *((char **)t7);
    t7 = (t0 + 15488U);
    t15 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t14, 32, t15, 32);
    t7 = (t0 + 16208);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB44;

LAB46:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t10) = 1;
    goto LAB48;

LAB52:    xsi_set_current_line(46, ng0);
    t7 = (t0 + 15488U);
    t14 = *((char **)t7);
    t7 = (t0 + 15328U);
    t15 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_arith_rshift(t9, 32, t14, 32, t15, 32);
    t7 = (t0 + 16208);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB54;

LAB56:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t21 | t22);
    goto LAB58;

LAB61:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t35 & t31);
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t32);
    goto LAB63;

LAB65:    t39 = *((unsigned int *)t8);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t8) = (t39 | t40);
    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t43 | t44);
    goto LAB64;

}


extern void work_m_00000000002416008503_2725559894_init()
{
	static char *pe[] = {(void *)Always_17_0};
	xsi_register_didat("work_m_00000000002416008503_2725559894", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000002416008503_2725559894.didat");
	xsi_register_executes(pe);
}
