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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *WORK_P_2905348290;
char *WORK_P_1319352572;
char *IEEE_P_3620187407;
char *WORK_P_1000743190;
char *IEEE_P_2592010699;
char *IEEE_P_3499444699;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_1000743190_init();
    work_p_1319352572_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_p_2905348290_init();
    work_a_1130988942_3212880686_init();
    work_a_0737135909_3212880686_init();
    work_a_4004622386_3212880686_init();
    work_a_1492497583_3212880686_init();
    work_a_0708302945_3212880686_init();
    work_a_1196643129_3212880686_init();
    work_a_1949178628_2372691052_init();


    xsi_register_tops("work_a_1949178628_2372691052");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_2905348290 = xsi_get_engine_memory("work_p_2905348290");
    WORK_P_1319352572 = xsi_get_engine_memory("work_p_1319352572");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    WORK_P_1000743190 = xsi_get_engine_memory("work_p_1000743190");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");

    return xsi_run_simulation(argc, argv);

}
