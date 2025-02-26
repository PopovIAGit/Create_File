/*======================================================================
Имя файла:          comm.h
Автор:
Версия файла:
Дата изменения:
Описание:
Описание структур и функций модуля коммуникации
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
#define PI_BAUD			1000		// Частота синхроимпульсов в Гц
#define PI_FRAME_SIZE	12

typedef struct
{
	Byte DiscrIn220;					// Дискретный вход
	Byte DiscrOut;						// Дискретный выход
	Byte State;							// Состояние обмена
	Bool Connect;						// Состояние связи
	Uns  ConnTimer;						// Таймер связи
	Uns  ConnErr;						// Ошибка свзи
	Byte Counter;						// Счетчик данных
	Byte RxFrame[PI_FRAME_SIZE];		// Буфер
	Byte TxFrame[PI_FRAME_SIZE];		// Буфер
	Byte DiscrIn24;						// Дискретный вход
} TPiData;


extern Bool CsAtBusy;
extern Uns MtrTemper1;
extern Uns MtrTemper2;
extern Uns MtrTemper3;

//--------------------------------------------------------
//================== КОММУНИКАЦИИ ========================
//--------------------------------------------------------

typedef struct {
	TMbPort 			mbAsu;			// ModBus - АСУs
	TBt 				Bluetooth;		// Bluetooth
	TPiData 			PiData;			// Связь с платой ПИ
} TComm;
//--------------------------------------------------------

extern TComm	g_Comm;

void Comm_Init(TComm *);
void Comm_Update(TComm *);
void Comm_Timings(TComm *);

void SerialCommunicationInit(void);
void PiUpdate(TPiData *p);

#endif


