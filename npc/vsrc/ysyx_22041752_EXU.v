// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_EXU.v
// Author        : Cw
// Created On    : 2022-11-19 16:16
// Last Modified : 2023-06-29 12:30
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_EXU(
    input                                          clk           ,
    input                                          reset         ,

    input                                          ms_allowin    ,
    output                                         es_allowin    ,

    input                                          ds_to_es_valid,
    input  [`ysyx_22041752_DS_TO_ES_BUS_WD -1:0]   ds_to_es_bus  ,

    output                                         es_to_ms_valid,
    output [`ysyx_22041752_ES_TO_MS_BUS_WD -1:0]   es_to_ms_bus  ,

	output [`ysyx_22041752_FORWARD_BUS_WD -1:0]    es_forward_bus,

    output                                         data_en       ,
    output [`ysyx_22041752_DATA_WEN_WD -1:0]       data_wen      ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]       data_addr     ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]       data_wdata    ,
    input										   write_hit     ,

    output                                         flush         ,
    output [`ysyx_22041752_PC_WD-1:0]              flush_pc      ,
    input                                          int_t_i       , 
    output                                         flush_pc_p4   ,
    output                                         bjpre_error   

`ifdef DPI_C
        ,
    output                                   debug_es_bjpre_error,
    output                                   debug_es_bj_inst    ,
    output [63:0]                            dpi_csrs [3:0]      ,
    output                                   es_exp              ,
    output                                   es_mret             ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0] debug_es_data_addr  ,
    output                                   debug_es_out_of_mem ,
    output                                   debug_es_data_ren   ,
    output                                   debug_es_data_wen   ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0] debug_es_data_wdata ,
    output [`ysyx_22041752_PC_WD       -1:0] debug_es_pc         ,      
    input  [`ysyx_22041752_INST_WD-1:0]      debug_ds_inst       ,
    output reg [`ysyx_22041752_INST_WD-1:0]  debug_es_inst
`endif

);

reg         es_valid      ;
wire        es_ready_go   ;

reg  [`ysyx_22041752_DS_TO_ES_BUS_WD -1:0] ds_to_es_bus_r;  

wire ecall    ;
wire mret     ;
wire mul_u    ;
wire mul_su   ;
wire mul_h    ;
wire div_u    ;
wire jalr     ;
wire beq      ;
wire bne      ;
wire blt      ;
wire bge      ;
wire bltu     ;
wire bgeu     ;
wire [12:0] es_imm_b;
wire                              br_taken_pre ;
wire [`ysyx_22041752_PC_WD-1:0]   br_target_pre;
wire op_mul   ;
wire op_div   ;
wire op_rem   ;
wire op_add   ;
wire op_sub   ;
wire op_slt   ;
wire op_sltu  ;
wire op_and   ;
wire op_or    ;
wire op_xor   ;
wire op_sll   ;
wire op_srl   ;
wire op_sra   ;

