#ifndef DS3234_
#define DS3234_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// �������� ��������� ����������
#define DS3234_SEC           0x00 // �������
#define DS3234_MIN           0x01 // ������
#define DS3234_HOUR          0x02 // ���
#define DS3234_DAY           0x03 // ���� ������
#define DS3234_DATE          0x04 // ���� ������
#define DS3234_MONTH         0x05 // �����
#define DS3234_YEAR          0x06 // ���

#define DS3234_CONTROL_REG   		0x0E // ������� ����������
#define DS3234_CONTROL_STATUS_REG	0x0F // ��������� �������
#define DS3234_TEMP_MSB				0x11
#define DS3234_TEMP_LSB				0x12
#define DS3234_DISTEMPCONV			0x13

// ��������� ������ ��������� ���� (AM/PM)
#define DS3234_AM_PM         0x20 // ������� ����� (0 - AM, 1 - PM)
#define DS3234_AM_PM_MODE    0x40 // ������� ������

// ����� ������/���� ����������
#define DS3234_WRITE_MASK    0x80 // ������ ������
#define DS3234_ALARM_MASK    0x80 // ���������� �� �������

// �������� ����� �������� ����������
/*
#define DS1305_AIE0          0x01 // ������� ���������� �� ������� 0
#define DS1305_AIE1          0x02 // ������� ���������� �� ������� 1
#define DS1305_INTCN         0x04 // ����� ��������� ���������� �� �������
*/
#define DS3234_EOSC          0x80 // ��������� ������� �����������
#define DS3234_BSY			 0x04
#define DS3234_BBTD			 0x01
#define DS3234_CONV			 0x20


// ��������� ���������� ��� ������ � ���
typedef struct DS3234 {
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
} DS3234;

void DS3234_Init(DS3234 *);
Byte DS3234_Read(DS3234 *, Byte Addr);
void DS3234_Write(DS3234 *, Byte Addr, Byte Data);
void DS3234_Update(DS3234 *);

void DS3234_TempConv(DS3234 *p);
void DS3234_ReadTemp(DS3234 *p);


#ifdef __cplusplus
}
#endif // extern "C"

#endif




