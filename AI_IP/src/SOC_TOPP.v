`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:                            
// Engineer: 
// 
// Create Date: 01.04.2024 15:13:16
// Design Name: 
// Module Name: SOC_top
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


module SOC_top(clk,sel,rst,MAA,MABD,MBA,OMA,OMD,MAI,start_single_write,start_single_read,read_address,write_address,read_data,write_data,read_done,write_done, init_axi_txn);

 parameter row=9,col=9;
 
 
 input clk,rst;
 input  sel;
 input [31:0] MAA,MBA,MABD,OMA,OMD;
 output reg MAI;
 output reg start_single_write;
 output reg start_single_read;
 input read_done, write_done ;
 input [31:0] read_data;
 output reg [31:0]write_data;
 output reg [31:0] write_address,read_address;
 output reg init_axi_txn;
 
 wire [7:0] count_A;
 wire [7:0] count_B;
 
 wire [3:0] MAD_row , MAD_col ,MBD_row , MBD_col;
 
 assign MAD_row =MABD[27:24];
 assign MAD_col =MABD[19:16];
 assign MBD_row =MABD[11:8];
 assign MBD_col =MABD[3:0];
 
 reg [31:0] maa,mba,mabd,oma,omd;
 reg [31:0] read_dataa;
 
 
 reg [3:0]count_result_row,crr;
 reg [3:0]count_result_col,crc;
 
     // State machine states
 parameter IDLE = 3'b000;
 parameter LOAD_A = 3'b001;
 parameter LOAD_B = 3'b010;
 parameter EXECUTE= 3'b011;
 parameter READ = 3'b100;
 parameter WRITE= 3'b101;
 parameter STOP=3'b110;
 

 
 reg [2:0] state;
 reg [3:0] count_load_row_a,clra;
 reg [3:0] count_load_col_a,clca;
 
 reg [3:0] count_load_row_b,clrb;
 reg [3:0] count_load_col_b,clcb;
 reg [4:0] count_execute; 
 reg [4:0] ce;
 

 
 reg [3:0] count_reg_a ;
 reg [3:0] count_reg_b ;
 

 
 reg enable_clk_accl;
 

      
    wire m_axi_bvalid ,m_axi_bready;
      
 //wires for instantiation of accl
    wire clk1 ,rst ;
    reg [32*row-1 :0] in_A ,in_B ;
    wire [32*row*col-1:0] result ;
   // reg sel;
    
    assign clk1=clk & enable_clk_accl;
 
    reg [31:0] mem_a[0:8][0:8];
    reg [31:0] mem_b[0:8][0:8];
    reg [31:0] result_out[0:8][0:8];
     //Mem9_9 mem_a(rst,  addr_a, data_in_a,data_out_a, read_enable_a,  write_enable_a ); 
     //Mem9_9 mem_b(rst,  addr_b, data_in_b,data_out_b, read_enable_b,  write_enable_b );
     //Mem9_9 mem_o(rst,  addr_o, data_in_o,data_out_o, read_enable_o,  write_enable_o );
    // wire[31:0] result_out_w[0:8][0:8];
     
    wire [31:0] result_out_w[0:8][0:8];
     
  Soc ACC_inst(.clk(clk1),.rst(rst),.in_A(in_A),.in_B(in_B),.result(result),.sel(sel));
     
     
     

genvar k,h;
generate
 for(k=0;k<row;k=k+1)
  begin

  for(h=0;h<col;h=h+1) 
  begin
  
   assign result_out_w[k][h] = result[32*(h+1)*(k+1)-1 : (k+1)*(h+1)*32-32];
  end 
  end
endgenerate


    

 
     
    // State machine
    always @(posedge clk) begin
        if (~rst) begin
            state <= IDLE;
            enable_clk_accl<=0;
            count_result_row <=MAD_row;
            count_result_col <=MBD_col;
            maa<=MAA;
            mba<=MBA;
            mabd<=MABD;
            oma<=OMA;
            omd<=OMD;
            

         //   address <= 0;
        
        for (integer i = 0; i < row; i = i + 1) begin
          for(integer j=0;j < col; j = j+1)
            begin
            mem_a[i][j] <= 32'h00000000;
            end
        end
            enable_clk_accl<=0;
        end else begin
            case(state)
                IDLE: begin
                    // Move to READ state
                    state <= LOAD_A;
                    count_load_row_a<=MAD_row;
                    clra <=MAD_row;
                    count_load_col_a<=MAD_col;
                    clca <= MAD_col;
                    count_execute <= 2*(MAD_row + MBD_col) - 4 ;
                    ce<= 2*(MAD_row + MBD_col) - 4 ;
                    enable_clk_accl<=0;
                    
                    count_load_row_b<=MBD_row;
                    clrb <=MBD_row;
                    count_load_col_b<=MBD_col;
                    clcb <=MBD_col;
                     state <= LOAD_A;
                     enable_clk_accl<=0;
                     start_single_read<=1'b1;
                     init_axi_txn <=1'b1;
                     
                end
                
                LOAD_A: begin

                 
                    if(count_load_row_a!=0)
                     begin
                       if( count_load_col_a!=0)
                       begin
                          mem_a[count_load_col_a+count_load_row_a-1][count_load_col_a-1]<=read_dataa ;
                          read_address <= maa + (clra-count_load_row_a)*clra + count_load_col_a-1;
                          
                          
                          if(read_done)
                          begin
                          count_load_col_a<= count_load_col_a-1;
                          
                          end
                     end
                    count_load_row_a<= count_load_row_a-1;
                    
                 
                   end
                
                 state<= LOAD_B;

                
                end
                 LOAD_B:
                 begin  
                 

                  
                    if(count_load_col_b!=0)
                     begin
                       if(count_load_row_b!=0)
                       begin
                          
                         mem_b[count_load_col_b+count_load_row_b-1][count_load_col_b-1] <= read_dataa ;
                          read_address <= (clcb-count_load_col_b)*clra + count_load_row_b;
                          ;
                          
                          if(read_done)
                          begin
                        count_load_row_b<= count_load_row_b-1;
                          end
                        
                     end
                    count_load_col_a<= count_load_col_a-1;
                   end
                  
                   state <= EXECUTE;
                   enable_clk_accl<=1;
                  
                   start_single_read<=1'b0;
                   init_axi_txn<=1'b0;
                end
                
           EXECUTE: begin
           
    if (count_execute) begin
      in_A <={ mem_a[ce-count_execute][0],  mem_a[ce-count_execute][1], mem_a[ce-count_execute][2],mem_a[ce-count_execute][3],
              mem_a[ce-count_execute][4],mem_a[ce-count_execute][5],mem_a[ce-count_execute][6],mem_a[ce-count_execute][7],
               mem_a[ce-count_execute][8]};
      in_B <=  { mem_b[ce-count_execute][0],  mem_b[ce-count_execute][1], mem_b[ce-count_execute][2],mem_b[ce-count_execute][3],
              mem_b[ce-count_execute][4],mem_b[ce-count_execute][5],mem_b[ce-count_execute][6],mem_b[ce-count_execute][7],
               mem_b[ce-count_execute][8]};
               count_execute<=count_execute-1;
    end
     enable_clk_accl<=0;
     state <=READ;
   init_axi_txn<=1'b1;
end
     
                   
    
   READ: begin

   for (integer k = 0; k < row; k = k + 1) begin
    for (integer h = 0; h < col; h = h + 1) begin
         result_out[k][h]<= result_out_w[k][h];
    end
    start_single_write<=1'b1;
end

 state<=WRITE;
                   
                end
                WRITE: begin
             if(count_result_row)
              begin
              if(count_result_col)
               begin
                write_data <= oma + crr-count_result_row + crc-count_result_col-1;
                write_address <= result_out[crr-count_result_row][crc-count_result_col];
              
              if(write_done)
              begin
              count_result_col <=count_result_col-1;
              end
               end
               count_result_row<=count_result_row-1;
              end
               
                   start_single_write<=1'b0;
                    state <= STOP;
                    init_axi_txn<=0;
                end
                STOP: begin
                    // Move back to READ state after write response is received
                MAI<=1'b1;   
                state <= STOP;
                    
                end
            endcase
        end
    end

    // Interrupt Output
    


     
     
 

 
 
 
 
 
endmodule
