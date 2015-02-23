#ifndef PER_H
#define PER_H

/* Peripheral defines for STM32f303CC */

#include <stdint.h>

#define SET (1u)
#define CLR (0u)

/* ST peripherals */
#define USB_BASE 0x40005C00
#define	RCC_BASE 0x40021000

#include "per/per_usb.h"
#include "per/per_rcc.h"

#define USB ((volatile USB_t *)USB_BASE)
#define RCC ((volatile RCC_t *)RCC_BASE)


/* Core related */
#define STK_BASE 0xE000E010
#define FPU_BASE 0xE000ED88

#include "per/per_stk.h"
#include "per/per_fpu.h"

#define STK ((volatile STK_t *)STK_BASE)
#define FPU ((volatile FPU_t *)FPU_BASE)


#endif
