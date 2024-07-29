//Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
//Date        : Mon Apr  8 16:18:58 2024
//Host        : DELLy21j running 64-bit major release  (build 9200)
//Command     : generate_target design_101_wrapper.bd
//Design      : design_101_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module design_101_wrapper
   (clk_100MHz,
    reset_rtl_0_0);
  input clk_100MHz;
  input reset_rtl_0_0;

  wire clk_100MHz;
  wire reset_rtl_0_0;

  design_101 design_101_i
       (.clk_100MHz(clk_100MHz),
        .reset_rtl_0_0(reset_rtl_0_0));
endmodule
