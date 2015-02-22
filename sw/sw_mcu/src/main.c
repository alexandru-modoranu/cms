#include <stdint.h>
#include "per.h"


void main(void)
{
	FPU->FPCCR.bits.ASPEN = 1u;

	while(1);
}
