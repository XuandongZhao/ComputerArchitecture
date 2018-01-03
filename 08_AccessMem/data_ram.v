module data_ram (
	input wire clk,
	input wire we,
	input wire [31:0] addr,
	input wire [31:0] din,
	output reg [31:0] dout,

	input wire rst,
	input wire cs,
	output reg stall
	);
	
	reg ack;
	reg [3:0] counter;

	parameter
		ADDR_WIDTH = 5,
		CLK_DELAY = 8;

	localparam
		S_IDLE = 0,
		S_READ = 1,
		S_WRITE = 2;
	
	reg [1:0] state = 0;
	
	reg [31:0] data [0:(1<<ADDR_WIDTH)-1];
	
	initial	begin
		$readmemh("data_mem.hex", data);
	end
	
	always @(posedge clk) begin
		dout <= 0;
		ack <= 0;
		state <= S_IDLE;
		if (rst || ~cs) begin
			counter <= 0;
		end
		else case (state)
			S_IDLE: begin
				counter <= 0;
				if (we)
					state <= S_WRITE;
				else
					state <= S_READ;
			end
			S_READ: begin
				if (counter == CLK_DELAY-1) begin
					dout <= data[addr];
					ack <= 1;
				end
				// else if (addr_buf != addr) begin
				// 	counter <= 0;
				// 	state <= S_READ;
				// end
				else begin
					counter <= counter + 1'h1;
					state <= S_READ;
				end
			end
			S_WRITE: begin
				if (counter == CLK_DELAY-1) begin
					data[addr] <= din;
					ack <= 1;
				end
				// else if (addr_buf != addr) begin
				// 	counter <= 0;
				// 	state <= S_WRITE;
				// end
				else begin
					counter <= counter + 1'h1;
					state <= S_WRITE;
				end
			end
		endcase
	end
	
	always @(*) begin
		stall = cs & (~ack);
	end
	
endmodule
