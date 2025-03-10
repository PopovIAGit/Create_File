#ifndef _PARAMS_H_
#define _PARAMS_H_

#define BUSY_STR_ADR		0
#define CMD_CANC_ADR		1
#define EXPR_STR_ADDR		4
#define MPU_BLOCKED_ADR		32
#define CONFIRM_ADDR		34
#define CORR_PASS_ADDR		36
#define WRONG_PASS_ADDR		38
#define PASS_RESET_ADDR		40
#define EDIT_DISABLE_ADDR	42
#define CODE_DONT_MATCH_ADDR	44
#define CALIB_EN_ADDR		46
#define CALIB_DIS_ADDR		48
#define SET_LVLS_ADDR		50
#define DATA_SAVED_ADDR		52
#define ENC_TEST_ON			54
#define DO_LAUNCH_ADDR		56
#define TO_OPENED_ADDR		57
#define TO_CLOSED_ADDR		58
#define ENC_TEST_OVER_ADDR	59
#define ENC_SUCCESS_ADDR	61
#define ENC_FAIL_ADDR		63

#define NUM_ICONS				5
#define CODE_ICO				0x00
#define CONN_ICO				0x01
#define BT_ICO					0x02
#define CODEON_ICO              0x03
#define CODEOFF_ICO             0x04

#ifdef CREATE_STRUCTS

#define GR_INIT(GR, D)		GetAdr(GR) + D, sizeof(T##GR) - D

const struct MENU_GROUP groups[] = {
//! ������
	"   1 ������ A   ", "    ���������   ", GR_INIT(GroupA, 0),	//{Show}
	"   2 ������ B   ", "����� ��������� ", GR_INIT(GroupB, 0),	//{User}
	"   3 ������ C   ", "����� ��������� ", GR_INIT(GroupC, 0),	//{Factory}
	"   4 ������ D   ", "    �������     ", GR_INIT(GroupD, 0),	//{Command}
//  "   5 ������ H   ", "  �������       ", GR_INIT(GroupE, 0),	//{Hide}
	"   6 ������ E   ", "     ������     ", GR_INIT(GroupE, 2)	//{None}
//  "   7 ������ R   ", "  �����         ", GR_INIT(GroupE, 0),	//{Hide}
//! ������ �����
};

const struct MENU_PARAM params[] = {
//! ���������
//! ������ � ����� 
"�0.������. ���. ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {0, Regular,  }
"�1.���. ������. ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {1, Regular,  }
"�2.���������    ", "    ",-1000U,      2000,       0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1), 	// {2, Regular,  }
"�3.�������      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {3, Regular,  }
"�4.������� ����.", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {4, Regular,  }
"�5.�������. ����", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {5, Regular,  }
"�6.��� ���� �   ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {6, Regular,  }
"�7.��������.����", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {7, Regular,  }
"�8.���� ��������", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {8, Regular,  }
"�9.����.��� ����", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {9, Regular,  }
"�10.������ �����", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {10, Regular,  }
"�11.������ ����.", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {11, Regular,  }
"�12.�35         ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {12, Regular,  }
"�13.�36         ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {13, Regular,  }
"�14.����� ����. ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {14, Regular,  }
"�15.����� �����.", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {15, Regular,  }
"�16.����� ������", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {16, Regular,  }
"�17.������ %    ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {17, Regular,  }
"�18.��������    ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {18, Regular,  }
"�19.�24         ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {19, Regular,  }
"�20.������ ���  ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {20, Regular,  }
"�21.���� ���� ��", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {21, Regular,  }
"�22.�����.������", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {22, Regular,  }
"�23.������      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {23, Regular,  }
"�24.������      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {24, Regular,  }
"�25.������      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {25, Regular,  }
"�26.����� � ����", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {26, Regular,  }
"�27.�61         ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {27, Regular,  }
"�28.������      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {28, Regular,  }
"�29.������      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {29, Regular,  }
"�30.������      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {30, Regular,  }
"�31.������      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {31, Regular,  }
"�32.���������   ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {32, Regular,  }
"�33.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {33, Regular,  }
"�34.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {34, Regular,  }
"�35.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {35, Regular,  }
"�36.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {36, Regular,  }
"�37.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {37, Regular,  }
"�38.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {38, Regular,  }
"�39.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {39, Regular,  }
//! ������ B ����� ���������
"B0.������ ����  ", "�*� ",		1,	   11,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {40, Regular,  }
"B1.������ ����  ", "�*� ",		1,	   11,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {41, Regular,  }
"B2.��� ��� ���� ", "�*� ",		1,	   11,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {42, Regular,  }
"B3.��� ���� ����", "�*� ", 	1,     11,  	4, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {43, Regular,  }
"B4.��� ��� ���� ", "�*� ", 	1,     11,  	2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {44, Regular,  }
"B5.��� ���� ����", "�*� ", 	1,     11,  	4, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {45, Regular,  }
"B6.��� �������� ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(124),		// {46, Regular,  }
"B7.��� �������� ", "    ", 	1,      4,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(126),		// {47, Regular,  }
"B8.��� �����    ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(131),		// {48, Regular,  }
"B9.���� ������� ", "��  ", 	0,   3000,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),// {49, Regular,  }
"B10.���� �������", "��  ", 	0,   3000,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),// {50, Regular,  }
"B11.���� ������ ", "��  ", 	0,    100,  	0, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {51, Regular,  }
"B12.��� ������� ", "    ", 	0,  65530,  	0, MT_DEC|M_RMAX(4),					// {52, Regular,  }
"   B13.�����    ", "    ", 	0,  65530,  	0, MT_TIME|M_RMAX(1)|M_PWP1,			// {53, Time,  }
"   B14.����     ", "    ", 	0,  65530,  	0, MT_DATE|M_RMAX(2)|M_PWP1,			// {54, Date,  }
"B15.���� �����  ", "�   ", -300U,    300,  	0, MT_DEC|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),	// {55, Regular,  }
"B16.������� ����", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(133),		// {56, Regular,  }
"B17.����� ��/�� ", "    ", 	0,      3,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(135),		// {57, Regular,  }
#if BUR_M
"B18.������      ", "    ", 	2,      2,  	2, MT_DEC|M_RONLY|M_RMAX(4),		// {58, Regular,  }
#else
"B18.����� ��� ��", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(139),		// {58, Regular,  }
#endif
"B19.���� �����  ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(142),		// {59, Regular,  }
"B20.����� ������", "�   ", 	1,    100,  	1, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {60, Regular,  }
#if BUR_M
"B21.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4), 		// {61, Regular,  }
#else
"B21.��� �� ���� ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(144),		// {61, Regular,  }
#endif
#if BUR_90
	#if BUR_M
"B22.���� �� ����", "    ", 	0,     63,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(0),		// {62, Regular,  }
"B23.���� ��� ���", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),		// {63, Regular,  }
	#else
"B22.���� �� ����", "    ", 	0,     63,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(5),		// {62, Regular,  }
"B23.���� ��� ���", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),		// {63, Regular,  }
	#endif
#else
	#if BUR_M
"B22.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {62, Regular,  }
"B23.���� ��� ���", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),		// {63, Regular,  }
	#else
"B22.���� �� ����", "    ", 	0,     31,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {62, Regular,  }
"B23.���� ��� ���", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),		// {63, Regular,  }
	#endif
