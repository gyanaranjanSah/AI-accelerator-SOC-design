`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08.03.2024 11:47:40
// Design Name: 
// Module Name: LZD24bit
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////
module LZD24bit (input [23:0] value1, output  [4:0] result);

wire [15:0] val16;
wire [7:0] val8;
wire [3:0] val4;
wire[4:0] result1;
assign result1[4] = (value1[23:16] == 8'b0);
assign val16     = result1[4] ? value1[15:0] : value1[23:16];
assign result1[3] = (val16[15:8] == 8'b0);
assign val8      = result1[3] ? val16[7:0] : val16[15:8];
assign result1[2] = (val8[7:4] == 4'b0);
assign val4      = result1[2] ? val8[3:0] : val8[7:4];
assign result1[1] = (val4[3:2] == 2'b0);
assign result1[0] = result1[1] ? ~val4[1] : ~val4[3];

assign result=result1-8'b00001000;

endmodule

