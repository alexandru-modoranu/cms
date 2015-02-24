/*************************************************************************************
  * @file      TBD
  * @author    TBD
  * @version   TBD
  * @date      TBD
  * @brief     TBD
  * @attention TBD copyright
  */

.syntax unified
.cpu cortex-m4
.thumb

/*************************************************************************************
 * @brief Startup vector 
 * Vector table residing in FLASH
 */
.section	.startup, "a", %progbits
.type 		pfStartup, %object
.size		pfStartup, .-pfStartup
	
pfStartup:
	.word 	_estack
	.word	Reset_Handler
	.word	NMI_Handler
	.word	HardFault_Handler
	.word	MemManage_Handler
	.word	BusFault_Handler
	.word	UsageFault_Handler
	.word	0
	.word	0
	.word	0
	.word	0
	.word	SVC_Handler
	.word	DebugMon_Handler
	.word	0
	.word	PendSV_Handler
	.word	SysTick_Handler
	.word	WWDG_Handler
	.word	PVD_Handler
	.word	TAMPER_STAMP_Handler
	.word	RTC_WKUP_Handler
	.word	FLASH_Handler
	.word	RCC_Handler
	.word	EXTI0_Handler
	.word	EXTI1_Handler
	.word	EXTI2_TS_Handler
	.word	EXTI3_Handler
	.word	EXTI4_Handler
	.word	DMA1_Channel1_Handler
	.word	DMA1_Channel2_Handler
	.word	DMA1_Channel3_Handler
	.word	DMA1_Channel4_Handler
	.word	DMA1_Channel5_Handler
	.word	DMA1_Channel6_Handler
	.word	DMA1_Channel7_Handler
	.word	ADC1_2_Handler
	.word	USB_HP_CAN1_TX_Handler
	.word	USB_LP_CAN1_RX0_Handler
	.word	CAN1_RX1_Handler
	.word	CAN1_SCE_Handler
	.word	EXTI9_5_Handler
	.word	TIM1_BRK_TIM15_Handler
	.word	TIM1_UP_TIM16_Handler
	.word	TIM1_TRG_COM_TIM17_Handler
	.word	TIM1_CC_Handler
	.word	TIM2_Handler
	.word	TIM3_Handler
	.word	TIM4_Handler
	.word	I2C1_EV_Handler
	.word	I2C1_ER_Handler
	.word	I2C2_EV_Handler
	.word	I2C2_ER_Handler
	.word	SPI1_Handler
	.word	SPI2_Handler
	.word	USART1_Handler
	.word	USART2_Handler
	.word	USART3_Handler
	.word	EXTI15_10_Handler
	.word	RTC_Alarm_Handler
	.word	USBWakeUp_Handler
	.word	TIM8_BRK_Handler
	.word	TIM8_UP_Handler
	.word	TIM8_TRG_COM_Handler
	.word	TIM8_CC_Handler
	.word	ADC3_Handler
	.word	0
	.word	0
	.word	0
	.word	SPI3_Handler
	.word	UART4_Handler
	.word	UART5_Handler
	.word	TIM6_DAC_Handler
	.word	TIM7_Handler
	.word	DMA2_Channel1_Handler
	.word	DMA2_Channel2_Handler
	.word	DMA2_Channel3_Handler
	.word	DMA2_Channel4_Handler
	.word	DMA2_Channel5_Handler
	.word	ADC4_Handler
	.word	0
	.word	0
	.word	COMP1_2_3_Handler
	.word	COMP4_5_6_Handler
	.word	COMP7_Handler
	.word	0
	.word	0
	.word	0
	.word	0
	.word	0
	.word	0
	.word	0
	.word	USB_HP_Handler
	.word	USB_LP_Handler
	.word	USBWakeUp_RMP_Handler
	.word	0
	.word	0
	.word	0
	.word	0
	.word	FPU_Handler

