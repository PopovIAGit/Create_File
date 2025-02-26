/*======================================================================
��� �����:          ds1305.h
�����:              ������ �.�.
������ �����:       01.03
���� ���������:		19/02/10
�������������:      ��������� � ����������� CSL
��������:
������� ����� ��������� ������� (���������� DS1305)
======================================================================*/

#ifndef DS1305_
#define DS1305_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// �������� ��������� ����������
#define DS1305_SEC           0x00 // �������
#define DS1305_MIN           0x01 // ������
#define DS1305_HOUR          0x02 // ���
#define DS1305_DAY           0x03 // ���� ������
#define DS1305_DATE          0x04 // ���� ������
#define DS1305_MONTH         0x05 // �����
#define DS1305_YEAR          0x06 // ���
#define DS1305_SEC_ALARM0    0x07 // ������� ��� ������� 0
#define DS1305_MIN_ALARM0    0x08 // ������ ��� ������� 0
#define DS1305_HOUR_ALARM0   0x09 // ��� ��� ������� 0
#define DS1305_DAY_ALARM0    0x0A // ���� ������ ��� ������� 0
#define DS1305_SEC_ALARM1    0x0B // ������� ��� ������� 1
#define DS1305_MIN_ALARM1    0x0C // ������ ��� ������� 1
#define DS1305_HOUR_ALARM1   0x0D // ��� ��� ������� 1
#define DS1305_DAY_ALARM1    0x0E // ���� ������ ��� ������� 1
#define DS1305_CONTROL_REG   0x0F // ������� ����������
#define DS1305_STATUS_REG    0x10 // ��������� �������
#define DS1305_TRICK_REG     0x11 // ������� ��������� ����������
#define DS1305_RAM_BEGIN     0x20 // ��������� ����� ����������� ���
#define DS1305_RAM_END       0x7F // �������� ����� ����������� ���

// ��������� ������ ��������� ���� (AM/PM)
#define DS1305_AM_PM         0x20 // ������� ����� (0 - AM, 1 - PM)
#define DS1305_AM_PM_MODE    0x40 // ������� ������

// ����� ������/���� ����������
#define DS1305_WRITE_MASK    0x80 // ������ ������
#define DS1305_ALARM_MASK    0x80 // ���������� �� �������

// �������� ����� �������� ����������
#define DS1305_AIE0          0x01 // ������� ���������� �� ������� 0
#define DS1305_AIE1          0x02 // ������� ���������� �� ������� 1
#define DS1305_INTCN         0x04 // ����� ��������� ���������� �� �������
#define DS1305_WP            0x40 // ��������� ������ �� ������
#define DS1305_EOSC          0x80 // ��������� ������� �����������

// �������� ����� �������� �������
#define DS1305_IRQF0         0x01 // ���� ���������� �� ������� 0
#define DS1305_IRQF1         0x02 // ���� ���������� �� ������� 1

// �������� ����� �������� ��������� ����������
#define DS1305_TC_DISABLE    0x00 // ���������� ����������
#define DS1305_TC_1D_2K      0xA5 // 1 ����,  2���
#define DS1305_TC_1D_4K      0xA6 // 1 ����,  4���
#define DS1305_TC_1D_8K      0xA7 // 1 ����,  8���
#define DS1305_TC_2D_2K      0xA9 // 2 �����, 2���
#define DS1305_TC_2D_4K      0xAA // 2 �����, 4���
#define DS1305_TC_2D_8K      0xAB // 2 �����, 8���

// ��������� ���������� ��� ������ � ���
typedef struct DS1305 {
	Byte  SpiId;      		// ������������� SPI-����� (0-SPIA, 1-SPIB, ...)
	Uns   SpiBaud;    		// ������� ��������������� (����������� ��� ������������ ����)
	Byte *DataBuf;    		// ��������� �� ����� ������ ������� � ����
	Byte  State;				// ��������� ������ �����
	Byte  Addr;					// ������� �����
	Byte  Data;					// ������� ������
	Bool  Flag;       		// ���� ������ ������� � ����
	Bool  Busy;					// ���� �������� ������
	Bool  Error;      		// ������ ������� �����������
	void (*CsFunc)(Byte ); 	// ������� ������ ����������
} DS1305;

void DS1305_Init(DS1305 *);
Byte DS1305_Read(DS1305 *, Byte Addr);
void DS1305_Write(DS1305 *, Byte Addr, Byte Data);
void DS1305_Update(DS1305 *);

#ifdef __cplusplus
}
#endif // extern "C"

#endif




