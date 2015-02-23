#ifndef PER_GPIO_H
#define PER_GPIO_H

typedef union
{
	struct
	{
		_IO32_ MODER0 :2;
		_IO32_ MODER1 :2;
		_IO32_ MODER2 :2;
		_IO32_ MODER3 :2;
		_IO32_ MODER4 :2;
		_IO32_ MODER5 :2;
		_IO32_ MODER6 :2;
		_IO32_ MODER7 :2;
		_IO32_ MODER8 :2;
		_IO32_ MODER9 :2;
		_IO32_ MODER10 :2;
		_IO32_ MODER11 :2;
		_IO32_ MODER12 :2;
		_IO32_ MODER13 :2;
		_IO32_ MODER14 :2;
		_IO32_ MODER15 :2;
	} bits;
	_IO32_ dword;
} GPIOx_MODER_t;

typedef union
{
	struct
	{
		_IO32_ OT0 :1;
		_IO32_ OT1 :1;
		_IO32_ OT2 :1;
		_IO32_ OT3 :1;
		_IO32_ OT4 :1;
		_IO32_ OT5 :1;
		_IO32_ OT6 :1;
		_IO32_ OT7 :1;
		_IO32_ OT8 :1;
		_IO32_ OT9 :1;
		_IO32_ OT10 :1;
		_IO32_ OT11 :1;
		_IO32_ OT12 :1;
		_IO32_ OT13 :1;
		_IO32_ OT14 :1;
		_IO32_ OT15 :1;
		_I32_ reserved1 :15;
	} bits;
	_IO32_ dword;
} GPIOx_OTYPER_t;

typedef union
{
	struct
	{
		_IO32_ OSPEEDR0 :2;
		_IO32_ OSPEEDR1 :2;
		_IO32_ OSPEEDR2 :2;
		_IO32_ OSPEEDR3 :2;
		_IO32_ OSPEEDR4 :2;
		_IO32_ OSPEEDR5 :2;
		_IO32_ OSPEEDR6 :2;
		_IO32_ OSPEEDR7 :2;
		_IO32_ OSPEEDR8 :2;
		_IO32_ OSPEEDR9 :2;
		_IO32_ OSPEEDR10 :2;
		_IO32_ OSPEEDR11 :2;
		_IO32_ OSPEEDR12 :2;
		_IO32_ OSPEEDR13 :2;
		_IO32_ OSPEEDR14 :2;
		_IO32_ OSPEEDR15 :2;
	} bits;
	_IO32_ dword;
} GPIOx_OSPEEDR_t;

typedef union
{
	struct
	{
		_IO32_ PUPDR0 :2;
		_IO32_ PUPDR1 :2;
		_IO32_ PUPDR2 :2;
		_IO32_ PUPDR3 :2;
		_IO32_ PUPDR4 :2;
		_IO32_ PUPDR5 :2;
		_IO32_ PUPDR6 :2;
		_IO32_ PUPDR7 :2;
		_IO32_ PUPDR8 :2;
		_IO32_ PUPDR9 :2;
		_IO32_ PUPDR10 :2;
		_IO32_ PUPDR11 :2;
		_IO32_ PUPDR12 :2;
		_IO32_ PUPDR13 :2;
		_IO32_ PUPDR14 :2;
		_IO32_ PUPDR15 :2;
	} bits;
	_IO32_ dword;
} GPIOx_PUPDR_t;

typedef union
{
	struct
	{
		_I32_ IDR0 :1;
		_I32_ IDR1 :1;
		_I32_ IDR2 :1;
		_I32_ IDR3 :1;
		_I32_ IDR4 :1;
		_I32_ IDR5 :1;
		_I32_ IDR6 :1;
		_I32_ IDR7 :1;
		_I32_ IDR8 :1;
		_I32_ IDR9 :1;
		_I32_ IDR10 :1;
		_I32_ IDR11 :1;
		_I32_ IDR12 :1;
		_I32_ IDR13 :1;
		_I32_ IDR14 :1;
		_I32_ IDR15 :1;
		_I32_ reserved1 :15;
	} bits;
	_IO32_ dword;
} GPIOx_IDR_t;

typedef union
{
	struct
	{
		_IO32_ ODR0 :1;
		_IO32_ ODR1 :1;
		_IO32_ ODR2 :1;
		_IO32_ ODR3 :1;
		_IO32_ ODR4 :1;
		_IO32_ ODR5 :1;
		_IO32_ ODR6 :1;
		_IO32_ ODR7 :1;
		_IO32_ ODR8 :1;
		_IO32_ ODR9 :1;
		_IO32_ ODR10 :1;
		_IO32_ ODR11 :1;
		_IO32_ ODR12 :1;
		_IO32_ ODR13 :1;
		_IO32_ ODR14 :1;
		_IO32_ ODR15 :1;
		_I32_ reserved1 :15;
	} bits;
	_IO32_ dword;
} GPIOx_ODR_t;