/*************************************************************************************
 * @brief Aliases 
 * Weak aliases for IRQ vector that default to the
 * Default_Handler function in case of an unexpected IRQ
 */
	.weak	NMI_Handler
	.thumb_set NMI_Handler, Default_Handler

	.weak	HardFault_Handler
	.thumb_set HardFault_Handler, Default_Handler

	.weak	MemManage_Handler
	.thumb_set MemManage_Handler, Default_Handler

	.weak	BusFault_Handler
	.thumb_set BusFault_Handler, Default_Handler

	.weak	UsageFault_Handler
	.thumb_set UsageFault_Handler, Default_Handler

	.weak	SVC_Handler
	.thumb_set SVC_Handler, Default_Handler

	.weak	DebugMon_Handler
	.thumb_set DebugMon_Handler, Default_Handler

	.weak	PendSV_Handler
	.thumb_set PendSV_Handler, Default_Handler

	.weak	SysTick_Handler
	.thumb_set SysTick_Handler, Default_Handler

	.weak	WWDG_Handler
	.thumb_set WWDG_Handler, Default_Handler

	.weak	PVD_Handler
	.thumb_set PVD_Handler, Default_Handler

	.weak	TAMPER_STAMP_Handler
	.thumb_set TAMPER_STAMP_Handler, Default_Handler

	.weak	RTC_WKUP_Handler
	.thumb_set RTC_WKUP_Handler, Default_Handler

	.weak	FLASH_Handler
	.thumb_set FLASH_Handler, Default_Handler

	.weak	RCC_Handler
	.thumb_set RCC_Handler, Default_Handler

	.weak	EXTI0_Handler
	.thumb_set EXTI0_Handler, Default_Handler

	.weak	EXTI1_Handler
	.thumb_set EXTI1_Handler, Default_Handler

	.weak	EXTI2_TS_Handler
	.thumb_set EXTI2_TS_Handler, Default_Handler

	.weak	EXTI3_Handler
	.thumb_set EXTI3_Handler, Default_Handler

	.weak	EXTI4_Handler
	.thumb_set EXTI4_Handler, Default_Handler

	.weak	DMA1_Channel1_Handler
	.thumb_set DMA1_Channel1_Handler, Default_Handler

	.weak	DMA1_Channel2_Handler
	.thumb_set DMA1_Channel2_Handler, Default_Handler

	.weak	DMA1_Channel3_Handler
	.thumb_set DMA1_Channel3_Handler, Default_Handler

	.weak	DMA1_Channel4_Handler
	.thumb_set DMA1_Channel4_Handler, Default_Handler

	.weak	DMA1_Channel5_Handler
	.thumb_set DMA1_Channel5_Handler, Default_Handler

	.weak	DMA1_Channel6_Handler
	.thumb_set DMA1_Channel6_Handler, Default_Handler

	.weak	DMA1_Channel7_Handler
	.thumb_set DMA1_Channel7_Handler, Default_Handler

	.weak	ADC1_2_Handler
	.thumb_set ADC1_2_Handler, Default_Handler

	.weak	USB_HP_CAN1_TX_Handler
	.thumb_set USB_HP_CAN1_TX_Handler, Default_Handler

	.weak	USB_LP_CAN1_RX0_Handler
	.thumb_set USB_LP_CAN1_RX0_Handler, Default_Handler

	.weak	CAN1_RX1_Handler
	.thumb_set CAN1_RX1_Handler, Default_Handler

	.weak	CAN1_SCE_Handler
	.thumb_set CAN1_SCE_Handler, Default_Handler

	.weak	EXTI9_5_Handler
	.thumb_set EXTI9_5_Handler, Default_Handler

	.weak	TIM1_BRK_TIM15_Handler
	.thumb_set TIM1_BRK_TIM15_Handler, Default_Handler

	.weak	TIM1_UP_TIM16_Handler
	.thumb_set TIM1_UP_TIM16_Handler, Default_Handler

	.weak	TIM1_TRG_COM_TIM17_Handler
	.thumb_set TIM1_TRG_COM_TIM17_Handler, Default_Handler

	.weak	TIM1_CC_Handler
	.thumb_set TIM1_CC_Handler, Default_Handler

	.weak	TIM2_Handler
	.thumb_set TIM2_Handler, Default_Handler

	.weak	TIM3_Handler
	.thumb_set TIM3_Handler, Default_Handler

	.weak	TIM4_Handler
	.thumb_set TIM4_Handler, Default_Handler

	.weak	I2C1_EV_Handler
	.thumb_set I2C1_EV_Handler, Default_Handler

	.weak	I2C1_ER_Handler
	.thumb_set I2C1_ER_Handler, Default_Handler

	.weak	I2C2_EV_Handler
	.thumb_set I2C2_EV_Handler, Default_Handler

	.weak	I2C2_ER_Handler
	.thumb_set I2C2_ER_Handler, Default_Handler

	.weak	SPI1_Handler
	.thumb_set SPI1_Handler, Default_Handler

	.weak	SPI2_Handler
	.thumb_set SPI2_Handler, Default_Handler

	.weak	USART1_Handler
	.thumb_set USART1_Handler, Default_Handler

	.weak	USART2_Handler
	.thumb_set USART2_Handler, Default_Handler

	.weak	USART3_Handler
	.thumb_set USART3_Handler, Default_Handler

	.weak	EXTI15_10_Handler
	.thumb_set EXTI15_10_Handler, Default_Handler

	.weak	RTC_Alarm_Handler
	.thumb_set RTC_Alarm_Handler, Default_Handler

	.weak	USBWakeUp_Handler
	.thumb_set USBWakeUp_Handler, Default_Handler

	.weak	TIM8_BRK_Handler
	.thumb_set TIM8_BRK_Handler, Default_Handler

	.weak	TIM8_UP_Handler
	.thumb_set TIM8_UP_Handler, Default_Handler

	.weak	TIM8_TRG_COM_Handler
	.thumb_set TIM8_TRG_COM_Handler, Default_Handler

	.weak	TIM8_CC_Handler
	.thumb_set TIM8_CC_Handler, Default_Handler

	.weak	ADC3_Handler
	.thumb_set ADC3_Handler, Default_Handler

	.weak	SPI3_Handler
	.thumb_set SPI3_Handler, Default_Handler

	.weak	UART4_Handler
	.thumb_set UART4_Handler, Default_Handler

	.weak	UART5_Handler
	.thumb_set UART5_Handler, Default_Handler

	.weak	TIM6_DAC_Handler
	.thumb_set TIM6_DAC_Handler, Default_Handler

	.weak	TIM7_Handler
	.thumb_set TIM7_Handler, Default_Handler

	.weak	DMA2_Channel1_Handler
	.thumb_set DMA2_Channel1_Handler, Default_Handler

	.weak	DMA2_Channel2_Handler
	.thumb_set DMA2_Channel2_Handler, Default_Handler

	.weak	DMA2_Channel3_Handler
	.thumb_set DMA2_Channel3_Handler, Default_Handler

	.weak	DMA2_Channel4_Handler
	.thumb_set DMA2_Channel4_Handler, Default_Handler

	.weak	DMA2_Channel5_Handler
	.thumb_set DMA2_Channel5_Handler, Default_Handler

	.weak	ADC4_Handler
	.thumb_set ADC4_Handler, Default_Handler
	
	.weak	COMP1_2_3_Handler
	.thumb_set COMP1_2_3_Handler, Default_Handler
	
	.weak	COMP4_5_6_Handler
	.thumb_set COMP4_5_6_Handler, Default_Handler
	
	.weak	COMP7_Handler
	.thumb_set COMP7_Handler, Default_Handler
	
	.weak	USB_HP_Handler
	.thumb_set USB_HP_Handler, Default_Handler
	
	.weak	USB_LP_Handler
	.thumb_set USB_LP_Handler, Default_Handler
	
	.weak	USBWakeUp_RMP_Handler
	.thumb_set USBWakeUp_RMP_Handler, Default_Handler
	
	.weak	FPU_Handler
	.thumb_set FPU_Handler, Default_Handler
	