#endif
"B24.���� �����  ", "    ", 	0,      6,  	3, MT_STR|M_PWP1|M_NVM|M_SADR(146),		// {64, Regular,  }
"B25.����� ����� ", "    ", 	1,    247,  	1, MT_DEC|M_PWP1|M_NVM|M_RMAX(2),		// {65, Regular,  }
"B26.����� ����� ", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(226),		// {66, Regular,  }
"B27.����� ����� ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(188),		// {67, Regular,  }
#if BUR_M
"B28.������      ", "    ", 	2,      2,  	2, MT_DEC|M_RONLY|M_RMAX(4),		// {68, Regular,  }
#else
"B28.������ ���� ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(188),			// {68, Regular,  }
#endif
"B29.������.� ���", "    ", 	0,      2,  	2, MT_STR|M_PWP1|M_NVM|M_SADR(177),		// {69, Regular,  }
"B30.BLUETOOTH   ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_SADR(188),	// {70, Regular,  }
"   B31.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		//71
"B32.���� ��� ���", "�   ", 	3,    100,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {72, Regular,  }
"B33.���� ������ ", "��  ", 	1,   1000,    100, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),// {73, Regular,  }
"�34.��� ������� ", "    ",     0,     24,      0, MT_STR|M_PWP1|M_NVM|M_SADR(229),		// {74, Regular,  }
"B35.������ �����", "C   ",     0,   6000,      0, MT_DEC|M_PWP1|M_NVM|M_RMAX(3),		// {75, Regular,  }
#if BUR_M
"B36.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {76, Regular,  }
#else
"B36.���� �� ����", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(209),		// {76, Regular,  }
#endif
#if BUR_90
"B37.90�60       ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(188),		// {77, Regular,  }
#else
"   B37.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {77, Regular,  }
#endif
"B38.������ � ���", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(212),		// {78, Regular,  }
"B39.����� 2 ����", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(273),		// {79, Regular,  }
"   B40.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {80, Regular,  }
"   B41.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {81, Regular,  }
"   B42.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {82, Regular,  }
"   B43.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {83, Regular,  }
"   B44.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {84, Regular,  }
"   B45.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {85, Regular,  }
"   B46.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {86, Regular,  }
"   B47.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {87, Regular,  }
"   B48.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {88, Regular,  }
"   B49.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {89, Regular,  }
//------------------------------------------------------------------
//! ������ C ����� ���������
" �0.��� ������� ", "    ",     0,  65530,      0, MT_DEC|M_RMAX(4),					// {90, Regular,  }
"   �01.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {91, Regular,  }
"�2.��� �������� ", "    ",     0,     99,     18, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {92, ProductYear,  }
"�3.����� �����  ", "    ",     0,   9999,      0, MT_BIN|M_PWP1|M_NVM|M_RMAX(3),		// {93, FactoryNumber,  }
"�4.���� ������  ", "��*�",    10,   1000,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(2),// {94, Regular,  }
"�5.��������� ���", "A   ",     1,    300,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {95, Regular,  }
"�6.�� ��������� ", "    ",     1,  65530,  10000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4)|M_PREC(2),// {96, Regular,  }
"C7.���.����� �� ", "    ",     0,    100,      0, MT_DEC|M_RONLY|M_RMAX(2),		// {97, Regular,  }
"C8.���� ���� �� ", "%   ",     0,    100,     50, MT_BIN|M_PWP1|M_NVM|M_RMAX(2), 		// {98, Regular,  }
"�9.���� �����   ", "    ",     0,     15,      0, MT_BIN|M_PWP2|M_NVM|M_RMAX(3),		// {99, Regular,  }
"C10.��������� ��", "    ",     0,  65535,      0, MT_VERS|M_RONLY|M_NVM|M_PREC(2)|M_RMAX(4),// {100, Regular,  }
"�11.�� ����-��� ", "    ",     1,  65530,    217, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {101, Regular,  }
"�12.����� ������", "    ",     0,     50,      0, MT_DEC|M_PWP2|M_RMAX(1),	// {102, Regular,  }
//-----------------------�������������� ���������
"�13.����� ����� ", "    ",     0,    100,      2, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {103, Regular,  }
"C14.��� ���� ���", "    ",     0,     16,      0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1), 		// {104, Regular,  }
"C15.�� ��� �����", "C   ",     0,     30,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {105, Regular,  }
"C16.�� ���������", "    ",     0,      1,      0, MT_STR|M_PWP2|M_SADR(157),		// {106, Regular,  }
"�17.������ ���� ", "    ",     0,    100,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {107, Regular,  }
"�18.����� ������", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(190),		// {108, Regular,  }
//-----------------------����������---------------------------------------------------
"�19.���� ������ ", "����",    30,    170,     45, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {109, Regular,  }
"�20.����� ������", "C   ",     0,     50,      7, MT_BIN|M_PWP1|M_NVM|M_RMAX(1)|M_PREC(1),  // {110, Regular,  }
"�21.������ �����", "�   ",     2,    100,     18, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(2),  // {111, Regular,  }
"�22.������� ����", "����", 	0,     30,  	5, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {112, Regular,  }
"�23.��� ��� ��� ", "    ", 	0,  	1,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {113, Regular,  }
"�24.�� ���� ��� ", "    ", 	3,    100,     30, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),	// {114, Regular,  }
"�25.����������� ", "    ", 	0,      1,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {115, Regular,  }
"C26.���� ������ ", "C   ",     0,   	1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(188),		// {116, Regular,  }
"�27.��� ��� ����", "    ", 	0,     10,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {117, Regular,  }
"�28.��������� Mb", "    ", 	1,      5,  	2, MT_STR|M_PWP2|M_NVM|M_SADR(267),		// {118, Regular,  }
"   �29.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {119, Regular,  }
"   �30.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {120, Regular,  }
"   �31.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {121, Regular,  }
"   �32.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {122, Regular,  }
"   �33.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {122, Regular,  }
"C34.��� ������� ", "    ",     0,      2,      2, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {124, Regular,  }
//----------------------��������� ��������
"�35.���� ������ ", "����", -100U,    100,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),	// {125, Regular,  }
"   �36.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {126, Regular,  }
"   �37.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {127, Regular,  }
"�38.� ���� ���� ", "M�C ",     0,  65530,   5000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4)|M_PREC(2),	// {128, Regular,  }
"�39.� ���� ���� ", "M�C ",     0,  65530,   5000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4)|M_PREC(2), // {129, Regular,  }
"�40.�� ����� ���", "C   ",     0,  65530,      0, MT_BIN|M_PWP1|M_NVM|M_RMAX(4)|M_PREC(1), // {130, Regular,  }
"�41.��� BLUET-TH", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(214),			// {133, Regular,  }
#if BUR_90
"   �42.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {131, Regular,  }
#else
"�42.����. �� ���", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(175),		// {132, Regular,  }
#endif
"�43.�����.������", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(180),		// {133, Regular,  }
"�44.����. ������", "    ", 	0,      1,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {134, Regular,  }
"�45.����� ������", "    ", 	0,      1,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {135, Regular,  }
"�46.������� ����", "    ", 	0,      1,  	0, MT_DEC|M_RMAX(1),		// {136, Regular,  }
"C47.������� ��� ", "    ",     0,  65530,   4100, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {137, Regular,  }
"C48.���� ���    ", "    ",-10000U, 10000,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(4),	// {138, Regular,  }
"�49.��� ��������", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(254),		// {139, Regular,  }
"�50.��� ��������", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(260),		// {140, Regular,  }
#if BUR_90
" C51.��� ���� U ", "    ",      0,  65530,   4332, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),       // {141, Regular,  }
" C52.��� ���� V ", "    ",      0,  65530,   4332, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),       // {142, Regular,  }
" C53.��� ���� W ", "    ",      0,  65530,   4332, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),       // {143, Regular,  }
#else
"   C51.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {141, Regular,  }
"   C52.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {142, Regular,  }
"   C53.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {143, Regular,  }
#endif
//----------------------������������ �����
"C54.��� ���� U  ", "    ", 	0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {144, Regular,  }
"C55.� ���� U 47%", "B   ",   220,    600,    318, MT_DEC|M_NVM|M_RMAX(2),		// {145, Regular,  }
"C56.T ���� U 47%", "C   ",     1,    200,     20, MT_DEC|M_NVM|M_RMAX(2)|M_PREC(1),	// {146, Regular,  }
"�57.���� ���� U ", "B   ",    220,    335,    265, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {147, Regular,  }
"�58.�� ���� U � ", "C   ",      1,    200,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {148, Regular,  }
"�59.���� ���� U ", "C   ",      1,    250,    210, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {149, Regular,  }
"C60.��� ��� U   ", "    ", 	 0,      3,  	 3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {150, Regular,  }
"�61.���� ��� U  ", "B   ",     90,    220,    125, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {151, Regular,  }
"�62.�� ��� U �  ", "C   ",      1,    200,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {152, Regular,  }
"�63.���� ��� U  ", "C   ",      1,    250,    210, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {153, Regular,  }
"C64.��� ����� U ", "    ", 	 0,      3,  	 2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {154, Regular,  }
"�65.���� ��� U  ", "%   ",      3,     25,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {155, Regular,  }
"�66.���� ��� U  ", "C   ",      2,    200,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {156, Regular,  }
"C67.��� ���� U  ", "    ", 	 0,      3,  	 3, MT_STR|M_PWP2|M_NVM|M_SADR(153), 		// {157, Regular,  }
"�68.���� ���� U ", "�   ",      0,    110,     70, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {158, Regular,  }
"   �69.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {159, Regular,  }
"�70.���� ���� U ", "C   ",      1,    250,     50, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {160, Regular,  }
#if BUR_M
"�71.��� ��� ����", "    ", 	0,      3,  	3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {161, Regular,  }
#else
"   �71.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {161, Regular,  }
#endif
"C72.��� ���� I  ", "    ",      0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {162, Regular,  }
"C73.���� ���� I ", "%   ",     20,    500,    100, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {163, Regular,  }
"C74.���� ���� I ", "C   ",      1,    100,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(1)|M_PREC(1),// {164, Regular,  }
"C75.��-��� ���  ", "    ",      0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {165, Regular,  }
"�76.�� ���� ��� ", "    ",      0,  65535,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {166, Regular,  }
"�77.���� 25% ���", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {199, Regular,  }
"�78.���� 35% ���", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {200, Regular,  }
"�79.���� 50% ���", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {201, Regular,  }
"�80.���� 75% ���", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {202, Regular,  }
"�81.���� 100% ��", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {203, Regular,  }
"�82.��� 25% ��� ", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {204, Regular,  }
"�83.��� 40% ��� ", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {205, Regular,  }
"�84.��� 60% ��� ", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {206, Regular,  }
"�85.��� 80% ��� ", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {207, Regular,  }
"�86.��� 110% ���", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {208, Regular,  }
"�87.���� ���� ��", "�   ",      1,     50,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(1)|M_PREC(1),	// {177, Regular,  }
"C88.������ �� ��", "    ",      0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {178, Regular,  }
"�89.������� ��  ", "    ",      0,  32767,  17500, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {179, Regular,  }
"�90.��� ��� ����", "    ",      0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(220),		// {180, Regular,  }
"�91.����� ������", "    ",      0,      2,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {181, Regular,  }
"C92.��� ��� ����", "    ",      0,      2,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {182, Regular,  }
"C93.�����/������", "    ",      0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {183, Regular,  }
"   �94.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {184, Regular,  }
" �95.�� ������  ", "����",      0,    100,     90, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),// {185, Regular,  }
"�96.�� �������  ", "����",   -50U,      0,   -37U, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),// {186, Regular,  }
"�97.�� ��� ���� ", "����",   -40U,     20,     15, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),// {187, Regular,  }
"�98.�� ���� ��� ", "����",   -20U,     40,     30, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),// {188, Regular,  }
"C99.������ ���� ", "    ", 	 0,      3,  	 3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {189, Regular,  }
"C100.�� ����� ��", "    ",      0,  65530,  20000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {190, Regular,  }
"C101.�� ����� ��", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4), 		// {191, Regular,  }
"C102.������. �� ", "    ",      0,      3,      0, MT_STR|M_SADR(171),		// {192, Regular,  }
"C103.��� ��� �� ", "    ", 	 0,      3,  	 3, MT_STR|M_PWP1|M_NVM|M_SADR(153),		// {193, Regular,  }
"�104.�� ��� ��� ", "�   ",      1,    600,      8, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {194, Regular,  }
"�105.����� ��/��", "    ",      0,      2,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),  	// {195, Regular,  }
"C106.���� RTC   ", "    ",      0,  	 1,      1, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {196, Regular,  }
"�107.���� ���� �", "    ",      0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {197, Regular,  }
//--------------------��������� ��������--------------------------------------------------------
"   �108.������  ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		//198
"�109.���� 25% ��", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {199, Regular,  }
"�110.���� 35% ��", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {200, Regular,  }
"�111.���� 50% ��", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {201, Regular,  }
"�112.���� 75% ��", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {202, Regular,  }
"�113.���� 100% �", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {203, Regular,  }
"�114.��� 25% ���", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {204, Regular,  }
"�115.��� 40% ���", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {205, Regular,  }
"�116.��� 60% ���", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {206, Regular,  }
"�117.��� 80% ���", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {207, Regular,  }
"�118.��� 110% ��", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {208, Regular,  }
"  �119.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {209, Regular,  }
//! ������ D �������
"D0.������� ���� ", "    ",      0,      2,      0, MT_STR|M_PWP1|M_SADR(157),		// {210, Regular,  }
"D1.������� ���� ", "    ",      0,      2,      0, MT_STR|M_PWP1|M_SADR(157),		// {211, Regular,  }
"D2.���� �� ���� ", "��  ",      0,   1000,      0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		// {212, Regular,  }
"D3.���� �� ���� ", "��  ",      0,   1000,      0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		// {213, Regular,  }
"  D4.������     ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {214, Regular,  }
"D5.����� ������ ", "    ",      0,      1,      0, MT_STR|M_PWP1|M_SADR(160),		// {215, Regular,  }
"D6.������ ������", "    ",      0,      7,      0, MT_STR|M_PWP1|M_SADR(162),		// {216, Regular,  }
" D7.����� ����� ", "    ",      0,      1,      0, MT_STR|M_PWP1|M_SADR(160),		// {217, Regular,  }
" D8.�� ���������", "    ",      0,      1,      0, MT_STR|M_PWP1|M_SADR(157),		// {218, Regular,  }
#if BUR_90
"   D9.������    ", "    ", 	 0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {222, Regular,  }
#else
"D9.���� ��������", "    ",      0,      2,  	 0, MT_STR|M_PWP1|M_SADR(262),		// {219, Regular,  }
#endif
"D10.����� ������", "    ",      0,      1,     0, MT_STR|M_PWP1|M_SADR(160),		// {220, Regular,  }
"D11.����� ����� ", "    ", 	 0,  	 1,  	0, MT_STR|M_PWP1|M_SADR(160),		// {221, Regular,  }
"   D12.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {222, Regular,  }
"   D13.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {223, Regular,  }
"   D14.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {224, Regular,  }
"   D15.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {225, Regular,  }
"   D16.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {226, Regular,  }
"   D17.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {227, Regular,  }
"   D18.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {228, Regular,  }
"   D19.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {229, Regular,  }
//! ������ G ������������
"G0.����� �����  ", "    ",      0,      1,      0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {230, Regular,  }
"G1.���� ������  ", "    ",      0,  65530,      0, MT_BIN|M_PWP2|M_NVMC|M_RMAX(4),		// {231, Regular,  }
"G2.���� ��� ��� ", "    ",      0,  65530,      0, MT_BIN|M_PWP2|M_NVMC|M_RMAX(4),		// {232, Regular,  }
"G3.�������� ��� ", "%   ",      0,   1000,      0, MT_DEC|M_PWP2|M_RMAX(3)|M_PREC(1),		// {233, Regular,  }
"G4.����� �����  ", "    ",      0,      1,      0, MT_DEC|M_PWP2,				// {234, Regular,  }
"G5.TECT � ������", "    ",      0,  65535,      0, MT_BIN|M_PWP2|M_NVMC|M_RMAX(4),		// {235, Regular,  }
"G6.���� ������  ", "    ",      0,      1,      0, MT_DEC|M_PWP2,				// {236, Regular,  }
"G7.������ ����  ", "    ",      0,      1,      0, MT_DEC|M_PWP2, 				// {237, Regular,  }
"G8.���.���.����.", "    ",      0,      1,      0, MT_STR|M_SADR(188),		// {238, Regular,  }
"   G9.������    ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {239, Regular,  }
"   G10.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {240, Regular,  }
"   G11.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {241, Regular,  }
"   G12.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {242, Regular,  }
"   G13.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {243, Regular,  }
"   G14.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {244, Regular,  }
"   G15.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {245, Regular,  }
"   G16.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {246, Regular,  }
"   G17.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {247, Regular,  }
"G18.���� ���� ��", "    ",      0,    200,      0, MT_DEC|M_PWP2|M_RMAX(2),		// {248, Regular,  }
"   G19.������   ", "    ",      0,  65530,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {249, Regular,  }
"   G20.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {250, Regular,  }
"   G21.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {251, Regular,  }
"   G22.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {252, Regular,  }
"   G23.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {253, Regular,  }
"   G24.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {254, Regular,  }
"   G25.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {255, Regular,  }
"   G26.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {256, Regular,  }
"G27.�����.������", "    ",      0,      1,      0, MT_STR|M_SADR(188),		// {257, Regular,  }
"   G28.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		//258
"   G29.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4), 		//259
//! ������ H �������
"H0.���� ������  ", "    ",      0,      3,      0, MT_DEC|M_NVM,					// {260, Regular,  }
"H1.  ������     ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {261, Regular,  }
"H2.����� ���� 1 ", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {262, Regular,  }
"H3.����� ���� 2 ", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {263, Regular,  }
"H4.����� ���� 1 ", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {264, Regular,  }
"H5.����� ���� 2 ", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {265, Regular,  }
"    H6.������ 1 ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {266, Regular,  }
"    H7.������ 2 ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {267, Regular,  }
"   H8.������ �� ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {268, Regular,  }
"H9.������ ����  ", "    ", 	 0,      1,  	 0, MT_DEC|M_RMAX(1),		// {269, Regular,  }
"�10.������� ����", "    ", 	 0,  65530,  	 0, MT_DEC|M_NVM|M_RMAX(4),		// {270, Regular,  }
"  H11.���.������", "    ", 	 0,  65535,  	 0, MT_DEC|M_RMAX(4),		// {271, Regular,  }
"H12.����� �� �� ", "    ", 	 0,  65535,  	 0, MT_DEC|M_NVM|M_RMAX(4),		// {272, Regular,  }
"H13.������ ���  ", "��  ",      0,   3000,      0, MT_DEC|M_NVM|M_RMAX(4),		// {273, Regular,  }
"H14.����. ������", "    ", 	 0,  65535,  	 0, MT_DEC|M_RMAX(4),		// {274, Regular,  }
"H15.��� ������� ", "    ", 	 0,  65535,  	 0, MT_DEC|M_NVM|M_RMAX(4),		// {275, Regular,  }
"H16.��� ��������", "%   ",      0,   3000,      0, MT_DEC|M_NVM|M_RMAX(3)|M_PREC(1),		// {276, Regular,  }
"H17.��� ��� 0_0 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {277, Regular,  }
"H18.��� ��� 0_1 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {278, Regular,  }
"H19.��� ��� 0_2 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {279, Regular,  }
"H20.��� ��� 0_3 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {280, Regular,  }
"H21.��� ��� 0_4 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {281, Regular,  }
"H22.��� ��� 0_5 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {282, Regular,  }
"H23.��� ��� 1_0 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {283, Regular,  }
"H24.��� ��� 1_1 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {284, Regular,  }
"H25.��� ��� 1_2 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {285, Regular,  }
"H26.��� ��� 1_3 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {286, Regular,  }
"H27.��� ��� 1_4 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {287, Regular,  }
"H28.��� ��� 1_5 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {288, Regular,  }
"H29.��� ��� 2_0 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {289, Regular,  }
"H30.��� ��� 2_1 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {290, Regular,  }
"H31.��� ��� 2_2 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {291, Regular,  }
"H32.��� ��� 2_3 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {292, Regular,  }
"H33.��� ��� 2_4 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {293, Regular,  }
"H34.��� ��� 2_5 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {294, Regular,  }
"H35.��� ��� 3_0 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {295, Regular,  }
"H36.��� ��� 3_1 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {296, Regular,  }
"H37.��� ��� 3_2 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {297, Regular,  }
"H38.��� ��� 3_3 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {298, Regular,  }
"H39.��� ��� 3_4 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {299, Regular,  }
"H40.��� ��� 3_5 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {300, Regular,  }

