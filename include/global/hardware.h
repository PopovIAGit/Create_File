/*======================================================================
��� �����:          hardware.h
�����:              ������ �.�.
������ �����:       01.01
���� ���������:		05/04/10
��������:
������������ ������
======================================================================*/

#ifndef HARDWARE_
#define HARDWARE_

#include "chip\f280xbmsk.h"

#define CLK_VS_PERIOD			(SYSCLK / CLK_VS_FREQ)

void InitHardware(void);

#endif

