#include "per.h"

/**
 * @brief Sets a bit in a NVIC 3 register group (set, reset, etc...)
 * @param irq Irq number
 * @param pnt Address of the first register in group
 */
static void setBitIrqGroup(E_IRQn_t irq, uint32_t *pnt)
{
	uint32_t reg = ((uint32_t) irq / BITS_IN_U32);
	uint32_t index = ((uint32_t) irq % BITS_IN_U32);
	pnt[reg] |= (1u << index);
}

/**
 * @brief Returns the bit state in the NVIC 3 register group
 * @param irq Irq number
 * @param pnt Address of the first register in group
 * @return Bit state
 */
static uint32_t getBitIrqGroup(E_IRQn_t irq, uint32_t *pnt)
{
	uint32_t reg = ((uint32_t) irq / BITS_IN_U32);
	uint32_t index = ((uint32_t) irq % BITS_IN_U32);

	return ((pnt[reg] & (1u << index)) != CLR);
}

/**
 * @brief Enables NVIC interrupt
 * @param irq IRQ number
 */
void nvic_enableIrq(E_IRQn_t irq)
{
	setBitIrqGroup(irq, (uint32_t *)&NVIC->ISER0.dword);
}

/**
 * Disables NVIC interrupt
 * @param irq IRQ number
 */
void nvic_disableIrq(E_IRQn_t irq)
{
	setBitIrqGroup(irq, (uint32_t *)&NVIC->ICER0.dword);
}

/**
 * @brief Sets the irq status to pending
 * @param irq IRQ number
 */
void nvic_setPendingIrq(E_IRQn_t irq)
{
	setBitIrqGroup(irq, (uint32_t *)&NVIC->ISPR0.dword);
}

/**
 * @brief Clears irq pending status
 * @param irq IRQ number
 */
void nvic_clearPendingIrq(E_IRQn_t irq)
{
	setBitIrqGroup(irq, (uint32_t *)&NVIC->ICPR0.dword);
}

/**
 * @brief Sets IRQ priority
 * @param irq IRQ number
 * @param priority Priority level (0 max - 15 min)
 */
void nvic_setPriority(E_IRQn_t irq, uint8_t priority)
{
	NVIC->IP[irq] = (uint8_t)(priority << 4u);
}

/**
 * @brief Checks for pending irq
 * @param irq IRQ number
 * @return TRUE or FALSE
 */
uint32_t nvic_getPendingIrq(E_IRQn_t irq)
{
	return getBitIrqGroup(irq, (uint32_t *)&NVIC->ISPR0.dword);
}

/**
 * @brief Checks if the interrupt is active
 * @param irq IRQ number
 * @return TRUE or FALSE
 */
uint32_t nvic_gerActiveIrq(E_IRQn_t irq)
{
	return getBitIrqGroup(irq, (uint32_t *)&NVIC->IABR0.dword);
}

/**
 * @brief Returns the current priority
 * @param irq IRQ number
 * @return Irq priority
 */
uint8_t nvic_getPriority(E_IRQn_t irq)
{
	return NVIC->IP[irq];
}

/**
 * @brief Triggers a user selected interrupt
 * @param irq IRQ number
 */
void nvic_triggerIrq(E_IRQn_t irq)
{
	NVIC->STIR.bits.INTID = (uint32_t)irq;
}

/**
 * @brief Enables global interrupts
 */
void nvic_enableGlobalIrq(void)
{
	asm("cpsie i");
}

/**
 * @brief Disables global interrupts
 */
void nvic_disableGlobalIrq(void)
{
	asm("cpsid i");
}

