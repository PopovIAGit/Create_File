#ifndef DAC7513_
#define DAC7513_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// ����� ������
#define DAC7513_OFF     0     // ����� �������� (�� ������ 0 ��)
#define DAC7513_DIRECT  1     // ������ ������� ��������
#define DAC7513_CURR    2     // ����� �� ������� ����
#define DAC7513_PR_0_25 3     // ����� �� ������� �������� � ��������� ���� 0-25 ��
#define DAC7513_PR_4_20 4     // ����� �� ������� �������� � ��������� ���� 4-20 ��

// ������ ����������������
#define	DAC7513_NORMAL  0x00  // ���������� �����
#define	DAC7513_MODE1   0x01  // ����� Power Down (�������� � ������ ����� 1���)
#define	DAC7513_MODE2   0x02  // ����� Power Down (�������� � ������ ����� 100���)
#define	DAC7513_MODE3   0x03  // ����� Power Down (����� � Z-���������)

// ��������� ���������� ��� ������ � ���
typedef struct DAC7513 {
	Byte  SpiId;        		// ������������� SPI-����� (0-SPIA, 1-SPIB, ...)
	Uns   SpiBaud;      		// ������� ��������������� (����������� ��� ������������ ����)
	Byte  Mode;         		// ����� ������
  	Byte  PowerMode;    		// ����� ����������������
	Int  *Value;        		// ������� �������� ��������
	Bool *BusyCsFlag;			// ���� �������� chip-select'�, ����� ��������� � ATMega
  	Uns  *Gain;         		// ����������� �������� (Q12)
  	Int  *Offset;       		// ����������� ��������
  	Uns   Data;         		// �������� ������������ � ����������
	void (*CsFunc)(Byte);		// ������� ������ ����������
} DAC7513;

void DAC7513_Update(DAC7513 *);

#ifdef __cplusplus
}
#endif // extern "C"

#endif



