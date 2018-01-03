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
static const char *ng33 = "//Mac/Home/Desktop/Code/Arch/Framework/display.v";
static unsigned int ng34[] = {0U, 0U};
static unsigned int ng35[] = {63U, 0U};
static unsigned int ng36[] = {1U, 0U};
static unsigned int ng37[] = {6U, 0U};
static unsigned int ng38[] = {2U, 0U};
static unsigned int ng39[] = {91U, 0U};
static unsigned int ng40[] = {3U, 0U};
static unsigned int ng41[] = {79U, 0U};
static unsigned int ng42[] = {4U, 0U};
static unsigned int ng43[] = {102U, 0U};
static unsigned int ng44[] = {5U, 0U};
static unsigned int ng45[] = {109U, 0U};
static unsigned int ng46[] = {125U, 0U};
static unsigned int ng47[] = {7U, 0U};
static unsigned int ng48[] = {8U, 0U};
static unsigned int ng49[] = {127U, 0U};
static unsigned int ng50[] = {9U, 0U};
static unsigned int ng51[] = {111U, 0U};
static unsigned int ng52[] = {10U, 0U};
static unsigned int ng53[] = {119U, 0U};
static unsigned int ng54[] = {11U, 0U};
static unsigned int ng55[] = {124U, 0U};
static unsigned int ng56[] = {12U, 0U};
static unsigned int ng57[] = {57U, 0U};
static unsigned int ng58[] = {13U, 0U};
static unsigned int ng59[] = {94U, 0U};
static unsigned int ng60[] = {14U, 0U};
static unsigned int ng61[] = {121U, 0U};
static unsigned int ng62[] = {15U, 0U};
static unsigned int ng63[] = {113U, 0U};
static int ng64[] = {0, 0};



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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t3 = (t1 + 6512);
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
    t4 = (t1 + 6352);
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
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB5;

