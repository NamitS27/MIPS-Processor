`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:39:25 12/15/2019
// Design Name:   MIPS_16_bit_Processor
// Module Name:   C:/Users/Namit/Desktop/MIPS/MIPS_Proessor/MIPS_16_bit_Processor_tb.v
// Project Name:  MIPS_Proessor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS_16_bit_Processor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_16_bit_Processor_tb;

	// Inputs
	reg [15:0] data_in;
	reg clk;
	reg interrupt;
	reg reset;

	// Outputs
	wire [15:0] data_out;
	wire [31:0] ins;
	wire [15:0] A;
	wire [15:0] B;
	wire [15:0] Current_Address;
	wire [15:0] ans_ex;
	wire [15:0] ans_dm;
	wire [15:0] ans_wb;
	wire [1:0] mux_sel_A;
	wire [1:0] mux_sel_B;
	wire imm_sel;
	wire prediction;
	wire [1:0] present_state;
	wire pc_mux_sel;

	// Instantiate the Unit Under Test (UUT)
	MIPS_16_bit_Processor uut (
		.data_in(data_in), 
		.clk(clk), 
		.interrupt(interrupt), 
		.reset(reset), 
		.data_out(data_out), 
		.ins(ins), 
		.A(A), 
		.B(B), 
		.Current_Address(Current_Address), 
		.ans_ex(ans_ex), 
		.ans_dm(ans_dm), 
		.ans_wb(ans_wb), 
		.mux_sel_A(mux_sel_A), 
		.mux_sel_B(mux_sel_B), 
		.imm_sel(imm_sel), 
		.prediction(prediction), 
		.present_state(present_state), 
		.pc_mux_sel(pc_mux_sel)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		clk = 0;
		interrupt = 0;
		reset = 0;

		
		#2;
		reset = 0;
		#6;
		reset = 1;

	end
    always #5 clk = ~clk;
      
endmodule

