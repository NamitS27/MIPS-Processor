`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:04:14 12/15/2019 
// Design Name: 
// Module Name:    reg_bank 
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
module reg_bank(ans_ex,ans_dm,ans_wb,imm,RA,RB,RW_dm,mux_sel_A,mux_sel_B,imm_sel,clk,A,B);

input [15:0] ans_ex,ans_dm,ans_wb,imm;
input [4:0] RA,RB,RW_dm;
input [1:0] mux_sel_A,mux_sel_B;
input clk,imm_sel;

output [15:0] A,B;

reg [15:0] AR,BR;   
wire [15:0] BI;
reg [15:0] reg_bank [31:0];

// 4X1 Mux (In / Out : 16 bits , Select Line : 2 bits)
assign A = mux_sel_A[1] ? (mux_sel_A[0] ? ans_wb : ans_dm ) : (mux_sel_A[0] ? ans_ex : AR);  // 0 ? (0 : 1) : (0  : 1) = 00 01 10 11 
assign BI = mux_sel_B[1] ? (mux_sel_B[0] ? ans_wb : ans_dm ) : (mux_sel_B[0] ? ans_ex : BR);


assign B = imm_sel ? imm : BI;

always@(posedge clk) begin                    // Register 32 x 16
	AR <= reg_bank[RA]; 							// Ar is the value at RA position in the register
	BR <= reg_bank[RB];							// Br is the value at RB position in the  register
	reg_bank[RW_dm] <= ans_dm;			// storing the ans_dm value in the RW_dm (writeback ) location
end

endmodule

