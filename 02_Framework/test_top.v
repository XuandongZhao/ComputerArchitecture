`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:37:16 10/09/2017
// Design Name:   mips_top
// Module Name:   Y:/Desktop/Code/Arch/Framework/test_top.v
// Project Name:  Framework
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_top;

	// Inputs
	reg clk200MHz;
	reg [7:0] SW;
	reg RSTN;
	reg [3:0] BTN_Y;

	// Outputs
	wire [4:0] BTN_X;
	wire SEGLED_CLK;
	wire SEGLED_DO;
	wire SEGLED_PEN;
	wire LED_PEN;
	wire LED_DO;
	wire LED_CLK;
	wire [3:0] VGA_B;
	wire [3:0] VGA_G;
	wire [3:0] VGA_R;
	wire HS;
	wire VS;

	// Instantiate the Unit Under Test (UUT)
	mips_top uut (
		.clk200MHz(clk200MHz), 
		.SW(SW), 
		.RSTN(RSTN), 
		.BTN_X(BTN_X), 
		.BTN_Y(BTN_Y), 
		.SEGLED_CLK(SEGLED_CLK), 
		.SEGLED_DO(SEGLED_DO), 
		.SEGLED_PEN(SEGLED_PEN), 
		.LED_PEN(LED_PEN), 
		.LED_DO(LED_DO), 
		.LED_CLK(LED_CLK), 
		.VGA_B(VGA_B), 
		.VGA_G(VGA_G), 
		.VGA_R(VGA_R), 
		.HS(HS), 
		.VS(VS)
	);
	
	initial begin
	fork
	forever #10 clk200MHz=~clk200MHz;
		begin
	// Initialize Inputs
		clk200MHz = 0;
		SW = 0;
		RSTN = 1;
		BTN_Y = 0;
		// Wait 100 ns for global reset to finish
		#2000;
        
		// Add stimulus here
		end
	join
	end
      
endmodule

