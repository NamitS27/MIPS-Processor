`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:05:31 12/15/2019 
// Design Name: 
// Module Name:    WriteBack 
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
module WriteBack(ans_dm, clk, reset, ans_wb);

//Main Inputs
input [15:0] ans_dm;
input clk, reset;

//Main Outputs
output reg [15:0] ans_wb;

//Wire used for proper reset
wire [15:0] ans_wb_temp;
assign ans_wb_temp = reset==1'b1 ? ans_dm : 16'b0;

always @(posedge clk) begin //Always block for behavioral programming
	ans_wb <= ans_wb_temp; 
end

endmodule
