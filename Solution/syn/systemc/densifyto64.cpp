// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "densifyto64.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic densifyto64::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic densifyto64::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<12> densifyto64::ap_ST_fsm_state1 = "1";
const sc_lv<12> densifyto64::ap_ST_fsm_state2 = "10";
const sc_lv<12> densifyto64::ap_ST_fsm_state3 = "100";
const sc_lv<12> densifyto64::ap_ST_fsm_state4 = "1000";
const sc_lv<12> densifyto64::ap_ST_fsm_state5 = "10000";
const sc_lv<12> densifyto64::ap_ST_fsm_state6 = "100000";
const sc_lv<12> densifyto64::ap_ST_fsm_state7 = "1000000";
const sc_lv<12> densifyto64::ap_ST_fsm_state8 = "10000000";
const sc_lv<12> densifyto64::ap_ST_fsm_state9 = "100000000";
const sc_lv<12> densifyto64::ap_ST_fsm_state10 = "1000000000";
const sc_lv<12> densifyto64::ap_ST_fsm_state11 = "10000000000";
const sc_lv<12> densifyto64::ap_ST_fsm_state12 = "100000000000";
const sc_lv<32> densifyto64::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> densifyto64::ap_const_lv32_1 = "1";
const sc_lv<1> densifyto64::ap_const_lv1_0 = "0";
const sc_lv<32> densifyto64::ap_const_lv32_3 = "11";
const sc_lv<32> densifyto64::ap_const_lv32_4 = "100";
const sc_lv<32> densifyto64::ap_const_lv32_5 = "101";
const sc_lv<32> densifyto64::ap_const_lv32_6 = "110";
const sc_lv<32> densifyto64::ap_const_lv32_7 = "111";
const sc_lv<32> densifyto64::ap_const_lv32_8 = "1000";
const sc_lv<32> densifyto64::ap_const_lv32_A = "1010";
const sc_lv<7> densifyto64::ap_const_lv7_0 = "0000000";
const sc_lv<32> densifyto64::ap_const_lv32_2 = "10";
const sc_lv<1> densifyto64::ap_const_lv1_1 = "1";
const sc_lv<9> densifyto64::ap_const_lv9_0 = "000000000";
const sc_lv<32> densifyto64::ap_const_lv32_9 = "1001";
const sc_lv<32> densifyto64::ap_const_lv32_B = "1011";
const sc_lv<12> densifyto64::ap_const_lv12_0 = "000000000000";
const sc_lv<7> densifyto64::ap_const_lv7_40 = "1000000";
const sc_lv<7> densifyto64::ap_const_lv7_1 = "1";
const sc_lv<9> densifyto64::ap_const_lv9_157 = "101010111";
const sc_lv<9> densifyto64::ap_const_lv9_1 = "1";
const sc_lv<6> densifyto64::ap_const_lv6_0 = "000000";
const sc_lv<8> densifyto64::ap_const_lv8_0 = "00000000";
const sc_lv<32> densifyto64::ap_const_lv32_14 = "10100";
const sc_lv<32> densifyto64::ap_const_lv32_13 = "10011";
const sc_lv<12> densifyto64::ap_const_lv12_7FF = "11111111111";
const sc_lv<12> densifyto64::ap_const_lv12_800 = "100000000000";
const bool densifyto64::ap_const_boolean_1 = true;

