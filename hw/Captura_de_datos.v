`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:46:55 11/10/2019 
// Design Name: 
// Module Name:    Captura_de_datos 
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
module Captura_de_datos(
	input Href,
	input Vsync,
	input Pclk,
	input [7:0]D,
	output reg [14:0]addr,
	output reg [7:0]RGB332,
	output reg write
    );

reg state;
reg countData;
reg [14:0]address;

initial begin
	state <= 0;
	countData <= 0;
	address <= 15'b111111111111111;
end

always @(Vsync)begin
	if(Vsync)begin
		state <= 0;
	end else begin
		state <= 1;
	end
end

always @(posedge Pclk)begin
	if(state)begin
		if(Href)begin
			if(countData == 0)begin
				RGB332[7] <= D[6];
				RGB332[6] <= D[5];
				RGB332[5] <= D[4];
				RGB332[4] <= D[1];
				RGB332[3] <= D[0];
				countData <= 1;
				write <= 0;
			end
			if(countData == 1)begin
				RGB332[2] <= D[7];
				RGB332[1] <= D[4];
				RGB332[0] <= D[3];
				write <= 1;
				addr <= address + 1;
				address <= address + 1;
				countData <= 0;
			end
		end else begin
			write <= 0;
		end
	end else begin
		write <= 0;
	end
end

endmodule
