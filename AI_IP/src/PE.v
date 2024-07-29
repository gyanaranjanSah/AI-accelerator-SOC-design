`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08.03.2024 14:40:33
// Design Name: 
// Module Name: PE
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


module PE(in_a,in_b,clk,rst,sel,out_b,out);

input [31:0] in_a, in_b;
input clk,rst,sel;
output [31:0] out_b ;
output [31:0] out;

wire [31:0] out_c;
wire [31:0] out_a;
wire  [31:0] t1,t2;

FPM m(in_a,in_b,t1);

FPA a(t1,out_c,t2);


Resister32bit rb1(t2,clk,rst,out_c);

Resister32bit rb2(in_a,clk,rst,out_a);

Resister32bit rb3(in_b,clk,rst,out_b);

assign out=sel ? out_a : out_c;

endmodule
