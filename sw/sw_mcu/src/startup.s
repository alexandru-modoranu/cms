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
	.word	WWDG_IRQHandler
	.word	PVD_IRQHandler
	.word	TAMPER_STAMP_IRQHandler
	.word	RTC_WKUP_IRQHandler
	.word	FLASH_IRQHandler
	.word	RCC_IRQHandler
	.word	EXTI0_IRQHandler
	.word	EXTI1_IRQHandler
	.word	EXTI2_TS_IRQHandler
	.word	EXTI3_IRQHandler
	.word	EXTI4_IRQHandler
	.word	DMA1_Channel1_IRQHandler
	.word	DMA1_Channel2_IRQHandler
	.word	DMA1_Channel3_IRQHandler
	.word	DMA1_Channel4_IRQHandler
	.word	DMA1_Channel5_IRQHandler
	.word	DMA1_Channel6_IRQHandler
	.word	DMA1_Channel7_IRQHandler
	.word	ADC1_2_IRQHandler
	.word	USB_HP_CAN1_TX_IRQHandler
	.word	USB_LP_CAN1_RX0_IRQHandler
	.word	CAN1_RX1_IRQHandler
	.word	CAN1_SCE_IRQHandler
	.word	EXTI9_5_IRQHandler
	.word	TIM1_BRK_TIM15_IRQHandler
	.word	TIM1_UP_TIM16_IRQHandler
	.word	TIM1_TRG_COM_TIM17_IRQHandler
	.word	TIM1_CC_IRQHandler
	.word	TIM2_IRQHandler
	.word	TIM3_IRQHandler
	.word	TIM4_IRQHandler
	.word	I2C1_EV_IRQHandler
	.word	I2C1_ER_IRQHandler
	.word	I2C2_EV_IRQHandler
	.word	I2C2_ER_IRQHandler
	.word	SPI1_IRQHandler
	.word	SPI2_IRQHandler
	.word	USART1_IRQHandler
	.word	USART2_IRQHandler
	.word	USART3_IRQHandler
	.word	EXTI15_10_IRQHandler
	.word	RTC_Alarm_IRQHandler
	.word	USBWakeUp_IRQHandler
	.word	TIM8_BRK_IRQHandler
	.word	TIM8_UP_IRQHandler
	.word	TIM8_TRG_COM_IRQHandler
	.word	TIM8_CC_IRQHandler
	.word	ADC3_IRQHandler
	.word	0
	.word	0
	.word	0
	.word	SPI3_IRQHandler
	.word	UART4_IRQHandler
	.word	UART5_IRQHandler
	.word	TIM6_DAC_IRQHandler
	.word	TIM7_IRQHandler
	.word	DMA2_Channel1_IRQHandler
	.word	DMA2_Channel2_IRQHandler
	.word	DMA2_Channel3_IRQHandler
	.word	DMA2_Channel4_IRQHandler
	.word	DMA2_Channel5_IRQHandler
	.word	ADC4_IRQHandler
	.word	0
	.word	0
	.word	COMP1_2_3_IRQHandler
	.word	COMP4_5_6_IRQHandler
	.word	COMP7_IRQHandler
	.word	0
	.word	0
	.word	0
	.word	0
	.word	0
	.word	0
	.word	0
	.word	USB_HP_IRQHandler
	.word	USB_LP_IRQHandler
	.word	USBWakeUp_RMP_IRQHandler
	.word	0
	.word	0
	.word	0
	.word	0
	.word	FPU_IRQHandler	

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

	.weak	WWDG_IRQHandler
	.thumb_set WWDG_IRQHandler, Default_Handler

	.weak	PVD_IRQHandler
	.thumb_set PVD_IRQHandler, Default_Handler

	.weak	TAMPER_STAMP_IRQHandler
	.thumb_set TAMPER_STAMP_IRQHandler, Default_Handler

	.weak	RTC_WKUP_IRQHandler
	.thumb_set RTC_WKUP_IRQHandler, Default_Handler

	.weak	FLASH_IRQHandler
	.thumb_set FLASH_IRQHandler, Default_Handler

	.weak	RCC_IRQHandler
	.thumb_set RCC_IRQHandler, Default_Handler

	.weak	EXTI0_IRQHandler
	.thumb_set EXTI0_IRQHandler, Default_Handler

	.weak	EXTI1_IRQHandler
	.thumb_set EXTI1_IRQHandler, Default_Handler

	.weak	EXTI2_TS_IRQHandler
	.thumb_set EXTI2_TS_IRQHandler, Default_Handler

	.weak	EXTI3_IRQHandler
	.thumb_set EXTI3_IRQHandler, Default_Handler

	.weak	EXTI4_IRQHandler
	.thumb_set EXTI4_IRQHandler, Default_Handler

	.weak	DMA1_Channel1_IRQHandler
	.thumb_set DMA1_Channel1_IRQHandler, Default_Handler

	.weak	DMA1_Channel2_IRQHandler
	.thumb_set DMA1_Channel2_IRQHandler, Default_Handler

	.weak	DMA1_Channel3_IRQHandler
	.thumb_set DMA1_Channel3_IRQHandler, Default_Handler

	.weak	DMA1_Channel4_IRQHandler
	.thumb_set DMA1_Channel4_IRQHandler, Default_Handler

	.weak	DMA1_Channel5_IRQHandler
	.thumb_set DMA1_Channel5_IRQHandler, Default_Handler

	.weak	DMA1_Channel6_IRQHandler
	.thumb_set DMA1_Channel6_IRQHandler, Default_Handler

	.weak	DMA1_Channel7_IRQHandler
	.thumb_set DMA1_Channel7_IRQHandler, Default_Handler

	.weak	ADC1_2_IRQHandler
	.thumb_set ADC1_2_IRQHandler, Default_Handler

	.weak	USB_HP_CAN1_TX_IRQHandler
	.thumb_set USB_HP_CAN1_TX_IRQHandler, Default_Handler

	.weak	USB_LP_CAN1_RX0_IRQHandler
	.thumb_set USB_LP_CAN1_RX0_IRQHandler, Default_Handler

	.weak	CAN1_RX1_IRQHandler
	.thumb_set CAN1_RX1_IRQHandler, Default_Handler

	.weak	CAN1_SCE_IRQHandler
	.thumb_set CAN1_SCE_IRQHandler, Default_Handler

	.weak	EXTI9_5_IRQHandler
	.thumb_set EXTI9_5_IRQHandler, Default_Handler

	.weak	TIM1_BRK_TIM15_IRQHandler
	.thumb_set TIM1_BRK_TIM15_IRQHandler, Default_Handler

	.weak	TIM1_UP_TIM16_IRQHandler
	.thumb_set TIM1_UP_TIM16_IRQHandler, Default_Handler

	.weak	TIM1_TRG_COM_TIM17_IRQHandler
	.thumb_set TIM1_TRG_COM_TIM17_IRQHandler, Default_Handler

	.weak	TIM1_CC_IRQHandler
	.thumb_set TIM1_CC_IRQHandler, Default_Handler

	.weak	TIM2_IRQHandler
	.thumb_set TIM2_IRQHandler, Default_Handler

	.weak	TIM3_IRQHandler
	.thumb_set TIM3_IRQHandler, Default_Handler

	.weak	TIM4_IRQHandler
	.thumb_set TIM4_IRQHandler, Default_Handler

	.weak	I2C1_EV_IRQHandler
	.thumb_set I2C1_EV_IRQHandler, Default_Handler

	.weak	I2C1_ER_IRQHandler
	.thumb_set I2C1_ER_IRQHandler, Default_Handler

	.weak	I2C2_EV_IRQHandler
	.thumb_set I2C2_EV_IRQHandler, Default_Handler

	.weak	I2C2_ER_IRQHandler
	.thumb_set I2C2_ER_IRQHandler, Default_Handler

	.weak	SPI1_IRQHandler
	.thumb_set SPI1_IRQHandler, Default_Handler

	.weak	SPI2_IRQHandler
	.thumb_set SPI2_IRQHandler, Default_Handler

	.weak	USART1_IRQHandler
	.thumb_set USART1_IRQHandler, Default_Handler

	.weak	USART2_IRQHandler
	.thumb_set USART2_IRQHandler, Default_Handler

	.weak	USART3_IRQHandler
	.thumb_set USART3_IRQHandler, Default_Handler

	.weak	EXTI15_10_IRQHandler
	.thumb_set EXTI15_10_IRQHandler, Default_Handler

	.weak	RTC_Alarm_IRQHandler
	.thumb_set RTC_Alarm_IRQHandler, Default_Handler

	.weak	USBWakeUp_IRQHandler
	.thumb_set USBWakeUp_IRQHandler, Default_Handler

	.weak	TIM8_BRK_IRQHandler
	.thumb_set TIM8_BRK_IRQHandler, Default_Handler

	.weak	TIM8_UP_IRQHandler
	.thumb_set TIM8_UP_IRQHandler, Default_Handler

	.weak	TIM8_TRG_COM_IRQHandler
	.thumb_set TIM8_TRG_COM_IRQHandler, Default_Handler

	.weak	TIM8_CC_IRQHandler
	.thumb_set TIM8_CC_IRQHandler, Default_Handler

	.weak	ADC3_IRQHandler
	.thumb_set ADC3_IRQHandler, Default_Handler

	.weak	SPI3_IRQHandler
	.thumb_set SPI3_IRQHandler, Default_Handler

	.weak	UART4_IRQHandler
	.thumb_set UART4_IRQHandler, Default_Handler

	.weak	UART5_IRQHandler
	.thumb_set UART5_IRQHandler, Default_Handler

	.weak	TIM6_DAC_IRQHandler
	.thumb_set TIM6_DAC_IRQHandler, Default_Handler

	.weak	TIM7_IRQHandler
	.thumb_set TIM7_IRQHandler, Default_Handler

	.weak	DMA2_Channel1_IRQHandler
	.thumb_set DMA2_Channel1_IRQHandler, Default_Handler

	.weak	DMA2_Channel2_IRQHandler
	.thumb_set DMA2_Channel2_IRQHandler, Default_Handler

	.weak	DMA2_Channel3_IRQHandler
	.thumb_set DMA2_Channel3_IRQHandler, Default_Handler

	.weak	DMA2_Channel4_IRQHandler
	.thumb_set DMA2_Channel4_IRQHandler, Default_Handler

	.weak	DMA2_Channel5_IRQHandler
	.thumb_set DMA2_Channel5_IRQHandler, Default_Handler

	.weak	ADC4_IRQHandler
	.thumb_set ADC4_IRQHandler, Default_Handler	
	
	.weak	COMP1_2_3_IRQHandler
	.thumb_set COMP1_2_3_IRQHandler, Default_Handler
	
	.weak	COMP4_5_6_IRQHandler
	.thumb_set COMP4_5_6_IRQHandler, Default_Handler
	
	.weak	COMP7_IRQHandler
	.thumb_set COMP7_IRQHandler, Default_Handler	
	
	.weak	USB_HP_IRQHandler
	.thumb_set USB_HP_IRQHandler, Default_Handler
	
	.weak	USB_LP_IRQHandler
	.thumb_set USB_LP_IRQHandler, Default_Handler
	
	.weak	USBWakeUp_RMP_IRQHandler
	.thumb_set USBWakeUp_RMP_IRQHandler, Default_Handler
	
	.weak	FPU_IRQHandler
	.thumb_set FPU_IRQHandler, Default_Handler
	
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
	