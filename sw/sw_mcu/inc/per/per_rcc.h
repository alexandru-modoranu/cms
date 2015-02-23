#ifndef PER_RCC
#define PER_RCC

typedef union
{
	struct
	{
		uint32_t reserved1 :6;
		uint32_t PLLRDY :1;
		uint32_t PLLON :1;
		uint32_t reserved2 :4;
		uint32_t CSSON :1;
		uint32_t HSEBYP :1;
		uint32_t HSERDY :1;
		uint32_t HSEON :1;
		uint32_t HSICAL :8;
		uint32_t HSITRIM :5;
		uint32_t reserved3 :1;
		uint32_t HSIRDY :1;
		uint32_t HSION :1;
	} bits;
	uint32_t dword;
} RCC_CR_t;

typedef union
{
	struct
	{
		uint32_t PLLNODIV :1;
		uint32_t MCOPRE :2;
		uint32_t MCOF :1;
		uint32_t reserved1 :1;
		uint32_t MCO :3;
		uint32_t I2SRC :1;
		uint32_t USBPRES :1;
		uint32_t PLLMUL :4;
		uint32_t PLLXTPRE :1;
		uint32_t PLLSRC :1;
		uint32_t reserved2 :2;
		uint32_t PPRE2 :3;
		uint32_t PPRE1 :3;
		uint32_t HPRE :4;
		uint32_t SWS :2;
		uint32_t SW :2;
	} bits;
	uint32_t dword;
} RCC_CFGR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :8;
		uint32_t CSSC :1;
		uint32_t reserved2 :2;
		uint32_t PLLRDYC :1;
		uint32_t HSERDYC :1;
		uint32_t HSIRDYC :1;
		uint32_t LSERDYC :1;
		uint32_t LSIRDYC :1;
		uint32_t reserved3 :3;
		uint32_t PLLRDYIE :1;
		uint32_t HSERDYIE :1;
		uint32_t HSIRDYIE :1;
		uint32_t LSERDYIE :1;
		uint32_t LSIRDYIE :1;
		uint32_t CSSF :1;
		uint32_t reserved4 :2;
		uint32_t PLLRDYF :1;
		uint32_t HSERDYF :1;
		uint32_t HSIRDYF :1;
		uint32_t LSERDYF :1;
		uint32_t LSIRDYF :1;
	} bits;
	uint32_t dword;
} RCC_CIR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :14;
		uint32_t TIM16RST :1;
		uint32_t TIM15RST :1;
		uint32_t reserved2 :1;
		uint32_t USART1RST :1;
		uint32_t TIM8RST :1;
		uint32_t SPI1RST :1;
		uint32_t TIM1RST :1;
		uint32_t reserved3 :10;
		uint32_t SYSCFGRST :1;
	} bits;
	uint32_t dword;
} RCC_APB2RSTR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :2;
		uint32_t DAC1RST :1;
		uint32_t PWRRST :1;
		uint32_t reserved2 :1;
		uint32_t DAC2RST :1;
		uint32_t CANRST :1;
		uint32_t reserved3 :1;
		uint32_t USBRST :1;
		uint32_t I2C2RST :1;
		uint32_t I2C1RST :1;
		uint32_t UART5RST :1;
		uint32_t UART4RST :1;
		uint32_t USART3RST :1;
		uint32_t USART2RST :1;
		uint32_t reserved4 :1;
		uint32_t SPI3RST :1;
		uint32_t SPI2RST :1;
		uint32_t reserved5 :2;
		uint32_t WWDGRST :1;
		uint32_t reserved6 :5;
		uint32_t TIM7RST :1;
		uint32_t TIM6RST :1;
		uint32_t reserved7 :1;
		uint32_t TIM4RST :1;
		uint32_t TIM3RST :1;
		uint32_t TIM2RST :1;
	} bits;
	uint32_t dword;
} RCC_APB1RSTR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :2;
		uint32_t ADC34EN :1;
		uint32_t ADC12EN :1;
		uint32_t reserved2 :3;
		uint32_t TSCEN :1;
		uint32_t reserved3 :1;
		uint32_t IOPFEN :1;
		uint32_t IOPEEN :1;
		uint32_t IOPDEN :1;
		uint32_t IOPCEN :1;
		uint32_t IOPBEN :1;
		uint32_t IOPAEN :1;
		uint32_t reserved4 :10;
		uint32_t CRCEN :1;
		uint32_t reserved5 :1;
		uint32_t FLITFEN :1;
		uint32_t reserved6 :1;
		uint32_t SRAMEN :1;
		uint32_t DMA2EN :1;
		uint32_t DMA1EN :1;
	} bits;
	uint32_t dword;
} RCC_AHBENR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :13;
		uint32_t TIM17EN :1;
		uint32_t TIM16EN :1;
		uint32_t TIM15EN :1;
		uint32_t reserved2 :1;
		uint32_t USART1EN :1;
		uint32_t TIM8EN :1;
		uint32_t SPI1EN :1;
		uint32_t TIM1EN :1;
		uint32_t reserved3 :10;
		uint32_t SYSCFGEN :1;
	} bits;
	uint32_t dword;
} RCC_APB2ENR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :2;
		uint32_t DAC1EN :1;
		uint32_t PWREN :1;
		uint32_t reserved2 :1;
		uint32_t DAC2EN :1;
		uint32_t CANEN :1;
		uint32_t reserved3 :1;
		uint32_t USBEN :1;
		uint32_t I2C2EN :1;
		uint32_t I2C1EN :1;
		uint32_t UART5EN :1;
		uint32_t UART4EN :1;
		uint32_t USART3EN :1;
		uint32_t USART2EN :1;
		uint32_t reserved4 :1;
		uint32_t SP3EN :1;
		uint32_t SPI2EN :1;
		uint32_t reserved5 :2;
		uint32_t WWDGEN :1;
		uint32_t reserved6 :5;
		uint32_t TIM7EN :1;
		uint32_t TIM6EN :1;
		uint32_t reserved7 :1;
		uint32_t TIM4EN :1;
		uint32_t TIM3EN :1;
		uint32_t TIM2EN :1;
	} bits;
	uint32_t dword;
} RCC_APB1ENR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :15;
		uint32_t BDRST :1;
		uint32_t RTCEN :1;
		uint32_t reserved2 :5;
		uint32_t RTCSEL :2;
		uint32_t reserved3 :3;
		uint32_t LSEDRV :2;
		uint32_t LSEBYP :1;
		uint32_t LSERDY :1;
		uint32_t LSEON :1;
	} bits;
	uint32_t dword;
} RCC_BDCR_t;

