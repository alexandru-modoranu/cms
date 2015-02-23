#ifndef PER_STK_H
#define PER_STK_H

typedef union
{
	struct
	{
		uint32_t reserved1 :15;
		uint32_t COUNTFLAG :1;
		uint32_t reserved2 :13;
		uint32_t CLKSOURCE :1;
		uint32_t TICKINT :1;
		uint32_t ENABLE :1;
	} bits;
	uint32_t dword;
} STK_CTRL_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :8;
		uint32_t RELOAD :24;
	} bits;
	uint32_t dword;
} STK_LOAD_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :8;
		uint32_t CURRENT :24;
	} bits;
	uint32_t dword;
} STK_VAL_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :8;
		uint32_t TENMS :24;
	} bits;
	uint32_t dword;
} STK_CALIB_t;

typedef struct
{
	STK_CTRL_t CTRL;
	STK_LOAD_t LOAD;
	STK_VAL_t VAL;
	STK_CALIB_t CALIB;
} STK_t;

#endif
