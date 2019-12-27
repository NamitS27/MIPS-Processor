`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:05:57 12/15/2019 
// Design Name: 
// Module Name:    jump_control 
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
module jump_control(jmp_address_pm,current_address,op,flag_ex,interrupt,clk,reset,jmp_loc,pc_mux_sel);
input [15:0] jmp_address_pm,current_address;
input [5:0] op;
input [1:0] flag_ex;
input interrupt,clk,reset;

output [15:0] jmp_loc;
output pc_mux_sel;	//jump flag bit. 1 = jump, 0 = no-jump

wire wJV,wJNV,wJZ,wJNZ,RET,wInt,flag_mux_sel;
wire [15:0] next_add,interrupt_mux_out;
wire [15:0] sel_add_mux_out;
wire [1:0] flag_mux_out;
reg [15:0] hold_add;
reg [1:0] flag_reg;
wire [1:0] sel_jmp;

assign JV = (~op[0])&(~op[1])&(op[2])&(op[3])&(op[4])&(~op[5]);
assign JNV = (op[0])&(~op[1])&(op[2])&(op[3])&(op[4])&(~op[5]);
assign JZ = (~op[0])&(op[1])&(op[2])&(op[3])&(op[4])&(~op[5]);
assign JNZ = (op[0])&(op[1])&(op[2])&(op[3])&(op[4])&(~op[5]);
assign JMP = (~op[0])&(~op[1])&(~op[2])&(op[3])&(op[4])&(~op[5]);

assign wJV = sel_jmp[0] & JV;
assign wJNV = (~sel_jmp[0]) & JNV;
assign wJZ = sel_jmp[1] & JZ;
assign wJNZ = (~sel_jmp[1]) & JNZ;

assign RET = (~op[0])&(~op[1])&(~op[2])&(~op[3])&(op[4])&(~op[5]);

DFlipFlop d1(interrupt,clk,wInt,reset);
DFlipFlop d2(wInt,clk,flag_mux_sel,reset);

assign next_add = current_address + 16'b0000000000000001;

assign sel_add_mux_out = (interrupt == 1'b1) ? next_add : hold_add;
assign flag_mux_out = (flag_mux_sel == 1'b1) ? flag_ex : flag_reg;
assign sel_jmp = (RET == 1'b1 ) ? flag_reg : flag_ex ;
assign interrupt_mux_out  = (wInt == 1'b1 ) ? 16'b1111000000000000 : jmp_address_pm;
assign jmp_loc = (RET == 1'b1) ? hold_add : interrupt_mux_out;


assign pc_mux_sel = wJV|wJNV|wJZ|wJNZ|wInt|RET|JMP;

always@(posedge clk) begin
	hold_add = (reset == 1'b1 ) ? sel_add_mux_out : 16'b0;
	flag_reg = (reset == 1'b1 ) ? flag_mux_out : 2'b0;
end

endmodule