"H41.��� ���� 0_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {301, Regular,  }
"H42.��� ���� 0_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {302, Regular,  }
"H43.��� ���� 0_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {303, Regular,  }
"H44.��� ���� 0_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {304, Regular,  }
"H45.��� ���� 0_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {305, Regular,  }
"H46.��� ���� 0_5", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {306, Regular,  }
"H47.��� ���� 1_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {307, Regular,  }
"H48.��� ���� 1_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {308, Regular,  }
"H49.��� ���� 1_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {309, Regular,  }
"H50.��� ���� 1_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {310, Regular,  }
"H51.��� ���� 1_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {311, Regular,  }
"H52.��� ���� 1_5", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {312, Regular,  }
"H53.��� ���� 2_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {313, Regular,  }
"H54.��� ���� 2_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {314, Regular,  }
"H55.��� ���� 2_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {315, Regular,  }
"H56.��� ���� 2_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {316, Regular,  }
"H57.��� ���� 2_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {317, Regular,  }
"H58.��� ���� 2_5", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {318, Regular,  }
"H59.��� ���� 3_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {319, Regular,  }
"H60.��� ���� 3_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {320, Regular,  }
"H61.��� ���� 3_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {321, Regular,  }
"H62.��� ���� 3_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {322, Regular,  }
"H63.��� ���� 3_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {323, Regular,  }
"H64.��� ���� 3_5", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {324, Regular,  }

