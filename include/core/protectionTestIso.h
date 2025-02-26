/*======================================================================
��� �����:          protectionTestIso.h
�����:              Denis        
������ �����:      	861
���� ���������:		2014-03-11 17:49:59 +0700 
�������������:
��������: ���� ���������
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

#define TI_TEST_TIME		(1.8*PRD_18KHZ)	// ����� ����� �������� = 3 �

// ��������� ������� ������ ��������
typedef struct {
	Uns			enable;				// ���������/���������
	Uns			timer;				// ������
	Uns			testTime;			// ����� �����
	Bool		completed;			// ������ �������� / �� ��������
	LgUns    	sumIsoLevel;		// ����� �������� ������������� ��������
	Uns			counter;			
} TTestIso;

extern TTestIso   testIso;

// ��������� ������� ��� ����� ��������
void ProtectionTestIsoInit(TTestIso *);
void ProtectionTestIsoUpdate(TTestIso *); 

#ifdef __cplusplus
}
#endif // extern "C"
#endif



