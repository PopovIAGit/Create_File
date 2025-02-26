/*======================================================================
Имя файла:          comm_SerialComm.h
Автор:
Версия файла:
Дата изменения:
Описание:
Модуль ModBus
======================================================================*/

#ifndef SERIAL_COMM_
#define SERIAL_COMM_

// Подключение файлов
#include "structs.h"
//#include "g_InitHardware.h"

// Выбор портов для связи с ПК и ПДУ
#define ASU_SCI_ID			SCIB
//--- MODBUS -----------------------------------------
#define RS485_DIR_ASU		GpioDataRegs.GPADAT.bit.GPIO24

extern Bool MbAsuConnect;

__inline void AsuMbSetTr(Byte Lev)  {RS485_DIR_ASU = !Lev;}

// Прототипы функций
/*void SerialCommInit(TMbHandle);
void ModBusSlaveReset(TMbHandle);
void SerialCommTimings(TMbHandle);
void InitChanelAsuModbus(TMbHandle);
void ModBusUpdate(TMbHandle);
*/
#endif


