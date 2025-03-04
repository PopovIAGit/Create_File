#ifndef _PARAMS_H_
#define _PARAMS_H_

#define BUSY_STR_ADR		0
#define CMD_CANC_ADR		1
#define EXPR_STR_ADDR		4
#define NO_PHORD_ADDR		32
#define ROD_TYPE_ADDR		34
#define CONFIRM_ADDR		36
#define CORR_PASS_ADDR		38
#define WRONG_PASS_ADDR		40
#define PASS_RESET_ADDR		42
#define EDIT_DISABLE_ADDR	44
#define CODE_DONT_MATCH_ADDR	46
#define ENC_TEST_ON			48
#define DO_LAUNCH_ADDR		50
#define TO_OPENED_ADDR		51
#define TO_CLOSED_ADDR		52
#define ENC_TEST_OVER_ADDR	53
#define ENC_SUCCESS_ADDR	55
#define ENC_FAIL_ADDR		57

#define NUM_ICONS		5
#define CODE_ICO		0x00
#define CONN_ICO		0x01
#define BT_ICO			0x02
#define CODEON_ICO      0x03
#define CODEOFF_ICO     0x04

#ifdef CREATE_STRUCTS

#define GR_INIT(GR, D)		GetAdr(GR) + D, sizeof(T##GR) - D

const struct MENU_GROUP groups[] = {
    //! ������
	"   1 ������ A   ", "    ���������   ", GR_INIT(GroupA, 0),	//{Show}	
	"   2 ������ B   ", "����� ��������� ", GR_INIT(GroupB, 0),	//{User}
	"   3 ������ C   ", "����� ��������� ", GR_INIT(GroupC, 0),	//{Factory}
	"   4 ������ D   ", "    �������     ", GR_INIT(GroupD, 0),	//{Command}
//  "   5 ������ G   ", "  ������������  ", GR_INIT(GroupE, 0),	//{None}
	"   6 ������ E   ", "     ������     ", GR_INIT(GroupE, 2)	//{Hide}
//  "   7 ������ T   ", "  �����         ", GR_INIT(GroupE, 0), //{None}
//  "   8 ������ H   ", "  �������       ", GR_INIT(GroupE, 0), //{Hide}
    //! ������ �����
};

