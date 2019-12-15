`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:17 12/15/2019 
// Design Name: 
// Module Name:    ALU_16_bit 
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
module ALU_16_bit(A,B,data_in,op_dec,clk,reset,ans_ex,DM_data,data_out,flag_ex);

input [15:0] A,B,data_in;
input [5:0] op_dec;
input reset,clk;

output reg [15:0] ans_ex,DM_data;
output reg [15:0] data_out;
output wire [1:0] flag_ex;

wire [15:0] data_out_buff,ans_tmp,arith_shift,temp,BB;
reg [1:0] flag_prv;
wire zero,overflow;
wire [15:0] mul_prod;

assign BB = ((op_dec == 6'b000001 || op_dec==6'b001001) ? ~B + 1'b1 : B);    // two's complement
assign temp = A[14:0]+BB[14:0];      // After doing two's complement adding them
assign overflow = temp[15]^A[15]^BB[15];   // checking for the overflow

arithshift rsa(A,B,arith_shift);    // module of arithmetic right shift is called
booth_multiplication bm(mul_prod,A[7:0],B[7:0]);

assign ans_tmp = 		  
  (op_dec == 6'b000000 ) ?  A+B            // ADD
: (op_dec == 6'b000001) ? A-B				// SUB
: (op_dec == 6'b000010 ) ? B					// MOV
: (op_dec == 6'b000011 ) ? mul_prod			// BOOTH
: (op_dec == 6'b000100 ) ? A&B				// AND
: (op_dec == 6'b000101 ) ? A|B				// OR
: (op_dec == 6'b000110 ) ? A^B				// XOR
: (op_dec == 6'b000111 ) ? ~B				// NOT
: (op_dec == 6'b001000 ) ? A+B				// ADI
: (op_dec == 6'b001001 ) ? A-B				// SBI
: (op_dec == 6'b001010 ) ? B					// MVI
: (op_dec == 6'b001100 ) ? A&B				// ANI
: (op_dec == 6'b001101 ) ? A|B   			// ORI
: (op_dec == 6'b001110 ) ? A^B				// XRI
: (op_dec == 6'b001111 ) ? ~B				// NTI
: (op_dec == 6'b010000 ) ? ans_ex		// RET
: (op_dec == 6'b010001 ) ? ans_ex			// HLT
: (op_dec == 6'b010100 ) ? A 				// LD
: (op_dec == 6'b010101 ) ? A					// ST
: (op_dec == 6'b010110 ) ? data_in			// IN
: (op_dec == 6'b010111 ) ? ans_ex			// OUT
: (op_dec == 6'b011000 ) ? ans_ex			// JMP
: (op_dec == 6'b011001 ) ? A<<B				// LS
: (op_dec == 6'b011010 ) ? A>>B 			// RS
: (op_dec == 6'b011011 ) ? arith_shift		// RSA
: (op_dec == 6'b011100 ) ? ans_ex			// JV
: (op_dec == 6'b011101 ) ? ans_ex			// JNV
: (op_dec == 6'b011110 ) ? ans_ex : ans_ex;	// JZ & JNZ
						
assign zero = (ans_tmp == 16'b0000000000000000) ? 1'b1 : 1'b0;  // condition for checking wether all bits of the number are zero or not
 
 
 // Logic for the flags affected
assign flag_ex = 
(op_dec == 6'b000000) ? {zero,overflow} : 
(op_dec == 6'b000001) ? {zero,overflow} : 
(op_dec == 6'b000010) ? {zero,1'b0} :
(op_dec == 6'b000011) ? {zero,overflow} : 
(op_dec == 6'b000100) ? {zero,1'b0} : 
(op_dec == 6'b000101) ? {zero,1'b0} : 
(op_dec == 6'b000110) ? {zero,1'b0} : 
(op_dec == 6'b000111) ? {zero,1'b0} : 
(op_dec == 6'b001000) ? {zero,overflow} : 
(op_dec == 6'b001001) ? {zero,overflow} : 
(op_dec == 6'b001010) ? {zero,1'b0} : 
(op_dec == 6'b001100) ? {zero,1'b0} : 
(op_dec == 6'b001101) ? {zero,1'b0} : 
(op_dec == 6'b001110) ? {zero,1'b0} : 
(op_dec == 6'b001111) ? {zero,1'b0} : 
(op_dec == 6'b010000) ? 2'b00:
(op_dec == 6'b010001) ? 2'b00: 
(op_dec == 6'b010100) ? 2'b00: 
(op_dec == 6'b010101) ? 2'b00: 
(op_dec == 6'b010110) ? {zero,1'b0} : 
(op_dec == 6'b010111) ? 2'b00: 
(op_dec == 6'b011000) ? 2'b00: 
(op_dec == 6'b011001) ? {zero,1'b0} : 
(op_dec == 6'b011010) ? {zero,1'b0} : 
(op_dec == 6'b011011) ? {zero,1'b0} : 
(op_dec == 6'b011100) ? flag_prv : 
(op_dec == 6'b011101) ? flag_prv : 
(op_dec == 6'b011110) ? flag_prv : flag_prv;

assign data_out_buff = ((op_dec==6'b010111) ? A : data_out);   // assigning value to data_out buffer

always @ (posedge clk)   // register with positive edge triggered clock
begin
	
		// assigning the value to thier respective variables and adding the condition for reset which makes everthing zero ( reset is negative edge triggered)
		ans_ex = (reset==0) ? 16'b0000000000000000 : ans_tmp ;
		data_out = (reset==0) ? 16'b0000000000000000 : data_out_buff ;
		DM_data = (reset==0) ? 16'b0000000000000000 : B;
		flag_prv = (reset==0) ? 2'b00 : flag_ex;
		
end

endmodule

// module for arithmetic right shift
module arithshift(A,B,Ans);
input signed [15:0] A,B;  // making the input signed
output [15:0] Ans;
assign Ans = A >>> B;
endmodule

