`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:09:57 12/15/2019 
// Design Name: 
// Module Name:    MIPS_16_bit_Processor 
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
module MIPS_16_bit_Processor(data_in,clk,interrupt,reset,data_out,ins,A,B,Current_Address,ans_ex,ans_dm,ans_wb,mux_sel_A,mux_sel_B,imm_sel,prediction,present_state,pc_mux_sel);

input [15:0] data_in;
input clk;
input interrupt;
input reset;
output [15:0] data_out;

output [31:0] ins;
output [15:0] A;
output [15:0] B;
output [15:0] Current_Address;
output [15:0] ans_ex;
output [15:0] ans_dm;
output [15:0] ans_wb;
output [1:0] mux_sel_A;
output [1:0] mux_sel_B;
output imm_sel;
output [1:0] present_state;
output prediction;

wire [15:0] jmp_loc;
output wire pc_mux_sel; 
wire stall , stall_pm;
wire [15:0] DM_data;
wire mem_rw_ex , mem_en_ex, mem_mux_sel_dm;
wire [15:0] imm;
wire [4:0] RA,RB,RW_dm;
wire [5:0] op_dec;
wire [15:0] jmp_address_pm,current_address;
wire [1:0] flag_ex;

// ins[31:0]   31:26 25:21 20:16 15:11  I-type    
// ins[31:0]   31:26  25:0              J-Type

Program_memory p1(jmp_loc , pc_mux_sel , stall , stall_pm , reset , clk , ins , Current_Address);
assign RA = ins[20:16];
assign RB = ins[15:11];
data_dependency p8(ins,clk,reset,imm,op_dec,RW_dm,mux_sel_A,mux_sel_B,imm_sel,mem_en_ex,mem_rw_ex,mem_mux_sel_dm);
ALU_16_bit p2(A,B,data_in,op_dec,clk,reset,ans_ex,DM_data,data_out,flag_ex);
dataMemoryBlock p3(ans_ex, DM_data, mem_rw_ex, mem_en_ex,mem_mux_sel_dm,reset,clk, ans_dm);
reg_bank p4(ans_ex,ans_dm,ans_wb,imm,RA,RB,RW_dm,mux_sel_A,mux_sel_B,imm_sel,clk,A,B);
stall_control p5(ins[31:26],clk,reset,stall,stall_pm);
WriteBack p6(ans_dm, clk, reset, ans_wb);
jump_control p7(ins[15:0],Current_Address,ins[31:26],flag_ex,interrupt,clk,reset,jmp_loc,pc_mux_sel);
branch_predictor bp(present_state,prediction,ins[31:26],pc_mux_sel,clk,reset);
 
endmodule
