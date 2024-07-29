`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 30.03.2024 23:58:25
// Design Name: 
// Module Name: Soc
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


module Soc(clk,rst,in_A,in_B,result,sel);

parameter row=9,col=9;

input clk;
input rst ,sel ;
input  [32*row-1:0] in_A;
input  [32*col-1:0] in_B;
output  [32*col*row-1:0]  result;

wire sel_w ;
wire rst_w ;
wire [31:0] data_w[row-1:0];
wire [31:0] weight_w[col-1:0];
wire [31:0] result_w[row-1:0][col-1:0];
wire [31:0] hor_w [row-1:0][col:0];
wire [31:0] ver_w [row:0][col-1:0];

genvar i,j;

generate
 for(i=0;i<row;i=i+1)
  begin
   for(j=0;j<col;j=j+1)
    begin
     PE uut(
            .in_a(hor_w[i][j]),
            .in_b(ver_w[i][j]),
            .clk(clk),
            .rst(rst_w),
            .sel(sel_w),
            //.out_a(hor_w[i][j+1]),
            .out_b(ver_w[i+1][j]),
            .out(hor_w[i][j+1])
            );
            
      assign rst_w=rst;    
      assign sel_w=sel; 
    end
  end
endgenerate

genvar k,h;
generate
 for(k=0;k<row;k=k+1)
  begin
   assign hor_w[k][0]=data_w[k];
   assign ver_w[0][k]=weight_w[k];
   
   assign data_w[k]=in_A[32*k+31:32*k];
   assign weight_w[k]=in_B[32*k+31:32*k];
  for(h=0;h<col;h=h+1) 
  begin
   assign result_w[k][h]= hor_w[k][h+1] ;
   assign result[32*(h+1)*(k+1)-1 : (k+1)*(h+1)*32-32]=result_w[k][h];
  end 
  end
endgenerate





endmodule