"H65.��� ���� 0_0", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {325, Regular,  }
"H66.��� ���� 0_1", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {326, Regular,  }
"H67.��� ���� 0_2", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {327, Regular,  }
"H68.��� ���� 0_3", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {328, Regular,  }
"H69.��� ���� 0_4", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {329, Regular,  }
"H70.��� ���� 1_5", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {330, Regular,  }
"H71.��� ���� 1_0", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {331, Regular,  }
"H72.��� ���� 1_1", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {332, Regular,  }
"H73.��� ���� 1_2", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {333, Regular,  }
"H74.��� ���� 1_3", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {334, Regular,  }
"H75.��� ���� 1_4", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {335, Regular,  }
"H76.��� ���� 1_5", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {336, Regular,  }
"H77.��� ���� 2_0", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {337, Regular,  }
"H78.��� ���� 2_1", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {338, Regular,  }
"H79.��� ���� 2_2", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {339, Regular,  }
"H80.��� ���� 2_3", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {340, Regular,  }
"H81.��� ���� 2_4", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {341, Regular,  }
"H82.��� ���� 2_5", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {342, Regular,  }
"H83.��� ���� 3_0", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {343, Regular,  }
"H84.��� ���� 3_1", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {344, Regular,  }
"H85.��� ���� 3_2", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {345, Regular,  }
"H86.��� ���� 3_3", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {346, Regular,  }
"H87.��� ���� 3_4", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {347, Regular,  }
"H88.��� ���� 3_5", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {348, Regular,  }
"H89.�� ��� �����", "C   ",      0,    100,      0, MT_DEC|M_NVM|M_RMAX(2)|M_PREC(1),		// {349, Regular,  }
"H90.����� ����  ", "    ",      0,  65530,      0, MT_DEC|M_SADR(35),		// {350, Regular,  }
"H91.����� ����  ", "B   ",      0,    500,      0, MT_DEC|M_RMAX(2),		// {351, Regular,  }
"H92.����� ����  ", "%   ",      0,    100,      0, MT_DEC|M_RMAX(2),		// {352, Regular,  }
"H93.����� ����  ", "    ",      0,      2,      0, MT_DEC|M_SADR(182),		// {353, Regular,  }
"H94.���� ������ ", "    ",      0,  65530,      0, MT_DEC|M_SADR(86),		// {354, Regular,  }
"H95.���� �������", "    ",      0,  65530,      0, MT_DEC|M_SADR(103),		// {355, Regular,  }
"  H96.������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {356, Regular,  }
"H97.������ �����", "    ",      0,      1,      0, MT_DEC|M_NVM|M_SADR(188),		// {357, Regular,  }
#if BUR_90
"   H98.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {358, Regular,  }
"   H99.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {359, Regular,  }
"  H100.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {360, Regular,  }
#else
" H98.��� ���� U ", "    ",      0,  65530,   3800, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),
" H99.��� ���� V ", "    ",      0,  65530,   3800, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),
"H100.��� ���� W ", "    ",      0,  65530,   3800, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),
#endif
"H101.���� ���� U", "    ",      0,  65530,  33000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {361, Regular,  }
"H102.���� ���� V", "    ",      0,  65530,  33000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {362, Regular,  }
"H103.���� ���� W", "    ",      0,  65530,  33000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {363, Regular,  }
" H104.��� ���� R", "    ",      0,  65530,    160, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {364, Regular,  }
" H105.��� ���� S", "    ",      0,  65530,    160, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {365, Regular,  }
" H106.��� ���� T", "    ",      0,  65530,    160, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {366, Regular,  }
"H107.���� ���� R", "    ",      0,  65530,  32760, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {367, Regular,  }
"H108.���� ���� S", "    ",      0,  65530,  32760, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {368, Regular,  }
"H109.���� ���� T", "    ",      0,  65530,  32760, MT_BIN|M_PWP1|M_NVM|M_RMAX(4), 		// {369, Regular,  }
"H110.SKIP FROM  ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {370, Regular,  }
"H111.SKIP TO    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {371, Regular,  }
"H112.�����.�����", "    ", 	 0,  65535,  	 0, MT_DEC|M_NVM|M_RMAX(3),		// {372, Regular,  }
"H113.����� ���� ", "    ",      0,  65530,      0, MT_DEC|M_SADR(69),		// {373, Regular,  }
"H114.����� ���� ", "    ",      0,     29,     18, MT_DEC|M_NVM|M_SADR(192),		// {374, Regular,  }
"H115.������ ��� ", "C   ",      0,   6000,      0, MT_DEC|M_NVM|M_RMAX(3),		// {375, Regular,  }
"H116.���� ������", "%   ",      0,    100,      0, MT_DEC|M_RMAX(2),		// {376, Regular,  }
"H117.��� ��� ���", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {377, Regular,  }
"H118.��� ��� ���", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {378, Regular,  }
"H119.��� ��� ���", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {379, Regular,  }
"H120.������ ��� ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {380, Regular,  }
"H121.������ ��� ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {381, Regular,  }
"H122.������ ��� ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {382, Regular,  }
"    H123.������ ", "�*� ",      0,  11000,      0, MT_DEC|M_NVM|M_RMAX(4),		// {383, Regular,  }
"  H124.�������� ", "��/�", -3600U,   3600,      0, MT_DEC|M_NVM|M_SIGN|M_RMAX(3),// {384, Regular,  }
"  H125.�������  ", "    ",      0,  	60,      0, MT_DEC|M_NVM|M_RMAX(1),		// {385, Seconds,  }
"H126.��� ����   ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {386, Regular,  }
"H127.������� ���", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {387, LogCmdControlWord,  }
"H128.����� ���� ", "    ",      0,  1,          0, MT_DEC|M_RMAX(4),		// {388, Regular,  }
"H129.������ ����", "    ",      0,  65530,      0, MT_DEC|M_SADR(35),		// {389, Regular,  }
"     H130.������", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {390, Regular,  }
"H131.����� ���� ", "    ",      0,  65530,      0, MT_DEC|M_SADR(52),		// {391, Regular,  }
"    H132.ADC_IU ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {392, Regular,  }
"    H133.ADC_IV ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {393, Regular,  }
"    H134.ADC_IW ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {394, Regular,  }
"H135.������� ���", "A/% ",      0,   8000,      0, MT_DEC|M_RMAX(3)|M_PREC(1),		// {395, Regular,  }
"H136.��� ��� ���", "%   ",      0,    100,      0, MT_DEC|M_RMAX(2),		// {396, Regular,  }
"  H93.��������� ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {397, Regular,  }
" H138.������    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {398, Regular,  }
" H139.��� ������", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {399, Regular,  }
//! ������ � ���������
"�0.������ ������", "    ",		0,	65530,		0, MT_RUN|M_RONLY|M_SADR(1),		// {400, Status,  }
"�1.���� ��������", "    ",		0,	65530,		0, MT_RUN|M_RONLY|M_SADR(18),		// {401, Fault,  }
"�2.�������� ����", "    ",		0,	65530,		0, MT_RUN|M_RONLY|M_SADR(35),		// {402, Fault,  }
"�3.���� ��������", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(52),		// {403, Fault,  }
"�4.����� ����-��", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(69),		// {404, Fault,  }
#if BUR_M
#if !BUR_90
"�5.������       ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {405, Regular, True}
#else
" �5.���� ������ ", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(86),		// {405, Regular, True}
#endif
#else
" �5.���� ������ ", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(86),		// {405, Regular, True}
#endif
" �6.���� �������", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(103),		// {406, StatusDigOut,  }
"  �7.���������  ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4), 		// {407, Regular,  }
"   �8.������    ", "�*� ", 	0,  11000,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {408, Regular, True}
"   �9.��������  ", "��/�",-3600U,   3600,  	0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3),	// {409, Regular,  }
"�10.���� ���� R ", "�   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),		// {410, Regular, True}
"�11.���� ���� S ", "�   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),		// {411, Regular, True}
"�12.���� ���� T ", "�   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),		// {412, Regular, True}
" �13.��� ���� U ", "�/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),// {413, Regular,  }
" �14.��� ���� V ", "�/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),// {414, Regular,  }
" �15.��� ���� W ", "�/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),// {415, Regular,  }
"�16.���� ������ ", "����", -180U,    180,  	0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),		// {416, Regular,  }
"�17.������ �����", "    ", 	0,      3,  	0, MT_STR|M_RONLY|M_SADR(120),			// {417, Regular,  }
"A18.��������� % ", "%   ",-1000U,   2000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),// {418, Regular, True}
" �19.������ ��� ", "��  ",     0,   3000,      0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		 // {419, Regular,  }
"�20.������� ��� ", "��  ",-3000U,   3000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),// {420, Regular,  }
"�21.���� ������ ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {421, Regular,  }
"�22.����������� ", "����", -100U,    100,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),	// {422, Regular,  }
"�23.������ ��   ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(3),	// {423, Regular,  }
"�24.�����. �����", "    ", 	0,  65535,  	0, MT_HEX|M_RONLY|M_RMAX(3),		// {424, Regular,  }
"�25.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {425, Regular,  }
"�26.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {426, Regular,  }
"�27.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {427, Regular,  }
"�28.���.�����.��", "    ", 	0,      1,  	0, MT_STR|M_RONLY|M_SADR(265),		// {428, Regular,  }
"�29.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {429, Regular,  }
"�30.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {430, Regular,  }
"�31.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {431, Regular,  }
"�32.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {432, Regular,  }
"�33.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {433, Regular,  }
"�34.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {434, Regular,  }
"�35.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {435, Regular,  }
"�36.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {436, Regular,  }
"�37.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {437, Regular,  }
"�38.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {438, Regular,  }
"�39.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4), 		// {439, Position,  }
//! ������ E ������
"     �����      ", "    ",      0,  65535,      0, MT_TIME|M_RMAX(1)|M_RONLY,			//
"      ����      ", "    ",      0,  65535,     33, MT_DATE|M_RMAX(2)|M_RONLY,			//
"E0.������ ������", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(1),		//
"E1.����� �������", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(18),		//
"E2.�������� ����", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(35),		//
"E3.����� �������", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(52),		//
"E4.����� ����-��", "    ",      0,  65530,      0, MT_RUN|M_RONLY|M_SADR(69),		//
"E5.��������� %  ", "%   ", -1000U,   2000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),		//
"    E6.������   ", "�*� ",     10,  11000,     10, MT_DEC|M_RONLY|M_RMAX(4),		//
"E7.������ ���� R", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),		//
"E8.������ ���� S", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),		//
"E9.������ ���� T", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),		//
"E10.��� ���� U  ", "�/% ", 	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		//
"E11.��� ���� V  ", "�/% ", 	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		//
"E12.��� ���� W  ", "�/% ",  	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		//
"E13.������ ���� ", "����",   -100U,    100,     0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),		//
"E14.���� ������ ", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(86),		//
"E15.���� �������", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(103),		//
"   E16.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E17.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E18.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E19.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E20.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E21.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E22.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E23.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E24.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E25.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E26.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E27.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E28.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E29.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4)		//
//! ��������� �����
};


