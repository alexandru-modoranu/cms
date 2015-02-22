/*************************************************************************************
  * @file      TBD
  * @author    TBD
  * @version   TBD
  * @date      TBD
  * @brief     TBD
  * @attention TBD copyright
  */

/*************************************************************************************
 * @brief memory areas for the stm32f303CCT6
 */  
MEMORY
{
	FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 240K
	DFLASH (r) : ORIGIN = 0x0803C000, LENGTH = 16K
	SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 40K
	CCRAM (rwx) : ORIGIN = 0x10000000, LENGTH = 8K
}

/*************************************************************************************
 * @brief memory sections for the stm32f303CCT6
 */  
SECTIONS
{	
	/** This section contains the reduced vectors located in flash */
	.startup :
	{
		. = ALIGN(4);
		_sstartup = .;
		*(.startup*)
		*(.startup)
		. = ALIGN(4);
		_estartup = .;
	} > FLASH
	
	/** This section contains general purpose FLASH code */
	.text :
	{
		. = ALIGN(4);
		_stext = .;
		*(.text*)
		*(.text)
		. = ALIGN(4);
		_etext = .;	
	} > FLASH
	
	/** This section contains read only variables located in flash */
	.rodata :
	{
		. = ALIGN(4);
		_srodata = .;
		*(.rodata*)		
		*(.rodata)
		. = ALIGN(4);
		_erodata = .;		
	} > FLASH
	
	/** This section contains initialized data in SRAM */
	.data :
	{
		. = ALIGN(4);
		_sdata = .;
		*(.data*)
		*(.data)
		. = ALIGN(4);
		_edata = .;	
	} > SRAM AT > FLASH
	
	/** This section contains zeroed data in SRAM */
	.bss :
	{
		. = ALIGN(4);
		_sbss = .;
		*(.bss*)
		*(.bss)
		. = ALIGN(4);
		_ebss = .;
	} > SRAM
	
	/** This section contains code for the fast routines also in CCRAM */
	.ccram :
	{
		. = ALIGN(4);
		_sccram = .;
		*(.ccram*)
		*(.ccram)
		. = ALIGN(4);
		_eccram = .;
	} > CCRAM AT > FLASH
	
	.fdata :
	{
		. = ALIGN(4);
		_sfdata = .;
		*(.fdata*)
		*(.fdata)
		. = ALIGN(4);
		_efdata = .;
	} > DFLASH
}

/*************************************************************************************
 * @brief Symbols used in initalization
 */  
_siccram = LOADADDR(.ccram);
_lccram = (_eccram - _sccram);

_sibss = LOADADDR(.bss);
_lbss = (_ebss - _sbss);

_sidata = LOADADDR(.data);
_ldata = (_edata - _sdata);

_estack = ORIGIN(SRAM) + LENGTH(SRAM);
ENTRY(Reset_Handler)