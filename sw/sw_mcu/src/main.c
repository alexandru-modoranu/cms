#include <stdint.h>
#include "per.h"

void main(void)
{
	USB->CNTR.bits.CTRM = CLR;
	RCC->CR.bits.PLLON = SET;
	
	while(1);
}