const struct MENU_STRING values[] = {
//! ������  
	"    ������      ",	// 0
	//!----------------
	"  �� ���������  ",	// 1
	"      ����      ",	// 2
	"     ������     ",	// 3
	" ���� ��������  ",	// 4
	" ���� ��������  ",	// 5
	"   ���� ����    ",	// 6
	"    �������     ",	// 7
	"    �������     ",	// 8
	"     �����      ",	// 9
	" ������� ������ ",	// 10
	"  ������� ���   ",	// 11
#if BUR_M
	"    �������     ",	// 12
#else
	" ������ ������� ",	// 12
#endif
	"������ �� ����� ",	// 13
	"  ������ �� ��  ",	// 14
	"  ������������� ",	// 15
	"��������� �� ���",	// 16
	"��������� �� �� ",	// 17
	//!----------------
	"   ��� ������   ",	// 18
	"  ��� ��������  ",	// 19
	"  ��� ��� ����  ",	// 20
	" �� ������ ���� ",	// 21
	" �� ������ ���� ",	// 22
	" ��� ���������� ",	// 23
	"������ �� ������",	// 24
	"  �������� ���� ",	// 25
	"  ������ ��/��  ",	// 26
	"     ������     ",	// 27
	"����� ���.������",	// 28
	"��� �� ���������",	// 29
	"��� �� ���������",	// 30
	"     ������     ",	// 31
	"     ������     ",	// 32
	"     ������     ",	// 33
	"     ������     ",	// 34
	//!----------------
	"   ��� ������   ",	// 35
	"��� ���� ���� R ",	// 36
	"��� ���� ���� S ",	// 37
	"��� ���� ���� T ",	// 38
	"���� ���� ���� R",	// 39
	"���� ���� ���� S",	// 40
	"���� ���� ���� T",	// 41
	"����� ����� ��� ",	// 42
	"��������/����� U",	// 43
	"���� ���� ���� R",	// 44
	"���� ���� ���� S",	// 45
	"���� ���� ���� T",	// 46
	"���� ���� R 47% ",	// 47
	"���� ���� S 47% ",	// 48
	"���� ���� T 47% ",	// 49
	"  ��� ��� ����  ",	// 50
	"     ������     ",	// 51
//!---------------
	"   ��� ������   ",	// 52
	"  ����� ���� U  ",	// 53
	"  ����� ���� V  ",	// 54
	"  ����� ���� W  ",	// 55
	"��-��� ���������",	// 56
	"     ������     ",	// 57
	"   �� ���� U    ",	// 58
	"   �� ���� V    ",	// 59
	"   �� ���� W    ",	// 60
	"     ������     ",	// 61
	"     ������     ",	// 62
	" ��������� ���  ",	// 63
	" �������� ����  ",	// 64
	"     ������     ",	// 65
	"     ������     ",	// 66
	"     ������     ",	// 67
	"     ������     ",	// 68
	//!----------------
	"   ��� ������   ",	// 69
	"���� ���� ����� ",	// 70
	" ���� ������ 1  ",	// 71
	" ���� ������ 2  ",	// 72
	"   ���� �����   ",	// 73
	"���� ���� ������",	// 74
	" �������� ����� ",	// 75
	"���������� �����",	// 76
	"  ���� ��/��    ",	// 77
	#if BUR_M
	"     ������     ",	// 78
	#else
	"���������� �����",	// 78
	#endif
	"     ������     ",	// 79
	"     ������     ",	// 80
	"���� �������� ��",	// 81
	"�� ������ ����� ",	// 82
	"     ������     ",	// 83
	"     ������     ",	// 84
	"  ���� �������  ",	// 85
	//!----------------
	"  ��� ��������  ",	// 86
	"  ���� �������  ",	// 87
	"  ���� �������  ",	// 88
	"   ���� ����    ",	// 89
	"    ���� ��     ",	// 90
	"    ���� ��     ",	// 91
	"���� �����������",	// 92
	"     ������     ",	// 93
	"     ������     ",	// 94
	"     ������     ",	// 95
	"     ������     ",	// 96
	"     ������     ",	// 97
	"     ������     ",	// 98
	"     ������     ",	// 99
	"     ������     ",	// 100
	"     ������     ",	// 101
	"     ������     ",	// 102
	//!----------------
#if BUR_M
	"  ��� ��������  ",	// 103
	"    ������      ",	// 104
	"    ������      ",	// 105
	"     �����      ",	// 106
	"     ������     ",	// 107
	"    ������      ",	// 108
	"     �������    ",	// 109
	"     �������    ",	// 110
	"     �������    ",	// 111
	" �������������  ",	// 112
	"     ������     ",	// 113
	"     ������     ",	// 114
	"     ������     ",	// 115
	"     ������     ",	// 116
	"     ������     ",	// 117
	"     ������     ",	// 118
	"     ������     ",	// 119
#else
	"  ��� ��������  ",	// 103
	"    ������      ",	// 104
	"    �������     ",	// 105
	"    �������     ",	// 106
	"     �����      ",	// 107
	"  �����������   ",	// 108
	"  �����������   ",	// 109
	"     ��/��      ",	// 110
	"  ������������� ",	// 111
	"     ������     ",	// 112
	"     ������     ",	// 113
	"     ������     ",	// 114
	"     ������     ",	// 115
	"     ������     ",	// 116
	"     ������     ",	// 117
	"     ������     ",	// 118
	"     ������     ",	// 119
#endif
	//!----------------
	" ��� ���������� ",	// 120
	" ������ ������� ",	// 121
	" ������ ������� ",	// 122
	"������ ���������",	// 123
	//!----------------
	"    ��������    ",	// 124
	"    ��������    ",	// 125
	//!----------------
	"  �� ���������  ",	// 126
	" ��� ���������� ",	// 127
	"���������� ���� ",	// 128
	"���������� ���� ",	// 129
	"��� ���� � ���� ",	// 130
	//!----------------
	"     ������     ",	// 131
	"    ��������    ",	// 132
	//!----------------
	"������ �������� ",	// 133
	"�������� �� ��� ",	// 134
	//!----------------
	"    ��������    ",	// 135
	"  ����� ������  ",	// 136
	"    ����� ��    ",	// 137
	"    ����� ��    ",	// 138
	//!----------------
	" ��� ���������� ",	// 139
	"������ �������� ",	// 140
	"������ �������� ",	// 141
	//!----------------
	"   ���������    ",	// 142
	"    ��������    ",	// 143
	//!----------------
	"      24�       ",	// 144
	"      220�      ",	// 145
	//!----------------
	"    2400 ���    ",	// 146
	"    4800 ���    ",	// 147
	"    9600 ���    ",	// 147
	"   19200 ���    ",	// 149
	"   38400 ���    ",	// 150
	"   57600 ���    ",	// 151
	"   115200 ���   ",	// 152
	//!----------------
	"   ���������    ",	// 153
	" ����� �� ����� ",	// 154
	"��� �� �����/�� ",	// 155
	"����� � ������� ",	// 156
	//!----------------
	"  ��� �������   ",	// 157
	"     ������     ",	// 158
	"    ��������    ",	// 159
	//!----------------
	"  ��� �������   ",	// 160
	"    ��������    ",	// 161
	//!----------------
	"  ��� �������   ",	// 162
	"      ����      ",	// 163
	"    �������     ",	// 164
	"    �������     ",	// 165
	"  ������� ����  ",	// 166
	"  ������� ����  ",	// 167
	"     ������     ",	// 168
	"     ������     ",	// 169
	"     ������     ",	// 170
	//!----------------
	"  ��� �������   ",	// 171
	"�������� ����. 1",	// 172
	"�������� ����. 0",	// 173
	"��������� ������",	// 174
	//!----------------
	"   ��� v 0.013  ",	// 175
	"   ��� v 0.014  ",	// 176
	//!----------------
	"� ��������������",	// 177
	"    ���������   ",	// 178
	"    ���������   ",	// 179
	//!----------------
	" ��� ���������  ",	// 180
	"  ���������/10  ",	// 181
	//!----------------
	" �� ����������  ",	// 182
	"������ �������� ",	// 183
	"������ �������� ",	// 184
	//!----------------
	"    �������     ",	// 185
	" �������������� ",	// 186
	"  ������������� ", // 187
	//!----------------
	"    ��������    ",	// 188
	"    �������     ",	// 189
	//!----------------
	"����������� ����",	// 190
	"����������� ����",	// 191
	//!----------------
	" ������ ������  ",	// 192
	" ����� �������� ",	// 193
	" �������� ����  ",	// 194
	" ����� �������� ",	// 195
	" ����� ����-��  ",	// 196
	"  ���� ������   ",	// 197
	"  ���� �������  ",	// 198
	"     ������     ",	// 199
	"     ������     ",	// 200
	"    ��������    ",	// 201
	"  ������� ����  ",	// 202
	"  ������� ���   ",	// 203
	" ���� ��������  ",	// 204
	"     ������     ",	// 205
	"     ������     ",	// 206
	"     ������     ",	// 207
	"     ������     ",	// 208
	//!----------------
	" ��� ���������  ",	// 209
	"������ ��� � ���",	// 210
	"���� ���������� ",	// 211
	//!----------------
	"������� �� �����",	// 212
	" ������ ���. � 1",	// 213
	//!----------------
	" BLUEGIGA WT41-A",	// 214
	" Silicon BGM210P",	// 215
	//!----------------
	"    �������     ",	// 216
	"    ��������    ",	// 217
	//!----------------
	"     ������     ",	// 218
	"     ������     ",	// 219
	//!----------------
	"  ����� �����   ",	// 220
	"  ������ �����  ",	// 221
	//!----------------
	"  �� ��������   ",	// 222
	"�� ��� � �������",	// 223
	" ������ ���     ",	// 224
	" ������ ���     ",	// 225
	//!----------------
	"  ��� ��������  ",	// 226
	" �� ����������  ",	// 227
	"  �� ��������   ",	// 228
	//!----------------
    "�� ���������    ",	// 229
	"���-100 �.25 �  ",	// 230
	"���-100 �.50 �  ",	// 231
	"���-400 �.20 �  ",	// 232
	"���-400 �.50 �  ",	// 233
	"���-800 �.40 �  ",	// 234
	"���-1000 �.20 � ",	// 235
	"���-4000 �.9 �  ",	// 236
	"���-4000 �.18 � ",	// 237
	"���-10000 �.6 � ",	// 238
	"���-10000 �.12 �",	// 239
	"���-100 �.25 �  ",	// 240
	"���-100 �.50 �  ",	// 241
	"���-400 �.20 �  ",	// 242
	"���-400 �.50 �  ",	// 243
	"���-800 �.40 �  ",	// 244
	"���-1000 �.20 � ",	// 245
	"���-4000 �.9 �  ",	// 246
	"���-4000 �.18 � ",	// 247
	"���-10000 �.6 � ",	// 248
	"���-10000 �.12 �",	// 249
	"���-400 �.40 �  ",	// 250
	"���-400 �.20 �2 ",	// 251
	"���-10� �.12 �2 ",	// 252
	"���-10� �.6 �2  ",	// 253
	//!----------------
	"  OLED WINSTAR  ",	// 254
	"   VAC FUTABA   ",	// 255
	//!----------------
	"��������. ������",	// 256
	"���������� �����",	// 257
	//!----------------
	" ���� ��������  ", // 258
	" ���� ��������  ", // 259
	//!----------------
	"  AVAGO         ", // 260
	"  ��� ��        ", // 261
	//!----------------
	"  ��� �������   ",	// 262
	"    ��������    ",	// 263
	"    ���������   ",	// 264
	//!----------------
	"   �� ��������  ",	// 265
	"���� � ������ ��",	// 266
	//!----------------
	"  0 x �������   ",	// 267
	"  ��� ��������� ",	// 268
	"  2 x �������   ",	// 269
	"  3 x �������   ",	// 270
	"  4 x �������   ",	// 271
	"  5 x �������   ",	// 272
	//!----------------
	"    ��������    ",	// 273
	"���������� ���� ",	// 274
//! ������ �����
};

