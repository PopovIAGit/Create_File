/*======================================================================
��� �����:          csl_analog.h
�����:              ������ �.�.
������ �����:       01.01
���� ���������:		16/02/10
��������:
������������ ���� ��� ������ � ����������� ���������
======================================================================*/

#ifndef CSL_ANALOG_
#define CSL_ANALOG_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// �������� ������������� ���� � ���������� ��� � ����
#if defined(__TMS320C28X__)
#define MAX_ADC_CODE	0xFFF0
#define MAX_ADC_VOLT	3.3

#elif defined(_TMS320C2XX)
#define MAX_ADC_CODE	0xFFC0
#define MAX_ADC_VOLT	3.3

#elif defined(__IAR_SYSTEMS_ICC__)
#define MAX_ADC_CODE	0x03FF
//#define MAX_ADC_VOLT	{ 1.1, 2.56, 5.0 }
#endif

// ������� �������������� ����/����������
#define AdcCodeToVolt(Code)		(((Extended)(Code) * MAX_ADC_VOLT) / MAX_ADC_CODE)
#define AdcVoltToCode(Volt)		(Uns)(((Extended)(Volt) * MAX_ADC_CODE) / MAX_ADC_VOLT)

#ifdef __cplusplus
}
#endif // extern "C"

#endif /* CSL_ANALOG_ */




