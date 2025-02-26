/*======================================================================
��� �����:          Calibs.h
�����:              ������ �.�.
������ �����:       01.02
���� ���������:		24/07/12
�������������:      ��������� � ����������� IQmath (��� 28xx)
��������:
���������� ������ � ������������
======================================================================*/

#ifndef CALIBS_
#define CALIBS_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// ������� ����������
#define	CLB_CLOSE   0x01  // ������ �������/��������� � ���� �������
#define	CLB_OPEN    0x02  // ������ �������/��������� � ���� �������
#define	CLB_FLAG    0x03  // ���������� ���������

// ��������� ���������� ������������
typedef struct {
	Uns TaskClose;          // �������/����� �������
	Uns TaskOpen;           // �������/����� �������
	Uns RevOpen;            // ������� ���������� �������� �� ��������
	Uns RevClose;           // ������� ���������� �������� �� ��������
	Uns RevAuto;            // �������������� ����������
} ClbCommand;

// ��������� ��������� ����������
typedef struct {
	Uns    Status;          // ������ ����������
	Uns    Reserved;        // ������
	LgUns  ClosePos;        // ��������� �������
	LgUns  OpenPos;         // ��������� �������
} ClbIndication;

// ��������� ��� ������ � ������������
typedef struct CALIBS {
	Bool   ResetFlag;       // ���� ������
	Bool   CancelFlag;      // ���� ������ �������
	Uns    GearRatio;       // ������������ ����� ��������� * 100
	Uns    Zone;            // ���� ����������
	LgUns  RevMax;          // ������������ ���������� �������� - 1
	LgInt  LinePos;         // ������� �������� ���������
	LgUns  FullStep;        // ������ ���
	LgInt  BasePos;         // ������� ���������
	Uns    CycleData;       // �������� ��� ������� ������
	Uns    MuffTime;        // ������� ���������� �����
	Uns    MuffTimer;       // ������ ����������(�������� ������������) �����
	Uns    AutoCmd;         // ������� ��� �������������� ����������
	Uns    RevAuto;         // ���������� �������� ��� �������������� ����������
	Uns    AutoStep;        // ��� �������������� ����������
	Uns    Reserved;        // ������
	LgInt  GearInv;         // ����������� �������� ������������� ����� ���������
	LgInt  FstepInv;        // ����������� �������� ������� ����
	Uns    PosSensPow;    	// ��� ������� ���������
	Uns   *PositionAcc;     // ��������� �� �������� �������� ���������
	Uns   *RodType;         // ��������� �� ��� �����
	LgUns *AbsPosition;     // ��������� �� ������� ���������
	Int   *PositionPr;      // ��������� �� ������� ��������� � %
	Uns   *FullWay;         // ��������� �� ������ ��� ��������� �����
	Int   *CurWay;          // ��������� �� ������� ��� ��������� �����
	Uns   *CycleCnt;        // ��������� �� ���������� ����������� ������
	Uns   *MuffFlag;        // ������ �����
	ClbCommand    *Command;    // ��������� �� ��������� ���������� ������������
	ClbIndication *Indication; // ��������� �� ��������� ���������
} CALIBS;

void  Calibration(CALIBS *);
void  DefineCalibParams(CALIBS *);
void SpeedCalc(void);
LgUns CalcClbGearInv(CALIBS *);
LgUns CalcClbAbsRev(CALIBS *, Uns GearRev);
Int   CalcClbGearRev(CALIBS *, LgInt AbsRev);
LgUns CalcClbPercentToAbs(CALIBS *, Uns Percent);
void  CalcClbCycle(CALIBS *);

#ifdef __cplusplus
}
#endif // extern "C"

#endif