const struct MENU_PARAM params[] = { 	
//! ���������
//! ������ T ����� {None}    	
"R0.��������. ���", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {0, Regular,  }
"R1.������� �����", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }
"R2.��������� � %", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }
"R3.������ ������", "    ", 	0,  65535,  	0, MT_DEC|M_RMAX(4),					// {3, Regular,  }
"R4.������� �����", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }
"R5.������       ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {5, Regular,  }
"R6.��� ���� U   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {6, Regular,  }
"R7.������       ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {7, Regular,  }
"R8.������       ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {8, Regular,  }
"R9.������       ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {9, Regular,  }
"R10.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }0, Regular,  }
"R11.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }1, Regular,  }
"R12.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }2, Regular,  }
"R13.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }3, Regular,  }
"R14.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }4, Regular,  }
"R15.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }5, Regular,  }
"R16.���������� R", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }6, Regular,  }
"R17.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }7, Regular,  }
"R18.��������    ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }8, Regular,  }
"R19.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }9, Regular,  }
"R20.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }0, Regular,  }
"R21.������� ����", "    ", 	0,  65535,  	0, MT_DEC|M_NVM|M_RMAX(4),				// {2, Regular,  }1, Regular,  }
"R22.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }2, Regular,  }
"R23.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }3, Regular,  }
"R24.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }4, Regular,  }
"R25.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }5, Regular,  }
"R26.����� ������", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }6, Regular,  }
"R27.�����. �����", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }7, Regular,  }
"R28.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }8, Regular,  }
"R29.������ ��   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }9, Regular,  }
"R30.������� ���2", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }0, Regular,  }
"R31.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }1, Regular,  }
"R32.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }2, Regular,  }
"R33.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }3, Regular,  }
"R34.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }4, Regular,  }
"R35.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }5, Regular,  }
"R36.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }6, Regular,  }
"R37.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }7, Regular,  }
"R38.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }8, Regular,  }
"R39.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }9, Regular,  }
//! ������ B ����� ��������� {User}
"B0.������ ����  ", "�*� ",		1,	   10,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }0, Regular,  }
"B1.������ ����  ", "�*� ",		1,	   10,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }1, Regular,  }
"B2.��� ��� ���� ", "�*� ",		1,	   10,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }2, Regular,  }
"B3.��� ���� ����", "�*� ", 	1,     10,  	4, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }3, Regular,  }
"B4.��� ��� ���� ", "�*� ", 	1,     10,  	2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }4, Regular,  }
"B5.��� ���� ����", "�*� ", 	1,     10,  	4, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }5, Regular,  }
"B6.��� �������� ", "    ", 	0,      1,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(124),			// {4, Regular,  }6, Regular,  }
"B7.��� �������� ", "    ", 	1,      4,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(126),			// {4, Regular,  }7, Regular,  }
"B8.��� �����    ", "    ", 	0,      1,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(131),			// {4, Regular,  }8, Regular,  }
"B9.���� ������� ", "����", 	0,   3000,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }9, Regular,  }
"B10.���� �������", "����", 	0,   3000,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),	// {5, Regular,  }0, Regular,  }
"B11.���� ������ ", "����", 	0,    100,      0, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),	// {5, Regular,  }1, Regular,  }
"B12.��� ������� ", "    ", 	0,  65530,  	0, M_CODE,									// {5, Regular,  }2, Regular,  }
"   B13.�����    ", "    ", 	0,  65530,  	0, M_TIME|M_PWP1,							// {5, Regular,  }3, Time,  }
"   B14.����     ", "    ", 	0,  65530,  	0, M_DATE|M_PWP1,							// {5, Regular,  }4, Date,  }
"B15.���� �����  ", "�   ", -300U,    300,  	0, MT_DEC|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),	// {5, Regular,  }5, Regular,  }
"B16.������� ����", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(133),			// {5, Regular,  }6, Regular,  }
"B17.����� ��/�� ", "    ", 	0,      3,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(135),			// {5, Regular,  }7, Regular,  }
"B18.����� ��� ��", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(139),			// {5, Regular,  }8, Regular,  }
"B19.���� �����  ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(142),			// {5, Regular,  }9, Regular,  }
"B20.����� ������", "�   ", 	1,    100,  	2, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),	// {6, Regular,  }0, Regular,  }
"B21.��� �� ���� ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(144),			// {6, Regular,  }1, Regular,  }
"B22.���� �� ����", "    ", 	0,     31,  	4, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),			// {6, Regular,  }2, Regular,  }
"B23.���� ��� ���", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),			// {6, Regular,  }3, Regular,  }
"B24.���� �����  ", "    ", 	0,      6,  	3, MT_STR|M_PWP1|M_NVM|M_SADR(146),			// {6, Regular,  }4, Regular,  }
"B25.����� ����� ", "    ", 	1,    247,  	1, MT_DEC|M_PWP1|M_NVM|M_RMAX(2),			// {6, Regular,  }5, Regular,  }
"B26.����� ����� ", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(226),			// {6, Regular,  }6, Regular,  }
"B27.������ ���� ", "    ", 	0,      3,  	3, MT_STR|M_PWP1|M_NVM|M_SADR(153),			// {6, Regular,  }7, Regular,  }
"B28.������ ���� ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(188),			// {6, Regular,  }8, Regular,  }
"B29.������.� ���", "    ", 	0,      2,  	2, MT_STR|M_PWP1|M_NVM|M_SADR(179),			// {6, Regular,  }9, Regular,  }
"B30.���� �� ����", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(176),			// {7, Regular,  }0, Regular,  }	���������� ������� �� ���������� ��� ��� 04.12.19
"B31.��� ��� ����", "�*� ",  2000,  20000,   5000, MT_DEC|M_PWP1|M_NVM|M_RMAX(4), 			// {7, Regular,  }1, Regular,  }
"B32.����.���.���", "�   ", 	3,     30,     30, MT_DEC | M_PWP1 | M_NVM | M_RMAX(2) | M_PREC(1),	// {7, Regular,  }1, Regular,  }
"B33.���� ������ ", "��  ", 	1,   1000,    100, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),	// {7, Regular,  }3, Regular,  }
"B34.��� ������� ", "    ",     0,      5,      0, MT_STR|M_PWP1|M_NVM|M_SADR(192),			// {7, Regular,  }4, Regular,  }
"B35.������ �����", "C   ",     0,   6000,      0, MT_DEC|M_PWP1|M_NVM|M_RMAX(3),			// {7, Regular,  }5, Regular,  }
"B36.�� ���/���� ", "    ", 	0,      7,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(2), 			// {7, Regular,  }6, Regular,  }
"B37.��.����.����", "�   ", 	3,    100,     50, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),	// {7, Regular,  }7, Regular,  }   ������ �� ��� "��-������" � ���-05-05-08/36443 �� 24.12.2024
"B38.������ � ���", "    ", 	0,      1,  	0, MT_STR | M_PWP1 | M_NVM |M_SADR(218),	// {7, Regular,  }8, Regular,  }
"B39.BLUETOOTH   ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_SADR(188),				// {7, Regular,  }9, Regular,  }
"   B40.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }0, Regular,  }
"   B41.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }1, Regular,  }
"   B42.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }2, Regular,  }
"   B43.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }3, Regular,  }
"   B44.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }4, Regular,  }
"   B45.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }5, Regular,  }
"   B46.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }6, Regular,  }
"   B47.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }7, Regular,  }
"   B48.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }8, Regular,  }
"   B49.������   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }9, Regular,  }
//! ������ C ����� ��������� {Factory}
"�0.��� �������  ", "    ",     0,  65530,      0, M_CODE,									// {9, Regular,  }0, Regular,  }
"   C1.������    ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {9, Regular,  }1, Regular,  }
"�2.��� ��������.", "    ",     0,     99,     15, MT_DEC|M_PWP2|M_NVM|M_RMAX(1),			// {9, Regular,  }2, ProductYear,  }
"�3.����� �����  ", "    ",     0,   9999,      0, MT_DEC|M_PWP2|M_NVM|M_RMAX(3),			// {9, Regular,  }3, FactoryNumber,  }
"�4.���� ������  ", "��*�",    10,   2000,    100, MT_DEC|M_PWP2|M_NVM|M_RMAX(3)|M_PREC(2),	// {9, Regular,  }4, Regular,  }
"�5.��������� ���", "A   ",     1,    500,     50, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),	// {9, Regular,  }5, Regular,  }
"�6.�� ��������� ", "    ",     1,  65530,  20000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(2),	// {9, Regular,  }6, Regular,  }
"C7.���.����� �� ", "%   ",     0,    100,      0, MT_DEC|M_RONLY|M_RMAX(2),				// {9, Regular,  }7, Regular,  }
"C8.���� ���� �� ", "%   ",     0,    100,     50, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {9, Regular,  }8, Regular,  }
"C9.���� �����   ", "    ",     0,     15,      0, MT_BIN|M_PWP2|M_NVM|M_RMAX(3),			// {9, Regular,  }9, Regular,  }
"C10.��������� ��", "    ",     0,  65535,      0, MT_VERS|M_RONLY|M_NVM|M_PREC(2)|M_RMAX(4),// {1, Regular,  }00, Regular,  }
"C11.����.������.", "    ",     0,      3,      1, MT_DEC|M_PWP2|M_NVM|M_RMAX(0),			// {1, Regular,  }01, Regular,  }
"�12.����� ������", "    ",     0,     50,      0, MT_DEC|M_PWP2|M_RMAX(1),					// {1, Regular,  }02, Regular,  }
//-----------------------�������������� ���������
"�13.����� ����� ", "    ",     0,    100,      2, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }03, Regular,  }
"�14.��� ���� ���", "C   ",     0,    900,     30, MT_DEC|M_PWP2|M_NVM|M_RMAX(1),			// {1, Regular,  }04, Regular,  }
"C15.�� ��� �����", "C   ",     0,     30,     30, MT_DEC|M_PWP2|M_NVM|M_RMAX(1),			// {1, Regular,  }05, Regular,  }
"C16.�� ���������", "    ",     0,      1,      0, MT_STR|M_PWP2|M_SADR(157),				// {1, Regular,  }06, Regular,  }
"�17.������. ����", "    ",     0,   1000,    200, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }07, Regular,  }
"�18.���.���.����", "    ",     0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(185),			// {1, Regular,  }08, Regular,  }
//-----------------------����������
"�19.���� ������.", "����",    60,    165,     95, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }09, Regular,  }
"�20.����� ������", "C   ",     0,     50,     10, MT_DEC|M_PWP2|M_NVM|M_RMAX(1)|M_PREC(1),	// {1, Regular,  }10, Regular,  }
"�21.���� ������.", "����",     0,    100,     10, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }11, Regular,  }
"C22.��� ���� ���", "    ",     0,  65535,    700, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),			// {1, Regular,  }12, Regular,  }
"�23.���� ��� ���", "����",    60,    165,    108, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }13, Regular,  }
"�24.���� ��� ���", "C   ",     0,     50,      3, MT_DEC|M_PWP2|M_NVM|M_RMAX(1)|M_PREC(1),	// {1, Regular,  }14, Regular,  }
"�25.������.����.", "    ",     0,      2,      1, MT_STR|M_PWP2|M_NVM|M_SADR(222),			// {1, Regular,  }15, Regular,  }
//-----------------------���� ��������
"�26.������ �����", "�   ",     5,   3600,	  600, MT_DEC|M_PWP2|M_NVM|M_RMAX(3), 			// {1, Regular,  }16, Regular,  }
"�27.��� ���� ���", "    ",     0,  65530,      0, MT_DEC|M_RONLY|M_RMAX(4),				// {1, Regular,  }17, Regular,  }
"C28.���� ���� ��", "    ",     0,  65535,  15000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),			// {1, Regular,  }18, Regular,  }  // ��� ������ ����� - 3000
"�29.�� ��-N ��� ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4)|M_PREC(1),		// {1, Regular,  }19, Regular,  }
"�30.�� ����� ���", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4)|M_PREC(1),		// {1, Regular,  }20, Regular,  }
"�31.�� �� ����� ", "�   ",     1,  20000,      3, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),	// {1, Regular,  }21, Regular,  }
"�32.�� ������ ��", "�   ",    10,  20000,     80, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),	// {1, Regular,  }22, Regular,  }
"�33.���� ���� ��", "%   ",     1,    100,     47, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }23, Regular,  }
"�34.���� ���� ��", "��  ",     1,   1000,     80, MT_DEC|M_PWP2|M_NVM|M_RMAX(3), 			// {1, Regular,  }24, Regular,  }
//----------------------��������� ��������
"�35.���� ���� ��", "����", -100U,    100,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }25, Regular,  }
"�36.���� ���� ��", "����", -100U,    100,    	0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }26, Regular,  }
"�37.TSENS 1:    ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(3),					// {1, Regular,  }27, Regular,  }
"�38.� ���� ���� ", "M�C ",     0,  65530,   5000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(2),		// {1, Regular,  }28, Regular,  }
"�39.� ���� ���� ", "M�C ",     0,  65530,   5000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(2),		// {1, Regular,  }29, Regular,  }
"�40.��� ����.�.1", "    ", -100U,    100,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }30, Regular,  }
"�41.��� ����.�.2", "    ", -100U,    100,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }31, Regular,  }
"�42.��� ����.�.3", "    ", -100U,    100,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }32, Regular,  }
"�43.��� BLUET-TH", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(236),				// {1, Regular,  }33, Regular,  }
"�44.����.����.��", "    ",     0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(240),				// {1, Regular,  }34, Regular,  }
"�45.�� ����� ���", "�   ",     0,  65535,      0, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),		// {1, Regular,  }34, Regular,  }
"�46.�����.MODBUS", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(229),				// {1, Regular,  }36, Regular,  }
"C47.������� ��� ", "    ",     0,  65530,   4100, M_FACT|M_RMAX(4),							// {1, Regular,  }37, Regular,  }
"C48.���� ���    ", "    ",-10000U, 10000,      0, M_FACT|M_SIGN|M_RMAX(4),						// {1, Regular,  }38, Regular,  }
"C49.��� �������.", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(247),				// {1, Regular,  }39, Regular,  }
"�50.�����.RS-485", "�   ",    10,     50,     15, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }40, Regular,  }
"�51.��� ��������", "    ", 	0,      1,  	1, MT_STR|M_PWP2|M_NVM|M_SADR(232),				// {1, Regular,  }41, Regular,  }
"�52.����. �� ���", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(220),				// {1, Regular,  }42, Regular,  }
"�53.��� ��� ����", "    ", 	0,     10,  	0, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),				// {1, Regular,  }17, Regular,  }
//----------------------������������ �����
"C54.��� ���� U  ", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }44, Regular,  }
"C55.� ���� U 47%", "B   ",   220,    600,    324, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }45, Regular,  }
"C56.T ���� U 47%", "C   ",     1,    200,     20, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }46, Regular,  }
"�57.���� ����� U", "B   ",   220,    335,    265, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }47, Regular,  }
"�58.�� ���. U ��", "C   ",     1,    200,     10, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }48, Regular,  }
"�59.�� ���. U ��", "C   ",     1,    250,    210, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }49, Regular,  }
"C60.��� ��� U   ", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }50, Regular,  }
"�61.���� ����� U", "B   ",    90,    220,    130, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }51, Regular,  }
"�62.�� ��� U �� ", "C   ",     1,    200,     10, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }52, Regular,  }
"�63.�� ��� U �� ", "C   ",     1,    250,    210, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }53, Regular,  }
"�64.�� ����� ���", "    ",     0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(188),				// {1, Regular,  }54, Regular,  }
"�65.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }55, Regular,  }
"�66.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }56, Regular,  }
"C67.��� ����� U ", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153), 			// {1, Regular,  }57, Regular,  }
"�68.���� ����� U", "�   ",     0,    110,     70, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }58, Regular,  }
"�69.�� ��� U ��.", "    ",    10,    500,    195, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),				// {1, Regular,  }59, Regular,  }
"�70.���� ����� U", "C   ",     1,    200,     50, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }60, Regular,  }
"�71.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }61, Regular,  }
"C72.��� ����� I ", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }62, Regular,  }
"C73.���� ����� I", "%   ",    20,    500,    200, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }63, Regular,  }
"C74.���� ����� I", "C   ",     1,    100,     20, MT_DEC|M_PWP2|M_NVM|M_RMAX(1)|M_PREC(1),		// {1, Regular,  }64, Regular,  }
"C75.��-��� ���  ", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }65, Regular,  }
"�76.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }66, Regular,  }
"�77.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }67, Regular,  }
"�78.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }68, Regular,  }
"�79.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }69, Regular,  }
"�80.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4), 					// {1, Regular,  }70, Regular,  }
"�81.������      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }71, Regular,  }
"C82.����.� 25%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }72, Regular,  }
"�83.����.� 35%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }73, Regular,  }
"�84.����.� 50%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }74, Regular,  }
"�85.����.� 75%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }75, Regular,  }
"�86.����.� 100% ", "    ",  -10U,     15,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }75, Regular,  }
"�87.���� �� �� N", "    ",   100,  20000,   3000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),				// {1, Regular,  }77, Regular,  }
"C88.������ �� ��", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }78, Regular,  }
"�89.������� ��  ", "    ",     0,  32767,  24000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),				// {1, Regular,  }79, Regular,  }
"�90.��� ��� ����", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(251),				// {1, Regular,  }80, Regular,  }
"�91.����� ������", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }81, Regular,  }
"C92.��� ��� ����", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }82, Regular,  }
"C93.�����/������", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }83, Regular,  }
"�94.�� ��� �� ��", "����",     0,    120,     90, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }84, Regular,  }
"�95.�� ��� �� ��", "����",     0,    120,    100, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }85, Regular,  }
"�96.�� ������ ��", "����",  -50U,      0,   -35U, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }86, Regular,  }
"�97.�� ��� ���� ", "����",  -40U,     10,     10, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }87, Regular,  }
"�98.�� ���� ����", "����",  -20U,     50,     30, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }88, Regular,  }
"�99.�� ��� �� ��", "��� ",     0,     10,      0, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),		// {1, Regular,  }89, Regular,  }
"C100.�� ����� ��", "����",     1,    170,    110, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }90, Regular,  }
"�101.���� ������", "    ",     0,      1,      0, MT_DEC|M_RMAX(0),							// {1, Regular,  }91, Regular,  }
"C102.����� �����", "C   ",     1,    200,     25, MT_DEC|M_PWP2|M_NVM|M_PREC(1)|M_RMAX(2),		// {1, Regular,  }92, Regular,  }
"C103.��� ��� ���", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153), 			// {1, Regular,  }93, Regular,  }
"�104.�� ��� ��� ", "�   ",     1,    600,     20, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }94, Regular,  }
"�105.����� ��/��", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),   			// {1, Regular,  }95, Regular,  }
"�106.�� ���� RTC", "    ",     0,      1,      1, MT_STR|M_PWP2|M_SADR(142),					// {1, Regular,  }96, Regular,  }
"�107.���� ���� �", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(234),				// {1, Regular,  }97, Regular,  }
//--------------------��������� ��������
"�108.��� ��� ���", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(238),				// {1, Regular,  }98, Regular,  }
"�109.����. 25%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {1, Regular,  }99, Regular,  }																						
"�110.����. 35%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }00, Regular,  }
"�111.����. 50%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }01, Regular,  }
"�112.����. 75%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }02, Regular,  }
"�113.����. 100% ", "    ",  -10U,     15,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }03, Regular,  }
"�114.��� ����� �", "    ",  -30U,     30,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }04, Regular,  }
"�115.��� ����� �", "    ",  -30U,     30,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1), 		// {2, Regular,  }05, Regular,  }
"�116.���� � ����", "    ",     0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(188),				// {2, Regular,  }06, Regular,  }
"�117.�������� Mb", "    ",     1,      5,      2, MT_STR|M_PWP2|M_NVM|M_SADR(212),				// {2, Regular,  }07, Regular,  }
"�118.����� �����", "    ",   -3U,      3,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }08, Regular,  }
"�119.���� ��� ��", "��� ",     1,     50,     14, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),		// {2, Regular,  }09, Regular,  }
//! ������ D ������� {Command}
"D0.������� ���� ", "    ",      0,      2,      0, M_COMM|M_SADR(157),							// {2, Regular,  }10, Regular,  }
"D1.������� ���� ", "    ",      0,      2,      0, M_COMM|M_SADR(157),							// {2, Regular,  }11, Regular,  }
"D2.���� �� ���� ", "��  ",      0,   3000,      0, M_DCOM|M_RMAX(3)|M_PREC(1),					// {2, Regular,  }12, Regular,  }
"D3.���� �� ���� ", "��  ",      0,   3000,      0, M_DCOM|M_RMAX(3)|M_PREC(1),					// {2, Regular,  }13, Regular,  }
"  D4.������     ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }14, Regular,  }
"D5.����� ������ ", "    ",      0,      1,      0, M_COMM|M_SADR(160),							// {2, Regular,  }15, Regular,  }
"D6.������ ������", "    ",      0,      5,      0, M_COMM|M_SADR(162),							// {2, Regular,  }16, Regular,  }
" D7.����� ����� ", "    ",      0,      1,      0, M_COMM|M_SADR(160),							// {2, Regular,  }17, Regular,  }
" D8.�� ���������", "    ",      0,      1,      0, M_COMM|M_SADR(157),							// {2, Regular,  }18, Regular,  }
"D9.���� ��������", "    ", 	 0,      2,      0, M_COMM|M_SADR(255),							// {2, Regular,  }19, Regular,  }
"D10.����� ������", "    ",      0,      1,     0, M_COMM|M_SADR(160),							// {2, Regular,  }20, Regular,  }
"D11.����� ����� ", "    ", 	 0,  	 1,  	0, M_COMM|M_SADR(160),							// {2, Regular,  }21, Regular,  }
"D12.����� ������", "    ",      0,      1,  	0, M_COMM|M_SADR(244),							// {2, Regular,  }22, Regular,  }
"   D13.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }23, Regular,  }
"   D14.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }24, Regular,  }
"   D15.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }25, Regular,  }
"   D16.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }26, Regular,  }
"   D17.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }27, Regular,  }
"   D18.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }28, Regular,  }
"   D19.������   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }29, Regular,  }
//! ������ G ������������ {None}
"G0.����� �����  ", "    ",      0,      1,      0, MT_DEC|M_PWP2|M_RMAX(1),					// {2, Regular,  }30, Regular,  }
"G1.���� ������  ", "    ",      0,  65530,      0, MT_BIN|M_PWP2|M_RMAX(4),					// {2, Regular,  }31, Regular,  }
"G2.���� ��� ��� ", "    ",      0,  65530,      0, MT_BIN|M_PWP2|M_RMAX(4),					// {2, Regular,  }32, Regular,  }
"G3.�������� ��� ", "%   ",      0,   1000,      0, MT_DEC|M_PWP2|M_RMAX(3)|M_PREC(1),			// {2, Regular,  }33, Regular,  }
"   G4.������    ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }34, Regular,  }
"G5.TECT � ������", "    ",      0,  65535,      0, MT_BIN|M_PWP2|M_RMAX(4),					// {2, Regular,  }35, Regular,  }
"G6.���� ������  ", "    ",      0,      1,      0, MT_DEC|M_PWP2,								// {2, Regular,  }36, Regular,  }
"G7.������ ����  ", "    ",      0,      1,      0, MT_DEC|M_PWP2,								// {2, Regular,  }37, Regular,  }
"G8.���� ����    ", "    ",      0,      1,      0, MT_STR|M_SADR(188),							// {2, Regular,  }38, Regular,  }
"G9.�������� ����", "    ",      0,    180,      0, MT_DEC|M_RMAX(2),							// {2, Regular,  }39, Regular,  }
"G10.���.��������", "    ",      0,      1,      0, MT_STR|M_SADR(188),							// {2, Regular,  }40, Regular,  }
"G11.��� ��� ����", "    ",      0,      1,      0, MT_STR|M_SADR(188),							// {2, Regular,  }41, Regular,  }
"   G12.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }42, Regular,  }
"   G13.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }43, Regular,  }
"   G14.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }44, Regular,  }
"   G15.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }45, Regular,  }
"   G16.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }46, Regular,  }
"   G17.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }47, Regular,  }
"G18.���� ���� ��", "    ",      0,    140,      0, MT_DEC|M_PWP2|M_RMAX(2),					// {2, Regular,  }48, Regular,  }
"   G19.������   ", "    ",      0,  65530,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }49, Regular,  }
"   G20.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }50, Regular,  }
"   G21.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }51, Regular,  }
"   G22.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }52, Regular,  }
"   G23.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }53, Regular,  }
"G27.�����.������", "    ",      0,      1,      0, MT_STR|M_SADR(188),							// {2, Regular,  }54, Regular,  }
"   G25.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }55, Regular,  }
"   G26.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }56, Regular,  }
"   G27.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }57, Regular,  }
"   G28.������   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }58, Regular,  }
"   G29.������   ", "    ",		 0, 65535,		 0, MT_DEC | M_RONLY | M_RMAX(4), 		        // {2, Regular,  }58, Regular,  }
//! ������ H ������� {Hide}
"0.�������. �����", "    ",      0,      3,      0, MT_DEC|M_NVM,								// {2, Regular,  }60, Regular,  }
"1.����� �������1", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }61, Regular,  }
"2.����� �������2", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }62, Regular,  }
"3.����� �������1", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }63, Regular,  }
"4.����� �������2", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }64, Regular,  }
"5.  ������ 1    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }65, Regular,  }
"6.  ������ 2    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }66, Regular,  }
"7. ������ ��    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }67, Regular,  }
"8.������� ������", "    ", 	 0,  65530,  	 0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }68, Regular,  }
"H9.����� ������ ", "����",  -100U,    200,  	 0, MT_DEC|M_SIGN|M_RMAX(4),					// {2, Regular,  }69, Regular,  }
"10.  ���.������ ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),							// {2, Regular,  }70, Regular,  }
"11.������ ����  ", "    ",      0,  65530,      0, MT_DEC|M_SADR(35),							// {2, Regular,  }71, Regular,  }
"12.�������� ����", "    ",      0,  65530,      0, MT_DEC|M_SADR(35),							// {2, Regular,  }72, Regular,  }
"13.������� ���� ", "B   ",      0,    500,      0, MT_DEC|M_RMAX(2),							// {2, Regular,  }73, Regular,  }
"14.������� ��� �", "A   ",      0,   8000,      0, MT_DEC|M_RMAX(3)|M_PREC(1),					// {2, Regular,  }74, Regular,  }
"15.������� ��� %", "%   ",      0,   8000,      0, MT_DEC|M_RMAX(3)|M_PREC(1),					// {2, Regular,  }75, Regular,  }
"16.��� �������� ", "%   ",      0,   3000,      0, MT_DEC|M_NVM|M_RMAX(3)|M_PREC(1),			// {2, Regular,  }76, Regular,  }
"17.����� ��� 0_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }77, Regular,  }
"18.����� ��� 0_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }78, Regular,  }
"19.����� ��� 0_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }79, Regular,  }
"20.����� ��� 0_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }80, Regular,  }
"21.����� ��� 0_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }81, Regular,  }
"22.����� ��� 1_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }82, Regular,  }
"23.����� ��� 1_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }83, Regular,  }
"24.����� ��� 1_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }84, Regular,  }
"25.����� ��� 1_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }85, Regular,  }
"26.����� ��� 1_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }86, Regular,  }
"27.����� ��� 2_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }87, Regular,  }
"28.����� ��� 2_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }88, Regular,  }
"29.����� ��� 2_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }89, Regular,  }
"30.����� ��� 2_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }90, Regular,  }
"31.����� ��� 2_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }91, Regular,  }
"32.����� ��� 3_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }92, Regular,  }
"33.����� ��� 3_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }93, Regular,  }
"34.����� ��� 3_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }94, Regular,  }
"35.����� ��� 3_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }95, Regular,  }
"36.����� ��� 3_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }96, Regular,  }
"37.������ �� 0_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }97, Regular,  }
"38.������ �� 0_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }98, Regular,  }
"39.������ �� 0_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }99, Regular,  }
"40.������ �� 0_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }00, Regular,  }
"41.������ �� 0_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }01, Regular,  }
"42.������ �� 1_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }02, Regular,  }
"43.������ �� 1_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }03, Regular,  }
"44.������ �� 1_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }04, Regular,  }
"45.������ �� 1_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }05, Regular,  }
"46.������ �� 1_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }06, Regular,  }
"47.������ �� 2_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }07, Regular,  }
"48.������ �� 2_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }08, Regular,  }
"49.������ �� 2_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }09, Regular,  }
"50.������ �� 2_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }10, Regular,  }
"51.������ �� 2_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }11, Regular,  }
"52.������ �� 3_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }12, Regular,  }
"53.������ �� 3_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }13, Regular,  }
"54.������ �� 3_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }14, Regular,  }
"55.������ �� 3_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }15, Regular,  }
"56.������ �� 3_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }16, Regular,  }
"57.���� ���� 0_0", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }17, Regular,  }
"58.���� ���� 0_1", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }18, Regular,  }
"59.���� ���� 0_2", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }19, Regular,  }
"60.���� ���� 0_3", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }20, Regular,  }
"61.���� ���� 0_4", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }21, Regular,  }
"62.���� ���� 1_0", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }22, Regular,  }
"63.���� ���� 1_1", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }23, Regular,  }
"64.���� ���� 1_2", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }24, Regular,  }
"65.���� ���� 1_3", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }25, Regular,  }
"66.���� ���� 1_4", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }26, Regular,  }
"67.���� ���� 2_0", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }27, Regular,  }
"68.���� ���� 2_1", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }28, Regular,  }
"69.���� ���� 2_2", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }29, Regular,  }
"70 ���� ���� 2_3", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }30, Regular,  }
"71.���� ���� 2_4", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }31, Regular,  }
"72.���� ���� 3_0", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }32, Regular,  }
"73.���� ���� 3_1", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }33, Regular,  }
"74.���� ���� 3_2", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }34, Regular,  }
"75.���� ���� 3_3", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }35, Regular,  }
"76.���� ���� 3_4", "����",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }36, Regular,  }
"77.  �������    ", "    ",      0,  	60,      0, MT_DEC|M_RMAX(1),			// {3, Regular,  }37, Seconds,  }
"78.������� �����", "%   ",      0,    100,      0, MT_DEC|M_RMAX(2),			// {3, Regular,  }38, Regular,  }
"79.�� ��� ��� ��", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }39, Regular,  }
"80.�� ��� ��� ��", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }40, Regular,  }
"81.�� ��� ��� ��", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }41, Regular,  }
"82.��� ���� ����", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }42, Regular,  }
"83.��� ���� ����", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }43, Regular,  }
"84.��� ���� ����", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }44, Regular,  }
"85. ������� ��� ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }45, LogCmdControlWord,  }
"86.����� �������", "    ",      0,  1,          0, MT_DEC|M_RMAX(4),			// {3, Regular,  }46, Regular,  }
"87.������ ���   ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }47, Regular,  }
"88.�������� ��� ", "    ",      0,      1,      0, MT_DEC|M_NVM|M_SADR(188),			// {3, Regular,  }48, Regular,  }
"89.���� ��� 2���", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }49, Regular,  }
"90.���� ��� 200�", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }50, Regular,  }
"91.���� ��� 50��", "    ", 	 0,  65530,  	 0, MT_DEC|M_RMAX(4),			// {3, Regular,  }51, Regular,  }
"92.���� ��� 50��", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }52, Regular,  }
"93.���� ��� 50��", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }53, Regular,  }
"94.���� ��� 10��", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }54, Regular,  }
"95.���� ��� 10��", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }55, Regular,  }
"96.���� ���� ���", "    ",      0,  65530,      0, MT_DEC|M_RMAX(1),			// {3, Regular,  }56, Regular,  } 
"97.����� CPU    ", "����",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }57, Regular,  }
"98.������ ����� ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }58, Regular,  } 
"99.����� ������ ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }59, Regular,  } 
"100.������� IU  ", "    ",      0,  65535,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }60, Regular,  }
"101.������� IV  ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RMAX(4),			// {3, Regular,  }61, Regular,  }
"102.������� IW  ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }62, Regular,  }
"103.���� �������", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }63, Regular,  }
"104.SAVED POS. %", "    ", -1000U,   2000,      0, MT_DEC|M_SIGN|M_NVM|M_RMAX(4),		// {3, Regular,  }64, Regular,  }
"105.���� ���� U ", "    ",      0,  65530,   1457, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }65, Regular,  }
"106.���� ���� V ", "    ",      0,  65530,   1457, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }66, Regular,  }
"107.���� ���� W ", "    ",      0,  65530,   1457, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }67, Regular,  }
"108.���� ���� U ", "    ",      0,  65530,  33700, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }68, Regular,  }
"109.���� ���� V ", "    ",      0,  65530,  33700, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }69, Regular,  }
"110.���� ���� W ", "    ",      0,  65530,  33690, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }70, Regular,  }
"111.���� ���� R ", "    ",      0,  65530,    190, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }71, Regular,  }
"112.���� ���� S ", "    ",      0,  65530,    190, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }72, Regular,  }
"113.���� ���� T ", "    ",      0,  65530,    190, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }73, Regular,  }
"114.���� ���� R ", "    ",      0,  65530,  32760, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }74, Regular,  }
"115.���� ���� S ", "    ",      0,  65530,  32760, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }75, Regular,  }
"116.���� ���� T ", "    ",      0,  65530,  32760, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }76, Regular,  }
"117.���� �������", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),				// {3, Regular,  }77, Regular,  }
"118.�����.����� ", "    ",      0,  65535,      0, MT_DEC|M_RMAX(3),			// {3, Regular,  }78, Regular,  }
"119.���� ����   ", "����",      0,    180,      0, MT_DEC|M_RONLY|M_RMAX(2),			// {3, Regular,  }79, Regular,  } 
"120.����������  ", "    ",      0,    255,      0, MT_DEC|M_RMAX(8),// {3, Regular,  }80, Regular,  }
"121.������ �����", "��� ",     15,    100,     15, MT_DEC|M_PWP2|M_NVM|M_PREC(2)|M_RMAX(4),	// {3, Regular,  }81, Regular,  } 
"122.���� ���� ��", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {3, Regular,  }82, Regular,  }
"123.������ ��� 1", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {3, Regular,  }83, Regular,  }
"124.������ ��� 2", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {3, Regular,  }84, Regular,  }
"125.�������� ���", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {3, Regular,  }85, Regular,  }
"126.�������� ���", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }86, Regular,  }
"127.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }87, Regular,  }
"128.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }88, Regular,  }
"129.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }89, Regular,  }
"130.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }90, Regular,  }
"131.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }91, Regular,  }
"132.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }92, Regular,  }
"133.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }93, Regular,  }
"134.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }94, Regular,  }
"135.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }95, Regular,  }
"136.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }96, Regular,  }
"137.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }97, Regular,  }
"138.  ������    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }98, Regular,  }
"139.��� ��������", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }99, Regular,  }
//! ������ � ��������� {Show}
"�0.������ ������", "    ",		0,	65530,		0, M_RUNS|M_SADR(1),			// {4, Regular,  }0, Regular,  }0, Status,  }
"�1.���� ��������", "    ",		0,	65530,		0, M_RUNS|M_SADR(18),			// {4, Regular,  }0, Regular,  }1, Fault,  }
"�2.�������� ����", "    ",		0,	65530,		0, M_RUNS|M_SADR(35),			// {4, Regular,  }0, Regular,  }2, Fault,  }
"�3.���� ��������", "    ", 	0,  65530,  	0, M_RUNS|M_SADR(52),			// {4, Regular,  }0, Regular,  }3, Fault,  }
"�4.����� ����-��", "    ", 	0,  65530,  	0, M_RUNS|M_SADR(69),			// {4, Regular,  }0, Regular,  }4, Fault,  }
" �5.���� ������ ", "    ", 	0,  65530,  	0, M_RUNS|M_SADR(86),			// {4, Regular,  }0, Regular,  }5, Regular, True}
" �6.���� �������", "    ", 	0,  65530,  	0, M_RUNS|M_SADR(103),			// {4, Regular,  }0, Regular,  }6, StatusDigOut,  }
"  �7.���������  ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }0, Regular,  }7, Regular,  }
"   �8.������    ", "�*� ", 	0,  11000,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }0, Regular,  }8, Regular, True}
"   �9.��������  ", "��/�",-3600U,   3600,  	0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3),		// {4, Regular,  }0, Regular,  }9, Regular,  }
"�10.���� ���� R ", "�   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),			// {4, Regular,  }1, Regular,  }0, Regular, True}
"�11.���� ���� S ", "�   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),			// {4, Regular,  }1, Regular,  }1, Regular, True}
"�12.���� ���� T ", "�   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),			// {4, Regular,  }1, Regular,  }2, Regular, True}
" �13.��� ���� U ", "�/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }1, Regular,  }3, Regular,  } 
" �14.��� ���� V ", "�/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }1, Regular,  }4, Regular,  }
" �15.��� ���� W ", "�/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }1, Regular,  }5, Regular,  } 
"�16.���� ������ ", "����", -180U,    180,  	0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),		// {4, Regular,  }1, Regular,  }6, Regular,  } 
"�17.������ �����", "    ", 	0,      3,  	0, M_STAT|M_SADR(120),			// {4, Regular,  }1, Regular,  }7, Regular,  } 
"A18.��������� % ", "%   ",-1000U,   2000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),// {4, Regular,  }1, Regular,  }8, Regular, True}
" �19.������ ��� ", "��  ",     0,   3000,      0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }1, Regular,  }9, Regular,  }
"�20.������� ��� ", "��  ",-3000U,   3000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),// {4, Regular,  }2, Regular,  }0, Regular,  }
"�21.���� ������ ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }2, Regular,  }1, Regular,  }
"�22.����������� ", "����", -100U,    100,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),		// {4, Regular,  }2, Regular,  }2, Regular,  }
"�23.������ ��   ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(4)|M_PREC(3),	// {4, Regular,  }2, Regular,  }3, Regular,  }
"�24.�����.�����.", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }2, Regular,  }4, Regular,  }
"�25.����� ������", "    ",     0,      1,  	0, M_STAT|M_SADR(253),		// {2, Regular,  }52, Regular,  } 260 425 SDV 8.07.14 ����������� ���������. ��� ������������� ������
"�26.��� ��� ����", "    ", 	0,      2,  	0, M_STAT|M_SADR(182),			// {4, Regular,  }2, Regular,  }6, Regular,  }
"�27.�����. �����", "    ", 	0,  65535,  	0, M_HSHOW|M_RMAX(3),			// {4, Regular,  }2, Regular,  }7, Regular,  }
"�28.���.�����.��", "    ", 	0,      1,  	0, M_STAT|M_SADR(258),			// {4, Regular,  }2, Regular,  }8, Regular,  }
"�29.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }2, Regular,  }9, Regular,  }
"�30.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }0, Regular,  }
"�31.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }1, Regular,  }
"�32.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }2, Regular,  }
"�33.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }3, Regular,  }
"�34.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }4, Regular,  }
"�35.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }5, Regular,  }
"�36.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }6, Regular,  }
"�37.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }7, Regular,  }
"�38.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }8, Regular,  }
"�39.������      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }9, Position,  }
//! ������ E ������ 
"     �����      ", "    ",      0,  65535,      0, M_TIME|M_RONLY,						//
"      ����      ", "    ",      0,  65535,     33, M_DATE|M_RONLY,						//
"E0.������ ������", "    ",      0,  65535,      0, M_RUNS|M_SADR(1),					//
"E1.����� �������", "    ",      0,  65535,      0, M_RUNS|M_SADR(18),					//
"E2.�������� ����", "    ",      0,  65535,      0, M_RUNS|M_SADR(35),					//
"E3.����� �������", "    ",      0,  65535,      0, M_RUNS|M_SADR(52),					//
"E4.����� ����-��", "    ",      0,  65530,      0, M_RUNS|M_SADR(69),					//
"E5.��������� %  ", "%   ", -1000U,   2000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),	//
"    E6.������   ", "�*� ",     10,  11000,     10, MT_DEC|M_RONLY|M_RMAX(4),			//
"E7.������ ���� R", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),			//
"E8.������ ���� S", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),			//
"E9.������ ���� T", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),			//
"E10.��� ���� U  ", "�/% ", 	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	//
"E11.��� ���� V  ", "�/% ", 	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	//
"E12.��� ���� W  ", "�/% ",  	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	//
"E13.������ ���� ", "����",   -100U,    100,     0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),	//
"E14.���� ������ ", "    ",      0,  65535,      0, M_RUNS|M_SADR(86),			//
"E15.���� �������", "    ",      0,  65535,      0, M_RUNS|M_SADR(103),			//
"   E16.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E17.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E18.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E19.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E20.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E21.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E22.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E23.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E24.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E25.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E26.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E27.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E28.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E29.������   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4)	//
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
	"������ �� ����� ",	// 6
	"    �������     ",	// 7
	"    �������     ",	// 8
	"     �����      ",	// 9
	" ������� ������ ",	// 10
	"  ������� ���   ",	// 11
	" ������ ������� ",	// 12
	"������ �� ����� ",	// 13
	"  ������ �� ��  ",	// 14
	"  ������������� ",	// 15
	"�������. ������.",	// 16
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
	" �������� ��/�� ",	// 27
	"����� ���� ���� ",	// 26
	" ����� �������  ",	// 28
	"     ������     ",	// 29
	"     ������     ",	// 30
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
	"     ������     ",	// 42
	"     ������     ",	// 43
	"���� ���� ���� R",	// 44
	"���� ���� ���� S",	// 45
	"���� ���� ���� T",	// 46
	"���� ���� R 47% ",	// 47
	"���� ���� S 47% ",	// 48
	"���� ���� T 47% ",	// 49
	"     ������     ",	// 50
	"     ������     ",	// 51
	//!----------------
	"   ��� ������   ",	// 52
	"  ����� ���� U  ",	// 53
	"  ����� ���� V  ",	// 54
	"  ����� ���� W  ",	// 55
	"��-��� ���������",	// 56
	" ��������� ���� ",	// 57
	"   �� ���� U    ",	// 58
	"   �� ���� V    ",	// 59
	"   �� ���� W    ",	// 60
	" �� �� �������� ",	// 61
	"     ������     ",	// 62
	"     ������     ",	// 63
	"     ������     ",	// 64
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
	"���������� �����",	// 78
	"     ������     ",	// 79
	"     ������     ",	// 80
	"���� ������ ����",	// 81
	"�� ������ ����� ",	// 82
	"     ������     ",	// 83
	"     ������     ",	// 84
	"  ���� �������  ",	// 85
	//!----------------
	"  ��� ��������  ",	// 86
	"  ���� �������  ",	// 87
	"  ���� �������  ",	// 88
	"   ���� ����    ",	// 89
	"     ���� ��    ",	// 90
	"     ���� ��    ",	// 91
	"     ������     ",	// 92
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
	"  ��� ��������  ",	// 103
	"  �����������   ",	// 104
	"     ��/��      ",	// 105
    "     �����      ",	// 106
	"    �������     ",	// 107
	"     ������     ",	// 108
	"    �������     ",	// 109
	" �������������  ",	// 110
	"  �����������   ",	// 111
	"     ������     ",	// 112
	"     ������     ",	// 113
	"     ������     ",	// 114
	"     ������     ",	// 115
	"     ������     ",	// 116
	"     ������     ",	// 117
	"     ������     ",	// 118
	"     ������     ",	// 119
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
	"������ ����� �� ",	// 137
	"������ ����� �� ",	// 138
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
	"     ������     ",	// 171
	"     ������     ",	// 172
	"     ������     ",	// 173
	"     ������     ",	// 174
	"     ������     ",	// 175
	//!----------------
	" ��� ���������  ",	// 176
	"������ ��� � ���",	// 177
	"���� ���������� ",	// 178
	//!----------------
	"� ��������������",	// 179
	"    ���������   ",	// 180
	"    ���������   ",	// 181
	//!----------------
	"  �� ���������� ",	// 182
	"   ������ RST   ",	// 183
	"  �������� SRT  ",	// 184
		//!----------------
	" ���������� ��� ",	// 185
	" ���������� ��� ",	// 186
	//!----------------
	"     ������     ", // 187
	//!----------------
	"    ��������    ",	// 188
	"    �������     ",	// 189
	//!----------------
	"���� �����������",	// 190
	" ���� ��������� ",	// 191
	//!----------------
    "�� ���������    ",	// 192
	"���-10000 �.10  ",	// 193
	"���-15000 �.10  ",	// 194
	"���-20000 F.40  ",	// 195
	"���-15000 �.10 �",	// 196
	"���-20000 F.40 T",	// 197
	"     ������     ",	// 198
	"     ������     ",	// 199
	"     ������     ",	// 200
	"     ������     ",	// 201
	"     ������     ",	// 202
	"     ������     ",	// 203
	"     ������     ",	// 204
	"     ������     ",	// 205
	"     ������     ",	// 206
	"     ������     ",	// 207
	"     ������     ",	// 208
	"     ������     ",	// 209
	"     ������     ",	// 210
	"     ������     ",	// 211
		//!----------------
	"  0 x �������   ",	// 212
	"  ��� ��������� ",	// 213
	"  2 x �������   ",	// 214
	"  3 x �������   ",	// 215
	"  4 x �������   ",	// 216
	"  5 x �������   ",	// 217
	//!----------------
	"������� �� �����",	// 218
	" ������ ���. � 1",	// 219
	//!----------------
	"   ��� v 0.013  ",	// 220
	"   ��� v 0.014  ",	// 221
	//!----------------
	" ��� ���������� ",	// 222
	"���� � ����� ���",	// 223
	" �������� ������",	// 224
	//!----------------
	" ������ ���     ",	// 225
	//!----------------
	"  ��� ��������  ",	// 226
	" �� ����������  ",	// 227
	"  �� ��������   ",	// 228
	//!----------------
    "���-15-20 ������",	// 229
	"   ��-50 ���    ",	// 230
	//!----------------
	"     ������     ",	// 231
	//!----------------
	"      AVAGO     ", // 232
	"      ��� ��    ", // 233
	//!----------------
	" ���� ��������  ",	// 234
	" ���� ��������  ",	// 235
	//!----------------
	" BLUEGIGA WT41-A",	// 236
	" AMP'ED RF BT-31",	// 237
	//!----------------
	"������������ ���",	// 238
	" ������� �������",	// 239
	//!----------------
	"�� �������� ����",	// 240
	"�� ������� �����",	// 241
	//!----------------
	"���� ������ ����",	// 242
	"����� ���� ���� ",	// 243
	//!----------------
	"  ��� �������   ",	// 244
	"���� ���� ������",	// 245
	//!----------------
	"     ������     ",	// 246
	//!----------------
	"  OLED WINSTAR  ",	// 247
	"   VAC FUTABA   ",	// 248
	//!----------------
	"��������. ������",	// 249
	"���������� �����",	// 250
	//!----------------
	"  ����� �����   ",	// 251
	"  ������ �����  ",	// 252
		//!----------------
	"���� ������ ����",	// 253
	"����� ����� ����",	// 254
	//!----------------
	"  ��� �������   ",	// 255
	"    ��������    ",	// 256
	"    ���������   ",	// 257
	//!----------------
	"   �� ��������  ",	// 258
	"���� � ������ ��"	// 259
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
//--------------------------------
	"����������� ��� ",	// 32
	" �� ����������  ", // 33
