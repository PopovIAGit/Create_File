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
    //! цПСООШ
	"   1 цпсоою A   ", "    хмдхйюжхъ   ", GR_INIT(GroupA, 0),	//{Show}	
	"   2 цпсоою B   ", "онкэг мюярпнийх ", GR_INIT(GroupB, 0),	//{User}
	"   3 цпсоою C   ", "гюбнд мюярпнийх ", GR_INIT(GroupC, 0),	//{Factory}
	"   4 цпсоою D   ", "    йнлюмдш     ", GR_INIT(GroupD, 0),	//{Command}
//  "   5 цпсоою G   ", "  реярхпнбюмхе  ", GR_INIT(GroupE, 0),	//{None}
	"   6 цпсоою E   ", "     фспмюк     ", GR_INIT(GroupE, 2)	//{Hide}
//  "   7 цпсоою T   ", "  наыхе         ", GR_INIT(GroupE, 0), //{None}
//  "   8 цпсоою H   ", "  яйпшрше       ", GR_INIT(GroupE, 0), //{Hide}
    //! цПСООШ ЙНМЕЖ
};

const struct MENU_PARAM params[] = { 	
//! оЮПЮЛЕРПШ
//! цпсоою T наыхе {None}    	
"R0.реумнкнц. пец", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {0, Regular,  }
"R1.пецхярп детей", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }
"R2.онкнфемхе б %", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }
"R3.пецхяп йнлюмд", "    ", 	0,  65535,  	0, MT_DEC|M_RMAX(4),					// {3, Regular,  }
"R4.явервхй жхйкб", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }
"R5.пегепб       ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {5, Regular,  }
"R6.рнй тюгш U   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {6, Regular,  }
"R7.пегепб       ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {7, Regular,  }
"R8.пегепб       ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {8, Regular,  }
"R9.пегепб       ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {9, Regular,  }
"R10.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }0, Regular,  }
"R11.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }1, Regular,  }
"R12.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }2, Regular,  }
"R13.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }3, Regular,  }
"R14.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }4, Regular,  }
"R15.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }5, Regular,  }
"R16.мюопъфемхе R", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }6, Regular,  }
"R17.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }7, Regular,  }
"R18.яйнпнярэ    ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }8, Regular,  }
"R19.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {1, Regular,  }9, Regular,  }
"R20.лнлемр      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }0, Regular,  }
"R21.пецхярп рсря", "    ", 	0,  65535,  	0, MT_DEC|M_NVM|M_RMAX(4),				// {2, Regular,  }1, Regular,  }
"R22.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }2, Regular,  }
"R23.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }3, Regular,  }
"R24.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }4, Regular,  }
"R25.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }5, Regular,  }
"R26.юдпея ярюмжх", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }6, Regular,  }
"R27.леярм. сопюб", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }7, Regular,  }
"R28.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }8, Regular,  }
"R29.бепяхъ он   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {2, Regular,  }9, Regular,  }
"R30.пецхярп дет2", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }0, Regular,  }
"R31.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }1, Regular,  }
"R32.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }2, Regular,  }
"R33.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }3, Regular,  }
"R34.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }4, Regular,  }
"R35.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }5, Regular,  }
"R36.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }6, Regular,  }
"R37.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }7, Regular,  }
"R38.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }8, Regular,  }
"R39.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {3, Regular,  }9, Regular,  }
//! цпсоою B онкэг мюярпнийх {User}
"B0.лнлемр гюйп  ", "м*л ",		1,	   10,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }0, Regular,  }
"B1.лнлемр нрйп  ", "м*л ",		1,	   10,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }1, Regular,  }
"B2.лнл сок гюйп ", "м*л ",		1,	   10,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }2, Regular,  }
"B3.лнл рпнц гюйп", "м*л ", 	1,     10,  	4, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }3, Regular,  }
"B4.лнл сок нрйп ", "м*л ", 	1,     10,  	2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }4, Regular,  }
"B5.лнл рпнц нрйп", "м*л ", 	1,     10,  	4, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),		// {4, Regular,  }5, Regular,  }
"B6.рхо гюдбхфйх ", "    ", 	0,      1,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(124),			// {4, Regular,  }6, Regular,  }
"B7.рхо сокнрмем ", "    ", 	1,      4,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(126),			// {4, Regular,  }7, Regular,  }
"B8.рхо ьрнйю    ", "    ", 	0,      1,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(131),			// {4, Regular,  }8, Regular,  }
"B9.гнмю гюйпшрн ", "нагб", 	0,   3000,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }9, Regular,  }
"B10.гнмю нрйпшрн", "нагб", 	0,   3000,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),	// {5, Regular,  }0, Regular,  }
"B11.гнмю ялеыем ", "нагб", 	0,    100,      0, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),	// {5, Regular,  }1, Regular,  }
"B12.йнд днярсою ", "    ", 	0,  65530,  	0, M_CODE,									// {5, Regular,  }2, Regular,  }
"   B13.бпелъ    ", "    ", 	0,  65530,  	0, M_TIME|M_PWP1,							// {5, Regular,  }3, Time,  }
"   B14.дюрю     ", "    ", 	0,  65530,  	0, M_DATE|M_PWP1,							// {5, Regular,  }4, Date,  }
"B15.йнпп вюянб  ", "я   ", -300U,    300,  	0, MT_DEC|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),	// {5, Regular,  }5, Regular,  }
"B16.хмдхйюж рнйю", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(133),			// {5, Regular,  }6, Regular,  }
"B17.пефхл лс/дс ", "    ", 	0,      3,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(135),			// {5, Regular,  }7, Regular,  }
"B18.хярнв йнл дс", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(139),			// {5, Regular,  }8, Regular,  }
"B19.акнй гюкхо  ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(142),			// {5, Regular,  }9, Regular,  }
"B20.бпелъ йнлюмд", "я   ", 	1,    100,  	2, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),	// {6, Regular,  }0, Regular,  }
"B21.рхо бу яхцм ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(144),			// {6, Regular,  }1, Regular,  }
"B22.люяй бу яхцм", "    ", 	0,     31,  	4, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),			// {6, Regular,  }2, Regular,  }
"B23.люяй бшу яхц", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),			// {6, Regular,  }3, Regular,  }
"B24.яйнп ябъгх  ", "    ", 	0,      6,  	3, MT_STR|M_PWP1|M_NVM|M_SADR(146),			// {6, Regular,  }4, Regular,  }
"B25.юдпея ярюмж ", "    ", 	1,    247,  	1, MT_DEC|M_PWP1|M_NVM|M_RMAX(2),			// {6, Regular,  }5, Regular,  }
"B26.пефхл ябъгх ", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(226),			// {6, Regular,  }6, Regular,  }
"B27.оепецп дбхц ", "    ", 	0,      3,  	3, MT_STR|M_PWP1|M_NVM|M_SADR(153),			// {6, Regular,  }7, Regular,  }
"B28.пебепя ундю ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(188),			// {6, Regular,  }8, Regular,  }
"B29.сопюбк.я одс", "    ", 	0,      2,  	2, MT_STR|M_PWP1|M_NVM|M_SADR(179),			// {6, Regular,  }9, Regular,  }
"B30.пеюй мю ярно", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(176),			// {7, Regular,  }0, Regular,  }	рПЕАНБЮМХЕ нАПХЕБЮ ОН ПЮГЛШЙЮМХЧ йбн йбг 04.12.19
"B31.лнл оеп сонп", "м*л ",  2000,  20000,   5000, MT_DEC|M_PWP1|M_NVM|M_RMAX(4), 			// {7, Regular,  }1, Regular,  }
"B32.бпел.нцп.лнл", "я   ", 	3,     30,     30, MT_DEC | M_PWP1 | M_NVM | M_RMAX(2) | M_PREC(1),	// {7, Regular,  }1, Regular,  }
"B33.осрэ сокнрм ", "на  ", 	1,   1000,    100, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),	// {7, Regular,  }3, Regular,  }
"B34.рхо опхбндю ", "    ",     0,      5,      0, MT_STR|M_PWP1|M_NVM|M_SADR(192),			// {7, Regular,  }4, Regular,  }
"B35.дефспм пефхл", "C   ",     0,   6000,      0, MT_DEC|M_PWP1|M_NVM|M_RMAX(3),			// {7, Regular,  }5, Regular,  }
"B36.рд бйк/бшйк ", "    ", 	0,      7,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(2), 			// {7, Regular,  }6, Regular,  }
"B37.бп.лстр.пюгц", "я   ", 	3,    100,     50, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),	// {7, Regular,  }7, Regular,  }   оХЯЭЛН НР ннн "рм-бНЯРНЙ" ╧ рмб-05-05-08/36443 НР 24.12.2024
"B38.йбнйбг б дбх", "    ", 	0,      1,  	0, MT_STR | M_PWP1 | M_NVM |M_SADR(218),	// {7, Regular,  }8, Regular,  }
"B39.BLUETOOTH   ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_SADR(188),				// {7, Regular,  }9, Regular,  }
"   B40.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }0, Regular,  }
"   B41.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }1, Regular,  }
"   B42.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }2, Regular,  }
"   B43.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }3, Regular,  }
"   B44.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }4, Regular,  }
"   B45.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }5, Regular,  }
"   B46.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }6, Regular,  }
"   B47.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }7, Regular,  }
"   B48.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }8, Regular,  }
"   B49.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {8, Regular,  }9, Regular,  }
//! цпсоою C гюбнд мюярпнийх {Factory}
"я0.йнд днярсою  ", "    ",     0,  65530,      0, M_CODE,									// {9, Regular,  }0, Regular,  }
"   C1.пегепб    ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),				// {9, Regular,  }1, Regular,  }
"я2.цнд хгцнрнбк.", "    ",     0,     99,     15, MT_DEC|M_PWP2|M_NVM|M_RMAX(1),			// {9, Regular,  }2, ProductYear,  }
"я3.гюбнд мнлеп  ", "    ",     0,   9999,      0, MT_DEC|M_PWP2|M_NVM|M_RMAX(3),			// {9, Regular,  }3, FactoryNumber,  }
"я4.люйя лнлемр  ", "йм*л",    10,   2000,    100, MT_DEC|M_PWP2|M_NVM|M_RMAX(3)|M_PREC(2),	// {9, Regular,  }4, Regular,  }
"я5.мнлхмюкэм рнй", "A   ",     1,    500,     50, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),	// {9, Regular,  }5, Regular,  }
"я6.йо педсйрнпю ", "    ",     1,  65530,  20000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(2),	// {9, Regular,  }6, Regular,  }
"C7.йнк.яанеб до ", "%   ",     0,    100,      0, MT_DEC|M_RONLY|M_RMAX(2),				// {9, Regular,  }7, Regular,  }
"C8.спнб яанъ до ", "%   ",     0,    100,     50, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {9, Regular,  }8, Regular,  }
"C9.дюрв унккю   ", "    ",     0,     15,      0, MT_BIN|M_PWP2|M_NVM|M_RMAX(3),			// {9, Regular,  }9, Regular,  }
"C10.ондбепяхъ он", "    ",     0,  65535,      0, MT_VERS|M_RONLY|M_NVM|M_PREC(2)|M_RMAX(4),// {1, Regular,  }00, Regular,  }
"C11.дюрв.релоеп.", "    ",     0,      3,      1, MT_DEC|M_PWP2|M_NVM|M_RMAX(0),			// {1, Regular,  }01, Regular,  }
"я12.жхйкш опнцнм", "    ",     0,     50,      0, MT_DEC|M_PWP2|M_RMAX(1),					// {1, Regular,  }02, Regular,  }
//-----------------------бРНПНЯРЕОЕММШЕ МЮЯРПНИЙХ
"я13.пюяяр лстрш ", "    ",     0,    100,      2, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }03, Regular,  }
"я14.бпе оюсг опн", "C   ",     0,    900,     30, MT_DEC|M_PWP2|M_NVM|M_RMAX(1),			// {1, Regular,  }04, Regular,  }
"C15.бп яап хмдхй", "C   ",     0,     30,     30, MT_DEC|M_PWP2|M_NVM|M_RMAX(1),			// {1, Regular,  }05, Regular,  }
"C16.он слнквюмхч", "    ",     0,      1,      0, MT_STR|M_PWP2|M_SADR(157),				// {1, Regular,  }06, Regular,  }
"я17.хмремя. пюгц", "    ",     0,   1000,    200, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }07, Regular,  }
"я18.яоа.хгл.хгнк", "    ",     0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(185),			// {1, Regular,  }08, Regular,  }
//-----------------------рНПЛНФЕМХЕ
"я19.сцнк рнплнф.", "цпюд",    60,    165,     95, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }09, Regular,  }
"я20.бпелъ рнплнф", "C   ",     0,     50,     10, MT_DEC|M_PWP2|M_NVM|M_RMAX(1)|M_PREC(1),	// {1, Regular,  }10, Regular,  }
"я21.опеб рнплнф.", "надб",     0,    100,     10, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }11, Regular,  }
"C22.лхм яйнп пеб", "    ",     0,  65535,    700, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),			// {1, Regular,  }12, Regular,  }
"я23.сцнк рнп пеб", "цпюд",    60,    165,    108, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }13, Regular,  }
"я24.бпел рнп пеб", "C   ",     0,     50,      3, MT_DEC|M_PWP2|M_NVM|M_RMAX(1)|M_PREC(1),	// {1, Regular,  }14, Regular,  }
"я25.пюгпеь.рнпл.", "    ",     0,      2,      1, MT_STR|M_PWP2|M_NVM|M_SADR(222),			// {1, Regular,  }15, Regular,  }
//-----------------------рЕЯР ДБХЦЮРЕК
"я26.оепхнд реярб", "я   ",     5,   3600,	  600, MT_DEC|M_PWP2|M_NVM|M_RMAX(3), 			// {1, Regular,  }16, Regular,  }
"я27.южо яноп хгк", "    ",     0,  65530,      0, MT_DEC|M_RONLY|M_RMAX(4),				// {1, Regular,  }17, Regular,  }
"C28.спнб яноп хг", "    ",     0,  65535,  15000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),			// {1, Regular,  }18, Regular,  }  // дКЪ ОЕПБНИ ЯУЕЛШ - 3000
"я29.рд йг-N рнй ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4)|M_PREC(1),		// {1, Regular,  }19, Regular,  }
"я30.рд напшб рнй", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4)|M_PREC(1),		// {1, Regular,  }20, Regular,  }
"я31.рд сп напшб ", "ю   ",     1,  20000,      3, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),	// {1, Regular,  }21, Regular,  }
"я32.рд спнбем йг", "ю   ",    10,  20000,     80, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),	// {1, Regular,  }22, Regular,  }
"я33.спнб мюоп рд", "%   ",     1,    100,     47, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),			// {1, Regular,  }23, Regular,  }
"я34.бпел мюоп рд", "Ля  ",     1,   1000,     80, MT_DEC|M_PWP2|M_NVM|M_RMAX(3), 			// {1, Regular,  }24, Regular,  }
//----------------------мЮЯРПНИЙЮ ДЮРВХЙНБ
"я35.йнпп рело ак", "цпюд", -100U,    100,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }25, Regular,  }
"я36.йнпп рело дб", "цпюд", -100U,    100,    	0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }26, Regular,  }
"я37.TSENS 1:    ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(3),					// {1, Regular,  }27, Regular,  }
"я38.й ткрп мюоп ", "MйC ",     0,  65530,   5000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(2),		// {1, Regular,  }28, Regular,  }
"я39.й ткрп рнйю ", "MйC ",     0,  65530,   5000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(2),		// {1, Regular,  }29, Regular,  }
"я40.ядб дюрв.р.1", "    ", -100U,    100,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }30, Regular,  }
"я41.ядб дюрв.р.2", "    ", -100U,    100,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }31, Regular,  }
"я42.ядб дюрв.р.3", "    ", -100U,    100,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }32, Regular,  }
"я43.рхо BLUET-TH", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(236),				// {1, Regular,  }33, Regular,  }
"я44.яуел.реяр.хг", "    ",     0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(240),				// {1, Regular,  }34, Regular,  }
"я45.бп гюдеп лнл", "я   ",     0,  65535,      0, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),		// {1, Regular,  }34, Regular,  }
"я46.пецхя.MODBUS", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(229),				// {1, Regular,  }36, Regular,  }
"C47.йнппейр жюо ", "    ",     0,  65530,   4100, M_FACT|M_RMAX(4),							// {1, Regular,  }37, Regular,  }
"C48.ялеы жюо    ", "    ",-10000U, 10000,      0, M_FACT|M_SIGN|M_RMAX(4),						// {1, Regular,  }38, Regular,  }
"C49.рхо хмдхйюр.", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(247),				// {1, Regular,  }39, Regular,  }
"я50.гюдеп.RS-485", "я   ",    10,     50,     15, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }40, Regular,  }
"я51.рхо щмйндепю", "    ", 	0,      1,  	1, MT_STR|M_PWP2|M_NVM|M_SADR(232),				// {1, Regular,  }41, Regular,  }
"я52.бепя. он осщ", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(220),				// {1, Regular,  }42, Regular,  }
"я53.лнл лхм опнж", "    ", 	0,     10,  	0, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),				// {1, Regular,  }17, Regular,  }
//----------------------йНМТХЦСПЮЖХЪ ГЮЫХР
"C54.гюы люйя U  ", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }44, Regular,  }
"C55.с люйя U 47%", "B   ",   220,    600,    324, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }45, Regular,  }
"C56.T люйя U 47%", "C   ",     1,    200,     20, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }46, Regular,  }
"я57.спнб онбшь U", "B   ",   220,    335,    265, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }47, Regular,  }
"я58.бп онб. U мя", "C   ",     1,    200,     10, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }48, Regular,  }
"я59.бп онб. U юб", "C   ",     1,    250,    210, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }49, Regular,  }
"C60.гюы лхм U   ", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }50, Regular,  }
"я61.спнб онмхф U", "B   ",    90,    220,    130, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }51, Regular,  }
"я62.бп лхм U мя ", "C   ",     1,    200,     10, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }52, Regular,  }
"я63.бп лхм U юб ", "C   ",     1,    250,    210, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }53, Regular,  }
"я64.рд оепед ося", "    ",     0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(188),				// {1, Regular,  }54, Regular,  }
"я65.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }55, Regular,  }
"я66.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }56, Regular,  }
"C67.гюы напшб U ", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153), 			// {1, Regular,  }57, Regular,  }
"я68.спнб напшб U", "б   ",     0,    110,     70, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }58, Regular,  }
"я69.сп нап U дб.", "    ",    10,    500,    195, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),				// {1, Regular,  }59, Regular,  }
"я70.бпел напшб U", "C   ",     1,    200,     50, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }60, Regular,  }
"я71.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }61, Regular,  }
"C72.гюы напшб I ", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }62, Regular,  }
"C73.спнб напшб I", "%   ",    20,    500,    200, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }63, Regular,  }
"C74.бпел напшб I", "C   ",     1,    100,     20, MT_DEC|M_PWP2|M_NVM|M_RMAX(1)|M_PREC(1),		// {1, Regular,  }64, Regular,  }
"C75.бп-рнй гюы  ", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }65, Regular,  }
"я76.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }66, Regular,  }
"я77.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }67, Regular,  }
"я78.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }68, Regular,  }
"я79.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }69, Regular,  }
"я80.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4), 					// {1, Regular,  }70, Regular,  }
"я81.пегепб      ", "    ",     0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {1, Regular,  }71, Regular,  }
"C82.йнщт.г 25%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }72, Regular,  }
"я83.йнщт.г 35%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }73, Regular,  }
"я84.йнщт.г 50%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }74, Regular,  }
"я85.йнщт.г 75%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }75, Regular,  }
"я86.йнщт.г 100% ", "    ",  -10U,     15,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),        // {1, Regular,  }75, Regular,  }
"я87.спнб йг мю N", "    ",   100,  20000,   3000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),				// {1, Regular,  }77, Regular,  }
"C88.гюыхрю нр йг", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }78, Regular,  }
"я89.спнбемэ йг  ", "    ",     0,  32767,  24000, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),				// {1, Regular,  }79, Regular,  }
"я90.лер гюы щмйп", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(251),				// {1, Regular,  }80, Regular,  }
"я91.хмдхй йюкхап", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }81, Regular,  }
"C92.хмд юбю сярп", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }82, Regular,  }
"C93.оепец/оепену", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),				// {1, Regular,  }83, Regular,  }
"я94.сп оеп ак мя", "цпюд",     0,    120,     90, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }84, Regular,  }
"я95.сп оеп ак юб", "цпюд",     0,    120,    100, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }85, Regular,  }
"я96.сп оепену ак", "цпюд",  -50U,      0,   -35U, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }86, Regular,  }
"я97.сп бйк ремю ", "цпюд",  -40U,     10,     10, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }87, Regular,  }
"я98.сп бшйк ремю", "цпюд",  -20U,     50,     30, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(2),		// {1, Regular,  }88, Regular,  }
"я99.бп оеп со дб", "яей ",     0,     10,      0, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),		// {1, Regular,  }89, Regular,  }
"C100.сп оепец дб", "цпюд",     1,    170,    110, MT_DEC|M_PWP2|M_NVM|M_RMAX(2),				// {1, Regular,  }90, Regular,  }
"я101.реяр ябернд", "    ",     0,      1,      0, MT_DEC|M_RMAX(0),							// {1, Regular,  }91, Regular,  }
"C102.бпелъ оепец", "C   ",     1,    200,     25, MT_DEC|M_PWP2|M_NVM|M_PREC(1)|M_RMAX(2),		// {1, Regular,  }92, Regular,  }
"C103.веп тюг дбх", "    ",     0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153), 			// {1, Regular,  }93, Regular,  }
"я104.бп веп тюг ", "я   ",     1,    600,     20, MT_DEC|M_PWP2|M_NVM|M_RMAX(2)|M_PREC(1),		// {1, Regular,  }94, Regular,  }
"я105.мехяо лс/дс", "    ",     0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),   			// {1, Regular,  }95, Regular,  }
"я106.гы яани RTC", "    ",     0,      1,      1, MT_STR|M_PWP2|M_SADR(142),					// {1, Regular,  }96, Regular,  }
"я107.яани дюрв о", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(234),				// {1, Regular,  }97, Regular,  }
//--------------------мЮЯРПНИЙХ ЛНЛЕМРНБ
"я108.яоя хгл лнл", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(238),				// {1, Regular,  }98, Regular,  }
"я109.йнщт. 25%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {1, Regular,  }99, Regular,  }																						
"я110.йнщт. 35%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }00, Regular,  }
"я111.йнщт. 50%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }01, Regular,  }
"я112.йнщт. 75%  ", "    ",  -10U,     10,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }02, Regular,  }
"я113.йнщт. 100% ", "    ",  -10U,     15,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }03, Regular,  }
"я114.йнп люкшу л", "    ",  -30U,     30,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }04, Regular,  }
"я115.йнп анкэь л", "    ",  -30U,     30,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1), 		// {2, Regular,  }05, Regular,  }
"я116.сонп б дбхф", "    ",     0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(188),				// {2, Regular,  }06, Regular,  }
"я117.лмнфхрек Mb", "    ",     1,      5,      2, MT_STR|M_PWP2|M_NVM|M_SADR(212),				// {2, Regular,  }07, Regular,  }
"я118.аюкюм сонпю", "    ",   -3U,      3,      0, MT_DEC|M_PWP2|M_NVM|M_SIGN|M_RMAX(1),		// {2, Regular,  }08, Regular,  }
"я119.бпел оеп со", "яей ",     1,     50,     14, MT_DEC|M_PWP2|M_NVM|M_RMAX(4)|M_PREC(1),		// {2, Regular,  }09, Regular,  }
//! цпсоою D йнлюмдш {Command}
"D0.гюдюмхе гюйп ", "    ",      0,      2,      0, M_COMM|M_SADR(157),							// {2, Regular,  }10, Regular,  }
"D1.гюдюмхе нрйп ", "    ",      0,      2,      0, M_COMM|M_SADR(157),							// {2, Regular,  }11, Regular,  }
"D2.нанп мю нрйп ", "на  ",      0,   3000,      0, M_DCOM|M_RMAX(3)|M_PREC(1),					// {2, Regular,  }12, Regular,  }
"D3.нанп мю гюйп ", "на  ",      0,   3000,      0, M_DCOM|M_RMAX(3)|M_PREC(1),					// {2, Regular,  }13, Regular,  }
"  D4.пегепб     ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }14, Regular,  }
"D5.яапня йюкхап ", "    ",      0,      1,      0, M_COMM|M_SADR(160),							// {2, Regular,  }15, Regular,  }
"D6.йнлюмд сопюбк", "    ",      0,      5,      0, M_COMM|M_SADR(162),							// {2, Regular,  }16, Regular,  }
" D7.яапня гюыхр ", "    ",      0,      1,      0, M_COMM|M_SADR(160),							// {2, Regular,  }17, Regular,  }
" D8.он слнквюмхч", "    ",      0,      1,      0, M_COMM|M_SADR(157),							// {2, Regular,  }18, Regular,  }
"D9.реяр щмйндепю", "    ", 	 0,      2,      0, M_COMM|M_SADR(255),							// {2, Regular,  }19, Regular,  }
"D10.яапня жхйкнб", "    ",      0,      1,     0, M_COMM|M_SADR(160),							// {2, Regular,  }20, Regular,  }
"D11.яапня ябъгх ", "    ", 	 0,  	 1,  	0, M_COMM|M_SADR(160),							// {2, Regular,  }21, Regular,  }
"D12.реярш дбхцюр", "    ",      0,      1,  	0, M_COMM|M_SADR(244),							// {2, Regular,  }22, Regular,  }
"   D13.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }23, Regular,  }
"   D14.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }24, Regular,  }
"   D15.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }25, Regular,  }
"   D16.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }26, Regular,  }
"   D17.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }27, Regular,  }
"   D18.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }28, Regular,  }
"   D19.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }29, Regular,  }
//! цпсоою G реярхпнбюмхе {None}
"G0.пефхл реярю  ", "    ",      0,      1,      0, MT_DEC|M_PWP2|M_RMAX(1),					// {2, Regular,  }30, Regular,  }
"G1.реяр ябернд  ", "    ",      0,  65530,      0, MT_BIN|M_PWP2|M_RMAX(4),					// {2, Regular,  }31, Regular,  }
"G2.реяр дхя бшу ", "    ",      0,  65530,      0, MT_BIN|M_PWP2|M_RMAX(4),					// {2, Regular,  }32, Regular,  }
"G3.гмювемхе жюо ", "%   ",      0,   1000,      0, MT_DEC|M_PWP2|M_RMAX(3)|M_PREC(1),			// {2, Regular,  }33, Regular,  }
"   G4.пегепб    ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }34, Regular,  }
"G5.TECT я йюлепш", "    ",      0,  65535,      0, MT_BIN|M_PWP2|M_RMAX(4),					// {2, Regular,  }35, Regular,  }
"G6.цпсо рхпхяр  ", "    ",      0,      1,      0, MT_DEC|M_PWP2,								// {2, Regular,  }36, Regular,  }
"G7.пюгпеь яхтс  ", "    ",      0,      1,      0, MT_DEC|M_PWP2,								// {2, Regular,  }37, Regular,  }
"G8.реяр яхтс    ", "    ",      0,      1,      0, MT_STR|M_SADR(188),							// {2, Regular,  }38, Regular,  }
"G9.реярнбши сцнк", "    ",      0,    180,      0, MT_DEC|M_RMAX(2),							// {2, Regular,  }39, Regular,  }
"G10.пеф.мюярпний", "    ",      0,      1,      0, MT_STR|M_SADR(188),							// {2, Regular,  }40, Regular,  }
"G11.пеф яхл яйнп", "    ",      0,      1,      0, MT_STR|M_SADR(188),							// {2, Regular,  }41, Regular,  }
"   G12.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }42, Regular,  }
"   G13.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }43, Regular,  }
"   G14.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }44, Regular,  }
"   G15.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }45, Regular,  }
"   G16.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }46, Regular,  }
"   G17.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }47, Regular,  }
"G18.реяр сцнк нр", "    ",      0,    140,      0, MT_DEC|M_PWP2|M_RMAX(2),					// {2, Regular,  }48, Regular,  }
"   G19.пегепб   ", "    ",      0,  65530,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }49, Regular,  }
"   G20.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }50, Regular,  }
"   G21.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }51, Regular,  }
"   G22.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }52, Regular,  }
"   G23.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }53, Regular,  }
"G27.дхюцм.лндаюя", "    ",      0,      1,      0, MT_STR|M_SADR(188),							// {2, Regular,  }54, Regular,  }
"   G25.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }55, Regular,  }
"   G26.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }56, Regular,  }
"   G27.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }57, Regular,  }
"   G28.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),					// {2, Regular,  }58, Regular,  }
"   G29.пегепб   ", "    ",		 0, 65535,		 0, MT_DEC | M_RONLY | M_RMAX(4), 		        // {2, Regular,  }58, Regular,  }
//! цпсоою H яйпшрше {Hide}
"0.янярнъм. йюкха", "    ",      0,      3,      0, MT_DEC|M_NVM,								// {2, Regular,  }60, Regular,  }
"1.онкнф гюйпшрн1", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }61, Regular,  }
"2.онкнф гюйпшрн2", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }62, Regular,  }
"3.онкнф нрйпшрн1", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }63, Regular,  }
"4.онкнф гюйпшрн2", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }64, Regular,  }
"5.  оюпнкэ 1    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }65, Regular,  }
"6.  оюпнкэ 2    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }66, Regular,  }
"7. юбюпхх йг    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }67, Regular,  }
"8.явервхй жхйкнб", "    ", 	 0,  65530,  	 0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }68, Regular,  }
"H9.релоп дбхцюр ", "цпюд",  -100U,    200,  	 0, MT_DEC|M_SIGN|M_RMAX(4),					// {2, Regular,  }69, Regular,  }
"10.  дно.оюпнкэ ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),							// {2, Regular,  }70, Regular,  }
"11.юбюпхх яерх  ", "    ",      0,  65530,      0, MT_DEC|M_SADR(35),							// {2, Regular,  }71, Regular,  }
"12.мехяопюб яерх", "    ",      0,  65530,      0, MT_DEC|M_SADR(35),							// {2, Regular,  }72, Regular,  }
"13.япедмее мюоп ", "B   ",      0,    500,      0, MT_DEC|M_RMAX(2),							// {2, Regular,  }73, Regular,  }
"14.япедмхи рнй ю", "A   ",      0,   8000,      0, MT_DEC|M_RMAX(3)|M_PREC(1),					// {2, Regular,  }74, Regular,  }
"15.япедмхи рнй %", "%   ",      0,   8000,      0, MT_DEC|M_RMAX(3)|M_PREC(1),					// {2, Regular,  }75, Regular,  }
"16.рнй оепеундю ", "%   ",      0,   3000,      0, MT_DEC|M_NVM|M_RMAX(3)|M_PREC(1),			// {2, Regular,  }76, Regular,  }
"17.лнлмр рнй 0_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),						// {2, Regular,  }77, Regular,  }
"18.лнлмр рнй 0_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }78, Regular,  }
"19.лнлмр рнй 0_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }79, Regular,  }
"20.лнлмр рнй 0_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }80, Regular,  }
"21.лнлмр рнй 0_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }81, Regular,  }
"22.лнлмр рнй 1_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }82, Regular,  }
"23.лнлмр рнй 1_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }83, Regular,  }
"24.лнлмр рнй 1_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }84, Regular,  }
"25.лнлмр рнй 1_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }85, Regular,  }
"26.лнлмр рнй 1_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }86, Regular,  }
"27.лнлмр рнй 2_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }87, Regular,  }
"28.лнлмр рнй 2_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }88, Regular,  }
"29.лнлмр рнй 2_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }89, Regular,  }
"30.лнлмр рнй 2_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }90, Regular,  }
"31.лнлмр рнй 2_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }91, Regular,  }
"32.лнлмр рнй 3_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }92, Regular,  }
"33.лнлмр рнй 3_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }93, Regular,  }
"34.лнлмр рнй 3_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }94, Regular,  }
"35.лнлмр рнй 3_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }95, Regular,  }
"36.лнлмр рнй 3_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }96, Regular,  }
"37.лнлемр сц 0_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }97, Regular,  }
"38.лнлемр сц 0_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }98, Regular,  }
"39.лнлемр сц 0_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {2, Regular,  }99, Regular,  }
"40.лнлемр сц 0_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }00, Regular,  }
"41.лнлемр сц 0_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }01, Regular,  }
"42.лнлемр сц 1_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }02, Regular,  }
"43.лнлемр сц 1_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }03, Regular,  }
"44.лнлемр сц 1_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }04, Regular,  }
"45.лнлемр сц 1_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }05, Regular,  }
"46.лнлемр сц 1_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }06, Regular,  }
"47.лнлемр сц 2_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }07, Regular,  }
"48.лнлемр сц 2_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }08, Regular,  }
"49.лнлемр сц 2_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }09, Regular,  }
"50.лнлемр сц 2_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }10, Regular,  }
"51.лнлемр сц 2_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }11, Regular,  }
"52.лнлемр сц 3_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }12, Regular,  }
"53.лнлемр сц 3_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }13, Regular,  }
"54.лнлемр сц 3_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }14, Regular,  }
"55.лнлемр сц 3_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }15, Regular,  }
"56.лнлемр сц 3_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }16, Regular,  }
"57.сцнк яхтс 0_0", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }17, Regular,  }
"58.сцнк яхтс 0_1", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }18, Regular,  }
"59.сцнк яхтс 0_2", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }19, Regular,  }
"60.сцнк яхтс 0_3", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }20, Regular,  }
"61.сцнк яхтс 0_4", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }21, Regular,  }
"62.сцнк яхтс 1_0", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }22, Regular,  }
"63.сцнк яхтс 1_1", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }23, Regular,  }
"64.сцнк яхтс 1_2", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }24, Regular,  }
"65.сцнк яхтс 1_3", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }25, Regular,  }
"66.сцнк яхтс 1_4", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }26, Regular,  }
"67.сцнк яхтс 2_0", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }27, Regular,  }
"68.сцнк яхтс 2_1", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }28, Regular,  }
"69.сцнк яхтс 2_2", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }29, Regular,  }
"70 сцнк яхтс 2_3", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }30, Regular,  }
"71.сцнк яхтс 2_4", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }31, Regular,  }
"72.сцнк яхтс 3_0", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }32, Regular,  }
"73.сцнк яхтс 3_1", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }33, Regular,  }
"74.сцнк яхтс 3_2", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }34, Regular,  }
"75.сцнк яхтс 3_3", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }35, Regular,  }
"76.сцнк яхтс 3_4", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),			// {3, Regular,  }36, Regular,  }
"77.  яейсмдш    ", "    ",      0,  	60,      0, MT_DEC|M_RMAX(1),			// {3, Regular,  }37, Seconds,  }
"78.опнжемр хяонк", "%   ",      0,    100,      0, MT_DEC|M_RMAX(2),			// {3, Regular,  }38, Regular,  }
"79.мв юдп фсп ян", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }39, Regular,  }
"80.мв юдп фсп йн", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }40, Regular,  }
"81.мв юдп фсп ою", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }41, Regular,  }
"82.гюо фспм янаш", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }42, Regular,  }
"83.гюо фспм йнлю", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }43, Regular,  }
"84.гюо фспм оюпю", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }44, Regular,  }
"85. йнлюмдш асп ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),			// {3, Regular,  }45, LogCmdControlWord,  }
"86.яапня фспмюкю", "    ",      0,  1,          0, MT_DEC|M_RMAX(4),			// {3, Regular,  }46, Regular,  }
"87.онкмши унд   ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }47, Regular,  }
"88.пекеимши пеф ", "    ",      0,      1,      0, MT_DEC|M_NVM|M_SADR(188),			// {3, Regular,  }48, Regular,  }
"89.окну гюд 2Йцж", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }49, Regular,  }
"90.окну гюд 200ц", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }50, Regular,  }
"91.окну гюд 50цж", "    ", 	 0,  65530,  	 0, MT_DEC|M_RMAX(4),			// {3, Regular,  }51, Regular,  }
"92.окну гюд 50цж", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }52, Regular,  }
"93.окну гюд 50цж", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }53, Regular,  }
"94.окну гюд 10цж", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }54, Regular,  }
"95.окну гюд 10цж", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }55, Regular,  }
"96.яапя окну гюд", "    ",      0,  65530,      0, MT_DEC|M_RMAX(1),			// {3, Regular,  }56, Regular,  } 
"97.бпелъ CPU    ", "рюйр",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }57, Regular,  }
"98.яохянй гюдюв ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }58, Regular,  } 
"99.мнлеп гюдювх ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }59, Regular,  } 
"100.рейсыее IU  ", "    ",      0,  65535,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }60, Regular,  }
"101.рейсыее IV  ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RMAX(4),			// {3, Regular,  }61, Regular,  }
"102.рейсыее IW  ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }62, Regular,  }
"103.гнмю ялеыемх", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }63, Regular,  }
"104.SAVED POS. %", "    ", -1000U,   2000,      0, MT_DEC|M_SIGN|M_NVM|M_RMAX(4),		// {3, Regular,  }64, Regular,  }
"105.йнпп рнйю U ", "    ",      0,  65530,   1457, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }65, Regular,  }
"106.йнпп рнйю V ", "    ",      0,  65530,   1457, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }66, Regular,  }
"107.йнпп рнйю W ", "    ",      0,  65530,   1457, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }67, Regular,  }
"108.ялеы рнйю U ", "    ",      0,  65530,  33700, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }68, Regular,  }
"109.ялеы рнйю V ", "    ",      0,  65530,  33700, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }69, Regular,  }
"110.ялеы рнйю W ", "    ",      0,  65530,  33690, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }70, Regular,  }
"111.йнпп мюоп R ", "    ",      0,  65530,    190, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }71, Regular,  }
"112.йнпп мюоп S ", "    ",      0,  65530,    190, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }72, Regular,  }
"113.йнпп мюоп T ", "    ",      0,  65530,    190, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }73, Regular,  }
"114.ялеы мюоп R ", "    ",      0,  65530,  32760, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }74, Regular,  }
"115.ялеы мюоп S ", "    ",      0,  65530,  32760, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }75, Regular,  }
"116.ялеы мюоп T ", "    ",      0,  65530,  32760, MT_DEC|M_PWP2|M_NVM|M_RMAX(4),// {3, Regular,  }76, Regular,  }
"117.гнмю опхбндю", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),				// {3, Regular,  }77, Regular,  }
"118.йнмрп.ясллю ", "    ",      0,  65535,      0, MT_DEC|M_RMAX(3),			// {3, Regular,  }78, Regular,  }
"119.сцнк яхтс   ", "цпюд",      0,    180,      0, MT_DEC|M_RONLY|M_RMAX(2),			// {3, Regular,  }79, Regular,  } 
"120.яберндхндш  ", "    ",      0,    255,      0, MT_DEC|M_RMAX(8),// {3, Regular,  }80, Regular,  }
"121.аегрнй оюсгю", "яЕЙ ",     15,    100,     15, MT_DEC|M_PWP2|M_NVM|M_PREC(2)|M_RMAX(4),	// {3, Regular,  }81, Regular,  } 
"122.явер ньха до", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {3, Regular,  }82, Regular,  }
"123.яйювнй онк 1", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {3, Regular,  }83, Regular,  }
"124.яйювнй онк 2", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {3, Regular,  }84, Regular,  }
"125.яйнпнярэ нрй", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {3, Regular,  }85, Regular,  }
"126.яйнпнярэ гюй", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }86, Regular,  }
"127.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }87, Regular,  }
"128.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }88, Regular,  }
"129.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }89, Regular,  }
"130.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }90, Regular,  }
"131.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }91, Regular,  }
"132.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }92, Regular,  }
"133.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }93, Regular,  }
"134.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }94, Regular,  }
"135.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }95, Regular,  }
"136.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }96, Regular,  }
"137.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }97, Regular,  }
"138.  пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }98, Regular,  }
"139.пбх йнмжебхй", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),			// {3, Regular,  }99, Regular,  }
//! цпсоою ю хмдхйюжхъ {Show}
"ю0.ярюрся пюанрш", "    ",		0,	65530,		0, M_RUNS|M_SADR(1),			// {4, Regular,  }0, Regular,  }0, Status,  }
"ю1.дхюц опнжеяяю", "    ",		0,	65530,		0, M_RUNS|M_SADR(18),			// {4, Regular,  }0, Regular,  }1, Fault,  }
"ю2.дхюцмняр яерх", "    ",		0,	65530,		0, M_RUNS|M_SADR(35),			// {4, Regular,  }0, Regular,  }2, Fault,  }
"ю3.дхюц мюцпсгйх", "    ", 	0,  65530,  	0, M_RUNS|M_SADR(52),			// {4, Regular,  }0, Regular,  }3, Fault,  }
"ю4.дхюцм сярп-бю", "    ", 	0,  65530,  	0, M_RUNS|M_SADR(69),			// {4, Regular,  }0, Regular,  }4, Fault,  }
" ю5.яняр бунднб ", "    ", 	0,  65530,  	0, M_RUNS|M_SADR(86),			// {4, Regular,  }0, Regular,  }5, Regular, True}
" ю6.яняр бшунднб", "    ", 	0,  65530,  	0, M_RUNS|M_SADR(103),			// {4, Regular,  }0, Regular,  }6, StatusDigOut,  }
"  ю7.онкнфемхе  ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }0, Regular,  }7, Regular,  }
"   ю8.лнлемр    ", "м*л ", 	0,  11000,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }0, Regular,  }8, Regular, True}
"   ю9.яйнпнярэ  ", "на/л",-3600U,   3600,  	0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3),		// {4, Regular,  }0, Regular,  }9, Regular,  }
"ю10.мюоп тюгш R ", "б   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),			// {4, Regular,  }1, Regular,  }0, Regular, True}
"ю11.мюоп тюгш S ", "б   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),			// {4, Regular,  }1, Regular,  }1, Regular, True}
"ю12.мюоп тюгш T ", "б   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),			// {4, Regular,  }1, Regular,  }2, Regular, True}
" ю13.рнй тюгш U ", "ю/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }1, Regular,  }3, Regular,  } 
" ю14.рнй тюгш V ", "ю/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }1, Regular,  }4, Regular,  }
" ю15.рнй тюгш W ", "ю/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }1, Regular,  }5, Regular,  } 
"ю16.сцнк мюцпсг ", "цпюд", -180U,    180,  	0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),		// {4, Regular,  }1, Regular,  }6, Regular,  } 
"ю17.ярюрся йюкха", "    ", 	0,      3,  	0, M_STAT|M_SADR(120),			// {4, Regular,  }1, Regular,  }7, Regular,  } 
"A18.онкнфемхе % ", "%   ",-1000U,   2000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),// {4, Regular,  }1, Regular,  }8, Regular, True}
" ю19.онкмши унд ", "на  ",     0,   3000,      0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	// {4, Regular,  }1, Regular,  }9, Regular,  }
"ю20.рейсыхи унд ", "на  ",-3000U,   3000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),// {4, Regular,  }2, Regular,  }0, Regular,  }
"ю21.явер жхйкнб ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }2, Regular,  }1, Regular,  }
"ю22.релоепюрспю ", "цпюд", -100U,    100,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),		// {4, Regular,  }2, Regular,  }2, Regular,  }
"ю23.бепяхъ он   ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(4)|M_PREC(3),	// {4, Regular,  }2, Regular,  }3, Regular,  }
"ю24.онкнф.щмйнд.", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }2, Regular,  }4, Regular,  }
"ю25.релоп дбхцюр", "    ",     0,      1,  	0, M_STAT|M_SADR(253),		// {2, Regular,  }52, Regular,  } 260 425 SDV 8.07.14 рЕЛОЕПЮРСПЮ ДБХЦЮРЕКЪ. оПХ МЕНАУНДХЛНЯРХ САПЮРЭ
"ю26.веп тюг яерх", "    ", 	0,      2,  	0, M_STAT|M_SADR(182),			// {4, Regular,  }2, Regular,  }6, Regular,  }
"ю27.йнмрп. ясллю", "    ", 	0,  65535,  	0, M_HSHOW|M_RMAX(3),			// {4, Regular,  }2, Regular,  }7, Regular,  }
"ю28.пег.дхюцм.до", "    ", 	0,      1,  	0, M_STAT|M_SADR(258),			// {4, Regular,  }2, Regular,  }8, Regular,  }
"ю29.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }2, Regular,  }9, Regular,  }
"ю30.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }0, Regular,  }
"ю31.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }1, Regular,  }
"ю32.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }2, Regular,  }
"ю33.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }3, Regular,  }
"ю34.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }4, Regular,  }
"ю35.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }5, Regular,  }
"ю36.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }6, Regular,  }
"ю37.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }7, Regular,  }
"ю38.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }8, Regular,  }
"ю39.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),			// {4, Regular,  }3, Regular,  }9, Position,  }
//! цпсоою E фспмюк 
"     бпелъ      ", "    ",      0,  65535,      0, M_TIME|M_RONLY,						//
"      дюрю      ", "    ",      0,  65535,     33, M_DATE|M_RONLY,						//
"E0.ярюрся пюанрш", "    ",      0,  65535,      0, M_RUNS|M_SADR(1),					//
"E1.дхюцм опнжеяя", "    ",      0,  65535,      0, M_RUNS|M_SADR(18),					//
"E2.дхюцмняр яерх", "    ",      0,  65535,      0, M_RUNS|M_SADR(35),					//
"E3.дхюцм мюцпсгй", "    ",      0,  65535,      0, M_RUNS|M_SADR(52),					//
"E4.дхюцм сярп-бю", "    ",      0,  65530,      0, M_RUNS|M_SADR(69),					//
"E5.онкнфемхе %  ", "%   ", -1000U,   2000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),	//
"    E6.лнлемр   ", "м*л ",     10,  11000,     10, MT_DEC|M_RONLY|M_RMAX(4),			//
"E7.мюопъф тюгш R", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),			//
"E8.мюопъф тюгш S", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),			//
"E9.мюопъф тюгш T", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),			//
"E10.рнй тюгш U  ", "ю/% ", 	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	//
"E11.рнй тюгш V  ", "ю/% ", 	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	//
"E12.рнй тюгш W  ", "ю/% ",  	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),	//
"E13.релоеп акнй ", "цпюд",   -100U,    100,     0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),	//
"E14.яняр бунднб ", "    ",      0,  65535,      0, M_RUNS|M_SADR(86),			//
"E15.яняр бшунднб", "    ",      0,  65535,      0, M_RUNS|M_SADR(103),			//
"   E16.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E17.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E18.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E19.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E20.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E21.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E22.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E23.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E24.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E25.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E26.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E27.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E28.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),	//
"   E29.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4)	//
//! оЮПЮЛЕРПШ ЙНМЕЖ
};


