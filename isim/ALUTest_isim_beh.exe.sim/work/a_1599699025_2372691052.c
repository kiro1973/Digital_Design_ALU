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
static const char *ng0 = "C:/Users/Dell/Desktop/SEMESTER 4/Comp Archi/Project/ALUTest.vhd";



static void work_a_1599699025_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;

LAB0:    t1 = (t0 + 3312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6460);
    t4 = (t0 + 3696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6492);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 6524);
    t4 = (t0 + 3824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(67, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6528);
    t4 = (t0 + 3696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6560);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6592);
    t4 = (t0 + 3824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(72, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6596);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6601);
    t11 = 1;
    if (32U == 32U)
        goto LAB17;

LAB18:    t11 = 0;

LAB19:    if (t11 == 1)
        goto LAB14;

LAB15:    t10 = (unsigned char)0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(76, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t7 = (t0 + 6633);
    xsi_report(t7, 6U, (unsigned char)2);
    goto LAB13;

LAB14:    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB16;

LAB17:    t12 = 0;

LAB20:    if (t12 < 32U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB18;

LAB22:    t12 = (t12 + 1);
    goto LAB20;

LAB23:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 6639);
    t4 = (t0 + 3696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6671);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6703);
    t4 = (t0 + 3824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(82, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB27:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6707);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6712);
    t11 = 1;
    if (32U == 32U)
        goto LAB36;

LAB37:    t11 = 0;

LAB38:    if (t11 == 1)
        goto LAB33;

LAB34:    t10 = (unsigned char)0;

LAB35:    if (t10 == 0)
        goto LAB31;

LAB32:    xsi_set_current_line(86, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB31:    t7 = (t0 + 6744);
    xsi_report(t7, 6U, (unsigned char)2);
    goto LAB32;

LAB33:    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB35;

LAB36:    t12 = 0;

LAB39:    if (t12 < 32U)
        goto LAB40;
    else
        goto LAB38;

LAB40:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB37;

LAB41:    t12 = (t12 + 1);
    goto LAB39;

LAB42:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6750);
    t4 = (t0 + 3696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6782);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6814);
    t4 = (t0 + 3824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(92, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6818);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6823);
    t14 = 1;
    if (32U == 32U)
        goto LAB61;

LAB62:    t14 = 0;

LAB63:    if (t14 == 1)
        goto LAB58;

LAB59:    t13 = (unsigned char)0;

LAB60:    if (t13 == 1)
        goto LAB55;

LAB56:    t11 = (unsigned char)0;

LAB57:    if (t11 == 1)
        goto LAB52;

LAB53:    t10 = (unsigned char)0;

LAB54:    if (t10 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(96, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB69:    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t7 = (t0 + 6855);
    xsi_report(t7, 6U, (unsigned char)2);
    goto LAB51;

LAB52:    t7 = (t0 + 1992U);
    t20 = *((char **)t7);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)2);
    t10 = t22;
    goto LAB54;

LAB55:    t7 = (t0 + 1832U);
    t15 = *((char **)t7);
    t18 = *((unsigned char *)t15);
    t19 = (t18 == (unsigned char)2);
    t11 = t19;
    goto LAB57;

LAB58:    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)3);
    t13 = t17;
    goto LAB60;

LAB61:    t12 = 0;

LAB64:    if (t12 < 32U)
        goto LAB65;
    else
        goto LAB63;

LAB65:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB62;

LAB66:    t12 = (t12 + 1);
    goto LAB64;

LAB67:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6861);
    t4 = (t0 + 3696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6893);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6925);
    t4 = (t0 + 3824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(102, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB73:    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB68:    goto LAB67;

LAB70:    goto LAB68;

LAB71:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6929);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6934);
    t14 = 1;
    if (32U == 32U)
        goto LAB86;

LAB87:    t14 = 0;

LAB88:    if (t14 == 1)
        goto LAB83;

LAB84:    t13 = (unsigned char)0;

LAB85:    if (t13 == 1)
        goto LAB80;

LAB81:    t11 = (unsigned char)0;

LAB82:    if (t11 == 1)
        goto LAB77;

LAB78:    t10 = (unsigned char)0;

LAB79:    if (t10 == 0)
        goto LAB75;

LAB76:    xsi_set_current_line(106, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB72:    goto LAB71;

LAB74:    goto LAB72;

LAB75:    t7 = (t0 + 6966);
    xsi_report(t7, 6U, (unsigned char)2);
    goto LAB76;

LAB77:    t7 = (t0 + 1992U);
    t20 = *((char **)t7);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)3);
    t10 = t22;
    goto LAB79;

