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
static const char *ng0 = "//Mac/Home/Desktop/Code/Arch/Framework/vga.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {799U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {524U, 0U};
static unsigned int ng5[] = {95U, 0U};
static unsigned int ng6[] = {142U, 0U};
static unsigned int ng7[] = {783U, 0U};
static unsigned int ng8[] = {34U, 0U};
static unsigned int ng9[] = {515U, 0U};



static void Always_12_0(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 5848);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB10:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB13:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(17, ng0);

LAB19:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 10, t4, 10, t5, 10);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 10, 0LL);

LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(13, ng0);

LAB9:    xsi_set_current_line(14, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 10, 0LL);
    goto LAB8;

LAB11:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(15, ng0);

LAB18:    xsi_set_current_line(16, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 10, 0LL);
    goto LAB17;

}

static void Always_23_1(char *t0)
{
    char t13[8];
    char t32[8];
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
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 5864);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(24, ng0);

LAB9:    xsi_set_current_line(25, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 10, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(26, ng0);

LAB17:    xsi_set_current_line(27, ng0);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng4)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB19;

LAB18:    t34 = (t31 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t30) < *((unsigned int *)t31))
        goto LAB21;

LAB20:    *((unsigned int *)t32) = 1;

LAB21:    t36 = (t32 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(29, ng0);

LAB27:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 10, t4, 10, t5, 10);
    t11 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 10, 0LL);

LAB25:    goto LAB16;

LAB19:    t35 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(27, ng0);

LAB26:    xsi_set_current_line(28, ng0);
    t42 = ((char*)((ng1)));
    t43 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 10, 0LL);
    goto LAB25;

}

static void NetDecl_37_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB6;

LAB7:    t10 = (t0 + 6008);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t10, 0, 0U);
    t23 = (t0 + 5880);
    *((int *)t23) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

}

static void NetDecl_38_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB6;

LAB7:    t10 = (t0 + 6072);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t10, 0, 0U);
    t23 = (t0 + 5896);
    *((int *)t23) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

}

static void NetDecl_39_4(char *t0)
{
    char t6[8];
    char t10[8];
    char t26[8];
    char t30[8];
    char t38[8];
    char t70[8];
    char t86[8];
    char t90[8];
    char t98[8];
    char t130[8];
    char t146[8];
    char t150[8];
    char t158[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    char *t149;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    int t182;
    int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB6;

LAB7:    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB12:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    memcpy(t38, t10, 8);

LAB15:    memset(t70, 0, 8);
    t71 = (t38 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t38);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t71) != 0)
        goto LAB30;

LAB31:    t78 = (t70 + 4);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB32;

LAB33:    memcpy(t98, t70, 8);

LAB34:    memset(t130, 0, 8);
    t131 = (t98 + 4);
    t132 = *((unsigned int *)t131);
    t133 = (~(t132));
    t134 = *((unsigned int *)t98);
    t135 = (t134 & t133);
    t136 = (t135 & 1U);
    if (t136 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t131) != 0)
        goto LAB49;

LAB50:    t138 = (t130 + 4);
    t139 = *((unsigned int *)t130);
    t140 = *((unsigned int *)t138);
    t141 = (t139 || t140);
    if (t141 > 0)
        goto LAB51;

LAB52:    memcpy(t158, t130, 8);

LAB53:    t190 = (t0 + 6136);
    t191 = (t190 + 56U);
    t192 = *((char **)t191);
    t193 = (t192 + 56U);
    t194 = *((char **)t193);
    memset(t194, 0, 8);
    t195 = 1U;
    t196 = t195;
    t197 = (t158 + 4);
    t198 = *((unsigned int *)t158);
    t195 = (t195 & t198);
    t199 = *((unsigned int *)t197);
    t196 = (t196 & t199);
    t200 = (t194 + 4);
    t201 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t201 | t195);
    t202 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t202 | t196);
    xsi_driver_vfirst_trans(t190, 0, 0U);
    t203 = (t0 + 5912);
    *((int *)t203) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB12;

LAB11:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB13:    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng7)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB17;

LAB16:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t24) < *((unsigned int *)t25))
        goto LAB18;

LAB19:    memset(t30, 0, 8);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t31) != 0)
        goto LAB23;

LAB24:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t10 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t26) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t30) = 1;
    goto LAB24;

LAB23:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB24;

LAB25:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t10 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB27;

LAB28:    *((unsigned int *)t70) = 1;
    goto LAB31;

LAB30:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB31;

LAB32:    t82 = (t0 + 2408);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng8)));
    memset(t86, 0, 8);
    t87 = (t84 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB36;

LAB35:    t88 = (t85 + 4);
    if (*((unsigned int *)t88) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t84) > *((unsigned int *)t85))
        goto LAB37;

LAB38:    memset(t90, 0, 8);
    t91 = (t86 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t86);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t91) != 0)
        goto LAB42;

LAB43:    t99 = *((unsigned int *)t70);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t70 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB34;

LAB36:    t89 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t86) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t90) = 1;
    goto LAB43;

LAB42:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB43;

LAB44:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t70 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t70);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t122 = (t115 & t117);
    t123 = (t119 & t121);
    t124 = (~(t122));
    t125 = (~(t123));
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t125);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    t129 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t129 & t125);
    goto LAB46;

LAB47:    *((unsigned int *)t130) = 1;
    goto LAB50;

LAB49:    t137 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB50;

LAB51:    t142 = (t0 + 2408);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = ((char*)((ng9)));
    memset(t146, 0, 8);
    t147 = (t144 + 4);
    if (*((unsigned int *)t147) != 0)
        goto LAB55;

