#ifndef __CLINT_CONFIG_H__
#define __CLINT_CONFIG_H__
#define RISCV_CLINT_ADDR 0x2000000UL
#define RISCV_MTIMECMP_ADDR (RISCV_CLINT_ADDR + 0x4000UL)
#define RISCV_MTIME_ADDR (RISCV_CLINT_ADDR + 0xBFF8UL)
#endif // __CLINT_CONFIG_H__