wire        res_sext    ;
wire        res_zext    ;
wire        src_shamt   ;
wire        src_pc      ;
wire        src_imm_u   ;
wire        src_4       ;
wire        src_0       ;
wire        src_imm_i   ;
wire        src_imm_s   ;
wire        csrrs       ;
wire        csrrc       ;
wire        src_csr     ;
wire        es_rf_we    ;
wire        es_csr_we   ;
wire        es_mem_we   ;
wire        es_mem_re   ;
wire [ 1:0] es_mem_bytes;
wire [ 2:0] es_addr_offset;
wire [ 5:0] shamt;
wire [19:0] imm_u;
wire [11:0] imm_i;
wire [11:0] imm_s;
wire [11:0] rscsr;
wire [ 4:0] rd;
wire [`ysyx_22041752_RF_DATA_WD-1:0]    rs1_value;
wire [`ysyx_22041752_RF_DATA_WD-1:0]    rs2_value;
wire [`ysyx_22041752_PC_WD     -1:0]    es_pc  ;

assign {ecall         ,
        mret          ,
        div_u         ,
        mul_u         ,
        mul_su        ,
        mul_h         ,
        jalr          ,  
        beq           ,  
        bne           ,  
        blt           ,  
        bge           ,  
        bltu          ,  
        bgeu          ,  
        br_taken_pre  ,
        br_target_pre ,
        es_imm_b      ,
        op_mul        ,
        op_div        ,
        op_rem        ,
        op_add        ,   
        op_sub        ,  
        op_slt        ,  
        op_sltu       ,  
        op_and        ,  
        op_or         ,  
        op_xor        ,  
        op_sll        ,  
        op_srl        ,  
        op_sra        ,  
        res_sext      , 
        res_zext      , 
        shamt         ,  
        src_shamt     ,  
		src_pc        ,	
		src_imm_u     ,  
        src_4         ,  
        src_0         ,  
        src_imm_i     ,  
        src_imm_s     ,  
        src_csr       ,
        rscsr         ,
        es_csr_we     ,
        csrrc         ,
        csrrs         ,
        es_rf_we      ,  
        es_mem_we     ,
        es_mem_re     ,
        es_mem_bytes  ,
        rd            ,  
        imm_s         ,  
        imm_i         ,  
        imm_u         ,  
        rs1_value     ,  
        rs2_value     ,  
        es_pc            
       } = ds_to_es_bus_r;

wire [63:0] alu_src1   ;
wire [63:0] alu_src2   ;
wire [63:0] alu_result ;

assign es_to_ms_bus = {res_sext         ,  
                       res_zext         ,
                       es_addr_offset   ,
					   es_mem_bytes     ,  
					   es_mem_re        ,  
                       es_mem_we        ,
					   es_rf_we         ,  
                       rd               ,  
                       alu_result       ,  
                       es_pc               
                      };

wire                            pre_error  ;
wire [`ysyx_22041752_PC_WD-1:0] bj_addr    ;
wire                            br_taken_real = alu_result[0];

