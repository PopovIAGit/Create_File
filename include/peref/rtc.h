/*======================================================================
��� �����:          rtc.h
�����:              ������ �.�.
������ ����������:  01.00
������ �����:       01.00
�������������:      ��� ���� �����
��������:
���������� ��������� ����� ��������� ������� � 
������� ���������� �������� � �����

========================================================================
�������:
------------------------------------------------------------------------
	17/12/09	������ 01.00
----------------------------------------------------------------------*/

#ifndef RTC_
#define RTC_

#include "std.h"

#ifdef __cplusplus
extern "C" {
#endif

// ��������� ������ ��������� ���� (AM/PM)
#define RTC_AM_PM         0x20 // ������� ����� (0 - AM, 1 - PM)
#define RTC_AM_PM_MODE    0x40 // ������� ������

// ��������� ��� ������ � �������� � �����
typedef union _TTimeVar {
  Uns all;
  struct {
     Uns Min:6;        // 0-5   ������
     Uns Hour:10;      // 6-15  ���
  } bit;
} TTimeVar;

typedef union _TDateVar {
  Uns all;
  struct {
  	Uns Day:5;        // 0-4   ���� ������
	   Uns Month:4;      // 5-8   �����
  	Uns Year:7;       // 9-15  ���
  } bit;
} TDateVar;

typedef union {
  Uns      all;     // ��� �������/����
  TTimeVar Time;    // ��������� ������������� �������
  TDateVar Date;    // ��������� ������������ ����
} TTimeDate;

// ��������� ��� ������ � ������ ��������� �������
typedef struct RTC_Obj {
	Byte Sec;         // �������
	Byte Min;         // ������
	Byte Hour;        // ���
	Byte WeekDay;     // ���� ������
	Byte Day;         // ���� ������
	Byte Month;       // �����
	Byte Year;        // ���
	Byte PrevHour;    // ���������� ��� ��� �������������
} RTC_Obj;

typedef struct RTC_Lite {
	Byte Sec;         // �������
	Byte Min;         // ������
	Byte Hour;        // ���
	Byte Day;         // ����
} RTC_Lite;

void RTC_Update(void *);
void RTC_Tick(void *);
Byte RTC_DefMaxDay(Byte Year, Byte Month);
void RTC_GetTime(void *p, TTimeVar *Time);
void RTC_GetDate(void *, TDateVar *Date);
void RTC_SetTime(void *, TTimeVar *Time, Byte Sec);
void RTC_SetDate(void *, TDateVar *Date, Byte WeekDay);
Byte RTC_TimeCorr(void *, Int Corr);

#ifdef __cplusplus
}
#endif // extern "C"

#endif



