`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08.03.2024 14:01:04
// Design Name: 
// Module Name: FPM
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


module FPM(A,B,OUT,ex1,ex2,M,Sign);

input [31:0] A,B;
output [31:0] OUT;

wire [8:0] ex;
output wire [7:0] ex1,ex2;
output wire Sign ;
output wire [23:0] M;
wire [47:0]Mul;

assign Sign = A[31]^B[31];

assign ex= A[30:23]+B[30:23];

assign ex1=ex-9'b001111111;

assign Mul={1'b1,A[22:0]}*{1'b1,B[22:0]};

assign ex2=Mul[47]? ex1 + 8'b00000001 : ex1;

assign M= Mul[47]? Mul[46:24] : Mul[45:23];

assign OUT ={Sign,ex2[7:0],M[22:0]};

endmodule
