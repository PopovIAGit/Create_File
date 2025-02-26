/*======================================================================
��� �����:          Inputs.h
�����:              ������ �.�.
������ ����������:  01.01
������ �����:       01.01
�������������:      ��� ���� �����
��������:
���������� ��������� ������� ��������

========================================================================
�������:
------------------------------------------------------------------------
	10/09/09	������ 01.00

	18/09/09	������ 01.01
1.����������� ������� ����������
----------------------------------------------------------------------*/

#ifndef INPUTS_
#define INPUTS_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// ���� ����� ���������
typedef enum {
	ltDigital = 0,	// ���������� ����
	ltAnMax,			// ���������� �� ���������
	ltAnMin,			// ���������� �� ��������
	ltAbs,    		// ���������� �� �� ������
	ltZone,       	// ���������� � ������� �����
	ltMaxSign,		// ���������� �� ��������� ��������
	ltMinSign		// ���������� �� �������� ��������
} TLogType;

// ������ ��� ����������� �������� ������ � ��������� ��� ���������� ��������
#define DIG_LEVEL(Index, Level)	(Ptr)(((Index) << 1) | ((Level) & 0x1))
#define DIN_LEVEL(Bit, Level)	DIG_LEVEL(IO_BIT_NUM_INIT(Bit), Level)

// ��������� ��� ��������� ��������� �������
typedef struct LOG_INPUT {
	TLogType LogType;		// ��� ������ ���������
	Bool     Enable;		// ���������� ������	
	Uns     *Input;		// ����
	Uns     *Output;		// �����
	Uns     *Level;		// ������� ������������
	Uns     *Timeout;	// ����-��� ������������
	Uns      BitMask;	// ����� ���� ������
	Uns      Scale;		// ����������� ��������������� �������
	Uns      Timer;		// ������ ������������
	Bool     Match;		// ����� ��������� �������
	Bool     Flag;			// ��������� ��������� �������
} LOG_INPUT;

// ��������� ��� ���������������� ��������� �������
typedef struct DIFF_INPUT {
	Bool    Enable;      // ���������� ������
	LgUns  *Input;       // ����
	Uns    *Output;      // �����
	Uns    *Level;       // ������� ������������
	Uns    *Timeout;     // ����-��� ������������
	Uns     BitMask;   	// ��� ������
	Uns     Scale;			// ����������� ��������������� �������
	Uns     Timer;       // ������ ������������
	LgUns   InputPrev;   // ���������� ��������� �����
} DIFF_INPUT;

#define AV_POW_LIMIT	15	// ������� ������������ ��������

// ��������� ��� ������� �������� ����������� ������� �� ���������
typedef struct AVERAGE {
	Uns    *Input;       // ����
	Uns    *Output;      // �����
	Uns    *Gain;        // ����������� ��������
	Int    *Offset;      // ����������� ��������
	Int     Signal;      // ��������� ������
	LgUns   Sum;         // ��������
	Uns     GainRms;     // ����������� ������� �������� ��������
} AVERAGE;

typedef struct AVERAGE_DIG {
	Uns    *Input;       // ����
	Uns    *Output;      // �����
	Uns    *Gain;        // ����������� ��������
	Int    *Offset;		// ����������� ��������
	Uns     Level;			// �������� �������
	Uns     InputBit;    // ����� ���� �����
	LgUns   Sum;         // ��������
} AVERAGE_DIG;

// ��������� �������
void LogInputCalc(LOG_INPUT *);
void DiffInputCalc(DIFF_INPUT *);
/*
void AverageCalc(AVERAGE *);
void AverageIntIntegral(AVERAGE *);
void AverageUnsIntegral(AVERAGE *);
void Average2PhaseIntegral(AVERAGE *, AVERAGE *p1, AVERAGE *p2);
void AverageDigInt(AVERAGE_DIG *);
void AverageDigCalc(AVERAGE_DIG *);
*/

#ifdef __cplusplus
}
#endif // extern "C"

#endif





