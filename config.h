#ifndef CONFIG_
#define CONFIG_

#define DEVICE_NAME "BUR-2"


// Глобальные настройки
#define DEVICE_GROUP		2	// Группа устройства (2 - БУР 2)
#define VERSION				59	// Версия проекта
#define MODULE_VERSION		70	// Версия плат
#define MODULE_VERSION_OLD	50	// Старая версия плат
#define SUBVERSION			01	// Подверсия


#define DEF_USER_PASS		7142	// Пароль по-умолчанию (пользовательский)
#define DEF_FACT_PASS		50737	// Пароль по-умолчанию (заводской)

#define SYSCLK				100e6		// Системная частота (кол-во операций в сек)
#define CLKIN				50e6		// Частота кварца
#define CLK_VS_TRN_FREQ		20000U	// Частота тактирования тиристоров
#define CLK_VS_TRN_PERIOD	(SYSCLK / CLK_VS_TRN_FREQ)		// Период ШИМ
//#define IRDA_FREQ			((SYSCLK / 528e3) - 1)	// Частота IRDA
#define IRDA_FREQ			((SYSCLK / 528e3) - 1)	// Частота IRDA

// Макрос статической проверки, который проверяет истинность выражения "expr"
// если выражение ложно, макрос выводит сообщение об ошибке во время компиляции
#define CONCAT2(First, Second) (First ## Second)
#define CONCAT(First, Second) CONCAT2(First, Second)
#define STATIC_ASSERT(expr) typedef char CONCAT(static_assert_failed_at_line_, __LINE__) [(expr) ? 1 : -1]

// Конфигурация операционной системы
#define PRD_18KHZ				18e3		// Частота основного прерывания RTOS
#define PRD_2KHZ				2000		// Периодическая задача 2000 Гц
#define PRD_200HZ				200			// Периодическая задача 200 Гц
#define PRD_50HZ				50			// Периодическая задача 50 Гц
#define PRD_10HZ				10			// Периодическая задача 10 Гц

// Подключение заголовочных файлов
#include "device_modification.h"		// Модификация блока
#include "csl\csl.h"					// Библиотека поддержки чипа
#include "chip\DSP280x_Device.h"		// Заголовные файлы переферии чипа
#include "IQmathLib.h"					// Заголовояный файл библиотеки IQmath
#include "timings.h"					// Файл таймингов
#include "structs.h"					// Описание типов и структур проекта
#include "macro.h"						// Файл макросов
#include "hardware.h"					// Конфигурация оборудования
#include "comm.h"						// Последовательная связь
#include "interface.h"					// Интерфейсный модуль
#include "rim_devices.h"				// Модуль периферии
#include "motor_control.h"				// Управление двигателем
#include "protections.h"				// Защиты привода
#include "comm_SerialComm.h"
#include "params.h"						// Файл конфигурации параметров 

#endif

