#include <stdint.h>
#include "system.h"
#include "per.h"

void system_initClock(void)
{
	/* !TODO Make this modifiable with defines */

	/* Enable external oscillator */
	RCC->CR.bits.HSEON = SET;

	/* Wait for oscillator stabilizaton */
	while(RCC->CR.bits.HSERDY != SET);

	/* Define PLL multiplication */
	RCC->CFGR.bits.PLLMUL = 4u;

	/* Define the PLL source to be HSE */
	RCC->CFGR.bits.PLLSRC = SET;

	/* Enable the PLL */
	RCC->CR.bits.PLLON = SET;

	/* Wait for PLL lock */
	while(RCC->CR.bits.PLLRDY != SET);

	/* Define the system source to be th PLL */
	RCC->CFGR.bits.SW = 2u;
}
