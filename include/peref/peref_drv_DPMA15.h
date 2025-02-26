
#ifndef __ENCODER_DPMA15__
#define __ENCODER_DPMA15__

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ENC_ATMEGA_SPI_DELAY_US			5						// Задержка между посылками по SPI

// Структура для работы с датчиком положения
typedef struct EN_DPMA15 {
	Byte   	   SpiId;           // Идентификатор SPI-порта (0-SPIA, 1-SPIB, ...)
	Uns        SpiBaud;         // Частота синхроимпульсов (расчитанная для конктретного чипа)
	Uns        RevMax;			// Ограничение значения положения
	Uns        revolution;      // Значение положения с датчика в формате 16 разрядов
	Uns        EncoderData;		// Данные, получаемые от энкодера
	Uns       *RevErrValue;		// Значение процента ошибки/Количество ошибок
	Uns       *RevErrLevel;		// Уровень сбоя датчика
	Byte       RevMisc;			// Контрольная сумма/Значение максимальной разницы
	Uns        RevErrCount;		// Счетчик ошибок
	Bool       Error;           // Признак сбоя
	void (*CsFunc)(Byte);   // Функция выбора микросхемы
} EN_DPMA15;

// Прототипы функций
void encoder_DPMA15_GetData(EN_DPMA15 *);

#ifdef __cplusplus
}
#endif // extern "C"

#endif


