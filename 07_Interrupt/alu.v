`include "define.vh"


/**
 * Arithmetic and Logic Unit for MIPS CPU.
 * Author: Zhao, Hongyu  <power_zhy@foxmail.com>
 */
module alu (
	input wire [31:0] a, b,  // two operands
	input wire [3:0] oper,  // operation type
	input wire sign,
	output reg [31:0] result  // calculation result
	);
	
	`include "mips_define.vh"
	
	always @(*) begin
		result = 0;
		case (oper)
			EXE_ALU_ADD: begin
				result = a + b;
			end
			EXE_ALU_ADDU:begin
				result = $unsigned(a) + $unsigned(b);
			end
			EXE_ALU_SUB: begin
				result = a - b;
			end
			EXE_ALU_AND: begin
				result = a & b;
			end
			EXE_ALU_OR: begin
				result = a | b;
			end
			EXE_ALU_SLT: begin
			  if(sign)
					result = $signed(a) < $signed(b);
			  else
					result = $unsigned(a) < $unsigned(b);
			end
			EXE_ALU_LUI: begin
			     result = b*65536;
			end
			EXE_ALU_SR: begin
			  if(sign)
					result = $signed(b) >>> a;  //arithmetic
			  else
					result = b >> a; //logictical
			end
			EXE_ALU_XOR: begin
			     result = a^b;
			end
			EXE_ALU_SL: begin
			     result = b << a;
			end
			EXE_ALU_NOR: begin
			     result = ~(a | b);
			end        
		endcase
	end
	
endmodule
