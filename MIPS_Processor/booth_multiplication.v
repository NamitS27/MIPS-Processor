`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:02:15 12/15/2019 
// Design Name: 
// Module Name:    booth_multiplication 
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
module booth_multiplication(Product,multiplicand,multiplier
    );
// AC and QR together store the final product
parameter multiplier_width=8;
parameter multiplicand_width=8;
reg [multiplicand_width-1 : 0] AC;
reg [multiplier_width-1 : 0] QR;
input [multiplicand_width-1 : 0] multiplicand;
input [multiplier_width-1 : 0] multiplier;
reg [multiplicand_width-1 : 0] BR;  //temporary register to store the multiplicand
reg qnext;   
output [15:0] Product;
    
//{QR[0],qnext} decide whether the divisor would be added or subtracted from the partial product as per the booth's algorithm as shown:
//{01} AC=AC+BR
//{10} AC=AC-BR
//{00} no change
//{11} no change

assign Product = (multiplicand==8'b10000000 && multiplier == 8'b10000000) ? 16'b0100000000000000 : {AC,QR};


integer i;

always@(multiplicand,multiplier) 
begin
BR=multiplicand;
QR=multiplier;
AC=0;
qnext=1'b0;
for(i=0; i<multiplier_width; i=i+1)
    begin
    case({QR[0],qnext})
    2'b01:  AC=AC+BR;
    2'b10:  AC=AC-BR;
    default: ;
    endcase
    qnext=QR[0];
    QR={AC[0],QR[multiplier_width-1 : 1]};
    AC={AC[multiplicand_width-1],AC[multiplicand_width-1 : 1]};
    end
end

endmodule

