#ifndef PER_FPU_H
#define PER_FPU_H

typedef union
{
	struct
	{
		uint32_t reserved1 :8;
		uint32_t CP11 :2;
		uint32_t CP10 :2;
		uint32_t reserved2 :20;
	} bits;
	uint32_t dword;
} FPU_CPACR_t;

typedef union
{
	struct
	{
		uint32_t ASPEN :1;
		uint32_t LSPEN :1;
		uint32_t reserved1 :21;
		uint32_t MONRDY :1;
		uint32_t reserved2 :1;
		uint32_t BFRDY :1;
		uint32_t MMRDY :1;
		uint32_t HFRDY :1;
		uint32_t THREAD :1;
		uint32_t reserved3 :1;
		uint32_t USER :1;
		uint32_t LSPAC :1;
	} bits;
	uint32_t dword;
} FPU_FPCCR_t;

typedef union
{
	struct
	{
		const uint32_t ADDRESS :29;
		uint32_t reserved1 :3;
	} bits;
	uint32_t dword;
} FPU_FPCAR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :5;
		uint32_t AHP :1;
		uint32_t DN :1;
		uint32_t FZ :1;
		uint32_t RMode :2;
		uint32_t reserved2 :22;
	} bits;
	uint32_t dword;
} FPU_FPDSCR_t;

typedef struct
{
	FPU_CPACR_t CPACR;
	uint32_t reserved1[106];
	FPU_FPCCR_t FPCCR;
	FPU_FPCAR_t FPCAR;
	FPU_FPDSCR_t FPDSCR;
} FPU_t;

#endif
