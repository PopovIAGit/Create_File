/*======================================================================
Имя файла:          protectionTestIso.h
Автор:              Denis        
Версия файла:      	861
Дата изменения:		2014-03-11 17:49:59 +0700 
Применяемость:
Описание: Тест двигателя
========================================================================

----------------------------------------------------------------------*/

#ifndef CORE_TEST_ISO_
#define CORE_TEST_ISO_

#include "config.h"

#ifdef __cplusplus
extern "C" {
#endif
#define TEST_ISO_ENABLE()	OUT_SET(DRV_ISO_DISABLE, GrC->IsoCalcMethod) 
#define TEST_ISO_DISABLE()	OUT_SET(DRV_ISO_DISABLE, !GrC->IsoCalcMethod) 

#define TI_TEST_TIME		(1.8*PRD_18KHZ)	// Время теста изоляции = 3 с

// Структура расчёта аварии изоляции
typedef struct {
	Uns			enable;				// Разрешено/запрещено
	Uns			timer;				// Таймер
	Uns			testTime;			// Время теста
	Bool		completed;			// Статус завершен / не завершен
	LgUns    	sumIsoLevel;		// Сумма значений сопротивления изоляции
	Uns			counter;			
} TTestIso;

extern TTestIso   testIso;

// Прототипы функций для теста изоляции
void ProtectionTestIsoInit(TTestIso *);
void ProtectionTestIsoUpdate(TTestIso *); 

#ifdef __cplusplus
}
#endif // extern "C"
#endif



