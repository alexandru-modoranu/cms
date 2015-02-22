#ifndef PER_H
#define PER_H

#include <stdint.h>

#define SET (1u)
#define CLR (0u)

#define USB_BASE 0x40005C00
#define USBMEM_BASE 0x40006000
#define	RCC_BASE 0x40021000

#include "per_usb.h"
#include "per_rcc.h"

#define USBMEM ((volatile USBMEM_t *)USBMEM_BASE)
#define USB ((volatile USB_t *)USB_BASE)
#define RCC ((volatile RCC_t *)RCC_BASE)

#endif