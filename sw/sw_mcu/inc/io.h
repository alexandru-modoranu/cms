/*****************************************************************************************************************/
/* RCC base */
#define	RCC_BASE 0x40021000

/* Clock control register */
#define RCC_CR *((volatile uint32_t *)(RCC_BASE + 0x0u))
#define HSEON	16u
#define HSERDY 	17u
#define PLLON	24u
#define PLLRDY	25u

/* Clock configuration register */
#define RCC_CFGR *((volatile uint32_t *)(RCC_BASE + 0x4u))
#define USBPRE	22u
#define PLLMUL3	21u
#define PLLMUL2	20u
#define PLLMUL1	19u
#define PLLMUL0	18u
#define PLLSRC	16u
#define PPRE12	10u
#define PPRE11	9u
#define PPRE10	8u
#define SW1		1u
#define SW0   	0u

/* AHB peripheral clock enable register */
#define RCC_AHBENR 	*((volatile uint32_t *)(RCC_BASE + 0x14u))
#define IOPAEN	17u

/* APB1 peripheral clock enable register */
#define RCC_APB1ENR *((volatile uint32_t *)(RCC_BASE + 0x1Cu))
#define	DAC1EN	29u
#define DAC2EN 	26u
#define	TIM6EN	4u

/*****************************************************************************************************************/
/* DAC base */
#define DAC_BASE 0x40007400

/* DAC control register */
#define DAC_CR *((volatile uint32_t *)(DAC_BASE + 0x0u))
#define EN2		16u
#define EN1 	0u

/* DAC channel1 12-bit right-aligned data holding register */
#define DAC_DHR12R1	*((volatile uint32_t *)(DAC_BASE + 0x8u))

/* DAC channel2 12-bit right-aligned data holding register */
#define DAC_DHR12R2	*((volatile uint32_t *)(DAC_BASE + 0x14u))

/*****************************************************************************************************************/
/* GPIO A base */
#define GPIOA_BASE	0x48000000

/* GPIO port mode register */
#define GPIOA_MODER	*((volatile uint32_t *)(GPIOA_BASE + 0x0u))
#define MODER51	11u
#define MODER50	10u
#define MODER41	9u
#define MODER40	8u

/*****************************************************************************************************************/
/* TIM6 Base */
#define TIM6_BASE 0x40001000

/* TIM6 control register 1 */
#define TIM6_CR1 *((volatile uint16_t *)(TIM6_BASE + 0x0u))
#define UIFREMAP 11u
#define ARPE 7u
#define OPM 3u
#define URS 2u
#define UDIS 1u
#define CEN 0u

/* TIM6 control register 2 */
#define TIM6_CR2 *((volatile uint16_t *)(TIM6_BASE + 0x4u))
#define MMS2 6u
#define MMS1 5u
#define MMS0 4u

/* TIM6 DMA/Interrupt enable register */
#define TIM6_DIER *((volatile uint16_t *)(TIM6_BASE + 0xCu))
#define UIE 0u

/* TIM6 status register */
#define TIM6_SR *((volatile uint16_t *)(TIM6_BASE + 0x10u))
#define UIF 0u

/* TIM6 event generation register */
#define TIM6_EGR *((volatile uint16_t *)(TIM6_BASE + 0x14u))
#define UG 0u

/* TIM6 counter */
#define TIM6_CNT *((volatile uint32_t *)(TIM6_BASE + 0x24u))

/* TIM6 auto-reload register */
#define TIM6_ARR *((volatile uint16_t *)(TIM6_BASE + 0x2Cu))

/*****************************************************************************************************************/
/* NVIC base */
#define NVIC_BASE 0xE000E100

/* ISER1 Register */
#define NVIC_ISER1 *((volatile uint32_t *)(NVIC_BASE + 0x4u))
#define TIM6_IE 22u

/*****************************************************************************************************************/
/* USB base */
#define USB_BASE 0x40005C00

/* USB endpoint registers */
#define USB_EP0R *((volatile uint16_t *)(USB_BASE + 0x0u))
#define USB_EP1R *((volatile uint16_t *)(USB_BASE + 0x4u))
#define USB_EP2R *((volatile uint16_t *)(USB_BASE + 0x8u))
#define USB_EP3R *((volatile uint16_t *)(USB_BASE + 0xCu))
#define USB_EP4R *((volatile uint16_t *)(USB_BASE + 0x10u))
#define USB_EP5R *((volatile uint16_t *)(USB_BASE + 0x14u))
#define USB_EP6R *((volatile uint16_t *)(USB_BASE + 0x18u))
#define USB_EP7R *((volatile uint16_t *)(USB_BASE + 0x1Cu))
#define CTR_RX 15u
#define DTOG_RX 14u
#define STAT_RX1 13u
#define STAT_RX0 12u
#define SETUP 11u
#define EP_TYPE1  10u
#define EP_TYPE0 9u
#define EP_KIND 8u
#define CTR_TX 7u
#define DTOG_TX 6u
#define STAT_TX1 5u
#define STAT_TX0 4u
#define EA3 3u
#define EA2 2u
#define EA1 1u
#define EA0 0u

/* USB control registers */


/*****************************************************************************************************************/
/* USBMEM base */
#define USBMEM_BASE 0x40006000