const struct MENU_STRING AddStr[] = {
	"��������� ������",	// 0
	"    �������     ",	// 1
	"    ��������    ",	// 2
	"  � 999.99%     ",	// 3
	//-----------------------------------------------
	"����. ���������?",	// 4	0
	"    ��  ���     ",	// 5
	" ������ ������  ",	// 6	1
	"����������  ��  ",	// 7
	" ��� ���������� ",	// 8	2
	" ����  ���.���� ",	// 9
	"�������� � �����",	// 10	3
	" �������   ��   ",	// 11
	"�������� � �����",	// 12	4
	" �������   ��   ",	// 13
	"�������� � �����",	// 14	5
	"���������   ��  ",	// 15
	"   ���������    ",	// 16	6
	"   ����  ����   ",	// 17
	"��������� �����?",	// 18	7
	"    ��  ���     ", // 19
	"   ������� �    ",	// 20	8
	"    �������     ", // 21
	"   ���������    ",	// 22	9	// ����� ��������� ������� �������
	"                ", // 23
	"����� ��������? ",	// 24	10
	"    ��  ���     ", // 25
	"   ������� �    ",	// 26	11
	"    �������     ", // 27
	" ������� �����? ",	// 28	12
	"    ��  ���     ", // 29
	"������� ������� ",	// 30	13
	"  �������   ��  ", // 31
	" ���������� ��  ", // 32
	" �������������  ", // 33
	//--------------------------------
	"��� �����������.",	// 34
	" ������� '����' ", // 35
	" �������������� ",	// 36
	"�����. ���������", // 37
	"   ��������     ",	// 38
	"  ��� �������   ", // 39
	"   ��� �������  ",	// 40
	"     �������    ", // 41
	"���������� �����",	// 42
	"  ��� �������   ", // 43
	" ��������� ���� ",	// 44
	"  �� ���������! ", // 45
	//--------------------------------
	"���������� �����",	// 46
	"����������� ����", // 47
	"���������� �����",	// 48
	"����������� ����", // 49
	//--------------------------------
	"���������� ����.",	// 50
	"�����. '*' *2* �", // 51
	" ������ ������� ",	// 52
	"   ���������    ", // 53
	//--------------------------------
	"�������� ������.", // 54
	"������� �������.", // 55
	"��������� ���� �", // 56
	"     �������    ", // 57
	"     �������    ", // 58
	"  ����������� ��", // 59
	"    ���������   ", // 60
	"������ ���������", // 61
	"    ��������    ", // 62
	" ���������� ����", // 63
	"   � ������ ��  ", // 64
};