typedef union
{
	struct
	{
		_IO32_ BS0 :1;
		_IO32_ BS1 :1;
		_IO32_ BS2 :1;
		_IO32_ BS3 :1;
		_IO32_ BS4 :1;
		_IO32_ BS5 :1;
		_IO32_ BS6 :1;
		_IO32_ BS7 :1;
		_IO32_ BS8 :1;
		_IO32_ BS9 :1;
		_IO32_ BS10 :1;
		_IO32_ BS11 :1;
		_IO32_ BS12 :1;
		_IO32_ BS13 :1;
		_IO32_ BS14 :1;
		_IO32_ BS15 :1;
		_IO32_ BR0 :1;
		_IO32_ BR1 :1;
		_IO32_ BR2 :1;
		_IO32_ BR3 :1;
		_IO32_ BR4 :1;
		_IO32_ BR5 :1;
		_IO32_ BR6 :1;
		_IO32_ BR7 :1;
		_IO32_ BR8 :1;
		_IO32_ BR9 :1;
		_IO32_ BR10 :1;
		_IO32_ BR11 :1;
		_IO32_ BR12 :1;
		_IO32_ BR13 :1;
		_IO32_ BR14 :1;
		_IO32_ BR15 :1;
	} bits;
	_IO32_ dword;
} GPIOx_BSSR_t;

typedef union
{
	struct
	{
		_IO32_ LCK0 :1;
		_IO32_ LCK1 :1;
		_IO32_ LCK2 :1;
		_IO32_ LCK3 :1;
		_IO32_ LCK4 :1;
		_IO32_ LCK5 :1;
		_IO32_ LCK6 :1;
		_IO32_ LCK7 :1;
		_IO32_ LCK8 :1;
		_IO32_ LCK9 :1;
		_IO32_ LCK10 :1;
		_IO32_ LCK11 :1;
		_IO32_ LCK12 :1;
		_IO32_ LCK13 :1;
		_IO32_ LCK14 :1;
		_IO32_ LCK15 :1;
		_IO32_ LCKK :1;
		_I32_ reserved1 :15;
	} bits;
	_IO32_ dword;
} GPIOx_LCKR_t;

typedef union
{
	struct
	{
		_IO32_ AFR0 :4;
		_IO32_ AFR1 :4;
		_IO32_ AFR2 :4;
		_IO32_ AFR3 :4;
		_IO32_ AFR4 :4;
		_IO32_ AFR5 :4;
		_IO32_ AFR6 :4;
		_IO32_ AFR7 :4;
	} bits;
	_IO32_ dword;
} GPIOx_AFRL_t;

typedef union
{
	struct
	{
		_IO32_ AFR8 :4;
		_IO32_ AFR9 :4;
		_IO32_ AFR10 :4;
		_IO32_ AFR11 :4;
		_IO32_ AFR12 :4;
		_IO32_ AFR13 :4;
		_IO32_ AFR14 :4;
		_IO32_ AFR15 :4;
	} bits;
	_IO32_ dword;
} GPIOx_AFRH_t;

typedef union
{
	struct
	{
		_IO32_ BR0 :1;
		_IO32_ BR1 :1;
		_IO32_ BR2 :1;
		_IO32_ BR3 :1;
		_IO32_ BR4 :1;
		_IO32_ BR5 :1;
		_IO32_ BR6 :1;
		_IO32_ BR7 :1;
		_IO32_ BR8 :1;
		_IO32_ BR9 :1;
		_IO32_ BR10 :1;
		_IO32_ BR11 :1;
		_IO32_ BR12 :1;
		_IO32_ BR13 :1;
		_IO32_ BR14 :1;
		_IO32_ BR15 :1;
	} bits;
	_IO32_ dword;
} GPIOx_BRR_t;

typedef struct
{
	GPIOx_MODER_t MODER;
	GPIOx_OTYPER_t OTYPER;
	GPIOx_OSPEEDR_t OSPEEDR;
	GPIOx_PUPDR_t PUPDR;
	GPIOx_IDR_t IDR;
	GPIOx_ODR_t ODR;
	GPIOx_BSSR_t BSSR;
	GPIOx_LCKR_t LCKR;
	GPIOx_AFRL_t AFRL;
	GPIOx_AFRH_t AFRH;
	GPIOx_BRR_t BRR;
} GPIOx_t;

#endif
