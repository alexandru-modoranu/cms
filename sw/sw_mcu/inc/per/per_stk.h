#ifndef PER_STK_H
#define PER_STK_H

typedef union
{
	struct
	{
		_IO32_ ENABLE :1;
		_IO32_ TICKINT :1;
		_IO32_ CLKSOURCE :1;
		_I32_ reserved1 :13;
		_IO32_ COUNTFLAG :1;
		_I32_ reserved2 :15;
	} bits;
	_IO32_ dword;
} STK_CTRL_t;

typedef union
{
	struct
	{
		_IO32_ RELOAD :24;
		_I32_ reserved1 :8;
	} bits;
	_IO32_ dword;
} STK_LOAD_t;

typedef union
{
	struct
	{
		_IO32_ CURRENT :24;
		_I32_ reserved1 :8;
	} bits;
	_IO32_ dword;
} STK_VAL_t;

typedef union
{
	struct
	{
		_I32_ TENMS :24;
		_I32_ reserved1 :6;
		_I32_ SKEW :1;
		_I32_ NOREF :1;
	} bits;
	_IO32_ dword;
} STK_CALIB_t;

typedef struct
{
	STK_CTRL_t CTRL;
	STK_LOAD_t LOAD;
	STK_VAL_t VAL;
	STK_CALIB_t CALIB;
} STK_t;

#endif
