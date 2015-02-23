#ifndef PER_RCC
#define PER_RCC

typedef union
{
	struct
	{
		_I32_ reserved1 :6;
		_I32_ PLLRDY :1;
		_IO32_ PLLON :1;
		_I32_ reserved2 :4;
		_IO32_ CSSON :1;
		_IO32_ HSEBYP :1;
		_I32_ HSERDY :1;
		_IO32_ HSEON :1;
		_I32_ HSICAL :8;
		_IO32_ HSITRIM :5;
		_I32_ reserved3 :1;
		_I32_ HSIRDY :1;
		_IO32_ HSION :1;
	} bits;
	_IO32_ dword;
} RCC_CR_t;

typedef union
{
	struct
	{
		_IO32_ PLLNODIV :1;
		_IO32_ MCOPRE :3;
		_I32_ reserved1 :1;
		_IO32_ MCO :3;
		_IO32_ I2SRC :1;
		_IO32_ USBPRES :1;
		_IO32_ PLLMUL :4;
		_IO32_ PLLXTPRE :1;
		_IO32_ PLLSRC :1;
		_I32_ reserved2 :2;
		_IO32_ PPRE2 :3;
		_IO32_ PPRE1 :3;
		_IO32_ HPRE :4;
		_I32_ SWS :2;
		_IO32_ SW :2;
	} bits;
	_IO32_ dword;
} RCC_CFGR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :8;
		_IO32_ CSSC :1;
		_I32_ reserved2 :2;
		_IO32_ PLLRDYC :1;
		_IO32_ HSERDYC :1;
		_IO32_ HSIRDYC :1;
		_IO32_ LSERDYC :1;
		_IO32_ LSIRDYC :1;
		_I32_ reserved3 :3;
		_IO32_ PLLRDYIE :1;
		_IO32_ HSERDYIE :1;
		_IO32_ HSIRDYIE :1;
		_IO32_ LSERDYIE :1;
		_IO32_ LSIRDYIE :1;
		_I32_ CSSF :1;
		_I32_ reserved4 :2;
		_I32_ PLLRDYF :1;
		_I32_ HSERDYF :1;
		_I32_ HSIRDYF :1;
		_I32_ LSERDYF :1;
		_I32_ LSIRDYF :1;
	} bits;
	_IO32_ dword;
} RCC_CIR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :14;
		_IO32_ TIM16RST :1;
		_IO32_ TIM15RST :1;
		_I32_ reserved2 :1;
		_IO32_ USART1RST :1;
		_IO32_ TIM8RST :1;
		_IO32_ SPI1RST :1;
		_IO32_ TIM1RST :1;
		_I32_ reserved3 :10;
		_IO32_ SYSCFGRST :1;
	} bits;
	_IO32_ dword;
} RCC_APB2RSTR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :2;
		_IO32_ DAC1RST :1;
		_IO32_ PWRRST :1;
		_I32_ reserved2 :1;
		_IO32_ DAC2RST :1;
		_IO32_ CANRST :1;
		_I32_ reserved3 :1;
		_IO32_ USBRST :1;
		_IO32_ I2C2RST :1;
		_IO32_ I2C1RST :1;
		_IO32_ UART5RST :1;
		_IO32_ UART4RST :1;
		_IO32_ USART3RST :1;
		_IO32_ USART2RST :1;
		_I32_ reserved4 :1;
		_IO32_ SPI3RST :1;
		_IO32_ SPI2RST :1;
		_I32_ reserved5 :2;
		_IO32_ WWDGRST :1;
		_I32_ reserved6 :5;
		_IO32_ TIM7RST :1;
		_IO32_ TIM6RST :1;
		_I32_ reserved7 :1;
		_IO32_ TIM4RST :1;
		_IO32_ TIM3RST :1;
		_IO32_ TIM2RST :1;
	} bits;
	_IO32_ dword;
} RCC_APB1RSTR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :2;
		_IO32_ ADC34EN :1;
		_IO32_ ADC12EN :1;
		_I32_ reserved2 :3;
		_IO32_ TSCEN :1;
		_I32_ reserved3 :1;
		_IO32_ IOPFEN :1;
		_IO32_ IOPEEN :1;
		_IO32_ IOPDEN :1;
		_IO32_ IOPCEN :1;
		_IO32_ IOPBEN :1;
		_IO32_ IOPAEN :1;
		_I32_ reserved4 :10;
		_IO32_ CRCEN :1;
		_I32_ reserved5 :1;
		_IO32_ FLITFEN :1;
		_I32_ reserved6 :1;
		_IO32_ SRAMEN :1;
		_IO32_ DMA2EN :1;
		_IO32_ DMA1EN :1;
	} bits;
	_IO32_ dword;
} RCC_AHBENR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :13;
		_IO32_ TIM17EN :1;
		_IO32_ TIM16EN :1;
		_IO32_ TIM15EN :1;
		_I32_ reserved2 :1;
		_IO32_ USART1EN :1;
		_IO32_ TIM8EN :1;
		_IO32_ SPI1EN :1;
		_IO32_ TIM1EN :1;
		_I32_ reserved3 :10;
		_IO32_ SYSCFGEN :1;
	} bits;
	_IO32_ dword;
} RCC_APB2ENR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :2;
		_IO32_ DAC1EN :1;
		_IO32_ PWREN :1;
		_I32_ reserved2 :1;
		_IO32_ DAC2EN :1;
		_IO32_ CANEN :1;
		_I32_ reserved3 :1;
		_IO32_ USBEN :1;
		_IO32_ I2C2EN :1;
		_IO32_ I2C1EN :1;
		_IO32_ UART5EN :1;
		_IO32_ UART4EN :1;
		_IO32_ USART3EN :1;
		_IO32_ USART2EN :1;
		_I32_ reserved4 :1;
		_IO32_ SP3EN :1;
		_IO32_ SPI2EN :1;
		_I32_ reserved5 :2;
		_IO32_ WWDGEN :1;
		_I32_ reserved6 :5;
		_IO32_ TIM7EN :1;
		_IO32_ TIM6EN :1;
		_I32_ reserved7 :1;
		_IO32_ TIM4EN :1;
		_IO32_ TIM3EN :1;
		_IO32_ TIM2EN :1;
	} bits;
	_IO32_ dword;
} RCC_APB1ENR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :15;
		_IO32_ BDRST :1;
		_IO32_ RTCEN :1;
		_I32_ reserved2 :5;
		_IO32_ RTCSEL :2;
		_I32_ reserved3 :3;
		_IO32_ LSEDRV :2;
		_IO32_ LSEBYP :1;
		_IO32_ LSERDY :1;
		_IO32_ LSEON :1;
	} bits;
	_IO32_ dword;
} RCC_BDCR_t;

