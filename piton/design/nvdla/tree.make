## ================================================================
## NVDLA Open Source Project
## 
## Copyright(c) 2016 - 2017 NVIDIA Corporation.  Licensed under the
## NVDLA Open Hardware License; Check LICENSE which comes with     
## this distribution for more information. 
## ================================================================


##======================= 										  
## Project Name Setup, multiple projects supported			  	  
##======================= 										  
PROJECTS := nv_small nv_small_256 nv_small_256_full nv_medium_512 nv_medium_1024_full nv_large
  																  
##======================= 										  
##Linux Environment Setup 										  
##======================= 										  
  																  
USE_DESIGNWARE  := 0
DESIGNWARE_DIR  := /home/tools/synopsys/syn_2011.09/dw/sim_ver
CPP  := /usr/bin/cpp
GCC  := /usr/bin/gcc
CXX  := /usr/bin/g++
PERL := /usr/bin/perl
JAVA := /home/utils/java/jdk1.8.0_131/bin/java
SYSTEMC := /home/ip/shared/inf/SystemC/1.0/20151112/systemc-2.3.0/GCC472_64_DBG
PYTHON := /usr/bin/python3
VCS_HOME := /tools/synopsys/vcs/Q-2020.03-SP2-6
NOVAS_HOME := /tools/synopsys/verdi/Q-2020.03-SP2-7
VERDI_HOME := /tools/synopsys/verdi/Q-2020.03-SP2-7
VERILATOR := verilator
CLANG := /home/utils/llvm-4.0.1/bin/clang
