/*======================================================================
��� �����:          comm_SerialComm.h
�����:
������ �����:
���� ���������:
��������:
������ ModBus
======================================================================*/

#ifndef SERIAL_COMM_
#define SERIAL_COMM_

// ����������� ������
#include "structs.h"
//#include "g_InitHardware.h"

// ����� ������ ��� ����� � �� � ���
#define ASU_SCI_ID			SCIB
//--- MODBUS -----------------------------------------
#define RS485_DIR_ASU		GpioDataRegs.GPADAT.bit.GPIO24

extern Bool MbAsuConnect;

__inline void AsuMbSetTr(Byte Lev)  {RS485_DIR_ASU = !Lev;}

// ��������� �������
/*void SerialCommInit(TMbHandle);
void ModBusSlaveReset(TMbHandle);
void SerialCommTimings(TMbHandle);
void InitChanelAsuModbus(TMbHandle);
void ModBusUpdate(TMbHandle);
*/
#endif