assign bjpre_error = pre_error && es_valid;
ysyx_22041752_bjt_cal U_BJT_CAL_0(
    .jalr                           ( jalr                                ),
    .imm_i                          ( imm_i                               ),
    .jalr_src1                      ( rs1_value[`ysyx_22041752_PC_WD-1:0] ),
    .branch                         ( beq|bne|bge|blt|bgeu|bltu           ),
    .imm_b                          ( es_imm_b                            ),
    .es_pc                          ( es_pc                         ),
    .b_taken_real                   ( br_taken_real                 ),
    .br_taken_pre                   ( br_taken_pre                  ),
    .jt_pre                         ( br_target_pre                 ),
    .pre_error                      ( pre_error                     ),
    .bj_addr                        ( bj_addr                       )
);

reg  [1:0] expfsm_pre;
wire [1:0] expfsm_nxt;
parameter IDLE = 0;
parameter W_MEPC  = 1;
parameter W_MCAUSE= 2;
always @(posedge clk) begin
    if (reset) begin
        expfsm_pre <= IDLE;
    end
    else begin
        expfsm_pre <= expfsm_nxt;
    end
end
assign expfsm_nxt = expfsm_pre == IDLE && (ecall || int_t_o)&&es_valid ? W_MEPC   :
                    expfsm_pre == W_MEPC                               ? W_MCAUSE :
                    expfsm_pre == W_MCAUSE                             ? IDLE     :
                                                                         expfsm_pre;

wire mul_out_valid;
wire mul_stall = op_mul && !mul_out_valid && es_valid && !flush;
wire div_out_valid;                                              
wire div_stall = op_rem|op_div && !div_out_valid && es_valid && !flush;
wire data_pren;
wire cache_compete	  = write_hit && data_pren;
assign es_ready_go    = expfsm_pre != W_MEPC && !div_stall && !mul_stall && !cache_compete;
assign es_allowin     = !es_valid || es_ready_go && ms_allowin;
assign es_to_ms_valid =  es_valid && es_ready_go &&!flush;
always @(posedge clk) begin
    if (reset) begin
        es_valid <= 1'b0;
    end
    else if (es_allowin) begin
        es_valid <= ds_to_es_valid;
    end
end
always @(posedge clk) begin
    if (reset) begin
        ds_to_es_bus_r <= 0;
    end
    else if(ds_to_es_valid && es_allowin) begin
        ds_to_es_bus_r <= ds_to_es_bus;
    end
end

wire        csr_we   ;
wire [11:0] csr_addr ;
wire [63:0] csr_wdata;
wire [63:0] csr_rdata;
wire        int_t_o  ;

ysyx_22041752_csr U_CSR_0(
    .clk                            ( clk                           ),
    .reset                          ( reset                         ),
    .wen                            ( csr_we                        ),
    .addr                           ( csr_addr                      ),
    .wdata                          ( csr_wdata                     ),
    .rdata                          ( csr_rdata                     ),
    .int_t_i                        ( int_t_i                       ),
    .int_t_o                        ( int_t_o                       )
`ifdef DPI_C
        ,
    .dpi_csrs                       ( dpi_csrs                      )
`endif
);
assign csr_we    = es_csr_we || expfsm_pre==W_MEPC || expfsm_pre==W_MCAUSE;

assign csr_addr  = (ecall || int_t_o) && (expfsm_pre==IDLE)    ? `ysyx_22041752_CSR_ADDR_MTVEC  :
                   expfsm_pre==W_MEPC    || mret               ? `ysyx_22041752_CSR_ADDR_MEPC   :
                   expfsm_pre==W_MCAUSE                        ? `ysyx_22041752_CSR_ADDR_MCAUSE :
                                                                 rscsr            ;
assign csr_wdata = expfsm_pre == W_MEPC   ? {32'b0, es_pc} :
                   expfsm_pre == W_MCAUSE ? int_t_o ? 64'h8000_0000_0000_0007: 64'hb :
                   {64{csrrs}} & (rs1_value | csr_rdata) |
                   {64{csrrc}} & (rs1_value &~csr_rdata) |
                   {64{!csrrs && !csrrc}} & rs1_value;

assign flush       = (ecall||mret||int_t_o) && es_valid;
assign flush_pc_p4 = pre_error && !(br_taken_real || jalr);
assign flush_pc = pre_error ? br_taken_real||jalr ? bj_addr : es_pc : csr_rdata[`ysyx_22041752_PC_WD-1:0];

assign alu_src1 = src_pc   ? {32'b0, es_pc} : 
                  src_0    ? 64'd0          :
                  res_sext && (op_sll || op_srl || op_sra) ? {32'b0,rs1_value[31:0]} :
                  rs1_value;
  
assign alu_src2 = src_csr   ? csr_rdata :
                  src_4     ? 64'd4 : 
                  src_imm_u ? {{32{imm_u[19]}},imm_u,12'b0} :
                  src_imm_i ? {{52{imm_i[11]}},imm_i} :
                  src_imm_s ? {{52{imm_s[11]}},imm_s} :
                  src_shamt ? {58'b0,shamt} :
                  res_sext && (op_sll || op_srl || op_sra) ? {59'b0,rs2_value[4:0]} :
                  (op_sll || op_srl || op_sra) ? {58'b0,rs2_value[5:0]} :
                  rs2_value;


/* verilator lint_off UNUSEDSIGNAL */
wire [63:0] mem_addr;
/* verilator lint_on UNUSEDSIGNAL */
ysyx_22041752_alu U_ALU_0(
`ifndef DPI_C
    .clk             ( clk            ),
    .reset           ( reset          ),
    .flush           ( flush          ),
`endif
    .mul_u           ( mul_u          ),
    .mul_su          ( mul_su         ),
    .div_u           ( div_u          ),
    .mul_h           ( mul_h          ),
    .beq             ( beq            ),  
    .bne             ( bne            ),  
    .blt             ( blt            ),  
    .bge             ( bge            ),  
    .bltu            ( bltu           ),  
    .bgeu            ( bgeu           ),  
    .op_mul          ( op_mul         ),
    .op_div          ( op_div         ),
    .op_rem          ( op_rem         ),
    .op_add          ( op_add         ),
    .op_sub          ( op_sub         ),
    .op_slt          ( op_slt         ),
    .op_sltu         ( op_sltu        ),
    .op_and          ( op_and         ),
    .op_or           ( op_or          ),
    .op_xor          ( op_xor         ),
    .op_sll          ( op_sll         ),
    .op_srl          ( op_srl         ),
    .op_sra          ( op_sra         ),
    .res_sext        ( res_sext       ),
    .alu_src1        ( alu_src1       ),
    .alu_src2        ( alu_src2       ),
    .alu_result      ( alu_result     ),
    .mem_result      ( mem_addr       ),
    .div_out_valid   ( div_out_valid  ),
    .mul_out_valid   ( mul_out_valid  )
);

assign es_addr_offset=data_addr[2:0];
assign data_addr= mem_addr[31:0];
assign data_pren= (es_mem_re | es_mem_we) && es_valid && ms_allowin;
assign data_en  = data_pren && !cache_compete;

assign data_wen = es_mem_we && es_valid && es_mem_bytes == 2'b11 ? 64'hffff_ffff_ffff_ffff : 
                  es_mem_we && es_valid && es_mem_bytes == 2'b10 ? 
										   es_addr_offset[2]	 ? 64'hffff_ffff_0000_0000 :
																   64'h0000_0000_ffff_ffff :
                  es_mem_we && es_valid && es_mem_bytes == 2'b01 ? 

										   es_addr_offset[2]	 ?
									 es_addr_offset[1:0]== 2'b00 ? 64'h0000_ffff_0000_0000 :
									 es_addr_offset[1:0]== 2'b01 ? 64'h00ff_ff00_0000_0000 :
								/*es_addr_offset[1:0]== 2'10 ?*/   64'hffff_0000_0000_0000 
																 :
									 es_addr_offset[1:0]== 2'b00 ? 64'h0000_0000_0000_ffff :
									 es_addr_offset[1:0]== 2'b01 ? 64'h0000_0000_00ff_ff00 :
									 es_addr_offset[1:0]== 2'b10 ? 64'h0000_0000_ffff_0000 :
							    /*es_addr_offset[1:0]== 2'b11 ?*/  64'h0000_00ff_ff00_0000 :

                  es_mem_we && es_valid && es_mem_bytes == 2'b00 ? 
									es_addr_offset[2:0]== 3'b000 ? 64'h0000_0000_0000_00ff :
									es_addr_offset[2:0]== 3'b001 ? 64'h0000_0000_0000_ff00 :
									es_addr_offset[2:0]== 3'b010 ? 64'h0000_0000_00ff_0000 :
									es_addr_offset[2:0]== 3'b011 ? 64'h0000_0000_ff00_0000 :
									es_addr_offset[2:0]== 3'b100 ? 64'h0000_00ff_0000_0000 :
									es_addr_offset[2:0]== 3'b101 ? 64'h0000_ff00_0000_0000 :
									es_addr_offset[2:0]== 3'b110 ? 64'h00ff_0000_0000_0000 :
							/*es_addr_offset[2:0]== 3'b111 ?*/     64'hff00_0000_0000_0000 :

                                                                   64'h0000_0000_0000_0000 ;

reg [`ysyx_22041752_DATA_DATA_WD-1:0] shift_data;
always @(*) begin
    case (es_addr_offset)
        3'b000: begin
            shift_data = rs2_value;
        end
        3'b001: begin
            shift_data = rs2_value << 8;
        end
        3'b010: begin
            shift_data = rs2_value << 16;
        end
        3'b011: begin
            shift_data = rs2_value << 24;
        end
        3'b100: begin
            shift_data = rs2_value << 32;
        end
        3'b101: begin
            shift_data = rs2_value << 40;
        end
        3'b110: begin
            shift_data = rs2_value << 48;
        end
        default: begin
            shift_data = rs2_value << 56;
        end
    endcase
end

assign data_wdata = shift_data;
//forward_bus
wire es_forward_valid;
assign es_forward_valid = es_rf_we && es_valid;
assign es_forward_bus = {es_mem_re&es_valid,es_forward_valid,alu_result,rd};






`ifdef DPI_C
assign es_exp = ecall && flush;
assign es_mret  = mret && flush;
always @(posedge clk) begin
    if(ds_to_es_valid && es_allowin) begin
        debug_es_inst <= debug_ds_inst;    
    end
end
assign debug_es_pc          = es_pc;
assign debug_es_bjpre_error = bjpre_error;
assign debug_es_data_ren    = data_en && es_mem_re;
assign debug_es_data_wen    = es_mem_we && es_to_ms_valid && ms_allowin;
assign debug_es_bj_inst     = (beq | bne | blt | bge | bgeu | bltu | jalr) && es_valid;
assign debug_es_data_addr   = data_addr;
assign debug_es_data_wdata  = data_wdata;
wire access_mem = (data_addr >= `ysyx_22041752_MEM_BASEADDR) && (data_addr <= (`ysyx_22041752_MEM_BASEADDR+`ysyx_22041752_MEM_SIZE));
assign debug_es_out_of_mem  = es_to_ms_valid && ms_allowin && data_en && !access_mem;
`endif
endmodule