typedef union
{
	struct
	{
		uint32_t LPWRSTF :1;
		uint32_t WWDGRSTF :1;
		uint32_t IWDGRSTF :1;
		uint32_t SFTRSTF :1;
		uint32_t PORRSTF :1;
		uint32_t PINRSTF :1;
		uint32_t OBLRSTF :1;
		uint32_t RMVF :1;
		uint32_t reserved1 :22;
		uint32_t LSIRDY :1;
		uint32_t LSION :1;
	} bits;
	uint32_t dword;
} RCC_CSR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :2;
		uint32_t ADC34RST :1;
		uint32_t ADC12RST :1;
		uint32_t reserved2 :3;
		uint32_t TSCRST :1;
		uint32_t reserved3 :1;
		uint32_t IOPFRST :1;
		uint32_t IOPERST :1;
		uint32_t IOPDRST :1;
		uint32_t IOPCRST :1;
		uint32_t IOPBRST :1;
		uint32_t IOPARST :1;
		uint32_t reserved4 :17;
	} bits;
	uint32_t dword;
} RCC_AHBRSTR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :8;
		uint32_t UART5SW :2;
		uint32_t UART4SW :2;
		uint32_t USART3SW :2;
		uint32_t USART2SW :2;
		uint32_t reserved2 :6;
		uint32_t TIM8SW :1;
		uint32_t TIM1SW :1;
		uint32_t reserved3 :2;
		uint32_t I2C2SW :1;
		uint32_t I2C1SW :1;
		uint32_t reserved4 :2;
		uint32_t USART1SW :2;
	} bits;
	uint32_t dword;
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
	RCC_CFGR3_t CFGR3;
} RCC_t;

#endif