LAB6:    xsi_set_current_line(11, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB8;

LAB9:    xsi_set_current_line(12, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB11;

LAB12:    xsi_set_current_line(13, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB14;

LAB15:    xsi_set_current_line(14, ng0);
    t21 = ((char*)((ng5)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB17;

LAB18:    xsi_set_current_line(15, ng0);
    t21 = ((char*)((ng6)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB20;

LAB21:    xsi_set_current_line(16, ng0);
    t21 = ((char*)((ng7)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB23;

LAB24:    xsi_set_current_line(17, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB26;

LAB27:    xsi_set_current_line(18, ng0);
    t21 = ((char*)((ng9)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB29;

LAB30:    xsi_set_current_line(19, ng0);
    t21 = ((char*)((ng10)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB32;

LAB33:    xsi_set_current_line(20, ng0);
    t21 = ((char*)((ng11)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB35;

LAB36:    xsi_set_current_line(21, ng0);
    t21 = ((char*)((ng12)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB38;

LAB39:    xsi_set_current_line(22, ng0);
    t21 = ((char*)((ng13)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB41;

LAB42:    xsi_set_current_line(23, ng0);
    t21 = ((char*)((ng14)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB44;

LAB45:    xsi_set_current_line(24, ng0);
    t21 = ((char*)((ng15)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB47;

LAB48:    xsi_set_current_line(25, ng0);
    t21 = ((char*)((ng16)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB50;

LAB51:    xsi_set_current_line(26, ng0);
    t21 = ((char*)((ng17)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB53;

LAB54:    xsi_set_current_line(27, ng0);
    t21 = ((char*)((ng18)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB56;

LAB57:    xsi_set_current_line(28, ng0);
    t21 = ((char*)((ng19)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB59;

LAB60:    xsi_set_current_line(29, ng0);
    t21 = ((char*)((ng20)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB62;

LAB63:    xsi_set_current_line(30, ng0);
    t21 = ((char*)((ng21)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB65;

LAB66:    xsi_set_current_line(31, ng0);
    t21 = ((char*)((ng22)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB68;

LAB69:    xsi_set_current_line(32, ng0);
    t21 = ((char*)((ng23)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB71;

LAB72:    xsi_set_current_line(33, ng0);
    t21 = ((char*)((ng24)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB74;

LAB75:    xsi_set_current_line(34, ng0);
    t21 = ((char*)((ng25)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB77;

LAB78:    xsi_set_current_line(35, ng0);
    t21 = ((char*)((ng26)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB80;

LAB81:    xsi_set_current_line(36, ng0);
    t21 = ((char*)((ng27)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB83;

LAB84:    xsi_set_current_line(37, ng0);
    t21 = ((char*)((ng28)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB86;

LAB87:    xsi_set_current_line(38, ng0);
    t21 = ((char*)((ng29)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB89;

LAB90:    xsi_set_current_line(39, ng0);
    t21 = ((char*)((ng30)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB92;

LAB93:    xsi_set_current_line(40, ng0);
    t21 = ((char*)((ng31)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB95;

LAB96:    xsi_set_current_line(41, ng0);
    t21 = ((char*)((ng32)));
    t22 = (t1 + 6352);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);
    goto LAB98;

}

static int sp_digit2seg(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(39, ng33);

LAB2:    xsi_set_current_line(40, ng33);
    t3 = (t1 + 6832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng34)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng36)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng38)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng40)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng42)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng44)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng37)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng47)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng48)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng50)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng52)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng54)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng56)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng58)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng60)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng62)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB34;

LAB35:
LAB36:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(41, ng33);
    t8 = ((char*)((ng35)));
    t9 = (t1 + 6672);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 7);
    goto LAB36;

LAB6:    xsi_set_current_line(42, ng33);
    t4 = ((char*)((ng37)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB8:    xsi_set_current_line(43, ng33);
    t4 = ((char*)((ng39)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB10:    xsi_set_current_line(44, ng33);
    t4 = ((char*)((ng41)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB12:    xsi_set_current_line(45, ng33);
    t4 = ((char*)((ng43)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB14:    xsi_set_current_line(46, ng33);
    t4 = ((char*)((ng45)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB16:    xsi_set_current_line(47, ng33);
    t4 = ((char*)((ng46)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB18:    xsi_set_current_line(48, ng33);
    t4 = ((char*)((ng47)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB20:    xsi_set_current_line(49, ng33);
    t4 = ((char*)((ng49)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB22:    xsi_set_current_line(50, ng33);
    t4 = ((char*)((ng51)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB24:    xsi_set_current_line(51, ng33);
    t4 = ((char*)((ng53)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB26:    xsi_set_current_line(52, ng33);
    t4 = ((char*)((ng55)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB28:    xsi_set_current_line(53, ng33);
    t4 = ((char*)((ng57)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB30:    xsi_set_current_line(54, ng33);
    t4 = ((char*)((ng59)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB32:    xsi_set_current_line(55, ng33);
    t4 = ((char*)((ng61)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

LAB34:    xsi_set_current_line(56, ng33);
    t4 = ((char*)((ng63)));
    t6 = (t1 + 6672);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 7);
    goto LAB36;

}

static void Cont_65_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 14456);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 7, 7);
    t25 = (t0 + 14024);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_65_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 8000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 2912U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t56, 8);

LAB16:    t57 = (t0 + 14520);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 127U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 6);
    t70 = (t0 + 14040);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3072U);
    t27 = *((char **)t26);
    t26 = (t0 + 3032U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng30)));
    t31 = ((char*)((ng29)));
    xsi_vlog_get_indexed_partselect(t25, 4, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 0);
    t32 = (t0 + 7808);
    t33 = (t0 + 1960);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 6832);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);

LAB17:    t36 = (t0 + 7904);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB19;

LAB18:    t37 = (t0 + 7904);
    t45 = *((char **)t37);
    t37 = (t0 + 6672);
    t46 = (t37 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    t49 = (t0 + 1960);
    t50 = (t0 + 7808);
    t51 = 0;
    xsi_delete_subprogram_invocation(t49, t45, t0, t50, t51);
    goto LAB9;

LAB10:    t56 = ((char*)((ng34)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t48, 7, t56, 7);
    goto LAB16;

LAB14:    memcpy(t3, t48, 8);
    goto LAB16;

LAB19:    t36 = (t0 + 8000U);
    *((char **)t36) = &&LAB17;
    goto LAB1;

}

static void Cont_65_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 8248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 14584);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 15, 15);
    t25 = (t0 + 14056);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_65_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 8496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 2912U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t56, 8);

LAB16:    t57 = (t0 + 14648);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 127U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 8, 14);
    t70 = (t0 + 14072);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3072U);
    t27 = *((char **)t26);
    t26 = (t0 + 3032U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng26)));
    t31 = ((char*)((ng29)));
    xsi_vlog_get_indexed_partselect(t25, 4, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 0);
    t32 = (t0 + 8304);
    t33 = (t0 + 1960);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 6832);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);

LAB17:    t36 = (t0 + 8400);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB19;

LAB18:    t37 = (t0 + 8400);
    t45 = *((char **)t37);
    t37 = (t0 + 6672);
    t46 = (t37 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    t49 = (t0 + 1960);
    t50 = (t0 + 8304);
    t51 = 0;
    xsi_delete_subprogram_invocation(t49, t45, t0, t50, t51);
    goto LAB9;

LAB10:    t56 = ((char*)((ng34)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t48, 7, t56, 7);
    goto LAB16;

LAB14:    memcpy(t3, t48, 8);
    goto LAB16;

LAB19:    t36 = (t0 + 8496U);
    *((char **)t36) = &&LAB17;
    goto LAB1;

}

static void Cont_65_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 8744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 14712);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 23, 23);
    t25 = (t0 + 14088);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_65_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 8992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 2912U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t56, 8);

LAB16:    t57 = (t0 + 14776);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 127U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 16, 22);
    t70 = (t0 + 14104);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3072U);
    t27 = *((char **)t26);
    t26 = (t0 + 3032U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng22)));
    t31 = ((char*)((ng29)));
    xsi_vlog_get_indexed_partselect(t25, 4, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 0);
    t32 = (t0 + 8800);
    t33 = (t0 + 1960);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 6832);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);

LAB17:    t36 = (t0 + 8896);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB19;

LAB18:    t37 = (t0 + 8896);
    t45 = *((char **)t37);
    t37 = (t0 + 6672);
    t46 = (t37 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    t49 = (t0 + 1960);
    t50 = (t0 + 8800);
    t51 = 0;
    xsi_delete_subprogram_invocation(t49, t45, t0, t50, t51);
    goto LAB9;

LAB10:    t56 = ((char*)((ng34)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t48, 7, t56, 7);
    goto LAB16;

LAB14:    memcpy(t3, t48, 8);
    goto LAB16;

LAB19:    t36 = (t0 + 8992U);
    *((char **)t36) = &&LAB17;
    goto LAB1;

}

static void Cont_65_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 9240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 14840);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 31, 31);
    t25 = (t0 + 14120);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_65_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 9488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 2912U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t56, 8);

LAB16:    t57 = (t0 + 14904);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 127U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 24, 30);
    t70 = (t0 + 14136);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3072U);
    t27 = *((char **)t26);
    t26 = (t0 + 3032U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng18)));
    t31 = ((char*)((ng29)));
    xsi_vlog_get_indexed_partselect(t25, 4, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 0);
    t32 = (t0 + 9296);
    t33 = (t0 + 1960);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 6832);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);

LAB17:    t36 = (t0 + 9392);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB19;

LAB18:    t37 = (t0 + 9392);
    t45 = *((char **)t37);
    t37 = (t0 + 6672);
    t46 = (t37 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    t49 = (t0 + 1960);
    t50 = (t0 + 9296);
    t51 = 0;
    xsi_delete_subprogram_invocation(t49, t45, t0, t50, t51);
    goto LAB9;

LAB10:    t56 = ((char*)((ng34)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t48, 7, t56, 7);
    goto LAB16;

LAB14:    memcpy(t3, t48, 8);
    goto LAB16;

LAB19:    t36 = (t0 + 9488U);
    *((char **)t36) = &&LAB17;
    goto LAB1;

}

static void Cont_65_8(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 9736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 14968);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 39, 39);
    t25 = (t0 + 14152);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_65_9(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 9984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 2912U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t56, 8);

LAB16:    t57 = (t0 + 15032);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 127U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 32, 38);
    t70 = (t0 + 14168);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3072U);
    t27 = *((char **)t26);
    t26 = (t0 + 3032U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng14)));
    t31 = ((char*)((ng29)));
    xsi_vlog_get_indexed_partselect(t25, 4, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 0);
    t32 = (t0 + 9792);
    t33 = (t0 + 1960);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 6832);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);

LAB17:    t36 = (t0 + 9888);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB19;

LAB18:    t37 = (t0 + 9888);
    t45 = *((char **)t37);
    t37 = (t0 + 6672);
    t46 = (t37 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    t49 = (t0 + 1960);
    t50 = (t0 + 9792);
    t51 = 0;
    xsi_delete_subprogram_invocation(t49, t45, t0, t50, t51);
    goto LAB9;

LAB10:    t56 = ((char*)((ng34)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t48, 7, t56, 7);
    goto LAB16;

LAB14:    memcpy(t3, t48, 8);
    goto LAB16;

LAB19:    t36 = (t0 + 9984U);
    *((char **)t36) = &&LAB17;
    goto LAB1;

}

static void Cont_65_10(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 10232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 15096);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 47, 47);
    t25 = (t0 + 14184);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_65_11(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 10480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 2912U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t56, 8);

LAB16:    t57 = (t0 + 15160);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 127U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 40, 46);
    t70 = (t0 + 14200);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3072U);
    t27 = *((char **)t26);
    t26 = (t0 + 3032U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng10)));
    t31 = ((char*)((ng29)));
    xsi_vlog_get_indexed_partselect(t25, 4, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 0);
    t32 = (t0 + 10288);
    t33 = (t0 + 1960);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 6832);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);

LAB17:    t36 = (t0 + 10384);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB19;

LAB18:    t37 = (t0 + 10384);
    t45 = *((char **)t37);
    t37 = (t0 + 6672);
    t46 = (t37 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    t49 = (t0 + 1960);
    t50 = (t0 + 10288);
    t51 = 0;
    xsi_delete_subprogram_invocation(t49, t45, t0, t50, t51);
    goto LAB9;

LAB10:    t56 = ((char*)((ng34)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t48, 7, t56, 7);
    goto LAB16;

LAB14:    memcpy(t3, t48, 8);
    goto LAB16;

LAB19:    t36 = (t0 + 10480U);
    *((char **)t36) = &&LAB17;
    goto LAB1;

}

static void Cont_65_12(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 10728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 6);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 15224);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 55, 55);
    t25 = (t0 + 14216);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_65_13(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 10976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 2912U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t56, 8);

LAB16:    t57 = (t0 + 15288);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 127U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 48, 54);
    t70 = (t0 + 14232);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3072U);
    t27 = *((char **)t26);
    t26 = (t0 + 3032U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    t31 = ((char*)((ng29)));
    xsi_vlog_get_indexed_partselect(t25, 4, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 0);
    t32 = (t0 + 10784);
    t33 = (t0 + 1960);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 6832);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);

LAB17:    t36 = (t0 + 10880);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB19;

LAB18:    t37 = (t0 + 10880);
    t45 = *((char **)t37);
    t37 = (t0 + 6672);
    t46 = (t37 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    t49 = (t0 + 1960);
    t50 = (t0 + 10784);
    t51 = 0;
    xsi_delete_subprogram_invocation(t49, t45, t0, t50, t51);
    goto LAB9;

LAB10:    t56 = ((char*)((ng34)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t48, 7, t56, 7);
    goto LAB16;

LAB14:    memcpy(t3, t48, 8);
    goto LAB16;

LAB19:    t36 = (t0 + 10976U);
    *((char **)t36) = &&LAB17;
    goto LAB1;

}

static void Cont_65_14(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 11224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 15352);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 63, 63);
    t25 = (t0 + 14248);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_65_15(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 11472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng33);
    t2 = (t0 + 2912U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t52 = *((unsigned int *)t4);
    t53 = (~(t52));
    t54 = *((unsigned int *)t21);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t56, 8);

LAB16:    t57 = (t0 + 15416);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 127U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 56, 62);
    t70 = (t0 + 14264);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 3072U);
    t27 = *((char **)t26);
    t26 = (t0 + 3032U);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    t31 = ((char*)((ng29)));
    xsi_vlog_get_indexed_partselect(t25, 4, t27, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1, 0);
    t32 = (t0 + 11280);
    t33 = (t0 + 1960);
    t34 = xsi_create_subprogram_invocation(t32, 0, t0, t33, 0, 0);
    t35 = (t0 + 6832);
    xsi_vlogvar_assign_value(t35, t25, 0, 0, 4);

LAB17:    t36 = (t0 + 11376);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t40 = (t39 + 272U);
    t41 = *((char **)t40);
    t42 = (t41 + 0U);
    t43 = *((char **)t42);
    t44 = ((int  (*)(char *, char *))t43)(t0, t37);
    if (t44 != 0)
        goto LAB19;

LAB18:    t37 = (t0 + 11376);
    t45 = *((char **)t37);
    t37 = (t0 + 6672);
    t46 = (t37 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    t49 = (t0 + 1960);
    t50 = (t0 + 11280);
    t51 = 0;
    xsi_delete_subprogram_invocation(t49, t45, t0, t50, t51);
    goto LAB9;

LAB10:    t56 = ((char*)((ng34)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 7, t48, 7, t56, 7);
    goto LAB16;

LAB14:    memcpy(t3, t48, 8);
    goto LAB16;

LAB19:    t36 = (t0 + 11472U);
    *((char **)t36) = &&LAB17;
    goto LAB1;

}

static void Cont_75_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 11720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng33);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 15480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_75_17(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
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
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 11968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng33);
    t2 = (t0 + 5312U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 15544);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 14280);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Cont_75_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 12216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng33);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 15608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_75_19(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
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
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 12464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng33);
    t2 = (t0 + 5472U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 15672);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 14296);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Always_115_20(char *t0)
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

LAB0:    t1 = (t0 + 12712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng33);
    t2 = (t0 + 14312);
    *((int *)t2) = 1;
    t3 = (t0 + 12744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng33);

LAB5:    xsi_set_current_line(116, ng33);
    t4 = (t0 + 2752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(118, ng33);
    t2 = (t0 + 6192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 21);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 21);
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

LAB10:    xsi_set_current_line(121, ng33);
    t2 = (t0 + 6192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 22, t4, 22, t5, 22);
    t11 = (t0 + 6192);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 22, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(117, ng33);
    t11 = ((char*)((ng64)));
    t12 = (t0 + 6192);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 22, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(119, ng33);
    t20 = ((char*)((ng64)));
    t21 = (t0 + 6192);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 22, 0LL);
    goto LAB11;

}

static void Cont_124_21(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 12960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng33);
    t2 = (t0 + 6192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 21);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 21);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 15736);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 14328);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_124_22(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 13208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng33);
    t2 = (t0 + 6192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 21);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 21);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 15800);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 14344);
    *((int *)t27) = 1;

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
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
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 13456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng34)));
    memset(t4, 0, 8);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t33 = (t0 + 15864);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t37, 0, 8);
    t38 = 65535U;
    t39 = t38;
    t40 = (t3 + 4);
    t41 = *((unsigned int *)t3);
    t38 = (t38 & t41);
    t42 = *((unsigned int *)t40);
    t39 = (t39 & t42);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 | t38);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t45 | t39);
    xsi_driver_vfirst_trans(t33, 0, 15);
    t46 = (t0 + 14360);
    *((int *)t46) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3392U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 3392U);
    t23 = *((char **)t16);
    memset(t22, 0, 8);
    t16 = (t22 + 4);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    *((unsigned int *)t22) = t26;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB18;

