`timescale 1ns / 1ns

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:31:53 11/12/2019
// Design Name:   Captura_de_datos
// Module Name:   /home/jhonathann/Escritorio/Digital 2/Proyecto digital 2/work01-camara-grupo_1/hw/Captura_de_datos_test.v
// Project Name:  test_cam
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Captura_de_datos
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Captura_de_datos_test;

	// Inputs
	reg Href;
	reg Vsync;
	reg Pclk;
	reg [7:0] D;

	// Outputs
	wire [14:0] addr;
	wire [7:0] RGB332;
	wire write;

	// Instantiate the Unit Under Test (UUT)
	Captura_de_datos uut (
		.Href(Href), 
		.Vsync(Vsync), 
		.Pclk(Pclk), 
		.D(D), 
		.addr(addr), 
		.RGB332(RGB332), 
		.write(write)
	);

	initial begin
		// Initialize Inputs
		Href = 0;
		Vsync = 0;
		Pclk = 0;
		D = 0;
		#1;
		D = 8'b 01010111;
	end

always #5 Pclk = ~Pclk;
always #1000 Vsync = ~Vsync;
always #100 Href = ~Href;

endmodule