// ������������� ����� ��� ������ �������
Int VoltArray[CUB_COUNT1] = {160, 190,  220,  250};
Int CurrArray[CUB_COUNT2] = {400, 800, 1200, 1600, 2000, 3000};	// ������� 3000 PIA 19.05.15
Int AnUIArray[CUB_COUNT2] = { 25,  35,   50,   65, 70,   80};	// ������� 70 	PIA 19.05.15
Int TorqArray[CUB_COUNT2] = { 25,  35,   50,   75,  100, 120};	// ������� 120 	PIA 19.05.15

#if !TORQ_TEST
TCubConfig TqCurr  = {(Int *)&Ram.GroupH.Umid, VoltArray, (Int *)&Imidpr, CurrArray};
TCubConfig TqAngUI = {(Int *)&Ram.GroupH.Umid, VoltArray, (Int *)&Ram.GroupA.AngleUI, AnUIArray};
TCubConfig TqAngSf = {(Int *)&Ram.GroupH.Umid, VoltArray, (Int *)&Dmc.TorqueSetPr, TorqArray};
#else
TCubConfig TqCurr  = {(Int *)&TqUmid, VoltArray, (Int *)&TqImidPr,        CurrArray};
TCubConfig TqAngUI = {(Int *)&TqUmid, VoltArray, (Int *)&TqAnUI,          AnUIArray};
TCubConfig TqAngSf = {(Int *)&TqUmid, VoltArray, (Int *)&Dmc.TorqueSetPr, TorqArray};
#endif



char Icons[NUM_ICONS][7] =	{
				0x1F,0x11,0x1F,0x04,0x06,0x04,0x07,
				0x1F,0x11,0x11,0x1F,0x04,0x1F,0x00,
				0x06,0x15,0x0D,0x06,0x0D,0x015,0x06,
				0x0E,0x11,0x11,0x11,0x1F,0x1B,0x1F,
				0x0E,0x11,0x10,0x10,0x1F,0x1B,0x1F,
				};



#endif	//CREATE_STRUCTS


// ������ ������ ������ �� ����. ������ add_strings
#define ReadAddStr(Str, Index) \
	PFUNC_blkRead((int16*)&AddStr[Index], (int16*)Str, 16)

// ������ ������ ������ �� ����. ������ add_strings
#define ReadValuesStr(Str, Index) \
	PFUNC_blkRead((int16*)&values[Index], (int16*)Str, 16)

extern const struct MENU_GROUP  groups[];
extern const struct MENU_PARAM  params[];
extern const struct MENU_STRING values[];
extern const struct MENU_STRING AddStr[];
extern TCubConfig TqCurr;
extern TCubConfig TqAngUI;
extern TCubConfig TqAngSf;
extern char Icons[NUM_ICONS][7];



#endif
