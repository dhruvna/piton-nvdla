//------------------------------------------------------------------
//-- File generated by RobustVerilog parser
//-- RobustVerilog version 1.2g (limited free version)
//-- Invoked Tue Jul 21 10:05:11 2020
//-- Source file: axi2apb_rd.v
//-- Parent file: axi2apb.v
//-- Run directory: C:/RobustVerilog_free1.2_win/
//-- Target directory: out/
//-- Command flags: src/base/axi2apb.v -od out -I src/gen -list list.txt -listpath -header -gui 
//-- www.provartec.com/edatools ... info@provartec.com
//------------------------------------------------------------------





module  axi2apb_rd (clk,reset,psel,penable,pwrite,paddr,pwdata,prdata,pslverr,pready,cmd_err,cmd_id,finish_rd,RID,RDATA,RRESP,RLAST,RVALID,RREADY);

   input                   clk;
   input                   reset;

   input                  psel;
   input                  penable;
   input                  pwrite;
   input [31:0]           paddr;
   input [31:0]           pwdata;
   input [31:0]           prdata;
   input                  pslverr;
   input                  pready;
      
   input                  cmd_err;
   input [16-1:0]    cmd_id;
   output                 finish_rd;
   
   output [15:0]          RID;
   output [31:0]          RDATA;
   output [1:0]           RRESP;
   output                 RLAST;
   output                 RVALID;
   input                  RREADY;
   
   
   parameter              RESP_OK     = 2'b00;
   parameter              RESP_SLVERR = 2'b10;
   parameter              RESP_DECERR = 2'b11;
   
   reg [15:0]             RID;
   reg [31:0]             RDATA;
   reg [1:0]              RRESP;
   reg                    RLAST;
   reg                    RVALID;
   
   
   assign                 finish_rd = RVALID & RREADY & RLAST;
   
   always @(posedge clk or posedge reset)
     if (reset)
       begin
         RID <= #1 {16{1'b0}};
         RDATA <= #1 {32{1'b0}};
         RRESP <= #1 {2{1'b0}};
         RLAST <= #1 {1{1'b0}};
         RVALID <= #1 {1{1'b0}};
       end
     else if (finish_rd)
       begin
         RID <= #1 {16{1'b0}};
         RDATA <= #1 {32{1'b0}};
         RRESP <= #1 {2{1'b0}};
         RLAST <= #1 {1{1'b0}};
         RVALID <= #1 {1{1'b0}};
       end
     else if (psel & penable & (~pwrite) & pready)
       begin
         RID    <= #1 cmd_id;
         RDATA  <= #1 prdata;
         RRESP  <= #1 cmd_err ? RESP_SLVERR : pslverr ? RESP_DECERR : RESP_OK;
         RLAST  <= #1 1'b1;
         RVALID <= #1 1'b1;
       end
       
endmodule

   

