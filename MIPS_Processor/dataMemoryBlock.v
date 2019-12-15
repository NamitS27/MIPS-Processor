`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:08:35 12/15/2019 
// Design Name: 
// Module Name:    dataMemoryBlock 
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
module dataMemoryBlock(ans_ex, DM_data, mem_rw_ex, mem_en_ex,mem_mux_sel_dm,reset,clk, ans_dm);

input [15:0] ans_ex,DM_data;
input mem_rw_ex , mem_en_ex, mem_mux_sel_dm,reset,clk;
output [15:0] ans_dm;

reg [15:0] Ex_out;
wire[15:0] DM_out,temp;

assign ans_dm = (mem_mux_sel_dm == 1'b0)  ? Ex_out : DM_out; // 2x1 MUX

assign temp = (reset == 1'b1) ? ans_ex : 16'b0;

always @(posedge clk) begin
	Ex_out = temp;
end


dataMemory your_instance_name (
  .clka(clk), // input clka
  .ena(mem_en_ex), // input ena
  .wea(mem_rw_ex), // input [0 : 0] wea
  .addra(ans_ex), // input [15 : 0] addra
  .dina(DM_data), // input [15 : 0] dina
  .douta(DM_out) // output [15 : 0] douta
);

endmodule
