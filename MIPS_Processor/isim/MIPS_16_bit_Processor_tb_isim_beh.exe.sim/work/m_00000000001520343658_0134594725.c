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
static const char *ng0 = "C:/Users/Namit/Desktop/MIPS/MIPS_Proessor/branch_predictor.v";
static unsigned int ng1[] = {7U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};



static void Cont_33_0(char *t0)
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

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 4680);
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
    t27 = (t0 + 4552);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_35_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t42[8];
    char t43[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
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
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1528U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 2);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t79 = *((unsigned int *)t4);
    t80 = (~(t79));
    t81 = *((unsigned int *)t38);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t84, 8);

LAB20:    t83 = (t0 + 4744);
    t85 = (t83 + 56U);
    t86 = *((char **)t85);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    memset(t88, 0, 8);
    t89 = 1U;
    t90 = t89;
    t91 = (t3 + 4);
    t92 = *((unsigned int *)t3);
    t89 = (t89 & t92);
    t93 = *((unsigned int *)t91);
    t90 = (t90 & t93);
    t94 = (t88 + 4);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t95 | t89);
    t96 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t96 | t90);
    xsi_driver_vfirst_trans_delayed(t83, 0, 0, 0LL, 0);
    t97 = (t0 + 4568);
    *((int *)t97) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 1048U);
    t45 = *((char **)t44);
    t44 = (t0 + 1688U);
    t46 = *((char **)t44);
    memset(t47, 0, 8);
    t44 = (t45 + 4);
    t48 = (t46 + 4);
    t49 = *((unsigned int *)t45);
    t50 = *((unsigned int *)t46);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t44);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB24;

LAB21:    if (t58 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t47) = 1;

LAB24:    memset(t43, 0, 8);
    t62 = (t47 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t47);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t62) != 0)
        goto LAB27;

LAB28:    t69 = (t43 + 4);
    t70 = *((unsigned int *)t43);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t43);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t69) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t43) > 0)
        goto LAB35;

LAB36:    memcpy(t42, t78, 8);

LAB37:    goto LAB13;

LAB14:    t83 = (t0 + 2008U);
    t84 = *((char **)t83);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t42, 1, t84, 1);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

LAB23:    t61 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t43) = 1;
    goto LAB28;

LAB27:    t68 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB28;

LAB29:    t73 = ((char*)((ng2)));
    goto LAB30;

LAB31:    t78 = ((char*)((ng3)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t42, 1, t73, 1, t78, 1);
    goto LAB37;

LAB35:    memcpy(t42, t73, 8);
    goto LAB37;

}

static void Cont_37_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 1);
    t18 = (t0 + 4584);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_39_3(char *t0)
{
    char t4[8];
    char t5[8];
    char t38[8];
    char t39[8];
    char t40[8];
    char t66[8];
    char t67[8];
    char t72[8];
    char t92[8];
    char t108[8];
    char t157[8];
    char t158[8];
    char t163[8];
    char t183[8];
    char t199[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
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
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
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
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
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
    char *t94;
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
    unsigned int t106;
    char *t107;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    char *t233;
    char *t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    char *t244;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4600);
    *((int *)t2) = 1;
    t3 = (t0 + 4264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t6 = (t0 + 1368U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t25, 8);

LAB18:    t26 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t7 = ((char*)((ng1)));
    memset(t5, 0, 8);
    t13 = (t4 + 4);
    t14 = (t7 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t7);
    t21 = (t16 ^ t17);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 ^ t23);
    t27 = (t21 | t24);
    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t14);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB22;

LAB19:    if (t30 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t5) = 1;

LAB22:    t19 = (t5 + 4);
    t33 = *((unsigned int *)t19);
    t34 = (~(t33));
    t35 = *((unsigned int *)t5);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2408);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB11;

LAB12:    t25 = ((char*)((ng2)));
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 2, t20, 2, t25, 2);
    goto LAB18;

LAB16:    memcpy(t4, t20, 8);
    goto LAB18;

LAB21:    t18 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(41, ng0);

LAB26:    xsi_set_current_line(42, ng0);
    t20 = (t0 + 2008U);
    t25 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t40, 0, 8);
    t26 = (t25 + 4);
    t41 = (t20 + 4);
    t42 = *((unsigned int *)t25);
    t43 = *((unsigned int *)t20);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t26);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t26);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB30;

LAB27:    if (t51 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t40) = 1;

LAB30:    memset(t39, 0, 8);
    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t55) != 0)
        goto LAB33;

LAB34:    t62 = (t39 + 4);
    t63 = *((unsigned int *)t39);
    t64 = *((unsigned int *)t62);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB35;

