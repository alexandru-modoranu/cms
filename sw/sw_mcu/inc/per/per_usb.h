#ifndef PER_USB_H
#define PER_USB_H

typedef union
{
	struct
	{
		_I32_ reserved1 :16;
		_IO32_ CTR_RX :1;
		_IO32_ DTOG_RX :1;
		_IO32_ STAT_RX :2;
		_IO32_ SETUP :1;
		_IO32_ EP_TYPE :2;
		_IO32_ EP_KIND :1;
		_IO32_ CTR_TX :1;
		_IO32_ DTOG_TX :1;
		_IO32_ STAT_TX :2;
		_IO32_ EA :4;
	} bits;
	_IO32_ dword;
} USB_EPnR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :16;
		_IO32_ CTRM :1;
		_IO32_ PMAOVRM :1;
		_IO32_ ERRM :1;
		_IO32_ WKUPM :1;
		_IO32_ SUSPM :1;
		_IO32_ RESETM :1;
		_IO32_ SOFM :1;
		_IO32_ ESOFM :1;
		_I32_ reserved2 :3;
		_IO32_ RESUME :1;
		_IO32_ FSUSP :1;
		_IO32_ LPMODE :1;
		_IO32_ PDWN :1;
		_IO32_ FRES :1;
	} bits;
	_IO32_ dword;
} USB_CNTR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :16;
		_I32_ CTR :1;
		_IO32_ PMAOVR :1;
		_IO32_ ERR :1;
		_IO32_ WKUP :1;
		_IO32_ SUSP :1;
		_IO32_ RESET :1;
		_IO32_ SOF :1;
		_IO32_ ESOF :1;
		_I32_ reserved2 :3;
		_I32_ DIR :1;
		_I32_ EP_ID :4;
	} bits;
	_IO32_ dword;
} USB_ISTR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :16;
		_I32_ RXDP :1;
		_I32_ RXDM :1;
		_I32_ LCK :1;
		_I32_ LSOF :2;
		_I32_ FN :11;
	} bits;
	_IO32_ dword;
} USB_FNR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :24;
		_IO32_ EF :1;
		_IO32_ ADD :7;
	} bits;
	_IO32_ dword;
} USB_DADDR_t;

typedef union
{
	struct
	{
		_I32_ reserved1 :16;
		_IO32_ BTABLE :13;
		_I32_ reserved2 :3;
	} bits;
	_IO32_ dword;
} USB_BTABLE_t;

typedef union
{
	struct
	{
		_IO16_ ADDRn_TX :15;
		_I16_ reserved1 :1;
	} bits;
	_IO16_ word;
} USB_ADDRn_TX_t;

typedef union
{
	struct
	{
		_I16_ reserved1 :6;
		_IO16_ COUNTn_TX :10;
	} bits;
	_IO16_ word;
} USB_COUNTn_TX_t;

typedef union
{
	struct
	{
		_IO16_ ADDRn_RX :15;
		_I16_ reserved1 :1;
	} bits;
	_IO16_ word;
} USB_ADDRn_RX_t;

typedef union
{
	struct
	{
		_IO16_ BLSIZE :1;
		_IO16_ NUM_BLOCK :5;
		_IO16_ COUNTn_RX :10;
	} bits;
	_IO16_ word;
} USB_COUNTn_RX_t;

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
	_I32_ reserved1[8];
	USB_CNTR_t CNTR;
	USB_ISTR_t ISTR;
	USB_FNR_t FNR;
	USB_DADDR_t DADDR;
	USB_BTABLE_t BTABLE;
	_I32_ reserved2[235];
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
		_IO16_ word[224];
		_IO8_ byte[448];
	} MEM;	
} USB_t;

#endif