LAB80:    t7 = (t0 + 1832U);
    t15 = *((char **)t7);
    t18 = *((unsigned char *)t15);
    t19 = (t18 == (unsigned char)3);
    t11 = t19;
    goto LAB82;

LAB83:    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)2);
    t13 = t17;
    goto LAB85;

LAB86:    t12 = 0;

LAB89:    if (t12 < 32U)
        goto LAB90;
    else
        goto LAB88;

LAB90:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB87;

LAB91:    t12 = (t12 + 1);
    goto LAB89;

LAB92:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6972);
    t4 = (t0 + 3696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7004);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 7036);
    t4 = (t0 + 3824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(113, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7040);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 7045);
    t14 = 1;
    if (32U == 32U)
        goto LAB111;

LAB112:    t14 = 0;

LAB113:    if (t14 == 1)
        goto LAB108;

LAB109:    t13 = (unsigned char)0;

LAB110:    if (t13 == 1)
        goto LAB105;

LAB106:    t11 = (unsigned char)0;

LAB107:    if (t11 == 1)
        goto LAB102;

LAB103:    t10 = (unsigned char)0;

LAB104:    if (t10 == 0)
        goto LAB100;

LAB101:    xsi_set_current_line(117, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB119:    *((char **)t1) = &&LAB120;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    t7 = (t0 + 7077);
    xsi_report(t7, 6U, (unsigned char)2);
    goto LAB101;

LAB102:    t7 = (t0 + 1992U);
    t20 = *((char **)t7);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)2);
    t10 = t22;
    goto LAB104;

LAB105:    t7 = (t0 + 1832U);
    t15 = *((char **)t7);
    t18 = *((unsigned char *)t15);
    t19 = (t18 == (unsigned char)3);
    t11 = t19;
    goto LAB107;

LAB108:    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)2);
    t13 = t17;
    goto LAB110;

LAB111:    t12 = 0;

LAB114:    if (t12 < 32U)
        goto LAB115;
    else
        goto LAB113;

LAB115:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB112;

LAB116:    t12 = (t12 + 1);
    goto LAB114;

LAB117:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 7083);
    t4 = (t0 + 3696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 7115);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 7147);
    t4 = (t0 + 3824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(124, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB123:    *((char **)t1) = &&LAB124;
    goto LAB1;

LAB118:    goto LAB117;

LAB120:    goto LAB118;

LAB121:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 7151);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 7156);
    t14 = 1;
    if (32U == 32U)
        goto LAB136;

LAB137:    t14 = 0;

LAB138:    if (t14 == 1)
        goto LAB133;

LAB134:    t13 = (unsigned char)0;

LAB135:    if (t13 == 1)
        goto LAB130;

LAB131:    t11 = (unsigned char)0;

LAB132:    if (t11 == 1)
        goto LAB127;

LAB128:    t10 = (unsigned char)0;

LAB129:    if (t10 == 0)
        goto LAB125;

LAB126:    xsi_set_current_line(128, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t9);

LAB144:    *((char **)t1) = &&LAB145;
    goto LAB1;

LAB122:    goto LAB121;

LAB124:    goto LAB122;

LAB125:    t7 = (t0 + 7188);
    xsi_report(t7, 6U, (unsigned char)2);
    goto LAB126;

LAB127:    t7 = (t0 + 1992U);
    t20 = *((char **)t7);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)2);
    t10 = t22;
    goto LAB129;

LAB130:    t7 = (t0 + 1832U);
    t15 = *((char **)t7);
    t18 = *((unsigned char *)t15);
    t19 = (t18 == (unsigned char)2);
    t11 = t19;
    goto LAB132;

LAB133:    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)2);
    t13 = t17;
    goto LAB135;

LAB136:    t12 = 0;

LAB139:    if (t12 < 32U)
        goto LAB140;
    else
        goto LAB138;

LAB140:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB137;

LAB141:    t12 = (t12 + 1);
    goto LAB139;

LAB142:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 7194);
    xsi_report(t2, 13U, 0);
    xsi_set_current_line(131, ng0);

LAB148:    *((char **)t1) = &&LAB149;
    goto LAB1;

LAB143:    goto LAB142;

LAB145:    goto LAB143;

LAB146:    goto LAB2;

LAB147:    goto LAB146;

LAB149:    goto LAB147;

}


extern void work_a_1599699025_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1599699025_2372691052_p_0};
	xsi_register_didat("work_a_1599699025_2372691052", "isim/ALUTest_isim_beh.exe.sim/work/a_1599699025_2372691052.didat");
	xsi_register_executes(pe);
}
