module inst_rom (
	input wire clk,
	input wire [31:0] addr,
	output reg [31:0] dout,
	
	input wire rst, 
	input wire cs, 
	output reg stall
	);

	reg ack;
	reg [3:0] counter;
	
	parameter
		ADDR_WIDTH = 6,
		CLK_DELAY = 8;

	localparam
		S_IDLE = 0,
		S_READ = 1;

	reg state = 0;
	
	reg [31:0] data [0:(1<<ADDR_WIDTH)-1];
	
	initial	begin
		$readmemh("inst_mem.hex", data);
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
				state <= S_READ;
			end
			S_READ: begin
				if (counter == CLK_DELAY-1) begin
					dout <= (addr[31:ADDR_WIDTH] != 0) ? 32'b0 : data[addr[ADDR_WIDTH-1:0]];
					ack <= 1;
				end
				// else if (addr_buf != addr) begin
				// 	delay_count <= 0;
				// 	state <= S_READ;
				// end
				else begin
					counter <= counter + 1'h1;
					state <= S_READ;
				end
			end
		endcase
	end

	always @(*) begin
		stall = cs & (~ack);
	end
	
endmodule
