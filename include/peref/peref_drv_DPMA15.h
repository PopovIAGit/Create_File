
#ifndef __ENCODER_DPMA15__
#define __ENCODER_DPMA15__

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ENC_ATMEGA_SPI_DELAY_US			5						// �������� ����� ��������� �� SPI

// ��������� ��� ������ � �������� ���������
typedef struct EN_DPMA15 {
	Byte   	   SpiId;           // ������������� SPI-����� (0-SPIA, 1-SPIB, ...)
	Uns        SpiBaud;         // ������� ��������������� (����������� ��� ������������ ����)
	Uns        RevMax;			// ����������� �������� ���������
	Uns        revolution;      // �������� ��������� � ������� � ������� 16 ��������
	Uns        EncoderData;		// ������, ���������� �� ��������
	Uns       *RevErrValue;		// �������� �������� ������/���������� ������
	Uns       *RevErrLevel;		// ������� ���� �������
	Byte       RevMisc;			// ����������� �����/�������� ������������ �������
	Uns        RevErrCount;		// ������� ������
	Bool       Error;           // ������� ����
	void (*CsFunc)(Byte);   // ������� ������ ����������
} EN_DPMA15;

// ��������� �������
void encoder_DPMA15_GetData(EN_DPMA15 *);

#ifdef __cplusplus
}
#endif // extern "C"

#endif


