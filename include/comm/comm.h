/*======================================================================
��� �����:          comm.h
�����:
������ �����:
���� ���������:
��������:
�������� �������� � ������� ������ ������������
========================================================================*/

#ifndef COMM_
#define COMM_

#include "btwt41.h"
#include "std.h"
#include "comm_ModbusRtu.h"
#include "comm_SerialComm.h"

#ifdef __cplusplus
extern "C" {
#endif


#define PI_ID			SPIC
#define PI_CONN_TOUT	(3.000 * PRD_2KHZ)
#define PI_BAUD			1000		// ������� ��������������� � ��
#define PI_FRAME_SIZE	12

typedef struct
{
	Byte DiscrIn220;					// ���������� ����
	Byte DiscrOut;						// ���������� �����
	Byte State;							// ��������� ������
	Bool Connect;						// ��������� �����
	Uns  ConnTimer;						// ������ �����
	Uns  ConnErr;						// ������ ����
	Byte Counter;						// ������� ������
	Byte RxFrame[PI_FRAME_SIZE];		// �����
	Byte TxFrame[PI_FRAME_SIZE];		// �����
	Byte DiscrIn24;						// ���������� ����
} TPiData;


extern Bool CsAtBusy;
extern Uns MtrTemper1;
extern Uns MtrTemper2;
extern Uns MtrTemper3;

//--------------------------------------------------------
//================== ������������ ========================
//--------------------------------------------------------

typedef struct {
	TMbPort 			mbAsu;			// ModBus - ���s
	TBt 				Bluetooth;		// Bluetooth
	TPiData 			PiData;			// ����� � ������ ��
} TComm;
//--------------------------------------------------------

extern TComm	g_Comm;

void Comm_Init(TComm *);
void Comm_Update(TComm *);
void Comm_Timings(TComm *);

void SerialCommunicationInit(void);
void PiUpdate(TPiData *p);

#endif


