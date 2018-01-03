`include "define.vh"


/**
 * Controller for MIPS 5-stage pipelined CPU.
 * Author: Zhao, Hongyu  <power_zhy@foxmail.com>
 */
module controller (/*AUTOARG*/
	input wire clk,  // main clock
	input wire rst,  // synchronous reset
	// debug
	`ifdef DEBUG
	input wire debug_en,  // debug enable
	input wire debug_step,  // debug step clock
	`endif
	// instruction decode
	input wire [31:0] inst,  // instruction
	input wire is_branch_exe,  // whether instruction in EXE stage is jump/branch instruction
	input wire [4:0] regw_addr_exe,  // register write address from EXE stage
	input wire wb_wen_exe,  // register write enable signal feedback from EXE stage
	input wire is_branch_mem,  // whether instruction in MEM stage is jump/branch instruction
	input wire [4:0] regw_addr_mem,  // register write address from MEM stage
	input wire wb_wen_mem,  // register write enable signal feedback from MEM stage
	output reg [2:0] pc_src,  // how would PC change to next
	output reg imm_ext,  // whether using sign extended to immediate data
	output reg [1:0] exe_a_src,  // data source of operand A for ALU
	output reg [1:0] exe_b_src,  // data source of operand B for ALU
	output reg [3:0] exe_alu_oper,  // ALU operation type
	output reg mem_ren,  // memory read enable signal
	output reg mem_wen,  // memory write enable signal
	output reg [1:0] wb_addr_src,  // address source to write data back to registers
	output reg wb_data_src,  // data source of data being written back to registers
	output reg wb_wen,  // register write enable signal
	output reg unrecognized,  // whether current instruction can not be recognized
	// pipeline control
	output reg if_rst,  // stage reset signal
	output reg if_en,  // stage enable signal
	input wire if_valid,  // stage valid flag
	output reg id_rst,
	output reg id_en,
	input wire id_valid,
	output reg exe_rst,
	output reg exe_en,
	input wire exe_valid,
	output reg mem_rst,
	output reg mem_en,
	input wire mem_valid,
	output reg wb_rst,
	output reg wb_en,
	input wire wb_valid,
	// output control signal
	output reg [1:0] foward_a,
	output reg [1:0] foward_b,	
	input [4:0]regw_addr_wb,
	input rs_rt_equal,
	output reg is_load,
	output reg is_store,
	output reg mem_fwd_m,
	
	input wire is_load_exe,
	input wire is_load_mem,
	output reg sign,
	output reg [4:0]sa,
	// CP0 control signal
	input wire jump_en,
	output reg ir_en,
	output reg ir_rst,
	output reg [1:0] cp_oper
	);
	
	`include "mips_define.vh"
	
	// instruction decode
	reg rs_used, rt_used;
	
	always @(*) begin
		pc_src = PC_NEXT;
		imm_ext = 0;
		exe_a_src = EXE_A_RS;
		exe_b_src = EXE_B_RT;
		exe_alu_oper = EXE_ALU_ADD;
		mem_ren = 0;
		mem_wen = 0;
		wb_addr_src = WB_ADDR_RD;
		wb_data_src = WB_DATA_ALU;
		wb_wen = 0;
		rs_used = 0;
		rt_used = 0;
		unrecognized = 0;
		is_load = 0;
		is_store = 0;
		sign = 0;
		cp_oper = EXE_CP_NONE;
		case (inst[31:26])
			INST_R: begin
				case (inst[5:0])
					R_FUNC_SLL: begin
					  exe_alu_oper = EXE_ALU_SL;
					  wb_addr_src = WB_ADDR_RD;
					  wb_data_src = WB_DATA_ALU;
					  wb_wen = 1;
					  rt_used = 1;
					  exe_a_src = EXE_A_SA;
					  sa = inst[10:6];
					end
					R_FUNC_SRL: begin
					  exe_alu_oper = EXE_ALU_SR;
					  sign = 0;
					  wb_addr_src = WB_ADDR_RD;
					  wb_data_src = WB_DATA_ALU;
					  wb_wen = 1;
					  rt_used = 1;
					  exe_a_src = EXE_A_SA;	
					  sa = inst[10:6];						  
					end
					R_FUNC_SRA: begin
						exe_alu_oper = EXE_ALU_SR;
						sign = 1;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rt_used = 1;
						exe_a_src = EXE_A_SA; 
						sa = inst[10:6];						
               		end
					R_FUNC_JR: begin
						pc_src = PC_JR;
						rs_used = 1;
					end
					R_FUNC_ADD: begin
						exe_alu_oper = EXE_ALU_ADD;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_SUB: begin
						exe_alu_oper = EXE_ALU_SUB;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_AND: begin
						exe_alu_oper = EXE_ALU_AND;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_OR: begin
						exe_alu_oper = EXE_ALU_OR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_XOR: begin
					    exe_alu_oper = EXE_ALU_XOR;
					    wb_addr_src = WB_ADDR_RD;
					    wb_data_src = WB_DATA_ALU;
					    wb_wen = 1;
					    rs_used = 1;
					    rt_used = 1;
					end
					R_FUNC_NOR: begin
						exe_alu_oper = EXE_ALU_NOR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;			
					end
					R_FUNC_SLTU:begin
						exe_alu_oper = EXE_ALU_SLT;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
						sign = 0;
					end
					R_FUNC_SLT: begin
						exe_alu_oper = EXE_ALU_SLT;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
						sign = 1;
					end
					default: begin
						unrecognized = 1;
					end
				endcase
			end
			INST_CP0: begin
				if (inst[5:0] == CP0_CO_ERET) begin
					cp_oper = EXE_CP0_ERET;
				end
				else if(inst[25] == 0) begin
					case (inst[24:21])
						CP_FUNC_MF: begin
							rt_used = 1;
							cp_oper = EXE_CP_NONE;
							wb_addr_src = WB_ADDR_RT;
							wb_data_src = WB_DATA_ALU;
							wb_wen = 1;
							exe_alu_oper = EXE_ALU_ADD;
							exe_a_src = EXE_A_CP0;
							exe_b_src = EXE_B_CP0;
						end
						CP_FUNC_MT: begin
							rt_used = 1;
							cp_oper = EXE_CP_STORE;
						end
					endcase
				end
			end
			INST_J: begin
				pc_src = PC_JUMP;
			end
			INST_JAL: begin
				pc_src = PC_JUMP;
				exe_a_src = EXE_A_LINK;
				exe_b_src = EXE_B_LINK;
				exe_alu_oper = EXE_ALU_ADD;
				wb_addr_src = WB_ADDR_LINK;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
			end
			INST_BEQ: begin
				pc_src = rs_rt_equal == 1 ? PC_BRANCH:PC_NEXT;
				exe_a_src = EXE_A_BRANCH;
				exe_b_src = EXE_B_BRANCH;
				exe_alu_oper = EXE_ALU_ADD;
				imm_ext = 1;
				rs_used = 1;
				rt_used = 1;
			end
			INST_BNE: begin
				pc_src = rs_rt_equal == 0 ? PC_BRANCH:PC_NEXT;
				exe_a_src = EXE_A_BRANCH;
				exe_b_src = EXE_B_BRANCH;
				exe_alu_oper = EXE_ALU_ADD;
				imm_ext = 1;
				rs_used = 1;
				rt_used = 1;
			end
			INST_ADDI: begin
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_ADD;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_ADDIU:begin
				exe_alu_oper = EXE_ALU_ADDU;
				exe_b_src = EXE_B_IMM;
				imm_ext = 1;
				rs_used = 1;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
			end
			INST_ANDI: begin
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_AND;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_ORI: begin
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_OR;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_XORI: begin
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_XOR;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_LUI:begin
				exe_alu_oper = EXE_ALU_LUI;
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
			end
			INST_LW: begin
				imm_ext = 1;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_ADD;
				mem_ren = 1;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_MEM;
				wb_wen = 1;
				rs_used = 1;
				is_load = 1;
			end
			INST_SW: begin
				imm_ext = 1;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_ADD;
				mem_wen = 1;
				rs_used = 1;
				rt_used = 1;
				is_store = 1;
			end
			default: begin
				unrecognized = 1;
			end
		endcase
	end
	
	// pipeline control
	reg reg_stall;
	reg branch_stall;
	reg load_stall;
	wire [4:0] addr_rs, addr_rt;
	
	assign
		addr_rs = inst[25:21],
		addr_rt = inst[20:16];
	
	always @(*) begin
		reg_stall = 0;                                    
	end
	always @(*) begin
		foward_a = ID_RS_rs;
		foward_b = ID_RT_rt;
		mem_fwd_m = 0;
		load_stall = 0;
		if(wb_wen_mem && (regw_addr_mem != 0) && (regw_addr_exe != addr_rs) && (regw_addr_mem == addr_rs))
			foward_a = ID_RS_ALU_MEM;
		if(wb_wen_mem && (regw_addr_mem != 0) && (regw_addr_exe != addr_rt) && (regw_addr_mem == addr_rt))
			foward_b = ID_RT_ALU_MEM;
		if(wb_wen_mem && (regw_addr_mem != 0) && (regw_addr_mem == addr_rs) && is_load_mem && ~mem_ren)
			foward_a = ID_RS_LMD_MEM;
		if(wb_wen_mem && (regw_addr_mem != 0) && (regw_addr_mem == addr_rt) && is_load_mem && ~mem_ren)
			foward_b = ID_RT_LMD_MEM;
		if(wb_wen_exe && (regw_addr_exe != 0) && (regw_addr_exe == addr_rs))
			foward_a = ID_RS_ALU_EXE;
		if(wb_wen_exe && (regw_addr_exe != 0) && (regw_addr_exe == addr_rt))
			foward_b = ID_RT_ALU_EXE;  
		
		if (inst[24:21] == CP_FUNC_MT && wb_wen_exe && (regw_addr_exe != 0) && (regw_addr_exe == addr_rt))
			foward_b = ID_RT_ALU_EXE; 
	
		if(rt_used && (regw_addr_exe == addr_rt) && wb_wen_exe && is_load_exe && is_store)
			mem_fwd_m = 1;  
		if(rt_used && (regw_addr_exe == addr_rt) && wb_wen_exe && is_load_exe && ~is_store)
			load_stall = 1;
		if(rs_used && (regw_addr_exe == addr_rs) && wb_wen_exe && is_load_exe)
			load_stall = 1;   
	end
	
	always @(*) begin
		branch_stall = 0;
	end
	
	`ifdef DEBUG
	reg debug_step_prev;
	
	always @(posedge clk) begin
		debug_step_prev <= debug_step;
	end
	`endif
	
	always @(*) begin
		if_rst = 0;
		if_en = 1;
		id_rst = 0;
		id_en = 1;
		exe_rst = 0;
		exe_en = 1;
		mem_rst = 0;
		mem_en = 1;
		wb_rst = 0;
		wb_en = 1;
		ir_en = 1;
		ir_rst = 0;
		if (rst) begin
			if_rst = 1;
			id_rst = 1;
			exe_rst = 1;
			mem_rst = 1;
			wb_rst = 1;
			ir_rst = 1;
		end
		`ifdef DEBUG
		// suspend and step execution
		else if ((debug_en) && ~(~debug_step_prev && debug_step)) begin
			if_en = 0;
			id_en = 0;
			exe_en = 0;
			mem_en = 0;
			wb_en = 0;
			ir_en = 0;
		end
		`endif
		// this stall indicate that ID is waiting for previous instruction, should insert NOPs between ID and EXE.
		else if (reg_stall) begin
			if_en = 0;
			id_en = 0;
			exe_rst = 1;
		end
		// this stall indicate that a jump/branch instruction is running, so that 3 NOP should be inserted between IF and ID
		else if (branch_stall) begin
			id_rst = 1;
		end
		else if (load_stall) begin
			if_en = 0;
			id_en = 0;
			exe_rst = 1;
		end
		//nterrupt	
		else if (jump_en) begin
			id_rst = 1;
		end
	end
	
endmodule