const struct MENU_STRING values[] = {
//! яРПНЙХ  
	"    гюохяэ      ",	// 0
	//!----------------
	"  ме нопедекем  ",	// 1
	"      ярно      ",	// 2
	"     юбюпхъ     ",	// 3
	" хдер гюйпшрхе  ",	// 4
	" хдер нрйпшрхе  ",	// 5
	"мехяоп мю акнйе ",	// 6
	"    гюйпшрн     ",	// 7
	"    нрйпшрн     ",	// 8
	"     лстрю      ",	// 9
	" леярмне сопюбк ",	// 10
	"  бйкчвем рем   ",	// 11
	" пегепб охрюмхе ",	// 12
	"юбюпхъ мю акнйе ",	// 13
	"  юбюпхъ мю ря  ",	// 14
	"  мехяопюбмнярэ ",	// 15
	"дхярюмж. сопюбк.",	// 16
	"мехяопюбм мю ря ",	// 17
	//!----------------
	"   мер юбюпхи   ",	// 18
	"  мер дбхфемхъ  ",	// 19
	"  веп тюг дбхц  ",	// 20
	" ме гюдюмн гюйп ",	// 21
	" ме гюдюмн нрйп ",	// 22
	" мер йюкхапнбйх ",	// 23
	"сокнрм ме днярхц",	// 24
	"  оепецпеб дбхц ",	// 25
	" мебепмне лс/дс ",	// 27
	"онмхф яноп дбхц ",	// 26
	" пефхл опнцнмю  ",	// 28
	"     пегепб     ",	// 29
	"     пегепб     ",	// 30
	"     пегепб     ",	// 31
	"     пегепб     ",	// 32
	"     пегепб     ",	// 33
	"     пегепб     ",	// 34
	//!----------------
	"   мер юбюпхи   ",	// 35
	"лхм мюоп тюгш R ",	// 36
	"лхм мюоп тюгш S ",	// 37
	"лхм мюоп тюгш T ",	// 38
	"люйя мюоп тюгш R",	// 39
	"люйя мюоп тюгш S",	// 40
	"люйя мюоп тюгш T",	// 41
	"     пегепб     ",	// 42
	"     пегепб     ",	// 43
	"слем мюоп тюгш R",	// 44
	"слем мюоп тюгш S",	// 45
	"слем мюоп тюгш T",	// 46
	"мюоп тюгш R 47% ",	// 47
	"мюоп тюгш S 47% ",	// 48
	"мюоп тюгш T 47% ",	// 49
	"     пегепб     ",	// 50
	"     пегепб     ",	// 51
	//!----------------
	"   мер юбюпхи   ",	// 52
	"  напшб тюгш U  ",	// 53
	"  напшб тюгш V  ",	// 54
	"  напшб тюгш W  ",	// 55
	"бп-рнй оепецпсгй",	// 56
	" нрясрябхе дбхц ",	// 57
	"   йг тюгш U    ",	// 58
	"   йг тюгш V    ",	// 59
	"   йг тюгш W    ",	// 60
	" йг мю меирпюкэ ",	// 61
	"     пегепб     ",	// 62
	"     пегепб     ",	// 63
	"     пегепб     ",	// 64
	"     пегепб     ",	// 65
	"     пегепб     ",	// 66
	"     пегепб     ",	// 67
	"     пегепб     ",	// 68
	//!----------------
	"   мер юбюпхи   ",	// 69
	"яани дюрв онкнф ",	// 70
	" яани оюлърх 1  ",	// 71
	" яани оюлърх 2  ",	// 72
	"   яани вюянб   ",	// 73
	"яани дюрв релоеп",	// 74
	" оепецпеб акнйю ",	// 75
	"оепенукюфд акнйю",	// 76
	"  яани ря/рс    ",	// 77
	"бшйкчвемхе акнйю",	// 78
	"     пегепб     ",	// 79
	"     пегепб     ",	// 80
	"йпхр оепецп акнй",	// 81
	"ме гюдюмн бпелъ ",	// 82
	"     пегепб     ",	// 83
	"     пегепб     ",	// 84
	"  акнй бйкчвем  ",	// 85
	//!----------------
	"  мер яхцмюкнб  ",	// 86
	"  бунд нрйпшрэ  ",	// 87
	"  бунд гюйпшрэ  ",	// 88
	"   бунд ярно    ",	// 89
	"     бунд лс    ",	// 90
	"     бунд дс    ",	// 91
	"     пегепб     ",	// 92
	"     пегепб     ",	// 93
	"     пегепб     ",	// 94
	"     пегепб     ",	// 95
	"     пегепб     ",	// 96
	"     пегепб     ",	// 97
	"     пегепб     ",	// 98
	"     пегепб     ",	// 99
	"     пегепб     ",	// 100
	"     пегепб     ",	// 101
	"     пегепб     ",	// 102
	//!----------------
	"  мер яхцмюкнб  ",	// 103
	"  гюйпшбюеряъ   ",	// 104
	"     лс/дс      ",	// 105
    "     лстрю      ",	// 106
	"    нрйпшрн     ",	// 107
	"     юбюпхъ     ",	// 108
	"    гюйпшрн     ",	// 109
	" мехяопюбмнярэ  ",	// 110
	"  нрйпшбюеряъ   ",	// 111
	"     пегепб     ",	// 112
	"     пегепб     ",	// 113
	"     пегепб     ",	// 114
	"     пегепб     ",	// 115
	"     пегепб     ",	// 116
	"     пегепб     ",	// 117
	"     пегепб     ",	// 118
	"     пегепб     ",	// 119
	//!----------------
	" мер йюкхапнбйх ",	// 120
	" гюдюмн гюйпшрн ",	// 121
	" гюдюмн нрйпшрн ",	// 122
	"йюкхап бшонкмемю",	// 123
	//!----------------
	"    йкхмнбюъ    ",	// 124
	"    ьхаепмюъ    ",	// 125
	//!----------------
	"  ме нопедекем  ",	// 126
	" аег сокнрмемхъ ",	// 127
	"сокнрмемхе гюйп ",	// 128
	"сокнрмемхе нрйп ",	// 129
	"сок гюйп х нрйп ",	// 130
	//!----------------
	"     опълни     ",	// 131
	"    напюрмши    ",	// 132
	//!----------------
	"деиярб гмювемхъ ",	// 133
	"опнжемрш нр мнл ",	// 134
	//!----------------
	"    бшйкчвем    ",	// 135
	"  бшанп пефхлю  ",	// 136
	"рнкэйн пефхл лс ",	// 137
	"рнкэйн пефхл дс ",	// 138
	//!----------------
	" бяе хмрептеияш ",	// 139
	"рнкэйн дхяйперм ",	// 140
	"рнкэйн онякеднб ",	// 141
	//!----------------
	"   бшйкчвемю    ",	// 142
	"    бйкчвемю    ",	// 143
	//!----------------
	"      24б       ",	// 144
	"      220б      ",	// 145
	//!----------------
	"    2400 анд    ",	// 146
	"    4800 анд    ",	// 147
	"    9600 анд    ",	// 147
	"   19200 анд    ",	// 149
	"   38400 анд    ",	// 150
	"   57600 анд    ",	// 151
	"   115200 анд   ",	// 152
	//!----------------
	"   бшйкчвемю    ",	// 153
	" хмдхй мю акнйе ",	// 154
	"хмд мю акнйе/ря ",	// 155
	"хмдхй х нярюмнб ",	// 156
	//!----------------
	"  мер йнлюмдш   ",	// 157
	"     гюдюрэ     ",	// 158
	"    яапняхрэ    ",	// 159
	//!----------------
	"  мер йнлюмдш   ",	// 160
	"    яапняхрэ    ",	// 161
	//!----------------
	"  мер йнлюмдш   ",	// 162
	"      ярно      ",	// 163
	"    гюйпшрэ     ",	// 164
	"    нрйпшрэ     ",	// 165
	"  гюйпшрэ реяр  ",	// 166
	"  нрйпшрэ реяр  ",	// 167
	"     пегепб     ",	// 168
	"     пегепб     ",	// 169
	"     пегепб     ",	// 170
	"     пегепб     ",	// 171
	"     пегепб     ",	// 172
	"     пегепб     ",	// 173
	"     пегепб     ",	// 174
	"     пегепб     ",	// 175
	//!----------------
	" аег хглемемхи  ",	// 176
	"пюглшй йбн х йбг",	// 177
	"пюгл йпюрйнбпел ",	// 178
	//!----------------
	"я ондрбепфдемхел",	// 179
	"    пюгпеьемн   ",	// 180
	"    гюопеыемн   ",	// 181
	//!----------------
	"  ме нопедекемн ",	// 182
	"   опълне RST   ",	// 183
	"  напюрмне SRT  ",	// 184
		//!----------------
	" оепелеммши рнй ",	// 185
	" онярнъммши рнй ",	// 186
	//!----------------
	"     пегепб     ", // 187
	//!----------------
	"    бшйкчвем    ",	// 188
	"    бйкчвем     ",	// 189
	//!----------------
	"мнпл пюгнлймсрши",	// 190
	" мнпл гюлймсрши ",	// 191
	//!----------------
    "ме нопедекем    ",	// 192
	"щож-10000 д.10  ",	// 193
	"щож-15000 д.10  ",	// 194
	"щож-20000 F.40  ",	// 195
	"щож-15000 д.10 р",	// 196
	"щож-20000 F.40 T",	// 197
	"     пегепб     ",	// 198
	"     пегепб     ",	// 199
	"     пегепб     ",	// 200
	"     пегепб     ",	// 201
	"     пегепб     ",	// 202
	"     пегепб     ",	// 203
	"     пегепб     ",	// 204
	"     пегепб     ",	// 205
	"     пегепб     ",	// 206
	"     пегепб     ",	// 207
	"     пегепб     ",	// 208
	"     пегепб     ",	// 209
	"     пегепб     ",	// 210
	"     пегепб     ",	// 211
		//!----------------
	"  0 x рЮИЛЮСР   ",	// 212
	"  аЕГ ЛМНФХРЕКЪ ",	// 213
	"  2 x рЮИЛЮСР   ",	// 214
	"  3 x рЮИЛЮСР   ",	// 215
	"  4 x рЮИЛЮСР   ",	// 216
	"  5 x рЮИЛЮСР   ",	// 217
	//!----------------
	"бшярюбк он тюйрс",	// 218
	" бяецдю сяр. б 1",	// 219
	//!----------------
	"   осщ v 0.013  ",	// 220
	"   осщ v 0.014  ",	// 221
	//!----------------
	" аег рнплнфемхъ ",	// 222
	"рнпл б йпюим онк",	// 223
	" рнплнфем бяецдю",	// 224
	//!----------------
	" псвмне соп     ",	// 225
	//!----------------
	"  аег опнбепйх  ",	// 226
	" мю мевермнярэ  ",	// 227
	"  мю вермнярэ   ",	// 228
	//!----------------
    "асп-15-20 рнлгщк",	// 229
	"   ас-50 рщй    ",	// 230
	//!----------------
	"     пегепб     ",	// 231
	//!----------------
	"      AVAGO     ", // 232
	"      яйа хя    ", // 233
	//!----------------
	" осяй гюопеыем  ",	// 234
	" осяй пюгпеьем  ",	// 235
	//!----------------
	" BLUEGIGA WT41-A",	// 236
	" AMP'ED RF BT-31",	// 237
	//!----------------
	"хмрепонкъжхъ онб",	// 238
	" тсмйжхъ лнлемрю",	// 239
	//!----------------
	"он бепумелс спнб",	// 240
	"он мхфмелс спнбм",	// 241
	//!----------------
	"мнпл релоеп дбхц",	// 242
	"онбшь рело дбхц ",	// 243
	//!----------------
	"  мер йнлюмдш   ",	// 244
	"осяй реяр дбхцюр",	// 245
	//!----------------
	"     пегепб     ",	// 246
	//!----------------
	"  OLED WINSTAR  ",	// 247
	"   VAC FUTABA   ",	// 248
	//!----------------
	"рнплнфем. ярюпне",	// 249
	"рнплнфемхе мнбне",	// 250
	//!----------------
	"  мнбши лернд   ",	// 251
	"  ярюпши лернд  ",	// 252
		//!----------------
	"мнпл релоеп дбхц",	// 253
	"онбшь релоп дбхц",	// 254
	//!----------------
	"  мЕР ЙНЛЮМДШ   ",	// 255
	"    бйкчвхрэ    ",	// 256
	"    бшйкчвхрэ   ",	// 257
	//!----------------
	"   до ХЯОПЮБЕМ  ",	// 258
	"яАНХ Б ПЮАНРЕ до"	// 259
//! яРПНЙХ ЙНМЕЖ
};

