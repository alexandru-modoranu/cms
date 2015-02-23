#include <stdint.h>
#include "per.h"
#include "system.h"
#include "usb.h"


void main(void)
{
	uint32_t *pnt;

	system_initClock();

	pnt = &NVIC->STIR.dword;

	while(1);
}
