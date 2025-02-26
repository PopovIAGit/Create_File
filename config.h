#ifndef CONFIG_
#define CONFIG_

#define DEVICE_NAME "BUR-2"


// ���������� ���������
#define DEVICE_GROUP		2	// ������ ���������� (2 - ��� 2)
#define VERSION				59	// ������ �������
#define MODULE_VERSION		70	// ������ ����
#define MODULE_VERSION_OLD	50	// ������ ������ ����
#define SUBVERSION			01	// ���������


#define DEF_USER_PASS		7142	// ������ ��-��������� (����������������)
#define DEF_FACT_PASS		50737	// ������ ��-��������� (���������)

#define SYSCLK				100e6		// ��������� ������� (���-�� �������� � ���)
#define CLKIN				50e6		// ������� ������
#define CLK_VS_TRN_FREQ		20000U	// ������� ������������ ����������
#define CLK_VS_TRN_PERIOD	(SYSCLK / CLK_VS_TRN_FREQ)		// ������ ���
//#define IRDA_FREQ			((SYSCLK / 528e3) - 1)	// ������� IRDA
#define IRDA_FREQ			((SYSCLK / 528e3) - 1)	// ������� IRDA

// ������ ����������� ��������, ������� ��������� ���������� ��������� "expr"
// ���� ��������� �����, ������ ������� ��������� �� ������ �� ����� ����������
#define CONCAT2(First, Second) (First ## Second)
#define CONCAT(First, Second) CONCAT2(First, Second)
#define STATIC_ASSERT(expr) typedef char CONCAT(static_assert_failed_at_line_, __LINE__) [(expr) ? 1 : -1]

// ������������ ������������ �������
#define PRD_18KHZ				18e3		// ������� ��������� ���������� RTOS
#define PRD_2KHZ				2000		// ������������� ������ 2000 ��
#define PRD_200HZ				200			// ������������� ������ 200 ��
#define PRD_50HZ				50			// ������������� ������ 50 ��
#define PRD_10HZ				10			// ������������� ������ 10 ��

// ����������� ������������ ������
#include "device_modification.h"		// ����������� �����
#include "csl\csl.h"					// ���������� ��������� ����
#include "chip\DSP280x_Device.h"		// ���������� ����� ��������� ����
#include "IQmathLib.h"					// ������������ ���� ���������� IQmath
#include "timings.h"					// ���� ���������
#include "structs.h"					// �������� ����� � �������� �������
#include "macro.h"						// ���� ��������
#include "hardware.h"					// ������������ ������������
#include "comm.h"						// ���������������� �����
#include "interface.h"					// ������������ ������
#include "rim_devices.h"				// ������ ���������
#include "motor_control.h"				// ���������� ����������
#include "protections.h"				// ������ �������
#include "comm_SerialComm.h"
#include "params.h"						// ���� ������������ ���������� 

#endif

