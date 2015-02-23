#ifndef PER_H
#define PER_H

/* Peripheral defines for STM32f303CC */

#include <stdint.h>

#define SET (1u)
#define CLR (0u)

typedef uint32_t _IO32_;
typedef const uint32_t _I32_;
typedef uint16_t _IO16_;
typedef const uint16_t _I16_;
typedef uint8_t _IO8_;
typedef const uint8_t _I8_;

/* ST peripherals */
#define USB_BASE (0x40005C00)
#define	RCC_BASE (0x40021000)
#define	GPIOA_BASE (0x48000000)
#define	GPIOB_BASE (0x48000400)
#define	GPIOC_BASE (0x48000800)
#define	GPIOD_BASE (0x48000C00)
#define	GPIOE_BASE (0x48001000)
#define	GPIOF_BASE (0x48001400)

#include "per/per_usb.h"
#include "per/per_rcc.h"
#include "per/per_gpio.h"

#define USB ((volatile USB_t *)USB_BASE)
#define RCC ((volatile RCC_t *)RCC_BASE)
#define GPIOA ((volatile GPIOx_t *)GPIOA_BASE)
#define GPIOB ((volatile GPIOx_t *)GPIOB_BASE)
#define GPIOC ((volatile GPIOx_t *)GPIOC_BASE)
#define GPIOD ((volatile GPIOx_t *)GPIOD_BASE)
#define GPIOE ((volatile GPIOx_t *)GPIOE_BASE)
#define GPIOF ((volatile GPIOx_t *)GPIOF_BASE)

/* Core related */
#define STK_BASE (0xE000E010)
#define FPU_BASE (0xE000ED88)
#define NVIC_BASE (0xE000E100)

#include "per/per_stk.h"
#include "per/per_fpu.h"
#include "per/per_nvic.h"

#define STK ((volatile STK_t *)STK_BASE)
#define FPU ((volatile FPU_t *)FPU_BASE)
#define NVIC ((volatile NVIC_t *)NVIC_BASE)


#endif
