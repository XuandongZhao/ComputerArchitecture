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
static const char *ng33 = "//Mac/Home/Desktop/Code/Arch/Framework/parallel2serial.v";
static int ng34[] = {0, 0};
static unsigned int ng35[] = {1U, 0U};
static unsigned int ng36[] = {0U, 0U};



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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t3 = (t1 + 5936);
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
    t4 = (t1 + 5776);
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
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB5;

LAB6:    xsi_set_current_line(11, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB8;

LAB9:    xsi_set_current_line(12, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB11;

LAB12:    xsi_set_current_line(13, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB14;

LAB15:    xsi_set_current_line(14, ng0);
    t21 = ((char*)((ng5)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB17;

LAB18:    xsi_set_current_line(15, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB20;

LAB21:    xsi_set_current_line(16, ng0);
    t21 = ((char*)((ng7)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB23;

LAB24:    xsi_set_current_line(17, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB26;

LAB27:    xsi_set_current_line(18, ng0);
    t21 = ((char*)((ng9)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB29;

LAB30:    xsi_set_current_line(19, ng0);
    t21 = ((char*)((ng10)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB32;

LAB33:    xsi_set_current_line(20, ng0);
    t21 = ((char*)((ng11)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB35;

LAB36:    xsi_set_current_line(21, ng0);
    t21 = ((char*)((ng12)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB38;

LAB39:    xsi_set_current_line(22, ng0);
    t21 = ((char*)((ng13)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB41;

LAB42:    xsi_set_current_line(23, ng0);
    t21 = ((char*)((ng14)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB44;

LAB45:    xsi_set_current_line(24, ng0);
    t21 = ((char*)((ng15)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB47;

LAB48:    xsi_set_current_line(25, ng0);
    t21 = ((char*)((ng16)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB50;

LAB51:    xsi_set_current_line(26, ng0);
    t21 = ((char*)((ng17)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB53;

LAB54:    xsi_set_current_line(27, ng0);
    t21 = ((char*)((ng18)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB56;

LAB57:    xsi_set_current_line(28, ng0);
    t21 = ((char*)((ng19)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB59;

LAB60:    xsi_set_current_line(29, ng0);
    t21 = ((char*)((ng20)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB62;

LAB63:    xsi_set_current_line(30, ng0);
    t21 = ((char*)((ng21)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB65;

LAB66:    xsi_set_current_line(31, ng0);
    t21 = ((char*)((ng22)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB68;

LAB69:    xsi_set_current_line(32, ng0);
    t21 = ((char*)((ng23)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB71;

LAB72:    xsi_set_current_line(33, ng0);
    t21 = ((char*)((ng24)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB74;

LAB75:    xsi_set_current_line(34, ng0);
    t21 = ((char*)((ng25)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB77;

LAB78:    xsi_set_current_line(35, ng0);
    t21 = ((char*)((ng26)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB80;

LAB81:    xsi_set_current_line(36, ng0);
    t21 = ((char*)((ng27)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB83;

LAB84:    xsi_set_current_line(37, ng0);
    t21 = ((char*)((ng28)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB86;

LAB87:    xsi_set_current_line(38, ng0);
    t21 = ((char*)((ng29)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB89;

LAB90:    xsi_set_current_line(39, ng0);
    t21 = ((char*)((ng30)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB92;

LAB93:    xsi_set_current_line(40, ng0);
    t21 = ((char*)((ng31)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB95;

LAB96:    xsi_set_current_line(41, ng0);
    t21 = ((char*)((ng32)));
    t22 = (t1 + 5776);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB98;

}

static void Always_46_0(char *t0)
{
    char t16[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng33);
    t2 = (t0 + 8416);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng33);

LAB5:    xsi_set_current_line(47, ng33);
    t4 = ((char*)((ng34)));
    t5 = (t0 + 5296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(48, ng33);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 5616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(49, ng33);
    t2 = (t0 + 5136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1424);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(50, ng33);

LAB16:    xsi_set_current_line(51, ng33);
    t5 = (t0 + 3456U);
    t8 = *((char **)t5);
    t5 = (t8 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(54, ng33);

LAB21:    xsi_set_current_line(55, ng33);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 5296);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB19:    goto LAB15;

LAB9:    xsi_set_current_line(58, ng33);

LAB22:    xsi_set_current_line(59, ng33);
    t2 = (t0 + 3776U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(62, ng33);

LAB27:    xsi_set_current_line(63, ng33);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 5296);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB25:    goto LAB15;

LAB11:    xsi_set_current_line(66, ng33);

LAB28:    xsi_set_current_line(67, ng33);
    t2 = (t0 + 3776U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(74, ng33);

LAB40:    xsi_set_current_line(75, ng33);
    t2 = (t0 + 5456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5616);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    xsi_set_current_line(76, ng33);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 5296);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB31:    goto LAB15;

LAB13:    xsi_set_current_line(79, ng33);

LAB41:    xsi_set_current_line(80, ng33);
    t2 = (t0 + 1424);
    t5 = *((char **)t2);
    t2 = (t0 + 5296);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 3);
    goto LAB15;

LAB17:    xsi_set_current_line(51, ng33);

LAB20:    xsi_set_current_line(52, ng33);
    t14 = (t0 + 1560);
    t15 = *((char **)t14);
    t14 = (t0 + 5296);
    xsi_vlogvar_assign_value(t14, t15, 0, 0, 3);
    goto LAB19;

LAB23:    xsi_set_current_line(59, ng33);

LAB26:    xsi_set_current_line(60, ng33);
    t6 = (t0 + 1696);
    t8 = *((char **)t6);
    t6 = (t0 + 5296);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 3);
    goto LAB25;

LAB29:    xsi_set_current_line(67, ng33);

LAB32:    xsi_set_current_line(68, ng33);
    t6 = (t0 + 5456);
    t8 = (t6 + 56U);
    t14 = *((char **)t8);
    t15 = ((char*)((ng35)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 4, t14, 4, t15, 4);
    t17 = (t0 + 5616);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 4);
    xsi_set_current_line(69, ng33);
    t2 = (t0 + 5456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 744);
    t8 = *((char **)t6);
    t6 = ((char*)((ng32)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t8, 32, t6, 32);
    memset(t18, 0, 8);
    t14 = (t5 + 4);
    t15 = (t16 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t19 = (t12 ^ t13);
    t20 = (t11 | t19);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t15);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB36;

LAB33:    if (t23 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t18) = 1;

LAB36:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(72, ng33);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 5296);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB39:    goto LAB31;

LAB35:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(70, ng33);
    t32 = (t0 + 1832);
    t33 = *((char **)t32);
    t32 = (t0 + 5296);
    xsi_vlogvar_assign_value(t32, t33, 0, 0, 3);
    goto LAB39;

}

static void Always_85_1(char *t0)
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

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng33);
    t2 = (t0 + 8432);
    *((int *)t2) = 1;
    t3 = (t0 + 7136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng33);

LAB5:    xsi_set_current_line(86, ng33);
    t4 = (t0 + 3136U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(90, ng33);

LAB10:    xsi_set_current_line(91, ng33);
    t2 = (t0 + 5296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(92, ng33);
    t2 = (t0 + 5616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(86, ng33);

LAB9:    xsi_set_current_line(87, ng33);
    t11 = ((char*)((ng34)));
    t12 = (t0 + 5136);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(88, ng33);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 5456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_96_2(char *t0)
{
    char t6[8];
    char t34[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng33);
    t2 = (t0 + 8448);
    *((int *)t2) = 1;
    t3 = (t0 + 7384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng33);

LAB5:    xsi_set_current_line(97, ng33);
    t4 = ((char*)((ng34)));
    t5 = (t0 + 4176);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng33);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng33);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng33);
    t2 = (t0 + 3136U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB9:    t5 = (t6 + 4);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    *((unsigned int *)t6) = t14;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB10:    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 1U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 1U);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t15 | t16);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t17 | t18);
    goto LAB10;

LAB12:    xsi_set_current_line(100, ng33);
    t27 = (t0 + 5296);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);

LAB15:    t30 = (t0 + 1424);
    t31 = *((char **)t30);
    t32 = xsi_vlog_unsigned_case_compare(t29, 3, t31, 32);
    if (t32 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t29, 3, t3, 32);
    if (t32 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t29, 3, t3, 32);
    if (t32 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t32 = xsi_vlog_unsigned_case_compare(t29, 3, t3, 32);
    if (t32 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB14;

LAB16:    xsi_set_current_line(101, ng33);

LAB25:    xsi_set_current_line(102, ng33);
    t30 = ((char*)((ng34)));
    t33 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t33, t30, 0, 0, 17, 0LL);
    goto LAB24;

LAB18:    xsi_set_current_line(104, ng33);

LAB26:    xsi_set_current_line(105, ng33);
    t2 = ((char*)((ng32)));
    t4 = (t0 + 4176);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng33);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(109, ng33);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 3296U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t6, 17, 17, 2U, t4, 16, t2, 1);
    t3 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 17, 0LL);

LAB29:    xsi_set_current_line(110, ng33);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB20:    xsi_set_current_line(112, ng33);

LAB30:    xsi_set_current_line(113, ng33);
    t2 = ((char*)((ng32)));
    t4 = (t0 + 4176);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng33);
    t2 = (t0 + 3776U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB24;

LAB22:    xsi_set_current_line(121, ng33);

LAB38:    xsi_set_current_line(122, ng33);
    t2 = ((char*)((ng32)));
    t4 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB27:    xsi_set_current_line(107, ng33);
    t4 = (t0 + 3296U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng36)));
    xsi_vlogtype_concat(t6, 17, 17, 2U, t4, 1, t5, 16);
    t12 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 17, 0LL);
    goto LAB29;

LAB31:    xsi_set_current_line(114, ng33);

LAB34:    xsi_set_current_line(115, ng33);
    t4 = (t0 + 880);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(118, ng33);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t34, 0, 8);
    t5 = (t34 + 4);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 1);
    *((unsigned int *)t34) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t11 & 65535U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 65535U);
    t21 = ((char*)((ng36)));
    xsi_vlogtype_concat(t6, 17, 17, 2U, t21, 1, t34, 16);
    t27 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t27, t6, 0, 0, 17, 0LL);

LAB37:    goto LAB33;

LAB35:    xsi_set_current_line(116, ng33);
    t12 = ((char*)((ng36)));
    t21 = (t0 + 4816);
    t27 = (t21 + 56U);
    t28 = *((char **)t27);
    memset(t34, 0, 8);
    t30 = (t34 + 4);
    t31 = (t28 + 4);
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 0);
    *((unsigned int *)t34) = t19;
    t20 = *((unsigned int *)t31);
    t22 = (t20 >> 0);
    *((unsigned int *)t30) = t22;
    t23 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t23 & 65535U);
    t24 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t24 & 65535U);
    xsi_vlogtype_concat(t6, 17, 17, 2U, t34, 16, t12, 1);
    t33 = (t0 + 4816);
    xsi_vlogvar_wait_assign_value(t33, t6, 0, 0, 17, 0LL);
    goto LAB37;

}

static void Cont_127_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
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
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 7600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng33);
    t2 = (t0 + 880);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t35, 8);

LAB16:    t44 = (t0 + 8576);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 1U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 8464);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 4816);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 16);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 16);
    t27 = (t26 & 1);
    *((unsigned int *)t20) = t27;
    goto LAB9;

LAB10:    t32 = (t0 + 4816);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 0);
    t43 = (t42 & 1);
    *((unsigned int *)t36) = t43;
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t19, 1, t35, 1);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Always_129_4(char *t0)
{
    char t6[8];
    char t23[8];
    char t38[8];
    char t46[8];
    char t74[8];
    char t92[8];
    char t107[8];
    char t115[8];
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
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;

LAB0:    t1 = (t0 + 7848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng33);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 7880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(129, ng33);

LAB5:    xsi_set_current_line(130, ng33);
    t4 = (t0 + 3136U);
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
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t46, t6, 8);

LAB12:    memset(t74, 0, 8);
    t75 = (t46 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t46);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t75) != 0)
        goto LAB26;

LAB27:    t82 = (t74 + 4);
    t83 = *((unsigned int *)t74);
    t84 = (!(t83));
    t85 = *((unsigned int *)t82);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB28;

LAB29:    memcpy(t115, t74, 8);

LAB30:    t143 = (t115 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t115);
    t147 = (t146 & t145);
    t148 = (t147 != 0);
    if (t148 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(134, ng33);

LAB46:    xsi_set_current_line(135, ng33);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t12 = *((char **)t5);
    t5 = ((char*)((ng32)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t12, 32, t5, 32);
    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t18 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t18);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t18);
    t25 = (t16 | t17);
    t26 = (~(t25));
    t27 = (t15 & t26);
    if (t27 != 0)
        goto LAB50;

LAB47:    if (t25 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t23) = 1;

LAB50:    t20 = (t23 + 4);
    t28 = *((unsigned int *)t20);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(139, ng33);

LAB61:    xsi_set_current_line(140, ng33);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 1, t4, 1, t5, 1);
    t12 = (t0 + 4976);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 1, 0LL);

LAB53:
LAB44:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 5136);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 1424);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t20 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t22);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t21);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB16;

LAB13:    if (t34 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t23) = 1;

LAB16:    memset(t38, 0, 8);
    t39 = (t23 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t39) != 0)
        goto LAB19;

LAB20:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t38);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = (t6 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t37 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t38) = 1;
    goto LAB20;

LAB19:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB20;

LAB21:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t6 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t6);
    t65 = (t64 & t63);
    t66 = *((unsigned int *)t61);
    t67 = (~(t66));
    t68 = *((unsigned int *)t38);
    t69 = (t68 & t67);
    t70 = (~(t65));
    t71 = (~(t69));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t70);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t71);
    goto LAB23;

LAB24:    *((unsigned int *)t74) = 1;
    goto LAB27;

LAB26:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB27;

LAB28:    t87 = (t0 + 5136);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t0 + 1832);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    t90 = (t89 + 4);
    t93 = (t91 + 4);
    t94 = *((unsigned int *)t89);
    t95 = *((unsigned int *)t91);
    t96 = (t94 ^ t95);
    t97 = *((unsigned int *)t90);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = (t96 | t99);
    t101 = *((unsigned int *)t90);
    t102 = *((unsigned int *)t93);
    t103 = (t101 | t102);
    t104 = (~(t103));
    t105 = (t100 & t104);
    if (t105 != 0)
        goto LAB34;

LAB31:    if (t103 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t92) = 1;

LAB34:    memset(t107, 0, 8);
    t108 = (t92 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t92);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t108) != 0)
        goto LAB37;

LAB38:    t116 = *((unsigned int *)t74);
    t117 = *((unsigned int *)t107);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = (t74 + 4);
    t120 = (t107 + 4);
    t121 = (t115 + 4);
    t122 = *((unsigned int *)t119);
    t123 = *((unsigned int *)t120);
    t124 = (t122 | t123);
    *((unsigned int *)t121) = t124;
    t125 = *((unsigned int *)t121);
    t126 = (t125 != 0);
    if (t126 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB30;

LAB33:    t106 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t107) = 1;
    goto LAB38;

LAB37:    t114 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB38;

LAB39:    t127 = *((unsigned int *)t115);
    t128 = *((unsigned int *)t121);
    *((unsigned int *)t115) = (t127 | t128);
    t129 = (t74 + 4);
    t130 = (t107 + 4);
    t131 = *((unsigned int *)t129);
    t132 = (~(t131));
    t133 = *((unsigned int *)t74);
    t134 = (t133 & t132);
    t135 = *((unsigned int *)t130);
    t136 = (~(t135));
    t137 = *((unsigned int *)t107);
    t138 = (t137 & t136);
    t139 = (~(t134));
    t140 = (~(t138));
    t141 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t141 & t139);
    t142 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t142 & t140);
    goto LAB41;

LAB42:    xsi_set_current_line(130, ng33);

LAB45:    xsi_set_current_line(131, ng33);
    t149 = ((char*)((ng34)));
    t150 = (t0 + 4976);
    xsi_vlogvar_wait_assign_value(t150, t149, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng33);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 4496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB44;

LAB49:    t19 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(135, ng33);

LAB54:    xsi_set_current_line(136, ng33);
    t21 = ((char*)((ng34)));
    t22 = (t0 + 4976);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng33);
    t2 = (t0 + 4496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t5) == 0)
        goto LAB55;

LAB57:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB58:    t13 = (t6 + 4);
    t18 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB60;

LAB59:    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 1U);
    t28 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t28 & 1U);
    t19 = (t0 + 4496);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 1, 0LL);
    goto LAB53;

LAB55:    *((unsigned int *)t6) = 1;
    goto LAB58;

LAB60:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t18);
    *((unsigned int *)t6) = (t16 | t17);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t13) = (t25 | t26);
    goto LAB59;

}

static void Cont_145_5(char *t0)
{
    char t7[8];
    char t8[8];
    char t24[8];
    char t39[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;

LAB0:    t1 = (t0 + 8096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng33);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    t5 = ((char*)((ng32)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB12;

LAB13:    memcpy(t47, t24, 8);

LAB14:    t79 = (t0 + 8640);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memset(t83, 0, 8);
    t84 = 1U;
    t85 = t84;
    t86 = (t47 + 4);
    t87 = *((unsigned int *)t47);
    t84 = (t84 & t87);
    t88 = *((unsigned int *)t86);
    t85 = (t85 & t88);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t90 | t84);
    t91 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t91 | t85);
    xsi_driver_vfirst_trans(t79, 0, 0);
    t92 = (t0 + 8496);
    *((int *)t92) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB10:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t36 = (t0 + 4496);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t38);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t40) != 0)
        goto LAB17;

LAB18:    t48 = *((unsigned int *)t24);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t24 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t39) = 1;
    goto LAB18;

LAB17:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB18;

LAB19:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t24 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t24);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB21;

}


extern void work_m_00000000000895984733_0838550014_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Always_85_1,(void *)Always_96_2,(void *)Cont_127_3,(void *)Always_129_4,(void *)Cont_145_5};
	static char *se[] = {(void *)sp_GET_WIDTH};
	xsi_register_didat("work_m_00000000000895984733_0838550014", "isim/test_top_isim_beh.exe.sim/work/m_00000000000895984733_0838550014.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
