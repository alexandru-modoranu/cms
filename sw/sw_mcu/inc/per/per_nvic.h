#ifndef PER_NVIC_H
#define PER_NVIC_H

typedef union
{
	struct
	{
		_IO32_ SETENA;
	} bits;
	_IO32_ dword;
} NVIC_ISER01_t;

typedef union
{
	struct
	{
		_IO32_ SETENA :16;
		_I32_ reserved1 :16;

	} bits;
	_IO32_ dword;
} NVIC_ISER2_t;

typedef union
{
	struct
	{
		_IO32_ CLRENA;
	} bits;
	_IO32_ dword;
} NVIC_ICER01_t;

typedef union
{
	struct
	{
		_IO32_ CLRENA :16;
		_I32_ reserved1 :16;

	} bits;
	_IO32_ dword;
} NVIC_ICER2_t;

typedef union
{
	struct
	{
		_IO32_ SETPEND;
	} bits;
	_IO32_ dword;
} NVIC_ISPR01_t;

typedef union
{
	struct
	{
		_IO32_ SETPEND :16;
		_I32_ reserved1 :16;

	} bits;
	_IO32_ dword;
} NVIC_ISPR2_t;

typedef union
{
	struct
	{
		_IO32_ CLRPEND;
	} bits;
	_IO32_ dword;
} NVIC_ICPR01_t;

typedef union
{
	struct
	{
		_IO32_ CLRPEND :16;
		_I32_ reserved1 :16;

	} bits;
	_IO32_ dword;
} NVIC_ICPR2_t;

typedef union
{
	struct
	{
		_I32_ ACTIVE;
	} bits;
	_IO32_ dword;
} NVIC_IABR01_t;

typedef union
{
	struct
	{
		_I32_ ACTIVE :16;
		_I32_ reserved1 :16;

	} bits;
	_IO32_ dword;
} NVIC_IABR2_t;

typedef union
{
	struct
	{
		_IO32_ INTID :9;
		_I32_ reserved1 :23;

	} bits;
	_IO32_ dword;
} NVIC_STIR_t;

typedef struct
{
	NVIC_ISER01_t ISER0;
	NVIC_ISER01_t ISER1;
	NVIC_ISER2_t ISER2;
	_I32_ reserved1[29];
	NVIC_ICER01_t ICER0;
	NVIC_ICER01_t ICER1;
	NVIC_ICER2_t ICER2;
	_I32_ reserved2[29];
	NVIC_ISPR01_t ISPR0;
	NVIC_ISPR01_t ISPR1;
	NVIC_ISPR2_t ISPR2;
	_I32_ reserved3[29];
	NVIC_ICPR01_t ICPR0;
	NVIC_ICPR01_t ICPR1;
	NVIC_ICPR2_t ICPR2;
	_I32_ reserved4[29];
	NVIC_IABR01_t IABR0;
	NVIC_IABR01_t IABR1;
	NVIC_IABR2_t IABR2;
	_I32_ reserved5[61];
	_IO8_ IP[81];
	_I8_ reserved6[3];
	_I32_ reserved7[683];
	NVIC_STIR_t STIR;
} NVIC_t;

#endif
