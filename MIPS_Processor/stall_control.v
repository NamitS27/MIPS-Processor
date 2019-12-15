`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:04:51 12/15/2019 
// Design Name: 
// Module Name:    stall_control 
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
module stall_control(op,clk,reset,stall,stall_pm);

//Main Inputs
input [5:0] op;
input clk, reset;

//Main Outputs
output stall, stall_pm;

//Wires required in the Stall circuit
wire HLT, L_D, JUMP, stall_temp, stall_pm_temp, Q1, Q2, Q4;

//HLT, LD and JUMP are assigned here
assign HLT = op[0] & (~op[1]) & (~op[2]) & (~op[3]) & op[4] & (~op[5]);
assign L_D = (~op[0]) & (~op[1]) & op[2] & (~op[3]) & op[4] & (~op[5]) & (~Q1);
assign JUMP = op[2] & op[3] & op[4] & (~op[5]) & (~Q4);

//All the DFlipFlops are assigned here,
//  D1  D3
//  D2  D4
DFlipFlop d1(L_D,clk,Q1,reset);
DFlipFlop d2(JUMP,clk,Q2,reset);
DFlipFlop d3(stall_temp,clk,stall_pm_temp,reset);
DFlipFlop d4(Q2,clk,Q4,reset);


assign stall_temp = HLT | L_D | JUMP; 
assign stall = stall_temp;
assign stall_pm = stall_pm_temp;

endmodule // StallControl

//DFlipFlop is designed here