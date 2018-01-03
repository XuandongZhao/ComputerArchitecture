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
static const char *ng0 = "//Mac/Home/Desktop/Code/Arch/Framework/function.vh";
static int ng1[] = {32, 0};
static int ng2[] = {31, 0};
static int ng3[] = {30, 0};
static int ng4[] = {29, 0};
static int ng5[] = {28, 0};
static int ng6[] = {27, 0};
static int ng7[] = {26, 0};
static int ng8[] = {25, 0};
static int ng9[] = {24, 0};
static int ng10[] = {23, 0};
static int ng11[] = {22, 0};
static int ng12[] = {21, 0};
static int ng13[] = {20, 0};
static int ng14[] = {19, 0};
static int ng15[] = {18, 0};
static int ng16[] = {17, 0};
static int ng17[] = {16, 0};
static int ng18[] = {15, 0};
static int ng19[] = {14, 0};
static int ng20[] = {13, 0};
static int ng21[] = {12, 0};
static int ng22[] = {11, 0};
static int ng23[] = {10, 0};
static int ng24[] = {9, 0};
static int ng25[] = {8, 0};
static int ng26[] = {7, 0};
static int ng27[] = {6, 0};
static int ng28[] = {5, 0};
static int ng29[] = {4, 0};
static int ng30[] = {3, 0};
static int ng31[] = {2, 0};
static int ng32[] = {1, 0};
static const char *ng33 = "//Mac/Home/Desktop/Code/Arch/Framework/btn_scan.v";
static int ng34[] = {0, 0};
static unsigned int ng35[] = {1U, 0U};
static unsigned int ng36[] = {30U, 0U};
static unsigned int ng37[] = {29U, 0U};
static unsigned int ng38[] = {27U, 0U};
static unsigned int ng39[] = {23U, 0U};
static unsigned int ng40[] = {15U, 0U};



