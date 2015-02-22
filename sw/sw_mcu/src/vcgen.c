#include <stdint.h>
#include "io.h"

void vcgen_init( void )
{
	/* Initialize the Voltge/Current generator */
}

void vcgen_output( uint32_t channel, float value )
{
	volatile uint32_t a;
	volatile float b;
	
	a = channel;
	b = value;
}