`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:07:03 12/15/2019 
// Design Name: 
// Module Name:    branch_predictor 
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
module branch_predictor(presentState,prediction,opcode,pc_mux_sel,clk,reset);

input pc_mux_sel, clk, reset;
input [5:0] opcode;

output prediction;
output [1:0] presentState;

reg [1:0] present_state;
wire prediction_incorrect;
reg update;

assign prediction = present_state[1];

assign prediction_incorrect = (opcode[5:2] == 4'b0111) ? ((pc_mux_sel == prediction) ? (1'b0) : (1'b1)) : (prediction_incorrect) ;

assign presentState = present_state;

always@(posedge clk) begin
	present_state <= (reset) ? present_state : 2'b00;
	if(opcode[5:2] == 4'b0111) begin 
		present_state <= (prediction_incorrect == 1'b1) ? ((present_state == 2'b00 | present_state == 2'b10) ? (2'b01) : (2'b10)) :	((present_state == 2'b10 | present_state == 2'b11) ? (2'b11) : (2'b00)) ;
	end
end

endmodule