LAB36:    t153 = *((unsigned int *)t39);
    t154 = (~(t153));
    t155 = *((unsigned int *)t62);
    t156 = (t154 || t155);
    if (t156 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t62) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t39) > 0)
        goto LAB41;

LAB42:    memcpy(t38, t157, 8);

LAB43:    t244 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t244, t38, 0, 0, 2, 0LL);
    goto LAB25;

LAB29:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t39) = 1;
    goto LAB34;

LAB33:    t61 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB34;

LAB35:    t68 = (t0 + 2408);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = ((char*)((ng2)));
    memset(t72, 0, 8);
    t73 = (t70 + 4);
    t74 = (t71 + 4);
    t75 = *((unsigned int *)t70);
    t76 = *((unsigned int *)t71);
    t77 = (t75 ^ t76);
    t78 = *((unsigned int *)t73);
    t79 = *((unsigned int *)t74);
    t80 = (t78 ^ t79);
    t81 = (t77 | t80);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t74);
    t84 = (t82 | t83);
    t85 = (~(t84));
    t86 = (t81 & t85);
    if (t86 != 0)
        goto LAB47;

LAB44:    if (t84 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t72) = 1;

LAB47:    t88 = (t0 + 2408);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng4)));
    memset(t92, 0, 8);
    t93 = (t90 + 4);
    t94 = (t91 + 4);
    t95 = *((unsigned int *)t90);
    t96 = *((unsigned int *)t91);
    t97 = (t95 ^ t96);
    t98 = *((unsigned int *)t93);
    t99 = *((unsigned int *)t94);
    t100 = (t98 ^ t99);
    t101 = (t97 | t100);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t94);
    t104 = (t102 | t103);
    t105 = (~(t104));
    t106 = (t101 & t105);
    if (t106 != 0)
        goto LAB51;

LAB48:    if (t104 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t92) = 1;

LAB51:    t109 = *((unsigned int *)t72);
    t110 = *((unsigned int *)t92);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = (t72 + 4);
    t113 = (t92 + 4);
    t114 = (t108 + 4);
    t115 = *((unsigned int *)t112);
    t116 = *((unsigned int *)t113);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 != 0);
    if (t119 == 1)
        goto LAB52;

LAB53:
LAB54:    memset(t67, 0, 8);
    t136 = (t108 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t108);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t136) != 0)
        goto LAB57;

LAB58:    t143 = (t67 + 4);
    t144 = *((unsigned int *)t67);
    t145 = *((unsigned int *)t143);
    t146 = (t144 || t145);
    if (t146 > 0)
        goto LAB59;

LAB60:    t148 = *((unsigned int *)t67);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (t149 || t150);
    if (t151 > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t143) > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t67) > 0)
        goto LAB65;

LAB66:    memcpy(t66, t152, 8);

LAB67:    goto LAB36;

LAB37:    t159 = (t0 + 2408);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    t162 = ((char*)((ng4)));
    memset(t163, 0, 8);
    t164 = (t161 + 4);
    t165 = (t162 + 4);
    t166 = *((unsigned int *)t161);
    t167 = *((unsigned int *)t162);
    t168 = (t166 ^ t167);
    t169 = *((unsigned int *)t164);
    t170 = *((unsigned int *)t165);
    t171 = (t169 ^ t170);
    t172 = (t168 | t171);
    t173 = *((unsigned int *)t164);
    t174 = *((unsigned int *)t165);
    t175 = (t173 | t174);
    t176 = (~(t175));
    t177 = (t172 & t176);
    if (t177 != 0)
        goto LAB71;

LAB68:    if (t175 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t163) = 1;

LAB71:    t179 = (t0 + 2408);
    t180 = (t179 + 56U);
    t181 = *((char **)t180);
    t182 = ((char*)((ng5)));
    memset(t183, 0, 8);
    t184 = (t181 + 4);
    t185 = (t182 + 4);
    t186 = *((unsigned int *)t181);
    t187 = *((unsigned int *)t182);
    t188 = (t186 ^ t187);
    t189 = *((unsigned int *)t184);
    t190 = *((unsigned int *)t185);
    t191 = (t189 ^ t190);
    t192 = (t188 | t191);
    t193 = *((unsigned int *)t184);
    t194 = *((unsigned int *)t185);
    t195 = (t193 | t194);
    t196 = (~(t195));
    t197 = (t192 & t196);
    if (t197 != 0)
        goto LAB75;

LAB72:    if (t195 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t183) = 1;

