#ifndef PER_NVIC_H
#define PER_NVIC_H

/* !TODO Finish definitions according to CM4 programming manual */

typedef union
{
	struct
	{
		uint32_t SETENA;
	} bits;
	uint32_t dword;
} NVIC_ISER01_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t SETENA :16;
	} bits;
	uint32_t dword;
} NVIC_ISER2_t;

typedef union
{
	struct
	{
		uint32_t CLRENA;
	} bits;
	uint32_t dword;
} NVIC_ICER01_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t CLRENA :16;
	} bits;
	uint32_t dword;
} NVIC_ICER2_t;

typedef union
{
	struct
	{
		uint32_t SETPEND;
	} bits;
	uint32_t dword;
} NVIC_ISPR01_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t SETPEND :16;
	} bits;
	uint32_t dword;
} NVIC_ISPR2_t;

typedef union
{
	struct
	{
		uint32_t CLRPEND;
	} bits;
	uint32_t dword;
} NVIC_ICPR01_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t CLRPEND :16;
	} bits;
	uint32_t dword;
} NVIC_ICPR2_t;

typedef union
{
	struct
	{
		uint32_t ACTIVE;
	} bits;
	uint32_t dword;
} NVIC_IABR01_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t ACTIVE :16;
	} bits;
	uint32_t dword;
} NVIC_IABR2_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :23;
		uint32_t INTID :9;
	} bits;
	uint32_t dword;
} NVIC_STIR_t;

typedef struct
{
	NVIC_ISER01_t ISER0;
	NVIC_ISER01_t ISER1;
	NVIC_ISER2_t ISER2;
	/*uint32_t reserved1[]*/
} NVIC_t;

#endif
