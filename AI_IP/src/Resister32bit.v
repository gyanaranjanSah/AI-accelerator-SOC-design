`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08.03.2024 14:33:34
// Design Name: 
// Module Name: Resister32bit
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


module Resister32bit(A,clk,rst,Y);

input [31:0] A;
input clk,rst;
output reg [31:0] Y;


always @(posedge clk, negedge rst)

begin
 if(~rst) 
     Y <= 32'b0;
 else 
     Y <=A;
end


endmodule
