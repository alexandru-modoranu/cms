#ifndef PER_FPU_H
#define PER_FPU_H

typedef union
{
	struct
	{
		_I32_ reserved1 :8;
		_IO32_ CP11 :2;
		_IO32_ CP10 :2;
		_I32_ reserved2 :20;
	} bits;
	_IO32_ dword;
} FPU_CPACR_t;

typedef union
{
	struct
	{
		_IO32_ ASPEN :1;
		_IO32_ LSPEN :1;
		_I32_ reserved1 :21;
		_IO32_ MONRDY :1;
		_I32_ reserved2 :1;
		_IO32_ BFRDY :1;
		_IO32_ MMRDY :1;
		_IO32_ HFRDY :1;
		_IO32_ THREAD :1;
		_I32_ reserved3 :1;
		_IO32_ USER :1;
		_IO32_ LSPAC :1;
	} bits;
	_IO32_ dword;
} FPU_FPCCR_t;

typedef union
{
	struct
	{
		_IO32_ ADDRESS :29;
		_I32_ reserved1 :3;
	} bits;
	_IO32_ dword;
} FPU_FPCAR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :5;
		_IO32_ AHP :1;
		_IO32_ DN :1;
		_IO32_ FZ :1;
		_IO32_ RMode :2;
		_I32_ reserved2 :22;
	} bits;
	_IO32_ dword;
} FPU_FPDSCR_t;

typedef struct
{
	FPU_CPACR_t CPACR;
	_I32_ reserved1[106];
	FPU_FPCCR_t FPCCR;
	FPU_FPCAR_t FPCAR;
	FPU_FPDSCR_t FPDSCR;
} FPU_t;

#endif