//--------------------------------
	"    ��������    ",	// 34
	"   ����������   ", // 35
//--------------------------------
	"��� �����������.",	// 36
	" ������� '����' ", // 37
	" �������������� ",	// 38
	"�����. ���������", // 39
	"   ��������     ",	// 40
	"  ��� �������   ", // 41
	"   ��� �������  ",	// 42
	"     �������    ", // 43
	"���������� �����",	// 44
	"  ��� �������   ", // 45
	" ��������� ���� ",	// 46
	"  �� ���������! ", // 47
//--------------------------------
	"�������� ������.", // 48
	"������� �������.", // 49
	"��������� ���� �", // 50
	"     �������    ", // 51
	"     �������    ", // 52
	"  ����������� ��", // 53
	"    ���������   ", // 54
	"������ ���������", // 55
	"    ��������    ", // 56
	" ���������� ����", // 57
	"   � ������ ��  "  // 58
};


// ������������� ����� ��� ������ �������
Int VoltArray[CUB_COUNT1] = {160, 190,  220,  250};
Int CurrArray[CUB_COUNT2] = {400, 800, 1200, 1600, 2000};
Int AnUIArray[CUB_COUNT2] = { 25,  35,   50,   65,   80};
Int TorqArray[CUB_COUNT2] = { 25,  30,   50,   75,  100};

TCubConfig TqCurr  = {(Int *)&Ram.GroupH.Umid, VoltArray, (Int *)&Ram.GroupH.Imidpr, CurrArray};
TCubConfig TqAngUI = {(Int *)&Ram.GroupH.Umid, VoltArray, (Int *)&Ram.GroupA.AngleUI, AnUIArray};
TCubConfig TqAngSf = {(Int *)&Ram.GroupH.Umid, VoltArray, (Int *)&Dmc.TorqueSetPr, TorqArray};

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

extern const struct MENU_GROUP  groups[];
extern const struct MENU_PARAM  params[];
extern const struct MENU_STRING values[];
extern const struct MENU_STRING AddStr[];
extern TCubConfig TqCurr;
extern TCubConfig TqAngUI;
extern TCubConfig TqAngSf;
extern char Icons[NUM_ICONS][7];

#endif
