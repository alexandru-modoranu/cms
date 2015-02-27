typedef union
{
	struct
	{
		_IO32_ LATENCY :3;
		_IO32_ HLFCYA :1;
		_IO32_ PRFTBE :1;
		_I32_ PRFTBS :1;
		_I32_ reserved1 :26;
	} bits;
	_IO32_ dword;
} FLASH_ACR_t;

typedef union
{
	struct
	{
		_IO32_ FKEYR;
	} bits;
	_IO32_ dword;
} FLASH_KEYR_t;

typedef union
{
	struct
	{
		_IO32_ OPTKEYR;		
	} bits;
	_IO32_ dword;
} FLASH_OPTKEYR_t;

typedef union
{
	struct
	{
		_I32_ BSY :1;
		_I32_ reserved1 :1;
		_IO32_ PGERR :1;
		_I32_ reserved2 :1;
		_IO32_ WRPRTERR :1;
		_IO32_ EOP :1;
		_I32_ reserved3 :26;
	} bits;
	_IO32_ dword;
} FLASH_SR_t;

typedef union
{
	struct
	{
		_IO32_ PG :1;
		_IO32_ PER :1;
		_IO32_ MER :1;
		_I32_ reserved1 :1;
		_IO32_ OPTPG :1;
		_IO32_ OPTER :1;
		_IO32_ STRT :1;
		_IO32_ LOCK :1;
		_I32_ reserved2 :1;
		_IO32_ OPTWRE :1;
		_IO32_ ERRIE :1;
		_I32_ reserved3 :1;
		_IO32_ EOPIE :1;
		_IO32_ OBL_LAUNCH :1;
		_I32_ reserved4 :18;
	} bits;
	_IO32_ dword;
} FLASH_CR_t;

typedef union
{
	struct
	{
		_IO32_ FAR;
	} bits;
	_IO32_ dword;
} FLASH_AR_t;

typedef union
{
	struct
	{
		_I32_ OPTERR :1;
		_I32_ RDPRT :2;
		_I32_ reserved1 :5;
		_I32_ WDG_SW :1;
		_I32_ nRST_STOP :1;
		_I32_ nRST_STDBY :1;
		_I32_ reserved2 :1;
		_I32_ nBOOT1 :1;
		_I32_ VDDA_MONITOR :1;
		_I32_ SRAM_PE :1;
		_I32_ reserved3 :1;
		_I32_ Data0 :8;
		_I32_ Data1 :8;
	} bits;
	_IO32_ dword;
} FLASH_OBR_t;

typedef union
{
	struct
	{
		_I32_ WRP;
	} bits;
	_IO32_ dword;
} FLASH_WRPR_t;

typedef struct
{
	FLASH_ACR_t ACR;
	FLASH_KEYR_t KEYR;
	FLASH_OPTKEYR_t OPTKEYR;
	FLASH_SR_t SR;
	FLASH_CR_t CR;
	FLASH_AR_t AR;
	FLASH_OBR_t OBR;
	FLASH_WRPR_t WRPR;
}FLASH_t;
