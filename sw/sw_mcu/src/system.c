#include <stdint.h>
#include "system.h"
#include "io.h"

static void initClock( void )
{
	/* Enable External Oscillator */
	RCC_CR |= (1u << HSEON);
	
	/* Wait for external oscillator stabilization */
	while(1)
	{
		if(RCC_CR & (1u << HSERDY)) break;
	}
	
	/* Define PLL multiplication = 9 */
	/* 6 for now */
	RCC_CFGR |= ((1u << PLLMUL2) /*| (1u << PLLMUL1) | (1u << PLLMUL0)*/);
	
	/* Define the PLL source to be the HSE */
	RCC_CFGR |= (1u << PLLSRC);
	
	/* Enable PLL */
	RCC_CR |= (1u << PLLON);
	
	/* Wait for PLL lock */
	while(1)
	{
		if(RCC_CR & (1u << PLLRDY)) break;
	}
	
	/* Define APB1 prescaler to be 2 */
	RCC_CFGR |= (1u << PPRE12);
	
	/* Define USB prescaler to be 1 */
	RCC_CFGR |= (1u << USBPRE);
	
	/* Define the SYS source to be the PLL */
	RCC_CFGR |= (1u << SW1);
}

static void initDac( void )
{
	/* Enable DAC1 and DAC2 clock */
	RCC_APB1ENR |= ((1u << DAC1EN) | (1u << DAC2EN));
	
	/* Enable GPIOA clock */
	RCC_AHBENR |= (1u << IOPAEN);
	
	/* Enable DAC1 and DAC2 */
	DAC_CR |= ((1u << EN2) | (1u << EN1));
	
	/* Make GPIO's analog outputs */
	GPIOA_MODER |= ((1u << MODER51) | (1u << MODER50) | (1u << MODER41) | (1u << MODER40));	
}

static void initTimer( void )
{
	/* Enable timer 6 clock */
	RCC_APB1ENR |= (1u << TIM6EN);
	
	/* Enable trigger event output */
	TIM6_CR2 |= (1u << MMS1);
	
	/* Write reload register F_APB1 / F_SAMPLE */
	TIM6_ARR = 4800;
	
	/* Enable timer interrupt */
	TIM6_DIER |= (1u << UIE);
	
	/* Enable NVIC interrupt */
	NVIC_ISER1 |= (1u << TIM6_IE);
	
	/* Enable timer */
	TIM6_CR1 |=  (1u << CEN);
}

void system_initPeripherals( void )
{
	initClock();
	initDac();
	initTimer();
}