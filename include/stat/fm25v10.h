#ifndef _FM25V10_H_
#define _FM25V10_H_

#include "std.h"

// ���� ���������� ��������
#define FM25V10_WEL    0x02
#define FM25V10_BP0    0x04
#define FM25V10_BP1    0x08
#define FM25V10_WPEN   0x80


typedef struct FM25V10 {
	Byte  SpiId;					// ������������� SPI ������ (SPIA, SPIB, ...)
	Uns   SpiBaud;					// ������� ���������������
	unsigned long   Addr;						// �����
	Byte  Func;						// �������
	Uns   Count;					// ���������� ���� ������
	Byte *Buffer;					// ��������� �� ����� ������
	Byte  RdData;					// ������� ��������� ����
	Byte  WrData;					// ������� ���������� ����
	Byte  State;					// ������� ��� ����������
	Bool  Error;					// ���� ������ � ������ ������
	Byte  RetryTimer;				// ������ �������� ����������
	Byte  RetryCount;				// ���������� �������� ����������
	Uns   BusyTimer;				// ������ ��������� ������
	Uns   BusyTime;					// ������������ ����� ������
	void (*CsFunc)(Byte);			// ������� chip select'�
} FM25V10;

void FM25V10_Init(FM25V10 *);							// �������������
void FM25V10_Update(FM25V10 *);							// 
Byte FM25V10_ReadStatus(FM25V10 *);						// ������ ���������� ��������
void FM25V10_WriteStatus(FM25V10 *, Byte Status);		// ������ ���������� ��������
Byte FM25V10_ReadByte(FM25V10 *, unsigned long Addr);				// ������ �����
void FM25V10_WriteByte(FM25V10 *, unsigned long Addr, Byte Data);	// ������ �����
void FM25V10_WriteEnable(FM25V10 *);					// ���������� ������
void FM25V10_WriteDisable(FM25V10 *);					// ���������� ������


#endif