/*************************************************************************************
 * @brief Reset handler 
 * This gets called first on reset and 
 * it initializes the sections and other
 * data then jumps to main().
 */
.section	.text.Reset_Handler
.weak		Reset_Handler
.type		Reset_Handler, %function
.size		Reset_Handler, .-Reset_Handler	

Reset_Handler:
	ldr r2, =_siccram	/* Copy ccram fast handler routines */	
	ldr r1, =_sccram
	ldr r3, =_lccram
	bl 	wordCopy
	
	ldr r2, =_sidata	/* Copy initialized data */	
	ldr r1, =_sdata
	ldr r3, =_ldata
	bl 	wordCopy
	
	ldr r2, =0x00000000		/* Set bss to 0 */
	ldr r1, =_sbss
	ldr r3, =_lbss
	bl 	wordSet	

	ldr r2, =0xE000ED88		/* Enable FPU */
	ldr r3, [r2]
	orr r3, r3, #(0xF << 20)
	str r3, [r2]
	dsb
	isb
	
	bl main				/* Call main() */
	nop
	b 	Default_Handler

/*************************************************************************************
 * @brief wordCopy 
 * Performs a word by word memory copy.
 * @input r2 Source address
 * @input r1 Destination address
 * @input r3 Byte count
 */
.section	.text.wordCopy
.type		wordCopy, %function
.size		wordCopy, .-wordCopy
	
wordCopy:
	cmp r3, #0
	beq	wordCopyExit
	sub r3, r3, #4
wordCopyLoop:
	ldr	r4, [r2, r3]
	str r4, [r1, r3]
	subs r3, r3, #4
	bge wordCopyLoop
wordCopyExit:	
	bx	lr
	nop

/*************************************************************************************
 * @brief wordSet 
 * Performs a word set.
 * @input r2 Set value
 * @input r1 Destination address
 * @input r3 Byte count
 */
.section	.text.wordSet
.type		wordSet, %function
.size		wordSet, .-wordSet
	
wordSet:
	cmp r3, #0
	beq	wordSetExit
	sub r3, r3, #4
	mov r4, r2
wordSetloop:
	str r4, [r1, r3]
	subs r3, r3, #4
	bge wordSetloop
wordSetExit:	
	bx	lr
	nop
	
/*************************************************************************************
 * @brief Default handler 
 * This gets called in case of an unexpected IRQ
 * loops forever for debugging purposes. 
 */
.section	.text.Default_Handler
.weak		Default_Handler
.type		Default_Handler, %function
.size		Default_Handler, .-Default_Handler

Default_Handler:
	b	Default_Handler	
	
