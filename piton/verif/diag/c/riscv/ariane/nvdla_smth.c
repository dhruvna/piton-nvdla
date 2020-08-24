#include <stdio.h>
#include "../piton/verif/diag/c/riscv/ariane/nvdla_bdma.h"
#include "../piton/verif/diag/c/riscv/ariane/nvdla.h"

// tests proper functioning of ping-pong system
int main(int argc, char ** argv) {
  

  unsigned int new = *(BASE_ADDR + BDMA_CFG_LINE); 
  printf("BDMA_CFG_LINE %08x\n", new);

  return 0;
}
