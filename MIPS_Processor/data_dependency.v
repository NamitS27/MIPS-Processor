`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:03:06 12/15/2019 
// Design Name: 
// Module Name:    data_dependency 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module data_dependency(ins,clk,reset,imm,op_dec,RW_dm,mux_sel_A,mux_sel_B,imm_sel,mem_en_ex,mem_rw_ex,mem_mux_sel_dm);

input [31:0] ins;
input clk,reset;

output reg [15:0] imm;
output reg [5:0] op_dec;
output [4:0] RW_dm;
output [1:0]mux_sel_A, mux_sel_B;
output imm_sel, mem_en_ex, mem_rw_ex, mem_mux_sel_dm;

wire [14:0] and1_out;
wire jmp;
wire Cond_J;
wire LD_fd;
wire Imm;
wire LD1;
wire ST;
wire nor1_out,d1_out,and2_out,d3_out,d4_out,d5_out,or1_out,and3_out,d7_out,and7_out,and6_out,and4_out,and5_out;
wire comp1,comp2,comp3,comp4,comp5,comp6;
wire [14:0] ext;

reg [4:0] reg2,reg3,reg4,reg5,reg6,reg7;


assign jmp = (~ins[26])&(~ins[27])&ins[28]&ins[29]&ins[30]&(~ins[31]);  
assign Cond_J = ins[28]&ins[29]&ins[30]&(~ins[31]);
assign LD_fb = (~ins[26])&(~ins[27])&ins[28]&(~ins[29])&ins[30]&(~ins[31])&(~d1_out); // D ff neg left
assign Imm = ins[29]&(~ins[30])&(~ins[31]);
assign LD1 = (~ins[26])&(~ins[27])&ins[28]&(~ins[29])&ins[30]&(~ins[31]);
assign ST = ins[26]&(~ins[27])&ins[28]&(~ins[29])&ins[30]&(~ins[31]);

assign nor1_out = ~(jmp|Cond_J|d1_out);  // D ff output
assign ext[0]= nor1_out;
assign ext[14:1] = nor1_out ==1 ? 14'b11111111111111 : 14'b00000000000000;
assign and1_out = ext&ins[25:11];
assign and2_out = LD1&(~d4_out);
assign or1_out = d4_out|d5_out;
assign and3_out = (~d3_out)&or1_out;
assign RW_dm = reg5;

DFlipFlop d1(LD_fb,clk,d1_out,reset);
DFlipFlop d3(ins[26],clk,d3_out,reset);
DFlipFlop d4(and2_out,clk,d4_out,reset);
DFlipFlop d5(ST,clk,d5_out,reset);
DFlipFlop d2(Imm,clk,imm_sel,reset);
DFlipFlop d6(d3_out,clk,mem_rw_ex,reset);
DFlipFlop d7(and3_out,clk,d7_out,reset);
DFlipFlop d8(or1_out,clk,mem_en_ex,reset);
DFlipFlop d9(d7_out,clk,mem_mux_sel_dm,reset);


assign comp1 =  (reg4 == reg2) ? 1'b1 : 1'b0;
assign comp2 =  (reg5 == reg2) ? 1'b1 : 1'b0;
assign comp3 =  (reg6 == reg2) ? 1'b1 : 1'b0;
assign comp4 =  (reg4 == reg7) ? 1'b1 : 1'b0;
assign comp5 =  (reg7 == reg5) ? 1'b1 : 1'b0;
assign comp6 =  (reg7 == reg6) ? 1'b1 : 1'b0;

assign and7_out = comp2&(~comp1);
assign and6_out = (~comp1)&(~comp2)&comp3;
assign and5_out = (~comp4)&comp5;
assign and4_out = (~comp4)&(~comp5)&comp6;

priEnc p1(comp1,and7_out,and6_out,mux_sel_A);
priEnc p2(comp4,and5_out,and4_out,mux_sel_B);


always@(posedge clk) begin
    imm <= (reset==1'b1) ? ins[15:0] : 16'b0;
    op_dec <= (reset==1'b1) ? ins[31:26] : 6'b0;
    reg2 <= (reset==1'b1) ? and1_out[9:5] : 5'b0;  
    reg3 <= (reset==1'b1) ? and1_out[14:10] : 5'b0;
    reg4 <= (reset==1'b1) ? reg3 : 5'b0;
    reg5 <= (reset==1'b1) ? reg4 : 5'b0;
    reg6 <= (reset==1'b1) ? reg5 : 5'b0;
    reg7 <= (reset==1'b1) ? and1_out[4:0] : 5'b0;
end


endmodule

module DFlipFlop(D,clk,Q,reset);

input D; // Data input 
input clk; // clock input 
input reset;

output  Q; // output Q 
reg Q_temp;

assign Q = reset==1 ? Q_temp : 1'b0;

always @(posedge clk) begin
 Q_temp <= D; 
end 

endmodule //DFlipFlop

module priEnc(B,C,D,out);
input B,C,D;
output [1:0]out;

assign out[0] = D|(~C&B);
assign out[1] = D|C;
endmodule

