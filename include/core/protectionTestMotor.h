/*======================================================================
��� �����:          protectionTestMotor.h
�����:              Denis
��������:
������������ ���� ������ ����� ��������� � ����������� �������� �������� � �������

========================================================================*/

#ifndef TEST_MOTOR_
#define TEST_MOTOR_

#include "config.h"

#ifdef __cplusplus
extern "C" {
#endif

// ���� ����������
#define TM_VOLTAGE				BIT0	// ������ ����������
#define TM_COMPLETED			BIT1	// ���� ��������

#define TM_VOLTAGE_TIME			(0.02*PRD_18KHZ)// ����� ��������� ����
#define TM_PAUSE_TIME			(0.2*PRD_18KHZ)	// ����� �����
#define TM_PAUSE_TIME_SCN		(0.1*PRD_18KHZ)	// ����� ����� �� �� ��������

typedef union {
	Uns all;
	struct {
		Uns voltage:1;			// 0	������ ����������
		Uns completed:1;		// 1	��������
		Uns voltSup:1;			// 2	���������� ������
    	Uns rsvd:13;			// 3-15	������
	} bit;
} TTestSCStatus;

// ��������� ������� ������ ����� ���������
typedef struct {
	Uns				enable;				// ���������\���������
	Uns				timer;              // ������
	Uns				timeVoltage;  		// ����� ����������
	Uns				timePause;  		// ����� �����
	Byte 			phaseNumber; 		// ����� ������� ����
	TTestSCStatus	status;				// ������  
	LgInt			voltageLevel;		// ������� ����������
	LgInt			voltage;			// ������� ����������
	Uns				iMax1;				// ������������ ��� � ���� U
	Uns				iMax2;				// ������������ ��� � ���� V
	Uns				iMax3;				// ������������ ��� � ���� W
	Uns    			maxCurrLevel[3];	// ������������ ��� ��� ������
	Bool			isComplete;			// ����, ������������, ��������� �� ��� ��� ���� ��� ���
	Bool			tmRevers;			// ������ ��������� ����� ����������������. ������ ����������� ������������� ����� ���������� ����� ������ ����������������
} TTestMotor;  

extern TTestMotor testMotor;
extern TTestMotor testSCN;

void ProtectionTestMotorInit(TTestMotor *, Uns, Uns);
void ProtectionTestMotorUpdate(TTestMotor *);
void TestMotor_Result(TTestMotor *);
void TestSCN_Result(TTestMotor *);

#ifdef __cplusplus
}
#endif // extern "C"
#endif