LAB75:    t200 = *((unsigned int *)t163);
    t201 = *((unsigned int *)t183);
    t202 = (t200 | t201);
    *((unsigned int *)t199) = t202;
    t203 = (t163 + 4);
    t204 = (t183 + 4);
    t205 = (t199 + 4);
    t206 = *((unsigned int *)t203);
    t207 = *((unsigned int *)t204);
    t208 = (t206 | t207);
    *((unsigned int *)t205) = t208;
    t209 = *((unsigned int *)t205);
    t210 = (t209 != 0);
    if (t210 == 1)
        goto LAB76;

LAB77:
LAB78:    memset(t158, 0, 8);
    t227 = (t199 + 4);
    t228 = *((unsigned int *)t227);
    t229 = (~(t228));
    t230 = *((unsigned int *)t199);
    t231 = (t230 & t229);
    t232 = (t231 & 1U);
    if (t232 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t227) != 0)
        goto LAB81;

LAB82:    t234 = (t158 + 4);
    t235 = *((unsigned int *)t158);
    t236 = *((unsigned int *)t234);
    t237 = (t235 || t236);
    if (t237 > 0)
        goto LAB83;

LAB84:    t239 = *((unsigned int *)t158);
    t240 = (~(t239));
    t241 = *((unsigned int *)t234);
    t242 = (t240 || t241);
    if (t242 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t234) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t158) > 0)
        goto LAB89;

LAB90:    memcpy(t157, t243, 8);

LAB91:    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t38, 2, t66, 2, t157, 2);
    goto LAB43;

LAB41:    memcpy(t38, t66, 8);
    goto LAB43;

LAB46:    t87 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB47;

LAB50:    t107 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB51;

LAB52:    t120 = *((unsigned int *)t108);
    t121 = *((unsigned int *)t114);
    *((unsigned int *)t108) = (t120 | t121);
    t122 = (t72 + 4);
    t123 = (t92 + 4);
    t124 = *((unsigned int *)t122);
    t125 = (~(t124));
    t126 = *((unsigned int *)t72);
    t127 = (t126 & t125);
    t128 = *((unsigned int *)t123);
    t129 = (~(t128));
    t130 = *((unsigned int *)t92);
    t131 = (t130 & t129);
    t132 = (~(t127));
    t133 = (~(t131));
    t134 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t134 & t132);
    t135 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t135 & t133);
    goto LAB54;

LAB55:    *((unsigned int *)t67) = 1;
    goto LAB58;

LAB57:    t142 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB58;

LAB59:    t147 = ((char*)((ng3)));
    goto LAB60;

LAB61:    t152 = ((char*)((ng4)));
    goto LAB62;

LAB63:    xsi_vlog_unsigned_bit_combine(t66, 2, t147, 2, t152, 2);
    goto LAB67;

LAB65:    memcpy(t66, t147, 8);
    goto LAB67;

LAB70:    t178 = (t163 + 4);
    *((unsigned int *)t163) = 1;
    *((unsigned int *)t178) = 1;
    goto LAB71;

LAB74:    t198 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t198) = 1;
    goto LAB75;

LAB76:    t211 = *((unsigned int *)t199);
    t212 = *((unsigned int *)t205);
    *((unsigned int *)t199) = (t211 | t212);
    t213 = (t163 + 4);
    t214 = (t183 + 4);
    t215 = *((unsigned int *)t213);
    t216 = (~(t215));
    t217 = *((unsigned int *)t163);
    t218 = (t217 & t216);
    t219 = *((unsigned int *)t214);
    t220 = (~(t219));
    t221 = *((unsigned int *)t183);
    t222 = (t221 & t220);
    t223 = (~(t218));
    t224 = (~(t222));
    t225 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t225 & t223);
    t226 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t226 & t224);
    goto LAB78;

LAB79:    *((unsigned int *)t158) = 1;
    goto LAB82;

LAB81:    t233 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t233) = 1;
    goto LAB82;

LAB83:    t238 = ((char*)((ng5)));
    goto LAB84;

LAB85:    t243 = ((char*)((ng2)));
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t157, 2, t238, 2, t243, 2);
    goto LAB91;

LAB89:    memcpy(t157, t238, 8);
    goto LAB91;

}


extern void work_m_00000000001520343658_0134594725_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_35_1,(void *)Cont_37_2,(void *)Always_39_3};
	xsi_register_didat("work_m_00000000001520343658_0134594725", "isim/MIPS_16_bit_Processor_tb_isim_beh.exe.sim/work/m_00000000001520343658_0134594725.didat");
	xsi_register_executes(pe);
}
