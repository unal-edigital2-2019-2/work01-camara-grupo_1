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
static const char *ng0 = "/home/jhonathann/Escritorio/Digital 2/Proyecto digital 2/work01-camara-grupo_1/hw/Captura_de_datos.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {32767U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {7, 0};
static int ng5[] = {6, 0};
static int ng6[] = {5, 0};
static int ng7[] = {4, 0};
static int ng8[] = {3, 0};
static int ng9[] = {2, 0};



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 15, 0LL);

LAB1:    return;
}

static void Always_41_1(char *t0)
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

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4456);
    *((int *)t2) = 1;
    t3 = (t0 + 3920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
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

LAB7:    xsi_set_current_line(44, ng0);

LAB10:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_49_2(char *t0)
{
    char t24[8];
    char t48[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    int t64;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4472);
    *((int *)t2) = 1;
    t3 = (t0 + 4168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(73, ng0);

LAB47:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t13 = (t14 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(70, ng0);

LAB46:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t20 = (t0 + 2568);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng1)));
    memset(t24, 0, 8);
    t25 = (t22 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB17;

LAB14:    if (t36 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t24) = 1;

LAB17:    t40 = (t24 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t24, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t15 = (t11 ^ t12);
    t16 = (t10 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t27 = (~(t19));
    t28 = (t16 & t27);
    if (t28 != 0)
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t24) = 1;

LAB35:    t14 = (t24 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB12;

LAB16:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(52, ng0);

LAB21:    xsi_set_current_line(53, ng0);
    t46 = (t0 + 1528U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t48 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 6);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 6);
    t55 = (t54 & 1);
    *((unsigned int *)t46) = t55;
    t56 = (t0 + 2088);
    t58 = (t0 + 2088);
    t59 = (t58 + 72U);
    t60 = *((char **)t59);
    t61 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t57, t60, 2, t61, 32, 1);
    t62 = (t57 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    if (t64 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t24 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t24) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 5);
    t15 = (t12 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 2088);
    t6 = (t0 + 2088);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t48, t13, 2, t14, 32, 1);
    t20 = (t48 + 4);
    t16 = *((unsigned int *)t20);
    t64 = (!(t16));
    if (t64 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t24 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t24) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t15 = (t12 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 2088);
    t6 = (t0 + 2088);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t48, t13, 2, t14, 32, 1);
    t20 = (t48 + 4);
    t16 = *((unsigned int *)t20);
    t64 = (!(t16));
    if (t64 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t24 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t24) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t15 = (t12 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 2088);
    t6 = (t0 + 2088);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t48, t13, 2, t14, 32, 1);
    t20 = (t48 + 4);
    t16 = *((unsigned int *)t20);
    t64 = (!(t16));
    if (t64 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t24 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t24) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t15 = (t12 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 2088);
    t6 = (t0 + 2088);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t48, t13, 2, t14, 32, 1);
    t20 = (t48 + 4);
    t16 = *((unsigned int *)t20);
    t64 = (!(t16));
    if (t64 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB22:    xsi_vlogvar_wait_assign_value(t56, t48, 0, *((unsigned int *)t57), 1, 0LL);
    goto LAB23;

LAB24:    xsi_vlogvar_wait_assign_value(t5, t24, 0, *((unsigned int *)t48), 1, 0LL);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t5, t24, 0, *((unsigned int *)t48), 1, 0LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t5, t24, 0, *((unsigned int *)t48), 1, 0LL);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t5, t24, 0, *((unsigned int *)t48), 1, 0LL);
    goto LAB31;

LAB34:    t13 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(61, ng0);

LAB39:    xsi_set_current_line(62, ng0);
    t20 = (t0 + 1528U);
    t21 = *((char **)t20);
    memset(t48, 0, 8);
    t20 = (t48 + 4);
    t22 = (t21 + 4);
    t34 = *((unsigned int *)t21);
    t35 = (t34 >> 7);
    t36 = (t35 & 1);
    *((unsigned int *)t48) = t36;
    t37 = *((unsigned int *)t22);
    t38 = (t37 >> 7);
    t41 = (t38 & 1);
    *((unsigned int *)t20) = t41;
    t23 = (t0 + 2088);
    t25 = (t0 + 2088);
    t26 = (t25 + 72U);
    t39 = *((char **)t26);
    t40 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t57, t39, 2, t40, 32, 1);
    t46 = (t57 + 4);
    t42 = *((unsigned int *)t46);
    t64 = (!(t42));
    if (t64 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t24 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t24) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t15 = (t12 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 2088);
    t6 = (t0 + 2088);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t48, t13, 2, t14, 32, 1);
    t20 = (t48 + 4);
    t16 = *((unsigned int *)t20);
    t64 = (!(t16));
    if (t64 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t24 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t24) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t15 = (t12 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 2088);
    t6 = (t0 + 2088);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t48, t13, 2, t14, 32, 1);
    t20 = (t48 + 4);
    t16 = *((unsigned int *)t20);
    t64 = (!(t16));
    if (t64 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t4, 15, t5, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t24, 0, 0, 15, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t4, 15, t5, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t24, 0, 0, 15, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB38;

LAB40:    xsi_vlogvar_wait_assign_value(t23, t48, 0, *((unsigned int *)t57), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t5, t24, 0, *((unsigned int *)t48), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t5, t24, 0, *((unsigned int *)t48), 1, 0LL);
    goto LAB45;

}


extern void work_m_14104709039600615718_3830520413_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_41_1,(void *)Always_49_2};
	xsi_register_didat("work_m_14104709039600615718_3830520413", "isim/test_cam_isim_beh.exe.sim/work/m_14104709039600615718_3830520413.didat");
	xsi_register_executes(pe);
}
