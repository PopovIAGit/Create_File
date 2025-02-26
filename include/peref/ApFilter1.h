/*======================================================================
��� �����:          ApFilter1.h
�����:              ������ �.�.
������ �����:       01.00
���� ���������:		02/02/10
�������������:      ��������� � ����������� IQmath
��������:
�������������� ������ ������� �������
======================================================================*/

#ifndef APFILTER1_
#define APFILTER1_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// ��������� ��� ������ � ��������
typedef struct APFILTER1 {
	LgInt Input;   // ������� ������
	LgInt Output;  // �������� ������
	LgInt PrevOut; // �������� ������
	LgInt dt;      // ���������� ������� �������������
	LgInt Tf;      // ���������� ������� �������
	LgInt K1;      // ����������� �������
	LgInt K2;      // ����������� �������
} APFILTER1;

void ApFilter1Init(APFILTER1 *);
void ApFilter1Calc(APFILTER1 *);
void ApFilter1Reset(APFILTER1 *);

#ifdef __cplusplus
}
#endif // extern "C"

#endif
