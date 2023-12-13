#ifndef K1921VG015_H
#define K1921VG015_H
#include <stdint.h>
#include "K1921VG015_regs.h"


#define GPIOA_BASE              0x28000000UL
#define GPIOB_BASE              0x28001000UL
#define GPIOC_BASE              0x28002000UL

#define GPIOA                ((volatile t_GPIO_REG                *) GPIOA_BASE)
#define GPIOB                ((volatile t_GPIO_REG                *) GPIOB_BASE)
#define GPIOC                ((volatile t_GPIO_REG                *) GPIOC_BASE)



#define UART_PRESENT
#define UART_TOTAL    5
typedef enum {
  UART0_Num = 0,
  UART1_Num,
  UART2_Num,
  UART3_Num,
  UART4_Num
} UART_Num_TypeDef;

#define UART0_BASE              0x30006000UL
#define UART1_BASE              0x30007000UL
#define UART2_BASE              0x30008000UL
#define UART3_BASE              0x30009000UL
#define UART4_BASE              0x3000A000UL

#define UART0                ((volatile t_UART_REG                *) UART0_BASE)
#define UART1                ((volatile t_UART_REG                *) UART1_BASE)
#define UART2                ((volatile t_UART_REG                *) UART2_BASE)
#define UART3                ((volatile t_UART_REG                *) UART3_BASE)
#define UART4                ((volatile t_UART_REG                *) UART4_BASE)


#define TMR32_BASE              0x30000000UL

#define TMR32                ((volatile t_TMR32_REG                *) TMR32_BASE)
#define TMR32_CAPCOM0_VAL   *(( volatile uint32_t          *) 0x3000001CUL)

#define TMR0_BASE              0x30001000UL
#define TMR1_BASE              0x30002000UL
#define TMR2_BASE              0x30003000UL


#define TMR0                ((volatile t_TMR_REG                *) TMR0_BASE)
#define TMR1                ((volatile t_TMR_REG                *) TMR1_BASE)
#define TMR2                ((volatile t_TMR_REG                *) TMR2_BASE)

#define TMR0_CAPCOM0_VAL   *(( volatile uint32_t          *) 0x3000101CUL)

#define RCU_BASE      (0x3000E000UL)
#define RCU          ((volatile t_RCU_REG *) RCU_BASE)

#define RCU_UARTCLKCFG_CLKSEL_PLL0 (0b10)

#define FLASH_BASE   (0x3000D000UL)
#define FLASH       ((volatile t_FLASH_REG *) FLASH_BASE)

#define PMUSYS_BASE   (0x3000F000UL)
#define PMUSYS       ((volatile t_PMUSYS_REG *) PMUSYS_BASE)


#define PLIC_NUM_VECTORS 32
#define PLIC_WDT_VECTNUM        1
#define PLIC_CAN0_VECTNUM       2
#define PLIC_CAN1_VECTNUM       3
#define PLIC_USB_VECTNUM        4
#define PLIC_GPIO_VECTNUM       5
#define PLIC_TMR32_VECTNUM      6
#define PLIC_TMR0_VECTNUM       7
#define PLIC_TMR1_VECTNUM       8
#define PLIC_TMR2_VECTNUM       9
#define PLIC_QSPI0_VECTNUM      10
#define PLIC_QSPI1_VECTNUM      11
#define PLIC_QSPI2_VECTNUM      12
#define PLIC_DMA0_VECTNUM       13
#define PLIC_DMA1_VECTNUM       14
#define PLIC_DMA2_VECTNUM       15
#define PLIC_DMA3_VECTNUM       16
#define PLIC_DMA4_VECTNUM       17
#define PLIC_DMA5_VECTNUM       18
#define PLIC_DMA6_VECTNUM       19
#define PLIC_DMA7_VECTNUM       20
#define PLIC_I2C_VECTNUM        21
#define PLIC_UART0_VECTNUM      22
#define PLIC_UART1_VECTNUM      23
#define PLIC_UART2_VECTNUM      24
#define PLIC_UART3_VECTNUM      25
#define PLIC_UART4_VECTNUM      26
#define PLIC_CRYPTOHASH_VECTNUM 27
#define PLIC_TRNG_VECTNUM       28
#define PLIC_ADC_SAR_VECTNUM    29
#define PLIC_CMP_VECTNUM        30
#define PLIC_PMURTC_VECTNUM     31


#define RISCV_CLINT_ADDR 0x2000000UL
#define RISCV_MTIMECMP_ADDR (RISCV_CLINT_ADDR + 0x4000UL)
#define RISCV_MTIME_ADDR (RISCV_CLINT_ADDR + 0xBFF8UL)

#endif//K1921VG015_H