const struct MENU_STRING AddStr[] = {
	"сярпниярб гюмърн",	// 0
	"    йнлюмдю     ",	// 1
	"    нрлемемю    ",	// 2
	"  о 999.99%     ",	// 3
//-----------------------------------------------
	"щйяо. мюярпнийю?",	// 4	0
	"    дю  мер     ",	// 5
	" гюдюрэ лнлемр  ",	// 6	1
	"йюкхапнбйх  нй  ",	// 7
	" рхо йюкхапнбйх ",	// 8	2
	" псвм  йнк.нанп ",	// 9	
	"оепебедх б онкнф",	// 10	3
	" гюйпшрн   нй   ",	// 11
	"оепебедх б онкнф",	// 12	4
	" нрйпшрн   нй   ",	// 13	
	"оепебедх б йпюим",	// 14	5
	"онкнфемхе   нй  ",	// 15
	"   онкнфемхе    ",	// 16	6
	"   гюйп  нрйп   ",	// 17
	"опнбепхрэ йюкха?",	// 18	7
	"    дю  мер     ", // 19
	"   осярхре б    ",	// 20	8
	"    нрйпшрн     ", // 21
	"   онкнфемхе    ",	// 22	9	// гДЕЯЭ БШБНДЪРЯЪ РЕЙСЫХЕ НАНПНРШ
	"                ", // 23
	"яапня йюкхапнб? ",	// 24	10
	"    дю  мер     ", // 25
	"   осярхре б    ",	// 26	11
	"    гюйпшрн     ", // 27
	" сярпюхб йюкха? ",	// 28	12
	"    дю  мер     ", // 29
	"гюдюире пюанвхе ",	// 30	13
	"  лнлемрш   нй  ", // 31
//--------------------------------
	"вепеднбюмхе тюг ",	// 32
	" ме нопедекемн  ", // 33
//--------------------------------
	"    яапняэре    ",	// 34
	"   йюкхапнбйс   ", // 35
//--------------------------------
	"дкъ ондрбепфдем.",	// 36
	" мюфлхре 'ббнд' ", // 37
	" педюйрхпнбюмхе ",	// 38
	"оюпюл. пюгпеьемн", // 39
	"   мебепмши     ",	// 40
	"  йнд днярсою   ", // 41
	"   йнд днярсою  ",	// 42
	"     яапньем    ", // 43
	"сярюмнбкем мнбши",	// 44
	"  йнд днярсою   ", // 45
	" ббедеммше йндш ",	// 46
	"  ме янбоюдючр! ", // 47
//--------------------------------
	"бЙКЧВЕМН РЕЯРХП.", // 48
	"ДЮРВХЙЮ ОНКНФЕМ.", // 49
	"бШОНКМХРЕ ОСЯЙ Б", // 50
	"     нрйпшрн    ", // 51
	"     гюйпшрн    ", // 52
	"  дХЮЦМНЯРХЙЮ до", // 53
	"    ГЮБЕПЬЕМЮ   ", // 54
	"дЮРВХЙ ОНКНФЕМХЪ", // 55
	"    ХЯОПЮБЕМ    ", // 56
	" нАМЮПСФЕМШ ЯАНХ", // 57
	"   Б ПЮАНРЕ до  "  // 58
};


// ТХЙЯХПНБЮММШЕ РНВЙХ ДКЪ ЯМЪРХЪ ЛНЛЕМРЮ
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


// лЮЙПНЯ ВРЕМХЪ ЯРПНЙХ ХГ ТКЕЬ. лЮЯЯХБ add_strings
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
