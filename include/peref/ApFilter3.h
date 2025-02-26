/*======================================================================
��� �����:          ApFilter3.h
�����:              ������ �.�.
������ �����:       01.00
���� ���������:		02/02/10
�������������:      ��������� � ����������� IQmath
��������:
�������������� ������ �������� �������
======================================================================*/

#ifndef APFILTER3_
#define APFILTER3_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// ��������� ��� ������ � ��������
typedef struct APFILTER3 {
	LgInt Input;   // ������� ������
	LgInt Output;  // �������� ������
	LgInt Output1; // ������� ������
	LgInt PrevOut1;// �������� ������
	LgInt Output2; // ������� ������
	LgInt PrevOut2;// �������� ������
	LgInt dt;      // ���������� ������� �������������
	LgInt Tf;      // ���������� ������� �������
	LgInt K1;      // ����������� �������
	LgInt K2;      // ����������� �������
	LgInt PrevOut; // ���������� �������� ��������� �������
} APFILTER3;

void ApFilter3Init(APFILTER3 *);
void ApFilter3Calc(APFILTER3 *);
void ApFilter3Reset(APFILTER3 *);

#ifdef __cplusplus
}
#endif // extern "C"

#endif
