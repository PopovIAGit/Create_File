#ifndef ENCODER_
#define ENCODER_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_DELTA_POS					500						// ������������ ���������� ��������� � % ��� ��������� (500 = 50.0%)
#define ENC_ATMEGA_SPI_DELAY_US			5						// �������� ����� ��������� �� SPI
#define ALARM_TIMEOUT					20						// 2 ��� * 10 ��

// ������ ��������
typedef union {
	Uns all;
	struct {
		Uns stop:1;			// 0  ����
		Uns move:1;			// 1  ��������
		Uns closed:1;		// 2  �������
		Uns opened:1;		// 3  �������
	    Uns direction:1;	// 4  0 - ����������, 1 - ����������
	    Uns error:1;    	// 5  ������
	    Uns calibrated:1;   // 6  0 - �� ������������, 1 - ������������
    	Uns rsvd:9;		// 7-15  ������
	} bit;
} TEncStatus;


// ��������� ��� ������ � �������� ���������
typedef struct ENCODER {
	Byte       SpiId;           // ������������� SPI-����� (0-SPIA, 1-SPIB, ...)
	Uns        SpiBaud;         // ������� ��������������� (����������� ��� ������������ ����)
	Byte       Count;           // ���������� ����/��� ������
	LgUns      RevMax;			// ����������� �������� ���������
	LgUns      Revolution;      // �������� ��������� � �������
	Uns        errorCounter;	// ������� ������
	Uns       *RevErrValue;		// �������� �������� ������/���������� ������
	Uns       *RevErrLevel;		// ������� ���� �������
	Uns        data;			// ��������� ������ �������
	LgUns      prevData;		// ����������� ���������
	Byte       RevMisc;			// �������� ������������ �������
	Uns        goodPosition;	// ��������� ������� ����������� ���������
	Bool       Error;           // ������� ����
	Byte       skipDefectFl;	// ����, ����������, ��� ��������� "��������" ������
	Byte       defectTimer;		// ������ �� ����������� ������
	void     (*CsFunc)(Byte);   // ������� ������ ����������
	TEncStatus EncStatus;	// ������ ��������
} ENCODER;

// ��������� �������
void EncoderUpdate(void);
void AtMegaAvagoEncoderCalc(ENCODER *);		// ������������ ����� �������� ������ �������� + ��������� ��������
void AtMegaAvagoEncoderUpdate(ENCODER *);	// ����� ����� �������� ������ �������� + ��������� ��������
void EncoderProtectionUpdate(ENCODER *);
void AtMegaAvagoEncoderTestMode(ENCODER *);
void ProtectionPosUpdate(void);

extern LgUns Revolution;

#ifdef __cplusplus
}
#endif // extern "C"

#endif

