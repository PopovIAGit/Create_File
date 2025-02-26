#ifndef _FM25V10_H_
#define _FM25V10_H_

#include "std.h"

// Биты статусного регистра
#define FM25V10_WEL    0x02
#define FM25V10_BP0    0x04
#define FM25V10_BP1    0x08
#define FM25V10_WPEN   0x80


typedef struct FM25V10 {
	Byte  SpiId;					// Идентификатор SPI канала (SPIA, SPIB, ...)
	Uns   SpiBaud;					// Частота синхроимпульсов
	unsigned long   Addr;						// Адрес
	Byte  Func;						// Функция
	Uns   Count;					// Количество байт данных
	Byte *Buffer;					// Указатель на буфер данных
	Byte  RdData;					// Текущий считанный байт
	Byte  WrData;					// Текущий записанный байт
	Byte  State;					// Текущий шаг выполнения
	Bool  Error;					// Флаг ошибки в работе памяти
	Byte  RetryTimer;				// Таймер повторов перезаписи
	Byte  RetryCount;				// Количество повторов перезаписи
	Uns   BusyTimer;				// Таймер окончания записи
	Uns   BusyTime;					// Максимальное время записи
	void (*CsFunc)(Byte);			// Функция chip select'а
} FM25V10;

void FM25V10_Init(FM25V10 *);							// Инициализация
void FM25V10_Update(FM25V10 *);							// 
Byte FM25V10_ReadStatus(FM25V10 *);						// Чтение статусного регистра
void FM25V10_WriteStatus(FM25V10 *, Byte Status);		// Запись статусного регистра
Byte FM25V10_ReadByte(FM25V10 *, unsigned long Addr);				// Чтение байта
void FM25V10_WriteByte(FM25V10 *, unsigned long Addr, Byte Data);	// Запись байта
void FM25V10_WriteEnable(FM25V10 *);					// Разрешение записи
void FM25V10_WriteDisable(FM25V10 *);					// Запрещение записи


#endif
