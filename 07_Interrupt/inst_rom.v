module inst_rom (
	input wire clk,
	input wire rst,
	input wire cs,
	input wire [31:0] addr,
	output reg [31:0] dout,
	output reg stall
	);
	reg ack;
	reg [31:0] addr_buf;
	reg [3:0] delay_count;
	
	localparam
		S_IDLE = 0,
		S_READ = 1;
	reg state = 0;
	
	parameter
		ADDR_WIDTH = 6,
		CLK_DELAY = 8;
	
	reg [31:0] data [0:(1<<ADDR_WIDTH)-1];
	
	initial	begin
		$readmemh("inst_mem.hex", data);
	end
	
	reg [31:0] out;
	always @(negedge clk) begin
		dout <= 0;
		ack <= 0;
		state <= S_IDLE;
		if (rst || ~cs) begin
			delay_count <= 0;
		end
		else case (state)
			S_IDLE: begin
				delay_count <= 0;
				state <= S_READ;
			end
			S_READ: begin
				if (delay_count == CLK_DELAY - 2) begin
					dout <= (addr[31:ADDR_WIDTH] != 0) ? 32'b0 : data[addr[ADDR_WIDTH-1:0]];
					ack <= 1;
				end
				else if (add_buf != addr) begin
					delay_count <= 0;
					state <= S_READ;
				end
				else begin
					delay_count <= delay_count + 1;
					state <= S_READ;
				end
			end
		endcase
	end
	
	always @(*) begin
		stall <= cs & (~ack);
	end
	
endmodule
