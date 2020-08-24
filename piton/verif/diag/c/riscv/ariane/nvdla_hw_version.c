#include <stdio.h>
#include "../piton/verif/diag/c/riscv/ariane/nvdla_glb.h"
#include "../piton/verif/diag/c/riscv/ariane/nvdla.h"
#include "../piton/verif/diag/c/riscv/ariane/mmio.h"
#include "../piton/verif/diag/c/riscv/ariane/nvdla_cdp.h"

#define NVDLA_BASE 0xfff0e00000
#define reg_write(addr,val) reg_write32(NVDLA_BASE+addr,val)
#define reg_read(addr) reg_read32(NVDLA_BASE+addr)

// Test to access hardware version number on NVDLA
int main(int argc, char ** argv) {
  const REAL_HW_VERSION = 0x00010001;
/*  unsigned int HW_VERSION = *(BASE_ADDR + 0x3401);*/
  reg_write(CDP_S_LUT_ACCESS_DATA, 0x1e);
  unsigned int HW_VERSION = reg_read(CDP_S_LUT_ACCESS_DATA);
  printf("Expected HW_VERSION %08x\n", REAL_HW_VERSION);
  printf("HW_VERSION %08x\n", HW_VERSION);
  printf("TEST %sED\n", HW_VERSION == REAL_HW_VERSION ? "PASS" : "FAIL");
  return 0;
}