LAB54:    t148 = (t145 + 4);
    if (*((unsigned int *)t148) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t144) < *((unsigned int *)t145))
        goto LAB56;

LAB57:    memset(t150, 0, 8);
    t151 = (t146 + 4);
    t152 = *((unsigned int *)t151);
    t153 = (~(t152));
    t154 = *((unsigned int *)t146);
    t155 = (t154 & t153);
    t156 = (t155 & 1U);
    if (t156 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t151) != 0)
        goto LAB61;

LAB62:    t159 = *((unsigned int *)t130);
    t160 = *((unsigned int *)t150);
    t161 = (t159 & t160);
    *((unsigned int *)t158) = t161;
    t162 = (t130 + 4);
    t163 = (t150 + 4);
    t164 = (t158 + 4);
    t165 = *((unsigned int *)t162);
    t166 = *((unsigned int *)t163);
    t167 = (t165 | t166);
    *((unsigned int *)t164) = t167;
    t168 = *((unsigned int *)t164);
    t169 = (t168 != 0);
    if (t169 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB53;

LAB55:    t149 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t146) = 1;
    goto LAB57;

LAB59:    *((unsigned int *)t150) = 1;
    goto LAB62;

LAB61:    t157 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t157) = 1;
    goto LAB62;

LAB63:    t170 = *((unsigned int *)t158);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t158) = (t170 | t171);
    t172 = (t130 + 4);
    t173 = (t150 + 4);
    t174 = *((unsigned int *)t130);
    t175 = (~(t174));
    t176 = *((unsigned int *)t172);
    t177 = (~(t176));
    t178 = *((unsigned int *)t150);
    t179 = (~(t178));
    t180 = *((unsigned int *)t173);
    t181 = (~(t180));
    t182 = (t175 & t177);
    t183 = (t179 & t181);
    t184 = (~(t182));
    t185 = (~(t183));
    t186 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t186 & t184);
    t187 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t187 & t185);
    t188 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t188 & t184);
    t189 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t189 & t185);
    goto LAB65;

}

static void Always_44_5(char *t0)
{
    char t4[8];
    char t24[8];
    char t25[8];
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
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5928);
    *((int *)t2) = 1;
    t3 = (t0 + 5560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 1848U);
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
    t23 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t23, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t24, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t6) != 0)
        goto LAB14;

LAB15:    t13 = (t24 + 4);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB16;

LAB17:    t18 = *((unsigned int *)t24);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t13) > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t24) > 0)
        goto LAB22;

LAB23:    memcpy(t4, t25, 8);

LAB24:    t33 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t24, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t6) != 0)
        goto LAB27;

LAB28:    t13 = (t24 + 4);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB29;

LAB30:    t18 = *((unsigned int *)t24);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t13) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t24) > 0)
        goto LAB35;

LAB36:    memcpy(t4, t25, 8);

LAB37:    t33 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t24, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t6) != 0)
        goto LAB40;

LAB41:    t13 = (t24 + 4);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB42;

LAB43:    t18 = *((unsigned int *)t24);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t13) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t24) > 0)
        goto LAB48;

LAB49:    memcpy(t4, t25, 8);

LAB50:    t33 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 4, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t24) = 1;
    goto LAB15;

LAB14:    t12 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB15;

LAB16:    t14 = ((char*)((ng1)));
    goto LAB17;

LAB18:    t23 = (t0 + 1368U);
    t26 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t27 = (t26 + 4);
    t22 = *((unsigned int *)t26);
    t28 = (t22 >> 0);
    *((unsigned int *)t25) = t28;
    t29 = *((unsigned int *)t27);
    t30 = (t29 >> 0);
    *((unsigned int *)t23) = t30;
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t31 & 15U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 15U);
    goto LAB19;

LAB20:    xsi_vlog_unsigned_bit_combine(t4, 4, t14, 4, t25, 4);
    goto LAB24;

LAB22:    memcpy(t4, t14, 8);
    goto LAB24;

LAB25:    *((unsigned int *)t24) = 1;
    goto LAB28;

LAB27:    t12 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB28;

LAB29:    t14 = ((char*)((ng1)));
    goto LAB30;

LAB31:    t23 = (t0 + 1368U);
    t26 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t27 = (t26 + 4);
    t22 = *((unsigned int *)t26);
    t28 = (t22 >> 4);
    *((unsigned int *)t25) = t28;
    t29 = *((unsigned int *)t27);
    t30 = (t29 >> 4);
    *((unsigned int *)t23) = t30;
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t31 & 15U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 15U);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t4, 4, t14, 4, t25, 4);
    goto LAB37;

LAB35:    memcpy(t4, t14, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t24) = 1;
    goto LAB41;

LAB40:    t12 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB41;

LAB42:    t14 = ((char*)((ng1)));
    goto LAB43;

LAB44:    t23 = (t0 + 1368U);
    t26 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t27 = (t26 + 4);
    t22 = *((unsigned int *)t26);
    t28 = (t22 >> 8);
    *((unsigned int *)t25) = t28;
    t29 = *((unsigned int *)t27);
    t30 = (t29 >> 8);
    *((unsigned int *)t23) = t30;
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t31 & 15U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 15U);
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t4, 4, t14, 4, t25, 4);
    goto LAB50;

LAB48:    memcpy(t4, t14, 8);
    goto LAB50;

}


extern void work_m_00000000003951579297_1110640149_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Always_23_1,(void *)NetDecl_37_2,(void *)NetDecl_38_3,(void *)NetDecl_39_4,(void *)Always_44_5};
	xsi_register_didat("work_m_00000000003951579297_1110640149", "isim/test_top_isim_beh.exe.sim/work/m_00000000003951579297_1110640149.didat");
	xsi_register_executes(pe);
}
