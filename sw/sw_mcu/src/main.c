#include <stdint.h>
#include "per.h"


void main(void)
{
	FPU->FPCCR.bits.ASPEN = 1u;
	FPU->FPCAR.bits.reserved1 = 1u;

	while(1);
}