densifyto64::densifyto64(sc_module_name name) : sc_module(name), mVcdFile(0) {
    biases_dense64_V_U = new densifyto64_biasefYi("biases_dense64_V_U");
    biases_dense64_V_U->clk(ap_clk);
    biases_dense64_V_U->reset(ap_rst);
    biases_dense64_V_U->address0(biases_dense64_V_address0);
    biases_dense64_V_U->ce0(biases_dense64_V_ce0);
    biases_dense64_V_U->q0(biases_dense64_V_q0);
    weights_dense64_V_U = new densifyto64_weighg8j("weights_dense64_V_U");
    weights_dense64_V_U->clk(ap_clk);
    weights_dense64_V_U->reset(ap_rst);
    weights_dense64_V_U->address0(weights_dense64_V_address0);
    weights_dense64_V_U->ce0(weights_dense64_V_ce0);
    weights_dense64_V_U->q0(weights_dense64_V_q0);
    dev_digits_classihbi_U10 = new dev_digits_classihbi<1,1,9,12,21>("dev_digits_classihbi_U10");
    dev_digits_classihbi_U10->din0(weights_dense64_V_lo_reg_560);
    dev_digits_classihbi_U10->din1(p_Val2_25_fu_495_p1);
    dev_digits_classihbi_U10->dout(p_Val2_25_fu_495_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_OP1_V_fu_254_p1);
    sensitive << ( in_V_q0 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state11);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state12);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state11 );
    sensitive << ( exitcond_fu_472_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state11 );
    sensitive << ( exitcond_fu_472_p2 );

    SC_METHOD(thread_biases_dense64_V_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_191_p1 );

    SC_METHOD(thread_biases_dense64_V_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_brmerge40_demorgan_i_fu_413_p2);
    sensitive << ( signbit_reg_575 );
    sensitive << ( newsignbit_fu_350_p3 );

    SC_METHOD(thread_brmerge_i_i_fu_401_p2);
    sensitive << ( newsignbit_fu_350_p3 );
    sensitive << ( p_not_i_i_fu_395_p2 );

    SC_METHOD(thread_brmerge_i_i_i_fu_429_p2);
    sensitive << ( underflow_fu_424_p2 );
    sensitive << ( overflow_fu_407_p2 );

    SC_METHOD(thread_carry_fu_364_p2);
    sensitive << ( tmp_89_reg_589 );
    sensitive << ( tmp_67_fu_358_p2 );

    SC_METHOD(thread_deleted_zeros_fu_380_p2);
    sensitive << ( signbit_reg_575 );
    sensitive << ( not_carry_fu_374_p2 );

    SC_METHOD(thread_exitcond5_fu_179_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( j_reg_134 );

    SC_METHOD(thread_exitcond6_fu_229_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( i_reg_145 );

    SC_METHOD(thread_exitcond7_fu_262_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( j1_reg_157 );

    SC_METHOD(thread_exitcond_fu_472_p2);
    sensitive << ( ap_CS_fsm_state11 );
    sensitive << ( i2_reg_168 );

    SC_METHOD(thread_i_4_fu_235_p2);
    sensitive << ( i_reg_145 );

    SC_METHOD(thread_i_5_fu_478_p2);
    sensitive << ( i2_reg_168 );

    SC_METHOD(thread_in_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_s_fu_241_p1 );

    SC_METHOD(thread_in_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_j1_cast5_fu_258_p1);
    sensitive << ( j1_reg_157 );

    SC_METHOD(thread_j_3_fu_185_p2);
    sensitive << ( j_reg_134 );

    SC_METHOD(thread_j_4_fu_268_p2);
    sensitive << ( j1_reg_157 );

    SC_METHOD(thread_newsignbit_fu_350_p3);
    sensitive << ( p_Val2_28_fu_345_p2 );

    SC_METHOD(thread_not_carry_fu_374_p2);
    sensitive << ( newsignbit_fu_350_p3 );
    sensitive << ( p_Result_16_not_fu_369_p2 );

    SC_METHOD(thread_out_V_address0);
    sensitive << ( tmp_reg_509 );
    sensitive << ( out_V_addr_2_reg_555 );
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( ap_CS_fsm_state11 );
    sensitive << ( out_V_addr_1_reg_603 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( ap_CS_fsm_state12 );
    sensitive << ( tmp_60_fu_484_p1 );

    SC_METHOD(thread_out_V_ce0);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( ap_CS_fsm_state11 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( ap_CS_fsm_state12 );

    SC_METHOD(thread_out_V_d0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( ap_CS_fsm_state12 );
    sensitive << ( p_Val2_33_cast_fu_224_p1 );
    sensitive << ( this_assign_1_fu_463_p3 );

    SC_METHOD(thread_out_V_we0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( ap_CS_fsm_state12 );
    sensitive << ( tmp_61_fu_489_p2 );

    SC_METHOD(thread_overflow_fu_407_p2);
    sensitive << ( brmerge_i_i_fu_401_p2 );
    sensitive << ( tmp_68_fu_385_p2 );

    SC_METHOD(thread_p_38_i_i_fu_390_p2);
    sensitive << ( signbit_reg_575 );
    sensitive << ( carry_fu_364_p2 );

    SC_METHOD(thread_p_Result_16_not_fu_369_p2);
    sensitive << ( tmp_89_reg_589 );

    SC_METHOD(thread_p_Val2_23_fu_218_p2);
    sensitive << ( p_Val2_32_cast_cas_fu_206_p1 );
    sensitive << ( tmp_cast_cast_fu_214_p1 );

    SC_METHOD(thread_p_Val2_25_fu_495_p1);
    sensitive << ( OP1_V_reg_537 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_p_Val2_26_fu_311_p2);
    sensitive << ( p_Val2_25_reg_565 );
    sensitive << ( tmp_89_cast_fu_307_p1 );

    SC_METHOD(thread_p_Val2_28_fu_345_p2);
    sensitive << ( p_Val2_27_reg_584 );
    sensitive << ( tmp_66_fu_342_p1 );

    SC_METHOD(thread_p_Val2_32_cast_cas_fu_206_p1);
    sensitive << ( tmp_85_fu_196_p4 );

    SC_METHOD(thread_p_Val2_33_cast_fu_224_p1);
    sensitive << ( p_Val2_23_fu_218_p2 );

    SC_METHOD(thread_p_Val2_33_mux_fu_447_p3);
    sensitive << ( p_Val2_28_fu_345_p2 );
    sensitive << ( brmerge_i_i_i_fu_429_p2 );

    SC_METHOD(thread_p_Val2_s_39_fu_455_p3);
    sensitive << ( p_Val2_28_fu_345_p2 );
    sensitive << ( underflow_fu_424_p2 );

    SC_METHOD(thread_p_not_i_i_fu_395_p2);
    sensitive << ( deleted_zeros_fu_380_p2 );

    SC_METHOD(thread_this_assign_1_fu_463_p3);
    sensitive << ( underflow_not_fu_441_p2 );
    sensitive << ( p_Val2_33_mux_fu_447_p3 );
    sensitive << ( p_Val2_s_39_fu_455_p3 );

    SC_METHOD(thread_tmp1_demorgan_fu_418_p2);
    sensitive << ( p_38_i_i_fu_390_p2 );
    sensitive << ( brmerge40_demorgan_i_fu_413_p2 );

    SC_METHOD(thread_tmp2_fu_435_p2);
    sensitive << ( newsignbit_fu_350_p3 );
    sensitive << ( tmp_68_fu_385_p2 );

    SC_METHOD(thread_tmp_59_fu_246_p3);
    sensitive << ( i_reg_145 );

    SC_METHOD(thread_tmp_60_fu_484_p1);
    sensitive << ( i2_reg_168 );

    SC_METHOD(thread_tmp_61_fu_489_p2);
    sensitive << ( out_V_q0 );
    sensitive << ( ap_CS_fsm_state12 );

    SC_METHOD(thread_tmp_62_fu_274_p1);
    sensitive << ( j1_reg_157 );

    SC_METHOD(thread_tmp_63_fu_279_p2);
    sensitive << ( tmp_59_reg_532 );
    sensitive << ( j1_cast5_fu_258_p1 );

    SC_METHOD(thread_tmp_64_fu_284_p1);
    sensitive << ( tmp_63_fu_279_p2 );

    SC_METHOD(thread_tmp_65_fu_299_p3);
    sensitive << ( out_V_q0 );

    SC_METHOD(thread_tmp_66_fu_342_p1);
    sensitive << ( tmp_88_reg_570 );

    SC_METHOD(thread_tmp_67_fu_358_p2);
    sensitive << ( newsignbit_fu_350_p3 );

    SC_METHOD(thread_tmp_68_fu_385_p2);
    sensitive << ( signbit_reg_575 );

    SC_METHOD(thread_tmp_85_fu_196_p4);
    sensitive << ( biases_dense64_V_q0 );

    SC_METHOD(thread_tmp_86_fu_210_p1);
    sensitive << ( biases_dense64_V_q0 );

    SC_METHOD(thread_tmp_89_cast_fu_307_p1);
    sensitive << ( tmp_65_fu_299_p3 );

    SC_METHOD(thread_tmp_cast_cast_fu_214_p1);
    sensitive << ( tmp_86_fu_210_p1 );

    SC_METHOD(thread_tmp_fu_191_p1);
    sensitive << ( j_reg_134 );

    SC_METHOD(thread_tmp_s_fu_241_p1);
    sensitive << ( i_reg_145 );

    SC_METHOD(thread_underflow_fu_424_p2);
    sensitive << ( signbit_reg_575 );
    sensitive << ( tmp1_demorgan_fu_418_p2 );

    SC_METHOD(thread_underflow_not_fu_441_p2);
    sensitive << ( p_38_i_i_fu_390_p2 );
    sensitive << ( tmp2_fu_435_p2 );

    SC_METHOD(thread_weights_dense64_V_address0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_64_fu_284_p1 );

    SC_METHOD(thread_weights_dense64_V_ce0);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond5_fu_179_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond6_fu_229_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond7_fu_262_p2 );
    sensitive << ( ap_CS_fsm_state11 );
    sensitive << ( exitcond_fu_472_p2 );

    ap_CS_fsm = "000000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "densifyto64_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, in_V_address0, "(port)in_V_address0");
    sc_trace(mVcdFile, in_V_ce0, "(port)in_V_ce0");
    sc_trace(mVcdFile, in_V_q0, "(port)in_V_q0");
    sc_trace(mVcdFile, out_V_address0, "(port)out_V_address0");
    sc_trace(mVcdFile, out_V_ce0, "(port)out_V_ce0");
    sc_trace(mVcdFile, out_V_we0, "(port)out_V_we0");
    sc_trace(mVcdFile, out_V_d0, "(port)out_V_d0");
    sc_trace(mVcdFile, out_V_q0, "(port)out_V_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, biases_dense64_V_address0, "biases_dense64_V_address0");
    sc_trace(mVcdFile, biases_dense64_V_ce0, "biases_dense64_V_ce0");
    sc_trace(mVcdFile, biases_dense64_V_q0, "biases_dense64_V_q0");
    sc_trace(mVcdFile, weights_dense64_V_address0, "weights_dense64_V_address0");
    sc_trace(mVcdFile, weights_dense64_V_ce0, "weights_dense64_V_ce0");
    sc_trace(mVcdFile, weights_dense64_V_q0, "weights_dense64_V_q0");
    sc_trace(mVcdFile, j_3_fu_185_p2, "j_3_fu_185_p2");
    sc_trace(mVcdFile, j_3_reg_504, "j_3_reg_504");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_fu_191_p1, "tmp_fu_191_p1");
    sc_trace(mVcdFile, tmp_reg_509, "tmp_reg_509");
    sc_trace(mVcdFile, exitcond5_fu_179_p2, "exitcond5_fu_179_p2");
    sc_trace(mVcdFile, i_4_fu_235_p2, "i_4_fu_235_p2");
    sc_trace(mVcdFile, i_4_reg_522, "i_4_reg_522");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, exitcond6_fu_229_p2, "exitcond6_fu_229_p2");
    sc_trace(mVcdFile, tmp_59_fu_246_p3, "tmp_59_fu_246_p3");
    sc_trace(mVcdFile, tmp_59_reg_532, "tmp_59_reg_532");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, OP1_V_fu_254_p1, "OP1_V_fu_254_p1");
    sc_trace(mVcdFile, OP1_V_reg_537, "OP1_V_reg_537");
    sc_trace(mVcdFile, j_4_fu_268_p2, "j_4_fu_268_p2");
    sc_trace(mVcdFile, j_4_reg_545, "j_4_reg_545");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, exitcond7_fu_262_p2, "exitcond7_fu_262_p2");
    sc_trace(mVcdFile, out_V_addr_2_reg_555, "out_V_addr_2_reg_555");
    sc_trace(mVcdFile, weights_dense64_V_lo_reg_560, "weights_dense64_V_lo_reg_560");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, p_Val2_25_fu_495_p2, "p_Val2_25_fu_495_p2");
    sc_trace(mVcdFile, p_Val2_25_reg_565, "p_Val2_25_reg_565");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, tmp_88_reg_570, "tmp_88_reg_570");
    sc_trace(mVcdFile, signbit_reg_575, "signbit_reg_575");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, p_Val2_27_reg_584, "p_Val2_27_reg_584");
    sc_trace(mVcdFile, tmp_89_reg_589, "tmp_89_reg_589");
    sc_trace(mVcdFile, i_5_fu_478_p2, "i_5_fu_478_p2");
    sc_trace(mVcdFile, i_5_reg_598, "i_5_reg_598");
    sc_trace(mVcdFile, ap_CS_fsm_state11, "ap_CS_fsm_state11");
    sc_trace(mVcdFile, out_V_addr_1_reg_603, "out_V_addr_1_reg_603");
    sc_trace(mVcdFile, exitcond_fu_472_p2, "exitcond_fu_472_p2");
    sc_trace(mVcdFile, j_reg_134, "j_reg_134");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, i_reg_145, "i_reg_145");
    sc_trace(mVcdFile, j1_reg_157, "j1_reg_157");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, i2_reg_168, "i2_reg_168");
    sc_trace(mVcdFile, ap_CS_fsm_state12, "ap_CS_fsm_state12");
    sc_trace(mVcdFile, tmp_s_fu_241_p1, "tmp_s_fu_241_p1");
    sc_trace(mVcdFile, tmp_64_fu_284_p1, "tmp_64_fu_284_p1");
    sc_trace(mVcdFile, tmp_62_fu_274_p1, "tmp_62_fu_274_p1");
    sc_trace(mVcdFile, tmp_60_fu_484_p1, "tmp_60_fu_484_p1");
    sc_trace(mVcdFile, p_Val2_33_cast_fu_224_p1, "p_Val2_33_cast_fu_224_p1");
    sc_trace(mVcdFile, this_assign_1_fu_463_p3, "this_assign_1_fu_463_p3");
    sc_trace(mVcdFile, tmp_61_fu_489_p2, "tmp_61_fu_489_p2");
    sc_trace(mVcdFile, tmp_85_fu_196_p4, "tmp_85_fu_196_p4");
    sc_trace(mVcdFile, tmp_86_fu_210_p1, "tmp_86_fu_210_p1");
    sc_trace(mVcdFile, p_Val2_32_cast_cas_fu_206_p1, "p_Val2_32_cast_cas_fu_206_p1");
    sc_trace(mVcdFile, tmp_cast_cast_fu_214_p1, "tmp_cast_cast_fu_214_p1");
    sc_trace(mVcdFile, p_Val2_23_fu_218_p2, "p_Val2_23_fu_218_p2");
    sc_trace(mVcdFile, j1_cast5_fu_258_p1, "j1_cast5_fu_258_p1");
    sc_trace(mVcdFile, tmp_63_fu_279_p2, "tmp_63_fu_279_p2");
    sc_trace(mVcdFile, tmp_65_fu_299_p3, "tmp_65_fu_299_p3");
    sc_trace(mVcdFile, tmp_89_cast_fu_307_p1, "tmp_89_cast_fu_307_p1");
    sc_trace(mVcdFile, p_Val2_26_fu_311_p2, "p_Val2_26_fu_311_p2");
    sc_trace(mVcdFile, tmp_66_fu_342_p1, "tmp_66_fu_342_p1");
    sc_trace(mVcdFile, p_Val2_28_fu_345_p2, "p_Val2_28_fu_345_p2");
    sc_trace(mVcdFile, newsignbit_fu_350_p3, "newsignbit_fu_350_p3");
    sc_trace(mVcdFile, tmp_67_fu_358_p2, "tmp_67_fu_358_p2");
    sc_trace(mVcdFile, p_Result_16_not_fu_369_p2, "p_Result_16_not_fu_369_p2");
    sc_trace(mVcdFile, not_carry_fu_374_p2, "not_carry_fu_374_p2");
    sc_trace(mVcdFile, carry_fu_364_p2, "carry_fu_364_p2");
    sc_trace(mVcdFile, deleted_zeros_fu_380_p2, "deleted_zeros_fu_380_p2");
    sc_trace(mVcdFile, p_not_i_i_fu_395_p2, "p_not_i_i_fu_395_p2");
    sc_trace(mVcdFile, brmerge_i_i_fu_401_p2, "brmerge_i_i_fu_401_p2");
    sc_trace(mVcdFile, tmp_68_fu_385_p2, "tmp_68_fu_385_p2");
    sc_trace(mVcdFile, p_38_i_i_fu_390_p2, "p_38_i_i_fu_390_p2");
    sc_trace(mVcdFile, brmerge40_demorgan_i_fu_413_p2, "brmerge40_demorgan_i_fu_413_p2");
    sc_trace(mVcdFile, tmp1_demorgan_fu_418_p2, "tmp1_demorgan_fu_418_p2");
    sc_trace(mVcdFile, underflow_fu_424_p2, "underflow_fu_424_p2");
    sc_trace(mVcdFile, overflow_fu_407_p2, "overflow_fu_407_p2");
    sc_trace(mVcdFile, tmp2_fu_435_p2, "tmp2_fu_435_p2");
    sc_trace(mVcdFile, brmerge_i_i_i_fu_429_p2, "brmerge_i_i_i_fu_429_p2");
    sc_trace(mVcdFile, underflow_not_fu_441_p2, "underflow_not_fu_441_p2");
    sc_trace(mVcdFile, p_Val2_33_mux_fu_447_p3, "p_Val2_33_mux_fu_447_p3");
    sc_trace(mVcdFile, p_Val2_s_39_fu_455_p3, "p_Val2_s_39_fu_455_p3");
    sc_trace(mVcdFile, p_Val2_25_fu_495_p1, "p_Val2_25_fu_495_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

densifyto64::~densifyto64() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete biases_dense64_V_U;
    delete weights_dense64_V_U;
    delete dev_digits_classihbi_U10;
}

