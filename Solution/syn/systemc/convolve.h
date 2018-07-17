// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _convolve_HH_
#define _convolve_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dev_digits_classidEe.h"
#include "dev_digits_classieOg.h"
#include "convolve_biases_cbkb.h"
#include "convolve_weights_cud.h"

namespace ap_rtl {

struct convolve : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > in_V_address0;
    sc_out< sc_logic > in_V_ce0;
    sc_in< sc_lv<9> > in_V_q0;
    sc_out< sc_lv<9> > outpool_V_address0;
    sc_out< sc_logic > outpool_V_ce0;
    sc_out< sc_logic > outpool_V_we0;
    sc_out< sc_lv<12> > outpool_V_d0;
    sc_in< sc_lv<12> > outpool_V_q0;


    // Module declarations
    convolve(sc_module_name name);
    SC_HAS_PROCESS(convolve);

    ~convolve();

    sc_trace_file* mVcdFile;

    convolve_biases_cbkb* biases_convolution_V_U;
    convolve_weights_cud* weights_convolution_s_U;
    dev_digits_classidEe<1,1,12,12,12,12,2,12>* dev_digits_classidEe_U1;
    dev_digits_classidEe<1,1,12,12,12,12,2,12>* dev_digits_classidEe_U2;
    dev_digits_classieOg<1,1,3,7,3,9>* dev_digits_classieOg_U3;
    sc_signal< sc_lv<15> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > biases_convolution_V_address0;
    sc_signal< sc_logic > biases_convolution_V_ce0;
    sc_signal< sc_lv<8> > biases_convolution_V_q0;
    sc_signal< sc_lv<8> > weights_convolution_s_address0;
    sc_signal< sc_logic > weights_convolution_s_ce0;
    sc_signal< sc_lv<9> > weights_convolution_s_q0;
    sc_signal< sc_lv<8> > out_channel_cast_fu_385_p1;
    sc_signal< sc_lv<8> > out_channel_cast_reg_1949;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<9> > out_channel_cast1_fu_389_p1;
    sc_signal< sc_lv<9> > out_channel_cast1_reg_1954;
    sc_signal< sc_lv<3> > out_channel_1_fu_399_p2;
    sc_signal< sc_lv<3> > out_channel_1_reg_1962;
    sc_signal< sc_lv<1> > exitcond8_fu_393_p2;
    sc_signal< sc_lv<8> > p_Val2_s_reg_1972;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > p_Val2_39_cast_cas_fu_420_p1;
    sc_signal< sc_lv<8> > p_Val2_39_cast_cas_reg_1977;
    sc_signal< sc_lv<5> > out_y_1_fu_434_p2;
    sc_signal< sc_lv<5> > out_y_1_reg_1985;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_72_fu_440_p2;
    sc_signal< sc_lv<1> > tmp_72_reg_1990;
    sc_signal< sc_lv<1> > exitcond9_fu_428_p2;
    sc_signal< sc_lv<10> > tmp_101_cast_fu_460_p1;
    sc_signal< sc_lv<10> > tmp_101_cast_reg_1994;
    sc_signal< sc_lv<2> > tmp_99_fu_463_p1;
    sc_signal< sc_lv<2> > tmp_99_reg_2000;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<5> > out_x_1_fu_473_p2;
    sc_signal< sc_lv<5> > out_x_1_reg_2011;
    sc_signal< sc_lv<12> > p_Val2_41_cast_fu_491_p1;
    sc_signal< sc_lv<1> > exitcond1_fu_467_p2;
    sc_signal< sc_lv<3> > filter_y_1_fu_501_p2;
    sc_signal< sc_lv<3> > filter_y_1_reg_2024;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<8> > next_mul_fu_507_p2;
    sc_signal< sc_lv<8> > next_mul_reg_2029;
    sc_signal< sc_lv<1> > exitcond3_fu_495_p2;
    sc_signal< sc_lv<8> > index_weight_fu_523_p2;
    sc_signal< sc_lv<8> > index_weight_reg_2034;
    sc_signal< sc_lv<10> > index_data_fu_528_p3;
    sc_signal< sc_lv<10> > index_data_reg_2042;
    sc_signal< sc_lv<12> > pool_window_row_0_V_5_fu_589_p3;
    sc_signal< sc_lv<12> > pool_window_row_0_V_5_reg_2060;
    sc_signal< sc_lv<12> > pool_window_row_0_V_8_fu_613_p3;
    sc_signal< sc_lv<12> > pool_window_row_0_V_8_reg_2067;
    sc_signal< sc_lv<12> > pool_window_row_0_V_15_fu_629_p3;
    sc_signal< sc_lv<12> > pool_window_row_0_V_15_reg_2074;
    sc_signal< sc_lv<12> > pool_window_row_0_V_3_fu_637_p3;
    sc_signal< sc_lv<12> > pool_window_row_0_V_3_reg_2081;
    sc_signal< sc_lv<1> > tmp_75_fu_645_p2;
    sc_signal< sc_lv<1> > tmp_75_reg_2088;
    sc_signal< sc_lv<9> > outpool_V_addr_reg_2092;
    sc_signal< sc_lv<18> > p_Val2_s_45_fu_698_p2;
    sc_signal< sc_lv<18> > p_Val2_s_45_reg_2097;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > tmp_102_reg_2102;
    sc_signal< sc_lv<18> > p_Val2_37_0_1_fu_896_p2;
    sc_signal< sc_lv<18> > p_Val2_37_0_1_reg_2117;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<21> > tmp_157_0_1_fu_926_p3;
    sc_signal< sc_lv<21> > tmp_157_0_1_reg_2122;
    sc_signal< sc_lv<1> > tmp_106_reg_2127;
    sc_signal< sc_lv<18> > p_Val2_37_0_2_fu_1117_p2;
    sc_signal< sc_lv<18> > p_Val2_37_0_2_reg_2142;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<21> > tmp_157_0_2_fu_1147_p3;
    sc_signal< sc_lv<21> > tmp_157_0_2_reg_2147;
    sc_signal< sc_lv<1> > tmp_110_reg_2152;
    sc_signal< sc_lv<18> > p_Val2_37_0_3_fu_1338_p2;
    sc_signal< sc_lv<18> > p_Val2_37_0_3_reg_2167;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<21> > tmp_157_0_3_fu_1368_p3;
    sc_signal< sc_lv<21> > tmp_157_0_3_reg_2172;
    sc_signal< sc_lv<1> > tmp_114_reg_2177;
    sc_signal< sc_lv<18> > p_Val2_37_0_4_fu_1559_p2;
    sc_signal< sc_lv<18> > p_Val2_37_0_4_reg_2192;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<21> > tmp_157_0_4_fu_1589_p3;
    sc_signal< sc_lv<21> > tmp_157_0_4_reg_2197;
    sc_signal< sc_lv<1> > tmp_118_reg_2202;
    sc_signal< sc_lv<12> > current_el_V_0_4_fu_1768_p3;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<12> > max_y_V_reg_2212;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<3> > i_7_fu_1782_p2;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<12> > p_058_2_50_fu_1808_p3;
    sc_signal< sc_lv<1> > exitcond_fu_1776_p2;
    sc_signal< sc_lv<3> > i_6_fu_1843_p2;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<12> > p_s_48_fu_1869_p3;
    sc_signal< sc_lv<1> > exitcond4_fu_1837_p2;
    sc_signal< sc_lv<3> > out_channel_reg_262;
    sc_signal< sc_lv<5> > out_y_reg_273;
    sc_signal< sc_lv<5> > out_x_reg_285;
    sc_signal< sc_lv<12> > pool_window_row_3_V_reg_297;
    sc_signal< sc_lv<3> > filter_y_reg_307;
    sc_signal< sc_lv<8> > phi_mul_reg_318;
    sc_signal< sc_lv<12> > p_058_2_reg_329;
    sc_signal< sc_lv<3> > i1_reg_341;
    sc_signal< sc_lv<12> > p_s_reg_352;
    sc_signal< sc_lv<3> > i_reg_364;
    sc_signal< sc_lv<64> > tmp_s_fu_405_p1;
    sc_signal< sc_lv<64> > tmp_77_fu_536_p1;
    sc_signal< sc_lv<64> > tmp_78_fu_541_p1;
    sc_signal< sc_lv<64> > tmp_87_fu_685_p1;
    sc_signal< sc_lv<64> > tmp_154_0_1_fu_722_p1;
    sc_signal< sc_lv<64> > tmp_155_0_1_fu_727_p1;
    sc_signal< sc_lv<64> > tmp_154_0_2_fu_952_p1;
    sc_signal< sc_lv<64> > tmp_155_0_2_fu_957_p1;
    sc_signal< sc_lv<64> > tmp_154_0_3_fu_1173_p1;
    sc_signal< sc_lv<64> > tmp_155_0_3_fu_1178_p1;
    sc_signal< sc_lv<64> > tmp_154_0_4_fu_1394_p1;
    sc_signal< sc_lv<64> > tmp_155_0_4_fu_1399_p1;
    sc_signal< sc_lv<64> > tmp_90_fu_1912_p1;
    sc_signal< sc_lv<12> > pool_window_row_0_V_1_fu_122;
    sc_signal< sc_lv<12> > pool_window_row_0_V_2_fu_126;
    sc_signal< sc_lv<12> > pool_window_row_0_V_9_fu_130;
    sc_signal< sc_lv<12> > pool_window_row_0_V_12_fu_134;
    sc_signal< sc_lv<1> > tmp_93_fu_1816_p2;
    sc_signal< sc_lv<7> > tmp_91_fu_410_p4;
    sc_signal< sc_lv<2> > tmp_98_fu_424_p1;
    sc_signal< sc_lv<3> > p_lshr_f_cast_fu_446_p4;
    sc_signal< sc_lv<9> > grp_fu_1917_p3;
    sc_signal< sc_lv<1> > tmp_100_fu_479_p1;
    sc_signal< sc_lv<8> > tmp_102_cast_cast_fu_482_p1;
    sc_signal< sc_lv<8> > p_Val2_29_fu_486_p2;
    sc_signal< sc_lv<5> > tmp_38_cast_fu_513_p1;
    sc_signal< sc_lv<5> > tmp_76_fu_517_p2;
    sc_signal< sc_lv<1> > sel_tmp_fu_558_p2;
    sc_signal< sc_lv<1> > sel_tmp6_fu_571_p2;
    sc_signal< sc_lv<12> > pool_window_row_0_V_fu_563_p3;
    sc_signal< sc_lv<1> > sel_tmp8_fu_584_p2;
    sc_signal< sc_lv<12> > pool_window_row_0_V_4_fu_576_p3;
    sc_signal< sc_lv<12> > pool_window_row_0_V_6_fu_597_p3;
    sc_signal< sc_lv<12> > pool_window_row_0_V_7_fu_605_p3;
    sc_signal< sc_lv<12> > pool_window_row_0_V_14_fu_621_p3;
    sc_signal< sc_lv<3> > grp_fu_375_p4;
    sc_signal< sc_lv<6> > p_shl_fu_654_p3;
    sc_signal< sc_lv<7> > p_shl_cast_fu_662_p1;
    sc_signal< sc_lv<7> > tmp_105_cast1_fu_650_p1;
    sc_signal< sc_lv<7> > tmp_85_fu_666_p2;
    sc_signal< sc_lv<10> > tmp_106_cast_fu_672_p1;
    sc_signal< sc_lv<10> > tmp_86_fu_676_p2;
    sc_signal< sc_lv<32> > tmp_107_cast_fu_681_p1;
    sc_signal< sc_lv<9> > p_Val2_s_45_fu_698_p0;
    sc_signal< sc_lv<9> > p_Val2_s_45_fu_698_p1;
    sc_signal< sc_lv<10> > index_data_0_1_fu_717_p2;
    sc_signal< sc_lv<8> > index_weight_0_1_fu_712_p2;
    sc_signal< sc_lv<21> > tmp_79_fu_732_p3;
    sc_signal< sc_lv<22> > tmp_80_fu_744_p1;
    sc_signal< sc_lv<22> > tmp_157_cast_fu_740_p1;
    sc_signal< sc_lv<22> > p_Val2_18_fu_747_p2;
    sc_signal< sc_lv<12> > tmp_81_fu_771_p1;
    sc_signal< sc_lv<12> > p_Val2_19_fu_761_p4;
    sc_signal< sc_lv<12> > p_Val2_20_fu_782_p2;
    sc_signal< sc_lv<1> > tmp_104_fu_788_p3;
    sc_signal< sc_lv<1> > tmp_103_fu_774_p3;
    sc_signal< sc_lv<1> > tmp_82_fu_796_p2;
    sc_signal< sc_lv<1> > tmp_101_fu_753_p3;
    sc_signal< sc_lv<1> > carry_7_fu_802_p2;
    sc_signal< sc_lv<1> > tmp_83_fu_808_p2;
    sc_signal< sc_lv<1> > p_Result_50_not_fu_822_p2;
    sc_signal< sc_lv<1> > p_not_i_i_fu_834_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_fu_840_p2;
    sc_signal< sc_lv<1> > deleted_ones_fu_814_p3;
    sc_signal< sc_lv<1> > brmerge40_demorgan_i_fu_852_p2;
    sc_signal< sc_lv<1> > tmp_84_fu_828_p2;
    sc_signal< sc_lv<1> > tmp28_fu_858_p2;
    sc_signal< sc_lv<1> > underflow_fu_864_p2;
    sc_signal< sc_lv<1> > overflow_fu_846_p2;
    sc_signal< sc_lv<1> > tmp29_fu_876_p2;
    sc_signal< sc_lv<9> > p_Val2_37_0_1_fu_896_p0;
    sc_signal< sc_lv<9> > p_Val2_37_0_1_fu_896_p1;
    sc_signal< sc_lv<1> > brmerge_i_i_i_fu_870_p2;
    sc_signal< sc_lv<1> > underflow_0_0_not_fu_882_p2;
    sc_signal< sc_lv<12> > tmp_fu_902_p3;
    sc_signal< sc_lv<12> > tmp_61_fu_910_p3;
    sc_signal< sc_lv<12> > tmp_62_fu_918_p3;
    sc_signal< sc_lv<10> > index_data_0_2_fu_947_p2;
    sc_signal< sc_lv<8> > index_weight_0_2_fu_942_p2;
    sc_signal< sc_lv<22> > tmp_158_0_1_fu_965_p1;
    sc_signal< sc_lv<22> > tmp_157_0_1_cast_fu_962_p1;
    sc_signal< sc_lv<22> > p_Val2_38_0_1_fu_968_p2;
    sc_signal< sc_lv<12> > tmp_161_0_1_fu_992_p1;
    sc_signal< sc_lv<12> > p_Val2_39_0_1_fu_982_p4;
    sc_signal< sc_lv<12> > p_Val2_40_0_1_fu_1003_p2;
    sc_signal< sc_lv<1> > tmp_108_fu_1009_p3;
    sc_signal< sc_lv<1> > tmp_107_fu_995_p3;
    sc_signal< sc_lv<1> > tmp_165_0_1_fu_1017_p2;
    sc_signal< sc_lv<1> > tmp_105_fu_974_p3;
    sc_signal< sc_lv<1> > carry_7_0_1_fu_1023_p2;
    sc_signal< sc_lv<1> > tmp_167_0_1_fu_1029_p2;
    sc_signal< sc_lv<1> > p_Result_50_0_1_no_fu_1043_p2;
    sc_signal< sc_lv<1> > p_not_i_i_0_1_fu_1055_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_0_1_fu_1061_p2;
    sc_signal< sc_lv<1> > deleted_ones_0_1_fu_1035_p3;
    sc_signal< sc_lv<1> > brmerge40_demorgan_i_1_fu_1073_p2;
    sc_signal< sc_lv<1> > tmp_168_0_1_fu_1049_p2;
    sc_signal< sc_lv<1> > tmp30_fu_1079_p2;
    sc_signal< sc_lv<1> > underflow_0_1_fu_1085_p2;
    sc_signal< sc_lv<1> > overflow_0_1_fu_1067_p2;
    sc_signal< sc_lv<1> > tmp31_fu_1097_p2;
    sc_signal< sc_lv<9> > p_Val2_37_0_2_fu_1117_p0;
    sc_signal< sc_lv<9> > p_Val2_37_0_2_fu_1117_p1;
    sc_signal< sc_lv<1> > brmerge_i_i_i_0_1_fu_1091_p2;
    sc_signal< sc_lv<1> > underflow_0_1_not_fu_1103_p2;
    sc_signal< sc_lv<12> > tmp_63_fu_1123_p3;
    sc_signal< sc_lv<12> > tmp_64_fu_1131_p3;
    sc_signal< sc_lv<12> > tmp_65_fu_1139_p3;
    sc_signal< sc_lv<10> > index_data_0_3_fu_1168_p2;
    sc_signal< sc_lv<8> > index_weight_0_3_fu_1163_p2;
    sc_signal< sc_lv<22> > tmp_158_0_2_fu_1186_p1;
    sc_signal< sc_lv<22> > tmp_157_0_2_cast_fu_1183_p1;
    sc_signal< sc_lv<22> > p_Val2_38_0_2_fu_1189_p2;
    sc_signal< sc_lv<12> > tmp_161_0_2_fu_1213_p1;
    sc_signal< sc_lv<12> > p_Val2_39_0_2_fu_1203_p4;
    sc_signal< sc_lv<12> > p_Val2_40_0_2_fu_1224_p2;
    sc_signal< sc_lv<1> > tmp_112_fu_1230_p3;
    sc_signal< sc_lv<1> > tmp_111_fu_1216_p3;
    sc_signal< sc_lv<1> > tmp_165_0_2_fu_1238_p2;
    sc_signal< sc_lv<1> > tmp_109_fu_1195_p3;
    sc_signal< sc_lv<1> > carry_7_0_2_fu_1244_p2;
    sc_signal< sc_lv<1> > tmp_167_0_2_fu_1250_p2;
    sc_signal< sc_lv<1> > p_Result_50_0_2_no_fu_1264_p2;
    sc_signal< sc_lv<1> > p_not_i_i_0_2_fu_1276_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_0_2_fu_1282_p2;
    sc_signal< sc_lv<1> > deleted_ones_0_2_fu_1256_p3;
    sc_signal< sc_lv<1> > brmerge40_demorgan_i_2_fu_1294_p2;
    sc_signal< sc_lv<1> > tmp_168_0_2_fu_1270_p2;
    sc_signal< sc_lv<1> > tmp32_fu_1300_p2;
    sc_signal< sc_lv<1> > underflow_0_2_fu_1306_p2;
    sc_signal< sc_lv<1> > overflow_0_2_fu_1288_p2;
    sc_signal< sc_lv<1> > tmp33_fu_1318_p2;
    sc_signal< sc_lv<9> > p_Val2_37_0_3_fu_1338_p0;
    sc_signal< sc_lv<9> > p_Val2_37_0_3_fu_1338_p1;
    sc_signal< sc_lv<1> > brmerge_i_i_i_0_2_fu_1312_p2;
    sc_signal< sc_lv<1> > underflow_0_2_not_fu_1324_p2;
    sc_signal< sc_lv<12> > tmp_66_fu_1344_p3;
    sc_signal< sc_lv<12> > tmp_67_fu_1352_p3;
    sc_signal< sc_lv<12> > tmp_68_fu_1360_p3;
    sc_signal< sc_lv<10> > index_data_0_4_fu_1389_p2;
    sc_signal< sc_lv<8> > index_weight_0_4_fu_1384_p2;
    sc_signal< sc_lv<22> > tmp_158_0_3_fu_1407_p1;
    sc_signal< sc_lv<22> > tmp_157_0_3_cast_fu_1404_p1;
    sc_signal< sc_lv<22> > p_Val2_38_0_3_fu_1410_p2;
    sc_signal< sc_lv<12> > tmp_161_0_3_fu_1434_p1;
    sc_signal< sc_lv<12> > p_Val2_39_0_3_fu_1424_p4;
    sc_signal< sc_lv<12> > p_Val2_40_0_3_fu_1445_p2;
    sc_signal< sc_lv<1> > tmp_116_fu_1451_p3;
    sc_signal< sc_lv<1> > tmp_115_fu_1437_p3;
    sc_signal< sc_lv<1> > tmp_165_0_3_fu_1459_p2;
    sc_signal< sc_lv<1> > tmp_113_fu_1416_p3;
    sc_signal< sc_lv<1> > carry_7_0_3_fu_1465_p2;
    sc_signal< sc_lv<1> > tmp_167_0_3_fu_1471_p2;
    sc_signal< sc_lv<1> > p_Result_50_0_3_no_fu_1485_p2;
    sc_signal< sc_lv<1> > p_not_i_i_0_3_fu_1497_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_0_3_fu_1503_p2;
    sc_signal< sc_lv<1> > deleted_ones_0_3_fu_1477_p3;
    sc_signal< sc_lv<1> > brmerge40_demorgan_i_3_fu_1515_p2;
    sc_signal< sc_lv<1> > tmp_168_0_3_fu_1491_p2;
    sc_signal< sc_lv<1> > tmp34_fu_1521_p2;
    sc_signal< sc_lv<1> > underflow_0_3_fu_1527_p2;
    sc_signal< sc_lv<1> > overflow_0_3_fu_1509_p2;
    sc_signal< sc_lv<1> > tmp35_fu_1539_p2;
    sc_signal< sc_lv<9> > p_Val2_37_0_4_fu_1559_p0;
    sc_signal< sc_lv<9> > p_Val2_37_0_4_fu_1559_p1;
    sc_signal< sc_lv<1> > brmerge_i_i_i_0_3_fu_1533_p2;
    sc_signal< sc_lv<1> > underflow_0_3_not_fu_1545_p2;
    sc_signal< sc_lv<12> > tmp_69_fu_1565_p3;
    sc_signal< sc_lv<12> > tmp_70_fu_1573_p3;
    sc_signal< sc_lv<12> > tmp_71_fu_1581_p3;
    sc_signal< sc_lv<22> > tmp_158_0_4_fu_1608_p1;
    sc_signal< sc_lv<22> > tmp_157_0_4_cast_fu_1605_p1;
    sc_signal< sc_lv<22> > p_Val2_38_0_4_fu_1611_p2;
    sc_signal< sc_lv<12> > tmp_161_0_4_fu_1635_p1;
    sc_signal< sc_lv<12> > p_Val2_39_0_4_fu_1625_p4;
    sc_signal< sc_lv<12> > p_Val2_40_0_4_fu_1646_p2;
    sc_signal< sc_lv<1> > tmp_120_fu_1652_p3;
    sc_signal< sc_lv<1> > tmp_119_fu_1638_p3;
    sc_signal< sc_lv<1> > tmp_165_0_4_fu_1660_p2;
    sc_signal< sc_lv<1> > tmp_117_fu_1617_p3;
    sc_signal< sc_lv<1> > carry_7_0_4_fu_1666_p2;
    sc_signal< sc_lv<1> > tmp_167_0_4_fu_1672_p2;
    sc_signal< sc_lv<1> > p_Result_50_0_4_no_fu_1686_p2;
    sc_signal< sc_lv<1> > p_not_i_i_0_4_fu_1698_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_0_4_fu_1704_p2;
    sc_signal< sc_lv<1> > deleted_ones_0_4_fu_1678_p3;
    sc_signal< sc_lv<1> > brmerge40_demorgan_i_4_fu_1716_p2;
    sc_signal< sc_lv<1> > tmp_168_0_4_fu_1692_p2;
    sc_signal< sc_lv<1> > tmp36_fu_1722_p2;
    sc_signal< sc_lv<1> > underflow_0_4_fu_1728_p2;
    sc_signal< sc_lv<1> > overflow_0_4_fu_1710_p2;
    sc_signal< sc_lv<1> > tmp37_fu_1740_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_i_0_4_fu_1734_p2;
    sc_signal< sc_lv<1> > underflow_0_4_not_fu_1746_p2;
    sc_signal< sc_lv<12> > p_Val2_40_0_4_mux_fu_1752_p3;
    sc_signal< sc_lv<12> > p_Val2_40_0_4_46_fu_1760_p3;
    sc_signal< sc_lv<2> > max_V_1_fu_1792_p5;
    sc_signal< sc_lv<12> > max_V_1_fu_1792_p6;
    sc_signal< sc_lv<1> > tmp_94_fu_1802_p2;
    sc_signal< sc_lv<2> > max_V_fu_1853_p5;
    sc_signal< sc_lv<12> > max_V_fu_1853_p6;
    sc_signal< sc_lv<1> > tmp_92_fu_1863_p2;
    sc_signal< sc_lv<6> > p_shl4_fu_1881_p3;
    sc_signal< sc_lv<7> > p_shl4_cast_fu_1889_p1;
    sc_signal< sc_lv<7> > tmp_109_cast1_fu_1877_p1;
    sc_signal< sc_lv<7> > tmp_88_fu_1893_p2;
    sc_signal< sc_lv<10> > tmp_110_cast_fu_1899_p1;
    sc_signal< sc_lv<10> > tmp_89_fu_1903_p2;
    sc_signal< sc_lv<32> > tmp_111_cast_fu_1908_p1;
    sc_signal< sc_lv<3> > grp_fu_1917_p0;
    sc_signal< sc_lv<7> > grp_fu_1917_p1;
    sc_signal< sc_lv<3> > grp_fu_1917_p2;
    sc_signal< sc_lv<15> > ap_NS_fsm;
    sc_signal< sc_lv<9> > grp_fu_1917_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<15> ap_ST_fsm_state1;
    static const sc_lv<15> ap_ST_fsm_state2;
    static const sc_lv<15> ap_ST_fsm_state3;
    static const sc_lv<15> ap_ST_fsm_state4;
    static const sc_lv<15> ap_ST_fsm_state5;
    static const sc_lv<15> ap_ST_fsm_state6;
    static const sc_lv<15> ap_ST_fsm_state7;
    static const sc_lv<15> ap_ST_fsm_state8;
    static const sc_lv<15> ap_ST_fsm_state9;
    static const sc_lv<15> ap_ST_fsm_state10;
    static const sc_lv<15> ap_ST_fsm_state11;
    static const sc_lv<15> ap_ST_fsm_state12;
    static const sc_lv<15> ap_ST_fsm_state13;
    static const sc_lv<15> ap_ST_fsm_state14;
    static const sc_lv<15> ap_ST_fsm_state15;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<5> ap_const_lv5_1C;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<8> ap_const_lv8_23;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<8> ap_const_lv8_7;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<12> ap_const_lv12_7FF;
    static const sc_lv<12> ap_const_lv12_800;
    static const sc_lv<8> ap_const_lv8_E;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<8> ap_const_lv8_15;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<8> ap_const_lv8_1C;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<9> ap_const_lv9_31;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_biases_convolution_V_address0();
    void thread_biases_convolution_V_ce0();
    void thread_brmerge40_demorgan_i_1_fu_1073_p2();
    void thread_brmerge40_demorgan_i_2_fu_1294_p2();
    void thread_brmerge40_demorgan_i_3_fu_1515_p2();
    void thread_brmerge40_demorgan_i_4_fu_1716_p2();
    void thread_brmerge40_demorgan_i_fu_852_p2();
    void thread_brmerge_i_i_0_1_fu_1061_p2();
    void thread_brmerge_i_i_0_2_fu_1282_p2();
    void thread_brmerge_i_i_0_3_fu_1503_p2();
    void thread_brmerge_i_i_0_4_fu_1704_p2();
    void thread_brmerge_i_i_fu_840_p2();
    void thread_brmerge_i_i_i_0_1_fu_1091_p2();
    void thread_brmerge_i_i_i_0_2_fu_1312_p2();
    void thread_brmerge_i_i_i_0_3_fu_1533_p2();
    void thread_brmerge_i_i_i_0_4_fu_1734_p2();
    void thread_brmerge_i_i_i_fu_870_p2();
    void thread_carry_7_0_1_fu_1023_p2();
    void thread_carry_7_0_2_fu_1244_p2();
    void thread_carry_7_0_3_fu_1465_p2();
    void thread_carry_7_0_4_fu_1666_p2();
    void thread_carry_7_fu_802_p2();
    void thread_current_el_V_0_4_fu_1768_p3();
    void thread_deleted_ones_0_1_fu_1035_p3();
    void thread_deleted_ones_0_2_fu_1256_p3();
    void thread_deleted_ones_0_3_fu_1477_p3();
    void thread_deleted_ones_0_4_fu_1678_p3();
    void thread_deleted_ones_fu_814_p3();
    void thread_exitcond1_fu_467_p2();
    void thread_exitcond3_fu_495_p2();
    void thread_exitcond4_fu_1837_p2();
    void thread_exitcond8_fu_393_p2();
    void thread_exitcond9_fu_428_p2();
    void thread_exitcond_fu_1776_p2();
    void thread_filter_y_1_fu_501_p2();
    void thread_grp_fu_1917_p0();
    void thread_grp_fu_1917_p00();
    void thread_grp_fu_1917_p1();
    void thread_grp_fu_1917_p2();
    void thread_grp_fu_375_p4();
    void thread_i_6_fu_1843_p2();
    void thread_i_7_fu_1782_p2();
    void thread_in_V_address0();
    void thread_in_V_ce0();
    void thread_index_data_0_1_fu_717_p2();
    void thread_index_data_0_2_fu_947_p2();
    void thread_index_data_0_3_fu_1168_p2();
    void thread_index_data_0_4_fu_1389_p2();
    void thread_index_data_fu_528_p3();
    void thread_index_weight_0_1_fu_712_p2();
    void thread_index_weight_0_2_fu_942_p2();
    void thread_index_weight_0_3_fu_1163_p2();
    void thread_index_weight_0_4_fu_1384_p2();
    void thread_index_weight_fu_523_p2();
    void thread_max_V_1_fu_1792_p5();
    void thread_max_V_fu_1853_p5();
    void thread_next_mul_fu_507_p2();
    void thread_out_channel_1_fu_399_p2();
    void thread_out_channel_cast1_fu_389_p1();
    void thread_out_channel_cast_fu_385_p1();
    void thread_out_x_1_fu_473_p2();
    void thread_out_y_1_fu_434_p2();
    void thread_outpool_V_address0();
    void thread_outpool_V_ce0();
    void thread_outpool_V_d0();
    void thread_outpool_V_we0();
    void thread_overflow_0_1_fu_1067_p2();
    void thread_overflow_0_2_fu_1288_p2();
    void thread_overflow_0_3_fu_1509_p2();
    void thread_overflow_0_4_fu_1710_p2();
    void thread_overflow_fu_846_p2();
    void thread_p_058_2_50_fu_1808_p3();
    void thread_p_Result_50_0_1_no_fu_1043_p2();
    void thread_p_Result_50_0_2_no_fu_1264_p2();
    void thread_p_Result_50_0_3_no_fu_1485_p2();
    void thread_p_Result_50_0_4_no_fu_1686_p2();
    void thread_p_Result_50_not_fu_822_p2();
    void thread_p_Val2_18_fu_747_p2();
    void thread_p_Val2_19_fu_761_p4();
    void thread_p_Val2_20_fu_782_p2();
    void thread_p_Val2_29_fu_486_p2();
    void thread_p_Val2_37_0_1_fu_896_p0();
    void thread_p_Val2_37_0_1_fu_896_p1();
    void thread_p_Val2_37_0_1_fu_896_p2();
    void thread_p_Val2_37_0_2_fu_1117_p0();
    void thread_p_Val2_37_0_2_fu_1117_p1();
    void thread_p_Val2_37_0_2_fu_1117_p2();
    void thread_p_Val2_37_0_3_fu_1338_p0();
    void thread_p_Val2_37_0_3_fu_1338_p1();
    void thread_p_Val2_37_0_3_fu_1338_p2();
    void thread_p_Val2_37_0_4_fu_1559_p0();
    void thread_p_Val2_37_0_4_fu_1559_p1();
    void thread_p_Val2_37_0_4_fu_1559_p2();
    void thread_p_Val2_38_0_1_fu_968_p2();
    void thread_p_Val2_38_0_2_fu_1189_p2();
    void thread_p_Val2_38_0_3_fu_1410_p2();
    void thread_p_Val2_38_0_4_fu_1611_p2();
    void thread_p_Val2_39_0_1_fu_982_p4();
    void thread_p_Val2_39_0_2_fu_1203_p4();
    void thread_p_Val2_39_0_3_fu_1424_p4();
    void thread_p_Val2_39_0_4_fu_1625_p4();
    void thread_p_Val2_39_cast_cas_fu_420_p1();
    void thread_p_Val2_40_0_1_fu_1003_p2();
    void thread_p_Val2_40_0_2_fu_1224_p2();
    void thread_p_Val2_40_0_3_fu_1445_p2();
    void thread_p_Val2_40_0_4_46_fu_1760_p3();
    void thread_p_Val2_40_0_4_fu_1646_p2();
    void thread_p_Val2_40_0_4_mux_fu_1752_p3();
    void thread_p_Val2_41_cast_fu_491_p1();
    void thread_p_Val2_s_45_fu_698_p0();
    void thread_p_Val2_s_45_fu_698_p1();
    void thread_p_Val2_s_45_fu_698_p2();
    void thread_p_lshr_f_cast_fu_446_p4();
    void thread_p_not_i_i_0_1_fu_1055_p2();
    void thread_p_not_i_i_0_2_fu_1276_p2();
    void thread_p_not_i_i_0_3_fu_1497_p2();
    void thread_p_not_i_i_0_4_fu_1698_p2();
    void thread_p_not_i_i_fu_834_p2();
    void thread_p_s_48_fu_1869_p3();
    void thread_p_shl4_cast_fu_1889_p1();
    void thread_p_shl4_fu_1881_p3();
    void thread_p_shl_cast_fu_662_p1();
    void thread_p_shl_fu_654_p3();
    void thread_pool_window_row_0_V_14_fu_621_p3();
    void thread_pool_window_row_0_V_15_fu_629_p3();
    void thread_pool_window_row_0_V_3_fu_637_p3();
    void thread_pool_window_row_0_V_4_fu_576_p3();
    void thread_pool_window_row_0_V_5_fu_589_p3();
    void thread_pool_window_row_0_V_6_fu_597_p3();
    void thread_pool_window_row_0_V_7_fu_605_p3();
    void thread_pool_window_row_0_V_8_fu_613_p3();
    void thread_pool_window_row_0_V_fu_563_p3();
    void thread_sel_tmp6_fu_571_p2();
    void thread_sel_tmp8_fu_584_p2();
    void thread_sel_tmp_fu_558_p2();
    void thread_tmp28_fu_858_p2();
    void thread_tmp29_fu_876_p2();
    void thread_tmp30_fu_1079_p2();
    void thread_tmp31_fu_1097_p2();
    void thread_tmp32_fu_1300_p2();
    void thread_tmp33_fu_1318_p2();
    void thread_tmp34_fu_1521_p2();
    void thread_tmp35_fu_1539_p2();
    void thread_tmp36_fu_1722_p2();
    void thread_tmp37_fu_1740_p2();
    void thread_tmp_100_fu_479_p1();
    void thread_tmp_101_cast_fu_460_p1();
    void thread_tmp_101_fu_753_p3();
    void thread_tmp_102_cast_cast_fu_482_p1();
    void thread_tmp_103_fu_774_p3();
    void thread_tmp_104_fu_788_p3();
    void thread_tmp_105_cast1_fu_650_p1();
    void thread_tmp_105_fu_974_p3();
    void thread_tmp_106_cast_fu_672_p1();
    void thread_tmp_107_cast_fu_681_p1();
    void thread_tmp_107_fu_995_p3();
    void thread_tmp_108_fu_1009_p3();
    void thread_tmp_109_cast1_fu_1877_p1();
    void thread_tmp_109_fu_1195_p3();
    void thread_tmp_110_cast_fu_1899_p1();
    void thread_tmp_111_cast_fu_1908_p1();
    void thread_tmp_111_fu_1216_p3();
    void thread_tmp_112_fu_1230_p3();
    void thread_tmp_113_fu_1416_p3();
    void thread_tmp_115_fu_1437_p3();
    void thread_tmp_116_fu_1451_p3();
    void thread_tmp_117_fu_1617_p3();
    void thread_tmp_119_fu_1638_p3();
    void thread_tmp_120_fu_1652_p3();
    void thread_tmp_154_0_1_fu_722_p1();
    void thread_tmp_154_0_2_fu_952_p1();
    void thread_tmp_154_0_3_fu_1173_p1();
    void thread_tmp_154_0_4_fu_1394_p1();
    void thread_tmp_155_0_1_fu_727_p1();
    void thread_tmp_155_0_2_fu_957_p1();
    void thread_tmp_155_0_3_fu_1178_p1();
    void thread_tmp_155_0_4_fu_1399_p1();
    void thread_tmp_157_0_1_cast_fu_962_p1();
    void thread_tmp_157_0_1_fu_926_p3();
    void thread_tmp_157_0_2_cast_fu_1183_p1();
    void thread_tmp_157_0_2_fu_1147_p3();
    void thread_tmp_157_0_3_cast_fu_1404_p1();
    void thread_tmp_157_0_3_fu_1368_p3();
    void thread_tmp_157_0_4_cast_fu_1605_p1();
    void thread_tmp_157_0_4_fu_1589_p3();
    void thread_tmp_157_cast_fu_740_p1();
    void thread_tmp_158_0_1_fu_965_p1();
    void thread_tmp_158_0_2_fu_1186_p1();
    void thread_tmp_158_0_3_fu_1407_p1();
    void thread_tmp_158_0_4_fu_1608_p1();
    void thread_tmp_161_0_1_fu_992_p1();
    void thread_tmp_161_0_2_fu_1213_p1();
    void thread_tmp_161_0_3_fu_1434_p1();
    void thread_tmp_161_0_4_fu_1635_p1();
    void thread_tmp_165_0_1_fu_1017_p2();
    void thread_tmp_165_0_2_fu_1238_p2();
    void thread_tmp_165_0_3_fu_1459_p2();
    void thread_tmp_165_0_4_fu_1660_p2();
    void thread_tmp_167_0_1_fu_1029_p2();
    void thread_tmp_167_0_2_fu_1250_p2();
    void thread_tmp_167_0_3_fu_1471_p2();
    void thread_tmp_167_0_4_fu_1672_p2();
    void thread_tmp_168_0_1_fu_1049_p2();
    void thread_tmp_168_0_2_fu_1270_p2();
    void thread_tmp_168_0_3_fu_1491_p2();
    void thread_tmp_168_0_4_fu_1692_p2();
    void thread_tmp_38_cast_fu_513_p1();
    void thread_tmp_61_fu_910_p3();
    void thread_tmp_62_fu_918_p3();
    void thread_tmp_63_fu_1123_p3();
    void thread_tmp_64_fu_1131_p3();
    void thread_tmp_65_fu_1139_p3();
    void thread_tmp_66_fu_1344_p3();
    void thread_tmp_67_fu_1352_p3();
    void thread_tmp_68_fu_1360_p3();
    void thread_tmp_69_fu_1565_p3();
    void thread_tmp_70_fu_1573_p3();
    void thread_tmp_71_fu_1581_p3();
    void thread_tmp_72_fu_440_p2();
    void thread_tmp_75_fu_645_p2();
    void thread_tmp_76_fu_517_p2();
    void thread_tmp_77_fu_536_p1();
    void thread_tmp_78_fu_541_p1();
    void thread_tmp_79_fu_732_p3();
    void thread_tmp_80_fu_744_p1();
    void thread_tmp_81_fu_771_p1();
    void thread_tmp_82_fu_796_p2();
    void thread_tmp_83_fu_808_p2();
    void thread_tmp_84_fu_828_p2();
    void thread_tmp_85_fu_666_p2();
    void thread_tmp_86_fu_676_p2();
    void thread_tmp_87_fu_685_p1();
    void thread_tmp_88_fu_1893_p2();
    void thread_tmp_89_fu_1903_p2();
    void thread_tmp_90_fu_1912_p1();
    void thread_tmp_91_fu_410_p4();
    void thread_tmp_92_fu_1863_p2();
    void thread_tmp_93_fu_1816_p2();
    void thread_tmp_94_fu_1802_p2();
    void thread_tmp_98_fu_424_p1();
    void thread_tmp_99_fu_463_p1();
    void thread_tmp_fu_902_p3();
    void thread_tmp_s_fu_405_p1();
    void thread_underflow_0_0_not_fu_882_p2();
    void thread_underflow_0_1_fu_1085_p2();
    void thread_underflow_0_1_not_fu_1103_p2();
    void thread_underflow_0_2_fu_1306_p2();
    void thread_underflow_0_2_not_fu_1324_p2();
    void thread_underflow_0_3_fu_1527_p2();
    void thread_underflow_0_3_not_fu_1545_p2();
    void thread_underflow_0_4_fu_1728_p2();
    void thread_underflow_0_4_not_fu_1746_p2();
    void thread_underflow_fu_864_p2();
    void thread_weights_convolution_s_address0();
    void thread_weights_convolution_s_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif