#ifndef ENCODER_
#define ENCODER_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_DELTA_POS					500						// Максимальное отклонение положения в % при включении (500 = 50.0%)
#define ENC_ATMEGA_SPI_DELAY_US			5						// Задержка между посылками по SPI
#define ALARM_TIMEOUT					20						// 2 сек * 10 Гц

// Статус энкодера
typedef union {
	Uns all;
	struct {
		Uns stop:1;			// 0  Стоп
		Uns move:1;			// 1  Движение
		Uns closed:1;		// 2  Закрыто
		Uns opened:1;		// 3  Открыто
	    Uns direction:1;	// 4  0 - увеличение, 1 - уменьшение
	    Uns error:1;    	// 5  Авария
	    Uns calibrated:1;   // 6  0 - не откалиброван, 1 - откалиброван
    	Uns rsvd:9;		// 7-15  Резерв
	} bit;
} TEncStatus;


// Структура для работы с датчиком положения
typedef struct ENCODER {
	Byte       SpiId;           // Идентификатор SPI-порта (0-SPIA, 1-SPIB, ...)
	Uns        SpiBaud;         // Частота синхроимпульсов (расчитанная для конктретного чипа)
	Byte       Count;           // Количество байт/бит данных
	LgUns      RevMax;			// Ограничение значения положения
	LgUns      Revolution;      // Значение положения с датчика
	Uns        errorCounter;	// Счетчик ошибок
	Uns       *RevErrValue;		// Значение процента ошибки/Количество ошибок
	Uns       *RevErrLevel;		// Уровень сбоя датчика
	Uns        data;			// Состояние опроса датчика
	LgUns      prevData;		// Считываемое положение
	Byte       RevMisc;			// Значение максимальной разницы
	Uns        goodPosition;	// Последнее хорошее сохраненное положение
	Bool       Error;           // Признак сбоя
	Byte       skipDefectFl;	// Флаг, означающий, что произошел "перескок" данных
	Byte       defectTimer;		// таймер на выставление аварии
	void     (*CsFunc)(Byte);   // Функция выбора микросхемы
	TEncStatus EncStatus;	// Статус энкодера
} ENCODER;

// Прототипы функций
void EncoderUpdate(void);
void AtMegaAvagoEncoderCalc(ENCODER *);		// Классический метод рассчета ошибки энкодера + обработка энкодера
void AtMegaAvagoEncoderUpdate(ENCODER *);	// Новый метод рассчета ошибки энкодера + обработка энкодера
void EncoderProtectionUpdate(ENCODER *);
void AtMegaAvagoEncoderTestMode(ENCODER *);
void ProtectionPosUpdate(void);

extern LgUns Revolution;

#ifdef __cplusplus
}
#endif // extern "C"

#endif