static int sp_GET_WIDTH(char *t1, char *t2)
{
    char t6[8];
    int t0;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;

LAB0:    t0 = 1;
    xsi_set_current_line(9, ng0);

LAB2:    xsi_set_current_line(10, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(11, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 30);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 30);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(12, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 29);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 29);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(13, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 28);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 28);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(14, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 27);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 27);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(15, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 26);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 26);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(16, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 25);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 25);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(17, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 24);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 24);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(18, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 23);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 23);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(19, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 22);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 22);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(20, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 21);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 21);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(21, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 20);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 20);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(22, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 19);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 19);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(23, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 18);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 18);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(24, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 17);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 17);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(25, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 16);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(26, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 15);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(27, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 14);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 14);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(28, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 13);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 13);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(29, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 12);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 12);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(30, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 11);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 11);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(31, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 10);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 10);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(32, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 9);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 9);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(33, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 8);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(34, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(35, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 6);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 6);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(36, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(37, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(38, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(39, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(40, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(41, ng0);
    t3 = (t1 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t1 + 3224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB98:
LAB95:
LAB92:
LAB89:
LAB86:
LAB83:
LAB80:
LAB77:
LAB74:
LAB71:
LAB68:
LAB65:
LAB62:
LAB59:
LAB56:
LAB53:
LAB50:
LAB47:
LAB44:
LAB41:
LAB38:
LAB35:
LAB32:
LAB29:
LAB26:
LAB23:
LAB20:
LAB17:
LAB14:
LAB11:
LAB8:
LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(10, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB5;

LAB6:    xsi_set_current_line(11, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB8;

LAB9:    xsi_set_current_line(12, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB11;

LAB12:    xsi_set_current_line(13, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB14;

LAB15:    xsi_set_current_line(14, ng0);
    t21 = ((char*)((ng5)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB17;

LAB18:    xsi_set_current_line(15, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB20;

LAB21:    xsi_set_current_line(16, ng0);
    t21 = ((char*)((ng7)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB23;

LAB24:    xsi_set_current_line(17, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB26;

LAB27:    xsi_set_current_line(18, ng0);
    t21 = ((char*)((ng9)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB29;

LAB30:    xsi_set_current_line(19, ng0);
    t21 = ((char*)((ng10)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB32;

LAB33:    xsi_set_current_line(20, ng0);
    t21 = ((char*)((ng11)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB35;

LAB36:    xsi_set_current_line(21, ng0);
    t21 = ((char*)((ng12)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB38;

LAB39:    xsi_set_current_line(22, ng0);
    t21 = ((char*)((ng13)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB41;

LAB42:    xsi_set_current_line(23, ng0);
    t21 = ((char*)((ng14)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB44;

LAB45:    xsi_set_current_line(24, ng0);
    t21 = ((char*)((ng15)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB47;

LAB48:    xsi_set_current_line(25, ng0);
    t21 = ((char*)((ng16)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB50;

LAB51:    xsi_set_current_line(26, ng0);
    t21 = ((char*)((ng17)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB53;

LAB54:    xsi_set_current_line(27, ng0);
    t21 = ((char*)((ng18)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB56;

LAB57:    xsi_set_current_line(28, ng0);
    t21 = ((char*)((ng19)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB59;

LAB60:    xsi_set_current_line(29, ng0);
    t21 = ((char*)((ng20)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB62;

LAB63:    xsi_set_current_line(30, ng0);
    t21 = ((char*)((ng21)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB65;

LAB66:    xsi_set_current_line(31, ng0);
    t21 = ((char*)((ng22)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB68;

LAB69:    xsi_set_current_line(32, ng0);
    t21 = ((char*)((ng23)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB71;

LAB72:    xsi_set_current_line(33, ng0);
    t21 = ((char*)((ng24)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB74;

LAB75:    xsi_set_current_line(34, ng0);
    t21 = ((char*)((ng25)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB77;

LAB78:    xsi_set_current_line(35, ng0);
    t21 = ((char*)((ng26)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB80;

LAB81:    xsi_set_current_line(36, ng0);
    t21 = ((char*)((ng27)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB83;

LAB84:    xsi_set_current_line(37, ng0);
    t21 = ((char*)((ng28)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB86;

LAB87:    xsi_set_current_line(38, ng0);
    t21 = ((char*)((ng29)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB89;

LAB90:    xsi_set_current_line(39, ng0);
    t21 = ((char*)((ng30)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB92;

LAB93:    xsi_set_current_line(40, ng0);
    t21 = ((char*)((ng31)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB95;

LAB96:    xsi_set_current_line(41, ng0);
    t21 = ((char*)((ng32)));
    t22 = (t1 + 3224);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB98;

}

static void Always_27_0(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng33);
    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng33);

LAB5:    xsi_set_current_line(28, ng33);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(30, ng33);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 17);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 17);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(33, ng33);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 18, t4, 18, t5, 18);
    t11 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 18, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng33);
    t11 = ((char*)((ng34)));
    t12 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 18, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(31, ng33);
    t20 = ((char*)((ng34)));
    t21 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 18, 0LL);
    goto LAB11;

}

static void Always_36_1(char *t0)
{
    char t13[8];
    char t27[8];
    char t28[8];
    char t29[8];
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    int t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng33);
    t2 = (t0 + 4888);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng33);

LAB5:    xsi_set_current_line(37, ng33);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng33);

LAB10:    xsi_set_current_line(42, ng33);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 17);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 17);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng33);

LAB9:    xsi_set_current_line(38, ng33);
    t11 = ((char*)((ng34)));
    t12 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    xsi_set_current_line(39, ng33);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 20, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(42, ng33);
    t20 = (t0 + 2744);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);

LAB14:    t23 = ((char*)((ng36)));
    t24 = xsi_vlog_unsigned_case_compare(t22, 5, t23, 5);
    if (t24 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng37)));
    t24 = xsi_vlog_unsigned_case_compare(t22, 5, t2, 5);
    if (t24 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng38)));
    t24 = xsi_vlog_unsigned_case_compare(t22, 5, t2, 5);
    if (t24 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng39)));
    t24 = xsi_vlog_unsigned_case_compare(t22, 5, t2, 5);
    if (t24 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng40)));
    t24 = xsi_vlog_unsigned_case_compare(t22, 5, t2, 5);
    if (t24 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(63, ng33);

LAB53:    xsi_set_current_line(64, ng33);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB27:    goto LAB13;

LAB15:    xsi_set_current_line(43, ng33);

LAB28:    xsi_set_current_line(44, ng33);
    t25 = ((char*)((ng37)));
    t26 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 5, 0LL);
    xsi_set_current_line(45, ng33);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    *((unsigned int *)t13) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB30;

LAB29:    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t5 = (t0 + 2904);
    t11 = (t0 + 2904);
    t12 = (t11 + 72U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng30)));
    t23 = ((char*)((ng34)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t20)), 2, t21, 32, 1, t23, 32, 1);
    t25 = (t27 + 4);
    t17 = *((unsigned int *)t25);
    t24 = (!(t17));
    t26 = (t28 + 4);
    t18 = *((unsigned int *)t26);
    t30 = (!(t18));
    t31 = (t24 && t30);
    t32 = (t29 + 4);
    t19 = *((unsigned int *)t32);
    t33 = (!(t19));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB31;

LAB32:    goto LAB27;

LAB17:    xsi_set_current_line(47, ng33);

LAB33:    xsi_set_current_line(48, ng33);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(49, ng33);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    *((unsigned int *)t13) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB35;

LAB34:    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t5 = (t0 + 2904);
    t11 = (t0 + 2904);
    t12 = (t11 + 72U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng26)));
    t23 = ((char*)((ng29)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t20)), 2, t21, 32, 1, t23, 32, 1);
    t25 = (t27 + 4);
    t17 = *((unsigned int *)t25);
    t24 = (!(t17));
    t26 = (t28 + 4);
    t18 = *((unsigned int *)t26);
    t30 = (!(t18));
    t31 = (t24 && t30);
    t32 = (t29 + 4);
    t19 = *((unsigned int *)t32);
    t33 = (!(t19));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB36;

LAB37:    goto LAB27;

LAB19:    xsi_set_current_line(51, ng33);

LAB38:    xsi_set_current_line(52, ng33);
    t3 = ((char*)((ng39)));
    t4 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(53, ng33);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    *((unsigned int *)t13) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB40;

LAB39:    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t5 = (t0 + 2904);
    t11 = (t0 + 2904);
    t12 = (t11 + 72U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng22)));
    t23 = ((char*)((ng25)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t20)), 2, t21, 32, 1, t23, 32, 1);
    t25 = (t27 + 4);
    t17 = *((unsigned int *)t25);
    t24 = (!(t17));
    t26 = (t28 + 4);
    t18 = *((unsigned int *)t26);
    t30 = (!(t18));
    t31 = (t24 && t30);
    t32 = (t29 + 4);
    t19 = *((unsigned int *)t32);
    t33 = (!(t19));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB41;

LAB42:    goto LAB27;

LAB21:    xsi_set_current_line(55, ng33);

LAB43:    xsi_set_current_line(56, ng33);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(57, ng33);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    *((unsigned int *)t13) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB45;

LAB44:    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t5 = (t0 + 2904);
    t11 = (t0 + 2904);
    t12 = (t11 + 72U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng18)));
    t23 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t20)), 2, t21, 32, 1, t23, 32, 1);
    t25 = (t27 + 4);
    t17 = *((unsigned int *)t25);
    t24 = (!(t17));
    t26 = (t28 + 4);
    t18 = *((unsigned int *)t26);
    t30 = (!(t18));
    t31 = (t24 && t30);
    t32 = (t29 + 4);
    t19 = *((unsigned int *)t32);
    t33 = (!(t19));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB46;

LAB47:    goto LAB27;

LAB23:    xsi_set_current_line(59, ng33);

LAB48:    xsi_set_current_line(60, ng33);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(61, ng33);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    *((unsigned int *)t13) = t7;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB50;

LAB49:    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    t5 = (t0 + 2904);
    t11 = (t0 + 2904);
    t12 = (t11 + 72U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng14)));
    t23 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t20)), 2, t21, 32, 1, t23, 32, 1);
    t25 = (t27 + 4);
    t17 = *((unsigned int *)t25);
    t24 = (!(t17));
    t26 = (t28 + 4);
    t18 = *((unsigned int *)t26);
    t30 = (!(t18));
    t31 = (t24 && t30);
    t32 = (t29 + 4);
    t19 = *((unsigned int *)t32);
    t33 = (!(t19));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB51;

LAB52:    goto LAB27;

LAB30:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t4);
    *((unsigned int *)t13) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t10 | t14);
    goto LAB29;

LAB31:    t35 = *((unsigned int *)t29);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t28);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t36, *((unsigned int *)t28), t40, 0LL);
    goto LAB32;

LAB35:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t4);
    *((unsigned int *)t13) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t10 | t14);
    goto LAB34;

LAB36:    t35 = *((unsigned int *)t29);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t28);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t36, *((unsigned int *)t28), t40, 0LL);
    goto LAB37;

LAB40:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t4);
    *((unsigned int *)t13) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t10 | t14);
    goto LAB39;

LAB41:    t35 = *((unsigned int *)t29);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t28);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t36, *((unsigned int *)t28), t40, 0LL);
    goto LAB42;

LAB45:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t4);
    *((unsigned int *)t13) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t10 | t14);
    goto LAB44;

LAB46:    t35 = *((unsigned int *)t29);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t28);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t36, *((unsigned int *)t28), t40, 0LL);
    goto LAB47;

LAB50:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t4);
    *((unsigned int *)t13) = (t8 | t9);
    t10 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t10 | t14);
    goto LAB49;

LAB51:    t35 = *((unsigned int *)t29);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t28);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t36, *((unsigned int *)t28), t40, 0LL);
    goto LAB52;

}


extern void work_m_00000000001372188402_3146883374_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Always_36_1};
	static char *se[] = {(void *)sp_GET_WIDTH};
	xsi_register_didat("work_m_00000000001372188402_3146883374", "isim/test_top_isim_beh.exe.sim/work/m_00000000001372188402_3146883374.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
