#include <stdint.h>
#include "per.h"

void USB_HP_CAN1_TX_IRQHandler(void) __attribute__ ((section (".ccram")));

void USB_HP_CAN1_TX_IRQHandler(void)
{
	USB->CNTR.bits.CTRM = CLR;
	RCC->CR.bits.PLLON = SET;
}

void main(void)
{
	USB->CNTR.bits.CTRM = CLR;
	RCC->CR.bits.PLLON = SET;
	
	while(1);
}