void densifyto64::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(exitcond6_fu_229_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        i2_reg_168 = ap_const_lv7_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        i2_reg_168 = i_5_reg_598.read();
    }
    if ((esl_seteq<1,1,1>(exitcond5_fu_179_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        i_reg_145 = ap_const_lv9_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(exitcond7_fu_262_p2.read(), ap_const_lv1_1))) {
        i_reg_145 = i_4_reg_522.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        j1_reg_157 = j_4_reg_545.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        j1_reg_157 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_134 = j_3_reg_504.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_reg_134 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        OP1_V_reg_537 = OP1_V_fu_254_p1.read();
        tmp_59_reg_532 = tmp_59_fu_246_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i_4_reg_522 = i_4_fu_235_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        i_5_reg_598 = i_5_fu_478_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        j_3_reg_504 = j_3_fu_185_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        j_4_reg_545 = j_4_fu_268_p2.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_fu_472_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
        out_V_addr_1_reg_603 =  (sc_lv<6>) (tmp_60_fu_484_p1.read());
    }
    if ((esl_seteq<1,1,1>(exitcond7_fu_262_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        out_V_addr_2_reg_555 =  (sc_lv<6>) (tmp_62_fu_274_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        p_Val2_25_reg_565 = p_Val2_25_fu_495_p2.read();
        tmp_88_reg_570 = p_Val2_25_fu_495_p2.read().range(7, 7);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        p_Val2_27_reg_584 = p_Val2_26_fu_311_p2.read().range(19, 8);
        signbit_reg_575 = p_Val2_26_fu_311_p2.read().range(20, 20);
        tmp_89_reg_589 = p_Val2_26_fu_311_p2.read().range(19, 19);
    }
    if ((esl_seteq<1,1,1>(exitcond5_fu_179_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        tmp_reg_509 = tmp_fu_191_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        weights_dense64_V_lo_reg_560 = weights_dense64_V_q0.read();
    }
}

void densifyto64::thread_OP1_V_fu_254_p1() {
    OP1_V_fu_254_p1 = esl_sext<21,12>(in_V_q0.read());
}

void densifyto64::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void densifyto64::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void densifyto64::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void densifyto64::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void densifyto64::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void densifyto64::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void densifyto64::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void densifyto64::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void densifyto64::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void densifyto64::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void densifyto64::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void densifyto64::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void densifyto64::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
          esl_seteq<1,1,1>(exitcond_fu_472_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void densifyto64::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void densifyto64::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_472_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void densifyto64::thread_biases_dense64_V_address0() {
    biases_dense64_V_address0 =  (sc_lv<6>) (tmp_fu_191_p1.read());
}

void densifyto64::thread_biases_dense64_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        biases_dense64_V_ce0 = ap_const_logic_1;
    } else {
        biases_dense64_V_ce0 = ap_const_logic_0;
    }
}

void densifyto64::thread_brmerge40_demorgan_i_fu_413_p2() {
    brmerge40_demorgan_i_fu_413_p2 = (signbit_reg_575.read() & newsignbit_fu_350_p3.read());
}

void densifyto64::thread_brmerge_i_i_fu_401_p2() {
    brmerge_i_i_fu_401_p2 = (newsignbit_fu_350_p3.read() | p_not_i_i_fu_395_p2.read());
}

void densifyto64::thread_brmerge_i_i_i_fu_429_p2() {
    brmerge_i_i_i_fu_429_p2 = (underflow_fu_424_p2.read() | overflow_fu_407_p2.read());
}

void densifyto64::thread_carry_fu_364_p2() {
    carry_fu_364_p2 = (tmp_89_reg_589.read() & tmp_67_fu_358_p2.read());
}

void densifyto64::thread_deleted_zeros_fu_380_p2() {
    deleted_zeros_fu_380_p2 = (signbit_reg_575.read() ^ not_carry_fu_374_p2.read());
}

void densifyto64::thread_exitcond5_fu_179_p2() {
    exitcond5_fu_179_p2 = (!j_reg_134.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_134.read() == ap_const_lv7_40);
}

void densifyto64::thread_exitcond6_fu_229_p2() {
    exitcond6_fu_229_p2 = (!i_reg_145.read().is_01() || !ap_const_lv9_157.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_145.read() == ap_const_lv9_157);
}

void densifyto64::thread_exitcond7_fu_262_p2() {
    exitcond7_fu_262_p2 = (!j1_reg_157.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(j1_reg_157.read() == ap_const_lv7_40);
}

void densifyto64::thread_exitcond_fu_472_p2() {
    exitcond_fu_472_p2 = (!i2_reg_168.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_168.read() == ap_const_lv7_40);
}

void densifyto64::thread_i_4_fu_235_p2() {
    i_4_fu_235_p2 = (!i_reg_145.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(i_reg_145.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void densifyto64::thread_i_5_fu_478_p2() {
    i_5_fu_478_p2 = (!i2_reg_168.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i2_reg_168.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void densifyto64::thread_in_V_address0() {
    in_V_address0 =  (sc_lv<9>) (tmp_s_fu_241_p1.read());
}

void densifyto64::thread_in_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        in_V_ce0 = ap_const_logic_1;
    } else {
        in_V_ce0 = ap_const_logic_0;
    }
}

void densifyto64::thread_j1_cast5_fu_258_p1() {
    j1_cast5_fu_258_p1 = esl_zext<15,7>(j1_reg_157.read());
}

void densifyto64::thread_j_3_fu_185_p2() {
    j_3_fu_185_p2 = (!j_reg_134.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(j_reg_134.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void densifyto64::thread_j_4_fu_268_p2() {
    j_4_fu_268_p2 = (!j1_reg_157.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(j1_reg_157.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void densifyto64::thread_newsignbit_fu_350_p3() {
    newsignbit_fu_350_p3 = p_Val2_28_fu_345_p2.read().range(11, 11);
}

void densifyto64::thread_not_carry_fu_374_p2() {
    not_carry_fu_374_p2 = (newsignbit_fu_350_p3.read() | p_Result_16_not_fu_369_p2.read());
}

void densifyto64::thread_out_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        out_V_address0 = out_V_addr_1_reg_603.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        out_V_address0 =  (sc_lv<6>) (tmp_60_fu_484_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        out_V_address0 = out_V_addr_2_reg_555.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        out_V_address0 =  (sc_lv<6>) (tmp_reg_509.read());
    } else {
        out_V_address0 = "XXXXXX";
    }
}

void densifyto64::thread_out_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()))) {
        out_V_ce0 = ap_const_logic_1;
    } else {
        out_V_ce0 = ap_const_logic_0;
    }
}

void densifyto64::thread_out_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        out_V_d0 = ap_const_lv12_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        out_V_d0 = this_assign_1_fu_463_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        out_V_d0 = p_Val2_33_cast_fu_224_p1.read();
    } else {
        out_V_d0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void densifyto64::thread_out_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_61_fu_489_p2.read())))) {
        out_V_we0 = ap_const_logic_1;
    } else {
        out_V_we0 = ap_const_logic_0;
    }
}

void densifyto64::thread_overflow_fu_407_p2() {
    overflow_fu_407_p2 = (brmerge_i_i_fu_401_p2.read() & tmp_68_fu_385_p2.read());
}

void densifyto64::thread_p_38_i_i_fu_390_p2() {
    p_38_i_i_fu_390_p2 = (carry_fu_364_p2.read() & signbit_reg_575.read());
}

void densifyto64::thread_p_Result_16_not_fu_369_p2() {
    p_Result_16_not_fu_369_p2 = (tmp_89_reg_589.read() ^ ap_const_lv1_1);
}

void densifyto64::thread_p_Val2_23_fu_218_p2() {
    p_Val2_23_fu_218_p2 = (!p_Val2_32_cast_cas_fu_206_p1.read().is_01() || !tmp_cast_cast_fu_214_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(p_Val2_32_cast_cas_fu_206_p1.read()) + sc_biguint<7>(tmp_cast_cast_fu_214_p1.read()));
}

void densifyto64::thread_p_Val2_25_fu_495_p1() {
    p_Val2_25_fu_495_p1 =  (sc_lv<12>) (OP1_V_reg_537.read());
}

void densifyto64::thread_p_Val2_26_fu_311_p2() {
    p_Val2_26_fu_311_p2 = (!p_Val2_25_reg_565.read().is_01() || !tmp_89_cast_fu_307_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(p_Val2_25_reg_565.read()) + sc_bigint<21>(tmp_89_cast_fu_307_p1.read()));
}

void densifyto64::thread_p_Val2_28_fu_345_p2() {
    p_Val2_28_fu_345_p2 = (!tmp_66_fu_342_p1.read().is_01() || !p_Val2_27_reg_584.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_66_fu_342_p1.read()) + sc_biguint<12>(p_Val2_27_reg_584.read()));
}

void densifyto64::thread_p_Val2_32_cast_cas_fu_206_p1() {
    p_Val2_32_cast_cas_fu_206_p1 = esl_sext<7,6>(tmp_85_fu_196_p4.read());
}

void densifyto64::thread_p_Val2_33_cast_fu_224_p1() {
    p_Val2_33_cast_fu_224_p1 = esl_sext<12,7>(p_Val2_23_fu_218_p2.read());
}

void densifyto64::thread_p_Val2_33_mux_fu_447_p3() {
    p_Val2_33_mux_fu_447_p3 = (!brmerge_i_i_i_fu_429_p2.read()[0].is_01())? sc_lv<12>(): ((brmerge_i_i_i_fu_429_p2.read()[0].to_bool())? ap_const_lv12_7FF: p_Val2_28_fu_345_p2.read());
}

void densifyto64::thread_p_Val2_s_39_fu_455_p3() {
    p_Val2_s_39_fu_455_p3 = (!underflow_fu_424_p2.read()[0].is_01())? sc_lv<12>(): ((underflow_fu_424_p2.read()[0].to_bool())? ap_const_lv12_800: p_Val2_28_fu_345_p2.read());
}

void densifyto64::thread_p_not_i_i_fu_395_p2() {
    p_not_i_i_fu_395_p2 = (deleted_zeros_fu_380_p2.read() ^ ap_const_lv1_1);
}

void densifyto64::thread_this_assign_1_fu_463_p3() {
    this_assign_1_fu_463_p3 = (!underflow_not_fu_441_p2.read()[0].is_01())? sc_lv<12>(): ((underflow_not_fu_441_p2.read()[0].to_bool())? p_Val2_33_mux_fu_447_p3.read(): p_Val2_s_39_fu_455_p3.read());
}

void densifyto64::thread_tmp1_demorgan_fu_418_p2() {
    tmp1_demorgan_fu_418_p2 = (p_38_i_i_fu_390_p2.read() | brmerge40_demorgan_i_fu_413_p2.read());
}

void densifyto64::thread_tmp2_fu_435_p2() {
    tmp2_fu_435_p2 = (newsignbit_fu_350_p3.read() | tmp_68_fu_385_p2.read());
}

void densifyto64::thread_tmp_59_fu_246_p3() {
    tmp_59_fu_246_p3 = esl_concat<9,6>(i_reg_145.read(), ap_const_lv6_0);
}

void densifyto64::thread_tmp_60_fu_484_p1() {
    tmp_60_fu_484_p1 = esl_zext<64,7>(i2_reg_168.read());
}

void densifyto64::thread_tmp_61_fu_489_p2() {
    tmp_61_fu_489_p2 = (!out_V_q0.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): (sc_bigint<12>(out_V_q0.read()) > sc_bigint<12>(ap_const_lv12_0));
}

void densifyto64::thread_tmp_62_fu_274_p1() {
    tmp_62_fu_274_p1 = esl_zext<64,7>(j1_reg_157.read());
}

void densifyto64::thread_tmp_63_fu_279_p2() {
    tmp_63_fu_279_p2 = (!j1_cast5_fu_258_p1.read().is_01() || !tmp_59_reg_532.read().is_01())? sc_lv<15>(): (sc_biguint<15>(j1_cast5_fu_258_p1.read()) + sc_biguint<15>(tmp_59_reg_532.read()));
}

void densifyto64::thread_tmp_64_fu_284_p1() {
    tmp_64_fu_284_p1 = esl_zext<64,15>(tmp_63_fu_279_p2.read());
}

void densifyto64::thread_tmp_65_fu_299_p3() {
    tmp_65_fu_299_p3 = esl_concat<12,8>(out_V_q0.read(), ap_const_lv8_0);
}

void densifyto64::thread_tmp_66_fu_342_p1() {
    tmp_66_fu_342_p1 = esl_zext<12,1>(tmp_88_reg_570.read());
}

void densifyto64::thread_tmp_67_fu_358_p2() {
    tmp_67_fu_358_p2 = (newsignbit_fu_350_p3.read() ^ ap_const_lv1_1);
}

void densifyto64::thread_tmp_68_fu_385_p2() {
    tmp_68_fu_385_p2 = (signbit_reg_575.read() ^ ap_const_lv1_1);
}

void densifyto64::thread_tmp_85_fu_196_p4() {
    tmp_85_fu_196_p4 = biases_dense64_V_q0.read().range(6, 1);
}

void densifyto64::thread_tmp_86_fu_210_p1() {
    tmp_86_fu_210_p1 = biases_dense64_V_q0.read().range(1-1, 0);
}

void densifyto64::thread_tmp_89_cast_fu_307_p1() {
    tmp_89_cast_fu_307_p1 = esl_sext<21,20>(tmp_65_fu_299_p3.read());
}

void densifyto64::thread_tmp_cast_cast_fu_214_p1() {
    tmp_cast_cast_fu_214_p1 = esl_zext<7,1>(tmp_86_fu_210_p1.read());
}

void densifyto64::thread_tmp_fu_191_p1() {
    tmp_fu_191_p1 = esl_zext<64,7>(j_reg_134.read());
}

void densifyto64::thread_tmp_s_fu_241_p1() {
    tmp_s_fu_241_p1 = esl_zext<64,9>(i_reg_145.read());
}

void densifyto64::thread_underflow_fu_424_p2() {
    underflow_fu_424_p2 = (tmp1_demorgan_fu_418_p2.read() ^ signbit_reg_575.read());
}

void densifyto64::thread_underflow_not_fu_441_p2() {
    underflow_not_fu_441_p2 = (tmp2_fu_435_p2.read() | p_38_i_i_fu_390_p2.read());
}

void densifyto64::thread_weights_dense64_V_address0() {
    weights_dense64_V_address0 =  (sc_lv<15>) (tmp_64_fu_284_p1.read());
}

void densifyto64::thread_weights_dense64_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        weights_dense64_V_ce0 = ap_const_logic_1;
    } else {
        weights_dense64_V_ce0 = ap_const_logic_0;
    }
}

void densifyto64::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(exitcond5_fu_179_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(exitcond6_fu_229_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
                ap_NS_fsm = ap_ST_fsm_state11;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(exitcond7_fu_262_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 1024 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(exitcond_fu_472_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<12>) ("XXXXXXXXXXXX");
            break;
    }
}

}