typedef union
{
	struct
	{
		_I32_ LPWRSTF :1;
		_I32_ WWDGRSTF :1;
		_I32_ IWDGRSTF :1;
		_I32_ SFTRSTF :1;
		_I32_ PORRSTF :1;
		_I32_ PINRSTF :1;
		_I32_ OBLRSTF :1;
		_I32_ RMVF :1;
		_I32_ reserved1 :22;
		_I32_ LSIRDY :1;
		_IO32_ LSION :1;
	} bits;
	_IO32_ dword;
} RCC_CSR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :2;
		_IO32_ ADC34RST :1;
		_IO32_ ADC12RST :1;
		_I32_ reserved2 :3;
		_IO32_ TSCRST :1;
		_I32_ reserved3 :1;
		_IO32_ IOPFRST :1;
		_IO32_ IOPERST :1;
		_IO32_ IOPDRST :1;
		_IO32_ IOPCRST :1;
		_IO32_ IOPBRST :1;
		_IO32_ IOPARST :1;
		_I32_ reserved4 :17;
	} bits;
	_IO32_ dword;
} RCC_AHBRSTR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :18;
		_IO32_ ADC34PRES :5;
		_IO32_ ADC12PRES :5;
		_IO32_ PREDIV :4;
	} bits;
	_IO32_ dword;
} RCC_CFGR2_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :8;
		_IO32_ UART5SW :2;
		_IO32_ UART4SW :2;
		_IO32_ USART3SW :2;
		_IO32_ USART2SW :2;
		_I32_ reserved2 :6;
		_IO32_ TIM8SW :1;
		_IO32_ TIM1SW :1;
		_I32_ reserved3 :2;
		_IO32_ I2C2SW :1;
		_IO32_ I2C1SW :1;
		_I32_ reserved4 :2;
		_IO32_ USART1SW :2;
	} bits;
	_IO32_ dword;
} RCC_CFGR3_t;

typedef struct
{
	RCC_CR_t CR;
	RCC_CFGR_t CFGR;
	RCC_CIR_t CIR;
	RCC_APB2RSTR_t APB2RSTR;
	RCC_APB1RSTR_t APB1RSTR;
	RCC_AHBENR_t AHBENR;
	RCC_APB2ENR_t APB2ENR;
	RCC_APB1ENR_t APB1ENR;
	RCC_BDCR_t BDCR;
	RCC_CSR_t CSR;
	RCC_AHBRSTR_t AHBRSTR;
	RCC_CFGR2_t CFGR2;
	RCC_CFGR3_t CFGR3;
} RCC_t;

#endif
