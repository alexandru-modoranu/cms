#ifndef PER_USB_H
#define PER_USB_H

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t CTR_RX :1;
		uint32_t DTOG_RX :1;
		uint32_t STAT_RX :2;
		uint32_t SETUP :1;
		uint32_t EP_TYPE :2;
		uint32_t EP_KIND :1;
		uint32_t CTR_TX :1;
		uint32_t DTOG_TX :1;
		uint32_t STAT_TX :2;
		uint32_t EA :4;
	} bits;
	uint32_t dword;
} USB_EPnR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t CTRM :1;
		uint32_t PMAOVRM :1;
		uint32_t ERRM :1;
		uint32_t WKUPM :1;
		uint32_t SUSPM :1;
		uint32_t RESETM :1;
		uint32_t SOFM :1;
		uint32_t ESOFM :1;
		uint32_t reserved2 :3;
		uint32_t RESUME :1;
		uint32_t FSUSP :1;
		uint32_t LPMODE :1;
		uint32_t PDWN :1;
		uint32_t FRES :1;
	} bits;
	uint32_t dword;
} USB_CNTR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t CTR :1;
		uint32_t PMAOVR :1;
		uint32_t ERR :1;
		uint32_t WKUP :1;
		uint32_t SUSP :1;
		uint32_t RESET :1;
		uint32_t SOF :1;
		uint32_t ESOF :1;
		uint32_t reserved2 :3;
		uint32_t DIR :1;
		uint32_t EP_ID :4;
	} bits;
	uint32_t dword;
} USB_ISTR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t RXDP :1;
		uint32_t RXDM :1;
		uint32_t LCK :1;
		uint32_t LSOF :2;
		uint32_t FN :11;
	} bits;
	uint32_t dword;
} USB_FNR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :24;
		uint32_t EF :1;
		uint32_t ADD :7;
	} bits;
	uint32_t dword;
} USB_DADDR_t;

typedef union
{
	struct
	{
		uint32_t reserved1 :16;
		uint32_t BTABLE :13;
		uint32_t reserved2 :3;
	} bits;
	uint32_t dword;
} USB_BTABLE_t;

typedef union
{
	struct
	{
		uint16_t ADDRn_TX :15;
		uint16_t reserved1 :1;
	} bits;
	uint16_t word;
} USBMEM_ADDRn_TX_t;

typedef union
{
	struct
	{
		uint16_t reserved1 :6;
		uint16_t COUNTn_TX :10;
	} bits;
	uint16_t word;
} USBMEM_COUNTn_TX_t;

typedef union
{
	struct
	{
		uint16_t ADDRn_RX :15;
		uint16_t reserved1 :1;
	} bits;
	uint16_t word;
} USBMEM_ADDRn_RX_t;

typedef union
{
	struct
	{
		uint16_t BLSIZE :1;
		uint16_t NUM_BLOCK :5;
		uint16_t COUNTn_RX :10;
	} bits;
	uint16_t word;
} USBMEM_COUNTn_RX_t;

typedef struct
{
	USB_EPnR_t EP0R;
	USB_EPnR_t EP1R;
	USB_EPnR_t EP2R;
	USB_EPnR_t EP3R;
	USB_EPnR_t EP4R;
	USB_EPnR_t EP5R;
	USB_EPnR_t EP6R;
	USB_EPnR_t EP7R;
	uint32_t reserved1[8];
	USB_CNTR_t CNTR;
	USB_ISTR_t ISTR;
	USB_FNR_t FNR;
	USB_DADDR_t DADDR;
	USB_BTABLE_t BTABLE;
	uint32_t reserved2[223];
	USB_ADDRn_TX_t ADDR0_TX;
	USB_COUNTn_TX_t COUNT0_TX;
	USB_ADDRn_RX_t ADDR0_RX;
	USB_COUNTn_RX_t COUNT0_RX;
	USB_ADDRn_TX_t ADDR1_TX;
	USB_COUNTn_TX_t COUNT1_TX;
	USB_ADDRn_RX_t ADDR1_RX;
	USB_COUNTn_RX_t COUNT1_RX;
	USB_ADDRn_TX_t ADDR2_TX;
	USB_COUNTn_TX_t COUNT2_TX;
	USB_ADDRn_RX_t ADDR2_RX;
	USB_COUNTn_RX_t COUNT2_RX;
	USB_ADDRn_TX_t ADDR3_TX;
	USB_COUNTn_TX_t COUNT3_TX;
	USB_ADDRn_RX_t ADDR3_RX;
	USB_COUNTn_RX_t COUNT3_RX;
	USB_ADDRn_TX_t ADDR4_TX;
	USB_COUNTn_TX_t COUNT4_TX;
	USB_ADDRn_RX_t ADDR4_RX;
	USB_COUNTn_RX_t COUNT4_RX;
	USB_ADDRn_TX_t ADDR5_TX;
	USB_COUNTn_TX_t COUNT5_TX;
	USB_ADDRn_RX_t ADDR5_RX;
	USB_COUNTn_RX_t COUNT5_RX;
	USB_ADDRn_TX_t ADDR6_TX;
	USB_COUNTn_TX_t COUNT6_TX;
	USB_ADDRn_RX_t ADDR6_RX;
	USB_COUNTn_RX_t COUNT6_RX;
	USB_ADDRn_TX_t ADDR7_TX;
	USB_COUNTn_TX_t COUNT7_TX;
	USB_ADDRn_RX_t ADDR7_RX;
	USB_COUNTn_RX_t COUNT7_RX;
	union
	{
		uint16_t word[224];
		uint8_t byte[448];
	} MEM;	
} USB_t;

#endif
