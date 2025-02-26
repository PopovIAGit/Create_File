/*======================================================================
��� �����:          motor_control.h
�����:              ������ �.�.
������ �����:       01.06
���� ���������:		23/06/10
��������:
������ ���������� ����������
======================================================================*/

#ifndef MOTOR_CONTROL_
#define MOTOR_CONTROL_

// ����������� ���������� ������
#include "Inputs.h"				// ��������� ������� ��������
#include "ileg.h"				// ������� ��������� �������� ���������� � ����
#include "sifu_calc.h"			// ������� ����
#include "ApFilter1.h"			// �������������� ������ ������� �������
#include "ApFilter3.h"			// �������������� ������ �������� �������

// ��������� ���������� � ���������
#define MIN_FREQ_RPM	250	// ����������� �������� � ��/��� �������� ����� ��������
#define POWER_LOST		100	// ����������� ����������
#define SP_POS_LIMIT	400	// ����������� �� ��������� ��������� ��� ������� ��������
#define TORQ_MIN_PR		0	// ����������� �������� � ���������
#define TORQ_MAX_PR		110	// ������������ �������� � ���������
#define TQ_VOLT_MIN		120	// ����������� ���������� ��� ������� �������
#define TQ_VOLT_MAX		260	// ������������ ���������� ��� ������� �������
#define LENGTH_TRQ		60	// ������ ������ ������������� ������� �������

#define OPEN_MASK  0x2
#define CLOSE_MASK 0x8
#define STOP_MASK  0x20 
#define NOMOVE_MASK 0xA

// ��������� ��� ������� ��������
#define SPD_GAIN		_IQ17div(RevCount * DeltaT, _IQ24(60.0))
#define SPD_DELTA_MIN	10 // _IQ17mpy(MinFreq, Gain)
#define SPD_DELTA_MAX	10000 // _IQ17mpy(MaxFreq, Gain)

// �������� ������������� ��� ��������
#define PH_EL_DEFAULT { 0, 0, 5, 0, &UR, &US, &UT }

#define DMC_DEFAULT { wmStop, 0, POS_UNDEF, 0, 0 }

#define SIFU_DEFAULT { \
	&UR.CurAngle, \
	&US.CurAngle, \
	&UT.CurAngle, \
	&US.Polarity,  \
	SIFU_NONE, SIFU_CLOSE_ANG, 0, SIFU_MAX_ANG, SIFU_MAX_ANG, 0, 0 \
}

// �������
//#define ADC_CONV(Value, Gain, Offset) 	(((LgInt)(Value - Offset) * Gain) >> 13)
#define ADC_CONV(value, gain, offset)		(((LgInt)value - (LgInt)offset) * gain) 
// �������� ������������� ��� ��������
#define URMSF_DEFAULT 	  { 0,0,0,_IQ(1.0/PRD_200HZ),_IQ(0.05),0,0 }		// tf 0.02
#define RMS_FLTR_DEFAULT  { 0, 0, 0, 0, 0, 0, _IQ(1.0/PRD_50HZ), _IQ(0.05), 0, 0, 0}
#define TORQ_FLTR_DEFAULT { 0, 0, 0, 0, 0, 0, _IQ(DMC_TORQF_TS), _IQ(0.02), 0, 0, 0}
#define TEMP_FLTR_DEFAULT { 0, 0, 0, 0, 0, 0, _IQ(1.0/PRD_10HZ), _IQ(0.05), 0, 0, 0}
#define IMID_FLTR_DEFAULT { 0, 0, 0, 0, 0, 0, _IQ(DMC_TORQF_TS), _IQ(0.02), 0, 0, 0} 

typedef struct {
	LgInt	current;			// ����:   ���
	LgInt	loadAngle;			// ����:   ���� ��������
	LgInt	targetTorque;		// ����:   �������� ������
	LgInt   torque;				// �����:	������
	LgInt   sifuAngle;			// �����:   ���� ����
	LgInt   K1;					// ��������: �����������
	LgInt   K2;					// ��������: �����������
	LgInt   K3;					// ��������: �����������
	LgInt   K4;					// ��������: �����������
	LgInt   K5;					// ��������: �����������
	LgInt   K6;					// ��������: �����������
	LgInt   switchCurrent;		// ��������: ��� ������������
} TTorque;

// ���������� ���������� ������
extern APFILTER3  URfltr;
extern APFILTER3  USfltr;
extern APFILTER3  UTfltr;
extern APFILTER3  IUfltr;
extern APFILTER3  IVfltr;
extern APFILTER3  IWfltr;
extern APFILTER3  ISOfltr;
extern ILEG_TRN   UR;
extern ILEG_TRN   US;
extern ILEG_TRN   UT;
extern ILEG_TRN   IU;
extern ILEG_TRN   IV;
extern ILEG_TRN   IW;
extern PH_ORDER   PhEl;
extern SIFU       Sifu;
extern TDmControl Dmc;
extern TTorqObs   Torq;
extern TTorque    torque2;
extern Int TransCurrDef[5];				//					��� TransCur �������

extern Uns  Ipr[3];
extern Uns  TorqMaxNm;
extern Bool lowPowerReset;
extern Uns  TqUmid;
extern Uns  TqImidPr;
extern Uns  TqAnUI;
extern Uns BreakFlag;
extern Uns Drv_Iso_Result;
extern Uns  AbsSpeed;

void MotorControlInit(void);
void TorqueObsInit(void);
void MotorControlUpdate(void);
void Peref_50HzCalc(void);
void DefineCtrlParams(void);
void StopPowerControl(Bool alarmFlag);
void StartPowerControl(TValveCmd ControlWord);
void ProgonModeUpdate (void);
void ControlMode(void);
void CalibStop(void);
void TorqueCalc(void);
void TorqueInit(TTorque *);
void TorqueCalc2(TTorque *);
void PrecSpeedCalc(void);
void LowPowerControl(void);
void CubInit(TCubStr *, TCubConfig *Cfg);
void CubRefresh(TCubStr *, TCubArray *Array);
void CubCalc(TCubStr *);
void TestMotorIsoControl(void); 
void PowerCheck(void);
void TqHandControl(void);
void MonitorUpdate1(void);

#endif

