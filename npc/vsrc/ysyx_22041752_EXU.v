// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_EXU.v
// Author        : Cw
// Created On    : 2022-11-19 16:16
// Last Modified : 2023-03-30 17:42
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_EXU(
    input  wire                           clk           ,
    input  wire                           reset         ,
    //allowin
    input  wire                           ms_allowin    ,
    output wire                           es_allowin    ,
    //from ds
    input  wire                           ds_to_es_valid,
    input  wire [`DS_TO_ES_BUS_WD -1:0]   ds_to_es_bus  ,
    //to ms
    output wire                           es_to_ms_valid,
    output wire [`ES_TO_MS_BUS_WD -1:0]   es_to_ms_bus  ,
	//forward_bus
	output wire [`ES_FORWARD_BUS_WD -1:0] es_forward_bus,
    // data sram interface
    output wire                           data_sram_en   ,
    output wire [`SRAM_WEN_WD -1:0]       data_sram_wen  ,
    output wire [`SRAM_ADDR_WD-1:0]       data_sram_addr ,
    output wire [`SRAM_DATA_WD-1:0]       data_sram_wdata,

    output wire                           flush          ,
    output wire [`PC_WD-1:0]              flush_pc       ,


    output wire [63:0]                    dpi_csrs [3:0] ,
    output wire                           es_exp         ,
    output wire                           es_mret        ,
    output wire [`PC_WD           -1:0]   debug_es_pc
    //output wire [127:0] mul_result         
);

reg         es_valid      ;
wire        es_ready_go   ;

reg  [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus_r;  

wire ecall  ;
wire mret   ;
/* verilator lint_off UNUSEDSIGNAL */
wire mul_u  ;
wire mul_su ;
wire mul_h  ;
/* verilator lint_on UNUSEDSIGNAL */
wire op_mul ;
wire op_div ;
wire op_rem ;
wire op_add ;
wire op_sub ;
wire op_slt ;
wire op_sltu;
wire op_and ;
wire op_or  ;
wire op_xor ;
wire op_sll ;
wire op_srl ;
wire op_sra ;

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
wire [ 5:0] shamt;
wire [19:0] imm_u;
wire [11:0] imm_i;
wire [11:0] imm_s;
wire [11:0] rscsr;
wire [ 4:0] rd;
wire [`RF_DATA_WD-1:0] rs1_value;
wire [`RF_DATA_WD-1:0] rs2_value;
wire [`PC_WD     -1:0] es_pc  ;

assign {ecall         ,
        mret          ,
        mul_u         ,
        mul_su        ,
        mul_h         ,
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
					   es_mem_bytes     ,  
					   es_mem_re        ,  
					   es_rf_we         ,  
                       rd               ,  
                       alu_result       ,  
                       es_pc               
                      };

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
assign expfsm_nxt = expfsm_pre == IDLE && ecall ? W_MEPC   :
                    expfsm_pre == W_MEPC        ? W_MCAUSE :
                    expfsm_pre == W_MCAUSE      ? IDLE     :
                                                  expfsm_pre;

assign es_ready_go    = expfsm_pre != W_MEPC;
assign es_allowin     = !es_valid || es_ready_go && ms_allowin;
assign es_to_ms_valid =  es_valid && es_ready_go &&!flush;
always @(posedge clk) begin
    if (reset) begin
        es_valid <= 1'b0;
    end
end
always @(posedge clk) begin
    if (es_allowin) begin
        es_valid <= ds_to_es_valid;
    end
end
always @(posedge clk) begin
    if(ds_to_es_valid && es_allowin) begin
        ds_to_es_bus_r <= ds_to_es_bus;
    end
end

wire        csr_we   ;
wire [11:0] csr_addr ;
wire [63:0] csr_wdata;
wire [63:0] csr_rdata;

ysyx_22041752_csr U_YSYX_22041752_CSR_0(
    .clk                            ( clk                           ),
    .wen                            ( csr_we                        ),
    .addr                           ( csr_addr                      ),
    .wdata                          ( csr_wdata                     ),
    .rdata                          ( csr_rdata                     ),
    .dpi_csrs                       ( dpi_csrs                      )
);
assign csr_we    = es_csr_we || expfsm_pre==W_MEPC || expfsm_pre==W_MCAUSE;
assign csr_addr  = ecall && (expfsm_pre==IDLE)      ? 12'h305 :
                   expfsm_pre==W_MEPC    || mret    ? 12'h341 :
                   expfsm_pre==W_MCAUSE             ? 12'h342 :
                                                      rscsr   ;
assign csr_wdata = expfsm_pre == W_MEPC   ? es_pc :
                   expfsm_pre == W_MCAUSE ? 64'hb :
                   {64{csrrs}} & (rs1_value | csr_rdata) |
                   {64{csrrc}} & (rs1_value &~csr_rdata) |
                   {64{!csrrs && !csrrc}} & rs1_value;

assign flush    = (ecall||mret) && es_valid;
assign flush_pc = csr_rdata;

assign alu_src1 = src_pc   ? es_pc : 
                  src_0    ? 64'd0 :
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

ysyx_22041752_alu U_ALU_0(
    .mul_h           ( mul_h          ),
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
    .mem_result      ( data_sram_addr )
);

assign data_sram_en  = (es_mem_re | es_mem_we) & es_valid;
assign data_sram_wen = es_mem_we && es_valid && es_mem_bytes == 2'b11 ? 8'hff : 
                       es_mem_we && es_valid && es_mem_bytes == 2'b10 ? 8'h0f :
                       es_mem_we && es_valid && es_mem_bytes == 2'b01 ? 8'h03 :
                       es_mem_we && es_valid && es_mem_bytes == 2'b00 ? 8'h01 :
                                                                        8'h00 ;

assign data_sram_wdata = rs2_value;
//forward_bus
wire mem_read_after_write;
wire es_forward_valid;
assign mem_read_after_write = (es_mem_re) && es_valid;
assign es_forward_valid = es_rf_we && es_valid;
assign es_forward_bus = {mem_read_after_write,es_forward_valid,alu_result,rd};


assign es_exp = ecall && flush;
assign es_mret  = mret && flush;
assign debug_es_pc = es_pc;
endmodule
