`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:07:47 12/15/2019 
// Design Name: 
// Module Name:    Program_Memory 
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
module Program_memory(jmp_loc , pc_mux_sel , stall , stall_pm , reset , clk , ins , current_address);

input [15:0] jmp_loc;
input pc_mux_sel , stall , stall_pm , reset , clk;

output [31:0] ins;
output [15:0] current_address;

wire [31:0] ins_pm,PM_out;
wire [15:0] CAJ,CAR,IA;

reg [15:0] hold_address,next_address;
reg [31:0] ins_prv;

// using 2:1 MUX (input : 16 bits , output : 16 bits , select line : 1 bit)
assign CAJ = (stall == 1'b0 ) ? next_address : hold_address;    //  using mux to decide wether to keep the current or the next address
assign CAR = (pc_mux_sel == 1'b0 ) ? CAJ : jmp_loc;   // deciding that wether to jump or not
assign current_address = (reset == 1'b0 ) ? 16'b0 : CAR;   // condition for the reset (non - maskable interrupt) 
assign IA = current_address + 16'b0000000000000001;   // Program Counter ( getting the next address)

// using 2:1 MUX (input : 32 bits , output : 32 bits , select line : 1 bit)
assign ins_pm = (stall_pm==1'b0) ? PM_out : ins_prv;   // deciding the output from program memory or using the previous instructions (used for looping conditions)
assign ins = (reset==1'b1) ? ins_pm : 32'b0;   // condition for the reset ( non - maskable interupt)

// defining the program memory ( making it clock synchronous)
Program_Mem_Block your_instance_name (
  .clka(clk), // input clka
  .addra(current_address), // input [15 : 0] addra
  .douta(PM_out) // output [31 : 0] douta
);


// (positive edge trigerred clock)
always@(posedge clk) begin
	next_address = (reset==1'b1) ? IA : 16'b0;  // assinging the increamented address to the next _ address which is stored in the reg.
	hold_address = (reset==1'b1) ? current_address : 16'b0;  // assigning current _ address to the hold_address which is stored in the reg.
	ins_prv = (reset==1'b1) ? ins : 32'b0;   // storing the previous instruction into INSTRUCTION REGISTER
end

endmodule
