/*======================================================================
Имя файла:          protectionTestMotor.h
Автор:              Denis
Описание:
Заголовочный файл модуля теста двигателя с объявлением макросов структур и функций

========================================================================*/

#ifndef TEST_MOTOR_
#define TEST_MOTOR_

#include "config.h"

#ifdef __cplusplus
extern "C" {
#endif

// Биты управления
#define TM_VOLTAGE				BIT0	// Подача напряжения
#define TM_COMPLETED			BIT1	// Тест завершен

#define TM_VOLTAGE_TIME			(0.02*PRD_18KHZ)// Время измерения тока
#define TM_PAUSE_TIME			(0.2*PRD_18KHZ)	// Время паузы
#define TM_PAUSE_TIME_SCN		(0.1*PRD_18KHZ)	// Время паузы КЗ на нейтраль

typedef union {
	Uns all;
	struct {
		Uns voltage:1;			// 0	Подача напряжения
		Uns completed:1;		// 1	Завершён
		Uns voltSup:1;			// 2	Напряжение подано
    	Uns rsvd:13;			// 3-15	Резерв
	} bit;
} TTestSCStatus;

// Структура расчёта аварии теста двигателя
typedef struct {
	Uns				enable;				// Разрешено\запрещено
	Uns				timer;              // Таймер
	Uns				timeVoltage;  		// Время напряжения
	Uns				timePause;  		// Время паузы
	Byte 			phaseNumber; 		// Номер текущей фазы
	TTestSCStatus	status;				// Статус  
	LgInt			voltageLevel;		// Уровень напряжения
	LgInt			voltage;			// Текущее напряжение
	Uns				iMax1;				// Максимальный ток в фазе U
	Uns				iMax2;				// Максимальный ток в фазе V
	Uns				iMax3;				// Максимальный ток в фазе W
	Uns    			maxCurrLevel[3];	// Максимальный ток для защиты
	Bool			isComplete;			// Флаг, показывающий, проверены ли все три фазы или нет
	Bool			tmRevers;			// реверс фазировки теста электродвигателя. Реверс выполняется автоматически после выполнения цикла тестов электродвигателя
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