LAB17:    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 65535U);
    t32 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t32 & 65535U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t17, 16, t22, 16);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB18:    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t22) = (t27 | t28);
    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t16) = (t29 | t30);
    goto LAB17;

}

static void implSig2_execute(char *t0)
{
    char t3[16];
    char t4[8];
    char t22[16];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 13704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng34)));
    memset(t4, 0, 8);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 16);

LAB16:    t16 = (t0 + 15928);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_bit_copy(t27, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t28 = (t0 + 14376);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 4832U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 4832U);
    t23 = *((char **)t16);
    xsi_vlogtype_unsigned_bit_neg(t22, 64, t23, 64);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 64, t17, 64, t22, 64);
    goto LAB16;

LAB14:    memcpy(t3, t17, 16);
    goto LAB16;

}


extern void work_m_00000000003199384156_1474961982_init()
{
	static char *pe[] = {(void *)Cont_65_0,(void *)Cont_65_1,(void *)Cont_65_2,(void *)Cont_65_3,(void *)Cont_65_4,(void *)Cont_65_5,(void *)Cont_65_6,(void *)Cont_65_7,(void *)Cont_65_8,(void *)Cont_65_9,(void *)Cont_65_10,(void *)Cont_65_11,(void *)Cont_65_12,(void *)Cont_65_13,(void *)Cont_65_14,(void *)Cont_65_15,(void *)Cont_75_16,(void *)Cont_75_17,(void *)Cont_75_18,(void *)Cont_75_19,(void *)Always_115_20,(void *)Cont_124_21,(void *)Cont_124_22,(void *)implSig1_execute,(void *)implSig2_execute};
	static char *se[] = {(void *)sp_GET_WIDTH,(void *)sp_digit2seg};
	xsi_register_didat("work_m_00000000003199384156_1474961982", "isim/test_top_isim_beh.exe.sim/work/m_00000000003199384156_1474961982.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
