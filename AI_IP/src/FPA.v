`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08.03.2024 09:30:54
// Design Name: 
// Module Name: FPA
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


module FPA(A,B,OUT);

input [31:0] A, B;
wire[7:0] ex,ex2,ex1,ex3,ex4;
wire [4:0] x;
output  [31:0] OUT;
wire [22:0] Sb,Sb1;
wire [23:0] Sb2,Sb4,Sb5;
wire [24:0] Sb3;
wire Sign;
wire bout;

wire t1,t2,t3;



assign {bout,ex}= A[30:23]-B[30:23];

assign Sb=bout? A[22:0]:B[22:0];
assign Sb1=bout? B[22:0]:A[22:0];
assign t1=A[22:0] > B[22:0];
assign t2=A[30:23]== B[30:23];
assign t3=bout;
assign ex1=bout?(ex^8'b11111111) +8'b00000001 :ex;
assign ex2=bout? B[30:23]:A[30:23];
assign Sign = A[31]&(~t3&~t2 | ~t3&t2&t1) | B[31]&(t3 | ~t3&t2&~t1);
assign Sb2={1'b1,Sb}>>ex1;

assign Sb3= A[31]^B[31]? {2'b01,Sb1}-{1'b0,Sb2} : {2'b01,Sb1}+{1'b0,Sb2} ;

assign Sb4=Sb3[24]? Sb3>>1: Sb3;

assign ex3=Sb3[24]?ex2+8'b00000001:ex2;
LZD24bit LDZ(Sb4,x);

assign ex4= ex3 -{3'b000, x};

assign Sb5= Sb4<<x;


assign OUT={Sign , ex4,Sb5[22:0]};



endmodule
