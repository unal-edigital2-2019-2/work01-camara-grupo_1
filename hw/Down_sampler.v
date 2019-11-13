`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:59 11/13/2019 
// Design Name: 
// Module Name:    Down_sampler 
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
module Down_sampler(
	input [7:0]data_bus,
	input Href,
	input VSync,
	input Pclk,
	output DP_RAM_regW,
	output [14:0]DP_RAM_addr_in,
	output [7:0]DP_RAM_data_in
    );

reg [7:0]d_latch;
reg href_last;
reg [1:0]cnt;
reg [2:0]hold_red;
reg [2:0]hold_green;
reg [14:0]address;

initial
begin
d_latch<=8'd0;
href_last<=0;
cnt<=2'd0;
hold_red<=3'd0;
hold_green<=3'd0;
address<=15'd0;
end

//assign DP_RAM_addr_in<=address;

always @(posedge Pclk)
begin
DP_RAM_regW<=0;
	if (VSync==1) begin
		address<=15'd32767;
		href_last<=0;
		cnt<=2'd0;
		end else begin
			if ((href_last==1)&(address != 14'b100101011111111))
				begin
				if (cnt==2'b11) begin
					address<=address+1'b1;
					end
				if (cnt==2'b01) begin
					cnt<=cnt+1'b1;
					end
			end
		end
		dout <= {hold_red, hold_green, d_latch(4), dlatch(3)}; // d(4:3) is blue;
		hold_green   <= {d_latch(7),d_latch(6),d_latch(5)};  
      hold_red <= {d_latch(2),d_latch(1),d_latch(0)};
      d_latch <= data_bus;
         
      href_last <= Href;	
end

endmodule
