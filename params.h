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
//! цПСООШ
	"   1 цпсоою A   ", "    хмдхйюжхъ   ", GR_INIT(GroupA, 0),	//{Show}
	"   2 цпсоою B   ", "онкэг мюярпнийх ", GR_INIT(GroupB, 0),	//{User}
	"   3 цпсоою C   ", "гюбнд мюярпнийх ", GR_INIT(GroupC, 0),	//{Factory}
	"   4 цпсоою D   ", "    йнлюмдш     ", GR_INIT(GroupD, 0),	//{Command}
//  "   5 цпсоою H   ", "  яйпшрше       ", GR_INIT(GroupE, 0),	//{Hide}
	"   6 цпсоою E   ", "     фспмюк     ", GR_INIT(GroupE, 2)	//{None}
//  "   7 цпсоою R   ", "  наыхе         ", GR_INIT(GroupE, 0),	//{Hide}
//! цПСООШ ЙНМЕЖ
};

const struct MENU_PARAM params[] = {
//! оЮПЮЛЕРПШ
//! цпсоою р наыхе 
"р0.реумнк. пец. ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {0, Regular,  }
"р1.пец. детейр. ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {1, Regular,  }
"р2.онкнфемхе    ", "    ",-1000U,      2000,       0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1), 	// {2, Regular,  }
"р3.йнлюмдю      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {3, Regular,  }
"р4.явервхй жхйк.", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {4, Regular,  }
"р5.янярнъм. ярно", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {5, Regular,  }
"р6.рнй тюгш ю   ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {6, Regular,  }
"р7.пюгдекэм.ярно", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {7, Regular,  }
"р8.яняр акнйхпнб", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {8, Regular,  }
"р9.пефл.нап ярно", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {9, Regular,  }
"р10.лнлемр сокнр", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {10, Regular,  }
"р11.лнлемр дбхф.", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {11, Regular,  }
"р12.б35         ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {12, Regular,  }
"р13.б36         ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {13, Regular,  }
"р14.бпелъ рпнц. ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {14, Regular,  }
"р15.бпелъ сокнр.", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {15, Regular,  }
"р16.бпелъ дбхфем", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {16, Regular,  }
"р17.лнлемр %    ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {17, Regular,  }
"р18.яйнпнярэ    ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {18, Regular,  }
"р19.б24         ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {19, Regular,  }
"р20.лнлемр ймЛ  ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {20, Regular,  }
"р21.реяр дхяй бу", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {21, Regular,  }
"р22.рейсы.детейр", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {22, Regular,  }
"р23.пегепб      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {23, Regular,  }
"р24.пегепб      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {24, Regular,  }
"р25.пегепб      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {25, Regular,  }
"р26.юдпея б яерх", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {26, Regular,  }
"р27.б61         ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {27, Regular,  }
"р28.лнлемр      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {28, Regular,  }
"р29.бепяхъ      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {29, Regular,  }
"р30.лнлемр      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {30, Regular,  }
"р31.бепяхъ      ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {31, Regular,  }
"р32.ондбепяхъ   ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {32, Regular,  }
"р33.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {33, Regular,  }
"р34.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {34, Regular,  }
"р35.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {35, Regular,  }
"р36.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {36, Regular,  }
"р37.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {37, Regular,  }
"р38.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {38, Regular,  }
"р39.            ", "    ",		0,	   65535,		0, MT_DEC|M_RONLY|M_RMAX(4), 	// {39, Regular,  }
//! цпсоою B онкэг мюярпнийх
"B0.лнлемр гюйп  ", "м*л ",		1,	   11,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {40, Regular,  }
"B1.лнлемр нрйп  ", "м*л ",		1,	   11,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {41, Regular,  }
"B2.лнл сок гюйп ", "м*л ",		1,	   11,		2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {42, Regular,  }
"B3.лнл рпнц гюйп", "м*л ", 	1,     11,  	4, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {43, Regular,  }
"B4.лнл сок нрйп ", "м*л ", 	1,     11,  	2, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {44, Regular,  }
"B5.лнл рпнц нрйп", "м*л ", 	1,     11,  	4, MT_DEC|M_PWP1|M_NVM|M_KMM|M_RMAX(4),	// {45, Regular,  }
"B6.рхо гюдбхфйх ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(124),		// {46, Regular,  }
"B7.рхо сокнрмем ", "    ", 	1,      4,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(126),		// {47, Regular,  }
"B8.рхо ьрнйю    ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(131),		// {48, Regular,  }
"B9.гнмю гюйпшрн ", "на  ", 	0,   3000,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),// {49, Regular,  }
"B10.гнмю нрйпшрн", "на  ", 	0,   3000,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),// {50, Regular,  }
"B11.гнмю ялеыем ", "на  ", 	0,    100,  	0, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {51, Regular,  }
"B12.йнд днярсою ", "    ", 	0,  65530,  	0, MT_DEC|M_RMAX(4),					// {52, Regular,  }
"   B13.бпелъ    ", "    ", 	0,  65530,  	0, MT_TIME|M_RMAX(1)|M_PWP1,			// {53, Time,  }
"   B14.дюрю     ", "    ", 	0,  65530,  	0, MT_DATE|M_RMAX(2)|M_PWP1,			// {54, Date,  }
"B15.йнпп вюянб  ", "я   ", -300U,    300,  	0, MT_DEC|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),	// {55, Regular,  }
"B16.хмдхйюж рнйю", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(133),		// {56, Regular,  }
"B17.пефхл лс/дс ", "    ", 	0,      3,  	1, MT_STR|M_PWP1|M_NVM|M_SADR(135),		// {57, Regular,  }
#if BUR_M
"B18.пегепб      ", "    ", 	2,      2,  	2, MT_DEC|M_RONLY|M_RMAX(4),		// {58, Regular,  }
#else
"B18.хярнв йнл дс", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(139),		// {58, Regular,  }
#endif
"B19.акнй гюкхо  ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(142),		// {59, Regular,  }
"B20.бпелъ йнлюмд", "я   ", 	1,    100,  	1, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {60, Regular,  }
#if BUR_M
"B21.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4), 		// {61, Regular,  }
#else
"B21.рхо бу яхцм ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(144),		// {61, Regular,  }
#endif
#if BUR_90
	#if BUR_M
"B22.люяй бу яхцм", "    ", 	0,     63,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(0),		// {62, Regular,  }
"B23.люяй бшу яхц", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),		// {63, Regular,  }
	#else
"B22.люяй бу яхцм", "    ", 	0,     63,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(5),		// {62, Regular,  }
"B23.люяй бшу яхц", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),		// {63, Regular,  }
	#endif
#else
	#if BUR_M
"B22.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {62, Regular,  }
"B23.люяй бшу яхц", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),		// {63, Regular,  }
	#else
"B22.люяй бу яхцм", "    ", 	0,     31,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {62, Regular,  }
"B23.люяй бшу яхц", "    ", 	0,  65530,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(7),		// {63, Regular,  }
	#endif
#endif
"B24.яйнп ябъгх  ", "    ", 	0,      6,  	3, MT_STR|M_PWP1|M_NVM|M_SADR(146),		// {64, Regular,  }
"B25.юдпея ярюмж ", "    ", 	1,    247,  	1, MT_DEC|M_PWP1|M_NVM|M_RMAX(2),		// {65, Regular,  }
"B26.пефхл ябъгх ", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(226),		// {66, Regular,  }
"B27.пефхл онфюп ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(188),		// {67, Regular,  }
#if BUR_M
"B28.пегепб      ", "    ", 	2,      2,  	2, MT_DEC|M_RONLY|M_RMAX(4),		// {68, Regular,  }
#else
"B28.пебепя ундю ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(188),			// {68, Regular,  }
#endif
"B29.сопюбк.я одс", "    ", 	0,      2,  	2, MT_STR|M_PWP1|M_NVM|M_SADR(177),		// {69, Regular,  }
"B30.BLUETOOTH   ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_SADR(188),	// {70, Regular,  }
"   B31.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		//71
"B32.бпел нцп лнл", "я   ", 	3,    100,     10, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {72, Regular,  }
"B33.осрэ сокнрм ", "на  ", 	1,   1000,    100, MT_DEC|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(1),// {73, Regular,  }
"б34.рхо опхбндю ", "    ",     0,     24,      0, MT_STR|M_PWP1|M_NVM|M_SADR(229),		// {74, Regular,  }
"B35.дефспм пефхл", "C   ",     0,   6000,      0, MT_DEC|M_PWP1|M_NVM|M_RMAX(3),		// {75, Regular,  }
#if BUR_M
"B36.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {76, Regular,  }
#else
"B36.пеюй мю ярно", "    ", 	0,      2,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(209),		// {76, Regular,  }
#endif
#if BUR_90
"B37.90б60       ", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(188),		// {77, Regular,  }
#else
"   B37.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {77, Regular,  }
#endif
"B38.йбнйбг б дбх", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(212),		// {78, Regular,  }
"B39.пефхл 2 ярно", "    ", 	0,      1,  	0, MT_STR|M_PWP1|M_NVM|M_SADR(273),		// {79, Regular,  }
"   B40.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {80, Regular,  }
"   B41.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {81, Regular,  }
"   B42.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {82, Regular,  }
"   B43.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {83, Regular,  }
"   B44.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {84, Regular,  }
"   B45.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {85, Regular,  }
"   B46.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {86, Regular,  }
"   B47.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {87, Regular,  }
"   B48.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {88, Regular,  }
"   B49.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {89, Regular,  }
//------------------------------------------------------------------
//! цпсоою C гюбнд мюярпнийх
" я0.йнд днярсою ", "    ",     0,  65530,      0, MT_DEC|M_RMAX(4),					// {90, Regular,  }
"   я01.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {91, Regular,  }
"я2.цнд хгцнрнбк ", "    ",     0,     99,     18, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {92, ProductYear,  }
"я3.гюбнд мнлеп  ", "    ",     0,   9999,      0, MT_BIN|M_PWP1|M_NVM|M_RMAX(3),		// {93, FactoryNumber,  }
"я4.люйя лнлемр  ", "йм*л",    10,   1000,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(3)|M_PREC(2),// {94, Regular,  }
"я5.мнлхмюкэм рнй", "A   ",     1,    300,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {95, Regular,  }
"я6.йо педсйрнпю ", "    ",     1,  65530,  10000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4)|M_PREC(2),// {96, Regular,  }
"C7.йнк.яанеб до ", "    ",     0,    100,      0, MT_DEC|M_RONLY|M_RMAX(2),		// {97, Regular,  }
"C8.спнб яанъ до ", "%   ",     0,    100,     50, MT_BIN|M_PWP1|M_NVM|M_RMAX(2), 		// {98, Regular,  }
"я9.дюрв унккю   ", "    ",     0,     15,      0, MT_BIN|M_PWP2|M_NVM|M_RMAX(3),		// {99, Regular,  }
"C10.ондбепяхъ он", "    ",     0,  65535,      0, MT_VERS|M_RONLY|M_NVM|M_PREC(2)|M_RMAX(4),// {100, Regular,  }
"я11.йо акнй-пед ", "    ",     1,  65530,    217, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {101, Regular,  }
"я12.жхйкш опнцнм", "    ",     0,     50,      0, MT_DEC|M_PWP2|M_RMAX(1),	// {102, Regular,  }
//-----------------------бРНПНЯРЕОЕММШЕ МЮЯРПНИЙХ
"я13.пюяяр лстрш ", "    ",     0,    100,      2, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {103, Regular,  }
"C14.рхо дюрв онк", "    ",     0,     16,      0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1), 		// {104, Regular,  }
"C15.бп яап хмдхй", "C   ",     0,     30,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {105, Regular,  }
"C16.он слнквюмхч", "    ",     0,      1,      0, MT_STR|M_PWP2|M_SADR(157),		// {106, Regular,  }
"я17.хмремя пюгц ", "    ",     0,    100,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {107, Regular,  }
"я18.бшанп рнплнф", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(190),		// {108, Regular,  }
//-----------------------рНПЛНФЕМХЕ---------------------------------------------------
"я19.сцнк рнплнф ", "цпюд",    30,    170,     45, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {109, Regular,  }
"я20.бпелъ рнплнф", "C   ",     0,     50,      7, MT_BIN|M_PWP1|M_NVM|M_RMAX(1)|M_PREC(1),  // {110, Regular,  }
"я21.аегрнй оюсгю", "я   ",     2,    100,     18, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(2),  // {111, Regular,  }
"я22.опебемр рнпл", "надб", 	0,     30,  	5, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {112, Regular,  }
"я23.пеб йбн йбг ", "    ", 	0,  	1,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {113, Regular,  }
"я24.ла оюсг ярп ", "    ", 	3,    100,     30, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),	// {114, Regular,  }
"я25.месопйбнйбг ", "    ", 	0,      1,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {115, Regular,  }
"C26.сонп рнкэйн ", "C   ",     0,   	1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(188),		// {116, Regular,  }
"я27.лнл лхм опнж", "    ", 	0,     10,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {117, Regular,  }
"я28.лмнфхрекэ Mb", "    ", 	1,      5,  	2, MT_STR|M_PWP2|M_NVM|M_SADR(267),		// {118, Regular,  }
"   я29.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {119, Regular,  }
"   я30.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {120, Regular,  }
"   я31.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {121, Regular,  }
"   я32.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {122, Regular,  }
"   я33.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {122, Regular,  }
"C34.рхо пебепяю ", "    ",     0,      2,      2, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {124, Regular,  }
//----------------------мЮЯРПНИЙЮ ДЮРВХЙНБ
"я35.йнпп релоеп ", "цпюд", -100U,    100,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),	// {125, Regular,  }
"   я36.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {126, Regular,  }
"   я37.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {127, Regular,  }
"я38.й ткрп мюоп ", "MйC ",     0,  65530,   5000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4)|M_PREC(2),	// {128, Regular,  }
"я39.й ткрп рнйю ", "MйC ",     0,  65530,   5000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4)|M_PREC(2), // {129, Regular,  }
"я40.бп гюдеп лнл", "C   ",     0,  65530,      0, MT_BIN|M_PWP1|M_NVM|M_RMAX(4)|M_PREC(1), // {130, Regular,  }
"я41.рхо BLUET-TH", "    ",     0,      1,      0, MT_STR|M_PWP2|M_NVM|M_SADR(214),			// {133, Regular,  }
#if BUR_90
"   я42.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {131, Regular,  }
#else
"я42.бепя. он осщ", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(175),		// {132, Regular,  }
#endif
"я43.онкнф.лндаюя", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(180),		// {133, Regular,  }
"я44.йнмт. лндаюя", "    ", 	0,      1,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {134, Regular,  }
"я45.ядбхц лндаюя", "    ", 	0,      1,  	0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {135, Regular,  }
"я46.яберндх реяр", "    ", 	0,      1,  	0, MT_DEC|M_RMAX(1),		// {136, Regular,  }
"C47.йнппейр жюо ", "    ",     0,  65530,   4100, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {137, Regular,  }
"C48.ялеы жюо    ", "    ",-10000U, 10000,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(4),	// {138, Regular,  }
"я49.рхо хмдхйюрп", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(254),		// {139, Regular,  }
"я50.рхо щмйндепю", "    ", 	0,      1,  	0, MT_STR|M_PWP2|M_NVM|M_SADR(260),		// {140, Regular,  }
#if BUR_90
" C51.йнп рнйю U ", "    ",      0,  65530,   4332, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),       // {141, Regular,  }
" C52.йнп рнйю V ", "    ",      0,  65530,   4332, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),       // {142, Regular,  }
" C53.йнп рнйю W ", "    ",      0,  65530,   4332, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),       // {143, Regular,  }
#else
"   C51.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {141, Regular,  }
"   C52.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {142, Regular,  }
"   C53.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {143, Regular,  }
#endif
//----------------------йНМТХЦСПЮЖХЪ ГЮЫХР
"C54.гюы люйя U  ", "    ", 	0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {144, Regular,  }
"C55.с люйя U 47%", "B   ",   220,    600,    318, MT_DEC|M_NVM|M_RMAX(2),		// {145, Regular,  }
"C56.T люйя U 47%", "C   ",     1,    200,     20, MT_DEC|M_NVM|M_RMAX(2)|M_PREC(1),	// {146, Regular,  }
"я57.спнб люйя U ", "B   ",    220,    335,    265, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {147, Regular,  }
"я58.бп люйя U м ", "C   ",      1,    200,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {148, Regular,  }
"я59.бпел люйя U ", "C   ",      1,    250,    210, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {149, Regular,  }
"C60.гюы лхм U   ", "    ", 	 0,      3,  	 3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {150, Regular,  }
"я61.спнб лхм U  ", "B   ",     90,    220,    125, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {151, Regular,  }
"я62.бп лхм U м  ", "C   ",      1,    200,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {152, Regular,  }
"я63.бпел лхм U  ", "C   ",      1,    250,    210, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {153, Regular,  }
"C64.гюы меаюк U ", "    ", 	 0,      3,  	 2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {154, Regular,  }
"я65.спнб меа U  ", "%   ",      3,     25,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {155, Regular,  }
"я66.бпел меа U  ", "C   ",      2,    200,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {156, Regular,  }
"C67.гюы слем U  ", "    ", 	 0,      3,  	 3, MT_STR|M_PWP2|M_NVM|M_SADR(153), 		// {157, Regular,  }
"я68.спнб слем U ", "б   ",      0,    110,     70, MT_BIN|M_PWP1|M_NVM|M_RMAX(2),		// {158, Regular,  }
"   я69.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {159, Regular,  }
"я70.бпел слем U ", "C   ",      1,    250,     50, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {160, Regular,  }
#if BUR_M
"я71.веп тюг яерх", "    ", 	0,      3,  	3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {161, Regular,  }
#else
"   я71.пегепб   ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {161, Regular,  }
#endif
"C72.гюы слем I  ", "    ",      0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {162, Regular,  }
"C73.спнб слем I ", "%   ",     20,    500,    100, MT_BIN|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {163, Regular,  }
"C74.бпел слем I ", "C   ",      1,    100,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(1)|M_PREC(1),// {164, Regular,  }
"C75.бп-рнй гюы  ", "    ",      0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {165, Regular,  }
"я76.йг оюсг рхй ", "    ",      0,  65535,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {166, Regular,  }
"я77.йнщт 25% гюй", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {199, Regular,  }
"я78.йнщт 35% гюй", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {200, Regular,  }
"я79.йнщт 50% гюй", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {201, Regular,  }
"я80.йнщт 75% гюй", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {202, Regular,  }
"я81.йнщт 100% гю", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {203, Regular,  }
"я82.йнп 25% гюй ", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {204, Regular,  }
"я83.йнп 40% гюй ", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {205, Regular,  }
"я84.йнп 60% гюй ", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {206, Regular,  }
"я85.йнп 80% гюй ", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {207, Regular,  }
"я86.йнп 110% гюй", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {208, Regular,  }
"я87.бпел пюгл ло", "я   ",      1,     50,     10, MT_BIN|M_PWP1|M_NVM|M_RMAX(1)|M_PREC(1),	// {177, Regular,  }
"C88.гюыхрю нр йг", "    ",      0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {178, Regular,  }
"я89.спнбемэ йг  ", "    ",      0,  32767,  17500, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {179, Regular,  }
"я90.лер гюы щмйп", "    ",      0,      1,      1, MT_STR|M_PWP2|M_NVM|M_SADR(220),		// {180, Regular,  }
"я91.хмдхй йюкхап", "    ",      0,      2,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {181, Regular,  }
"C92.хмд юбю сярп", "    ",      0,      2,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {182, Regular,  }
"C93.оепец/оепену", "    ",      0,      3,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {183, Regular,  }
"   я94.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {184, Regular,  }
" я95.сп оепецп  ", "цпюд",      0,    100,     90, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),// {185, Regular,  }
"я96.сп оепенук  ", "цпюд",   -50U,      0,   -37U, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),// {186, Regular,  }
"я97.сп бйк ремю ", "цпюд",   -40U,     20,     15, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),// {187, Regular,  }
"я98.сп бшйк рем ", "цпюд",   -20U,     40,     30, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(2),// {188, Regular,  }
"C99.оепецп дбхц ", "    ", 	 0,      3,  	 3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {189, Regular,  }
"C100.сп оепец дб", "    ",      0,  65530,  20000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {190, Regular,  }
"C101.бу оепец дб", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4), 		// {191, Regular,  }
"C102.йюкхап. ох ", "    ",      0,      3,      0, MT_STR|M_SADR(171),		// {192, Regular,  }
"C103.веп тюг дб ", "    ", 	 0,      3,  	 3, MT_STR|M_PWP1|M_NVM|M_SADR(153),		// {193, Regular,  }
"я104.бп веп тюг ", "я   ",      1,    600,      8, MT_DEC|M_PWP1|M_NVM|M_RMAX(2)|M_PREC(1),// {194, Regular,  }
"я105.мехяо лс/дс", "    ",      0,      2,      2, MT_STR|M_PWP2|M_NVM|M_SADR(153),  	// {195, Regular,  }
"C106.нрйк RTC   ", "    ",      0,  	 1,      1, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {196, Regular,  }
"я107.яани дюрв о", "    ",      0,      3,      3, MT_STR|M_PWP2|M_NVM|M_SADR(153),		// {197, Regular,  }
//--------------------мЮЯРПНИЙХ ЛНЛЕМРНБ--------------------------------------------------------
"   я108.пегепб  ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		//198
"я109.йнщт 25% нр", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {199, Regular,  }
"я110.йнщт 35% нр", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {200, Regular,  }
"я111.йнщт 50% нр", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {201, Regular,  }
"я112.йнщт 75% нр", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {202, Regular,  }
"я113.йнщт 100% н", "    ",   -15U,     15,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {203, Regular,  }
"я114.йнп 25% нрй", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {204, Regular,  }
"я115.йнп 40% нрй", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {205, Regular,  }
"я116.йнп 60% нрй", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {206, Regular,  }
"я117.йнп 80% нрй", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {207, Regular,  }
"я118.йнп 110% нр", "    ",   -25U,     25,      0, MT_BIN|M_PWP1|M_NVM|M_SIGN|M_RMAX(1),// {208, Regular,  }
"  я119.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {209, Regular,  }
//! цпсоою D йнлюмдш
"D0.гюдюмхе гюйп ", "    ",      0,      2,      0, MT_STR|M_PWP1|M_SADR(157),		// {210, Regular,  }
"D1.гюдюмхе нрйп ", "    ",      0,      2,      0, MT_STR|M_PWP1|M_SADR(157),		// {211, Regular,  }
"D2.нанп мю нрйп ", "на  ",      0,   1000,      0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		// {212, Regular,  }
"D3.нанп мю гюйп ", "на  ",      0,   1000,      0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		// {213, Regular,  }
"  D4.пегепб     ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {214, Regular,  }
"D5.яапня йюкхап ", "    ",      0,      1,      0, MT_STR|M_PWP1|M_SADR(160),		// {215, Regular,  }
"D6.йнлюмд сопюбк", "    ",      0,      7,      0, MT_STR|M_PWP1|M_SADR(162),		// {216, Regular,  }
" D7.яапня гюыхр ", "    ",      0,      1,      0, MT_STR|M_PWP1|M_SADR(160),		// {217, Regular,  }
" D8.он слнквюмхч", "    ",      0,      1,      0, MT_STR|M_PWP1|M_SADR(157),		// {218, Regular,  }
#if BUR_90
"   D9.пегепб    ", "    ", 	 0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {222, Regular,  }
#else
"D9.реяр щмйндепю", "    ",      0,      2,  	 0, MT_STR|M_PWP1|M_SADR(262),		// {219, Regular,  }
#endif
"D10.яапня жхйкнб", "    ",      0,      1,     0, MT_STR|M_PWP1|M_SADR(160),		// {220, Regular,  }
"D11.яапня ябъгх ", "    ", 	 0,  	 1,  	0, MT_STR|M_PWP1|M_SADR(160),		// {221, Regular,  }
"   D12.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {222, Regular,  }
"   D13.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {223, Regular,  }
"   D14.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {224, Regular,  }
"   D15.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {225, Regular,  }
"   D16.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {226, Regular,  }
"   D17.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {227, Regular,  }
"   D18.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {228, Regular,  }
"   D19.пегепб   ", "    ", 	 0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {229, Regular,  }
//! цпсоою G реярхпнбюмхе
"G0.пефхл реярю  ", "    ",      0,      1,      0, MT_BIN|M_PWP1|M_NVM|M_RMAX(1),		// {230, Regular,  }
"G1.реяр ябернд  ", "    ",      0,  65530,      0, MT_BIN|M_PWP2|M_NVMC|M_RMAX(4),		// {231, Regular,  }
"G2.реяр дхя бшу ", "    ",      0,  65530,      0, MT_BIN|M_PWP2|M_NVMC|M_RMAX(4),		// {232, Regular,  }
"G3.гмювемхе жюо ", "%   ",      0,   1000,      0, MT_DEC|M_PWP2|M_RMAX(3)|M_PREC(1),		// {233, Regular,  }
"G4.ярюпр дхяок  ", "    ",      0,      1,      0, MT_DEC|M_PWP2,				// {234, Regular,  }
"G5.TECT я йюлепш", "    ",      0,  65535,      0, MT_BIN|M_PWP2|M_NVMC|M_RMAX(4),		// {235, Regular,  }
"G6.цпсо рхпхяр  ", "    ",      0,      1,      0, MT_DEC|M_PWP2,				// {236, Regular,  }
"G7.пюгпеь яхтс  ", "    ",      0,      1,      0, MT_DEC|M_PWP2, 				// {237, Regular,  }
"G8.пеф.яхл.яйнп.", "    ",      0,      1,      0, MT_STR|M_SADR(188),		// {238, Regular,  }
"   G9.пегепб    ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {239, Regular,  }
"   G10.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {240, Regular,  }
"   G11.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {241, Regular,  }
"   G12.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {242, Regular,  }
"   G13.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {243, Regular,  }
"   G14.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {244, Regular,  }
"   G15.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {245, Regular,  }
"   G16.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {246, Regular,  }
"   G17.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {247, Regular,  }
"G18.реяр сцнк нр", "    ",      0,    200,      0, MT_DEC|M_PWP2|M_RMAX(2),		// {248, Regular,  }
"   G19.пегепб   ", "    ",      0,  65530,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {249, Regular,  }
"   G20.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {250, Regular,  }
"   G21.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {251, Regular,  }
"   G22.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {252, Regular,  }
"   G23.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {253, Regular,  }
"   G24.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {254, Regular,  }
"   G25.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {255, Regular,  }
"   G26.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		// {256, Regular,  }
"G27.дхюцм.лндаюя", "    ",      0,      1,      0, MT_STR|M_SADR(188),		// {257, Regular,  }
"   G28.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),		//258
"   G29.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4), 		//259
//! цпсоою H яйпшрше
"H0.яняр йюкхап  ", "    ",      0,      3,      0, MT_DEC|M_NVM,					// {260, Regular,  }
"H1.  пегепб     ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {261, Regular,  }
"H2.онкнф гюйп 1 ", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {262, Regular,  }
"H3.онкнф гюйп 2 ", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {263, Regular,  }
"H4.онкнф нрйп 1 ", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {264, Regular,  }
"H5.онкнф гюйп 2 ", "    ",      0,  65535,      0, MT_DEC|M_NVM|M_RMAX(4),		// {265, Regular,  }
"    H6.оюпнкэ 1 ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {266, Regular,  }
"    H7.оюпнкэ 2 ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {267, Regular,  }
"   H8.юбюпхх йг ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {268, Regular,  }
"H9.рнкэйн сонп  ", "    ", 	 0,      1,  	 0, MT_DEC|M_RMAX(1),		// {269, Regular,  }
"м10.явервхй жхйк", "    ", 	 0,  65530,  	 0, MT_DEC|M_NVM|M_RMAX(4),		// {270, Regular,  }
"  H11.дно.оюпнкэ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RMAX(4),		// {271, Regular,  }
"H12.яверв нь до ", "    ", 	 0,  65535,  	 0, MT_DEC|M_NVM|M_RMAX(4),		// {272, Regular,  }
"H13.онкмши унд  ", "на  ",      0,   3000,      0, MT_DEC|M_NVM|M_RMAX(4),		// {273, Regular,  }
"H14.яняр. ябернд", "    ", 	 0,  65535,  	 0, MT_DEC|M_RMAX(4),		// {274, Regular,  }
"H15.хяр йнллюмд ", "    ", 	 0,  65535,  	 0, MT_DEC|M_NVM|M_RMAX(4),		// {275, Regular,  }
"H16.рнй оепеундю", "%   ",      0,   3000,      0, MT_DEC|M_NVM|M_RMAX(3)|M_PREC(1),		// {276, Regular,  }
"H17.лнл рнй 0_0 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {277, Regular,  }
"H18.лнл рнй 0_1 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {278, Regular,  }
"H19.лнл рнй 0_2 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {279, Regular,  }
"H20.лнл рнй 0_3 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {280, Regular,  }
"H21.лнл рнй 0_4 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {281, Regular,  }
"H22.лнл рнй 0_5 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {282, Regular,  }
"H23.лнл рнй 1_0 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {283, Regular,  }
"H24.лнл рнй 1_1 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {284, Regular,  }
"H25.лнл рнй 1_2 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {285, Regular,  }
"H26.лнл рнй 1_3 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {286, Regular,  }
"H27.лнл рнй 1_4 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {287, Regular,  }
"H28.лнл рнй 1_5 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {288, Regular,  }
"H29.лнл рнй 2_0 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {289, Regular,  }
"H30.лнл рнй 2_1 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {290, Regular,  }
"H31.лнл рнй 2_2 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {291, Regular,  }
"H32.лнл рнй 2_3 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {292, Regular,  }
"H33.лнл рнй 2_4 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {293, Regular,  }
"H34.лнл рнй 2_5 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {294, Regular,  }
"H35.лнл рнй 3_0 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {295, Regular,  }
"H36.лнл рнй 3_1 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {296, Regular,  }
"H37.лнл рнй 3_2 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {297, Regular,  }
"H38.лнл рнй 3_3 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {298, Regular,  }
"H39.лнл рнй 3_4 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {299, Regular,  }
"H40.лнл рнй 3_5 ", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {300, Regular,  }

"H41.лнл сцнк 0_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {301, Regular,  }
"H42.лнл сцнк 0_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {302, Regular,  }
"H43.лнл сцнк 0_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {303, Regular,  }
"H44.лнл сцнк 0_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {304, Regular,  }
"H45.лнл сцнк 0_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {305, Regular,  }
"H46.лнл сцнк 0_5", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {306, Regular,  }
"H47.лнл сцнк 1_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {307, Regular,  }
"H48.лнл сцнк 1_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {308, Regular,  }
"H49.лнл сцнк 1_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {309, Regular,  }
"H50.лнл сцнк 1_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {310, Regular,  }
"H51.лнл сцнк 1_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {311, Regular,  }
"H52.лнл сцнк 1_5", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {312, Regular,  }
"H53.лнл сцнк 2_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {313, Regular,  }
"H54.лнл сцнк 2_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {314, Regular,  }
"H55.лнл сцнк 2_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {315, Regular,  }
"H56.лнл сцнк 2_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {316, Regular,  }
"H57.лнл сцнк 2_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {317, Regular,  }
"H58.лнл сцнк 2_5", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {318, Regular,  }
"H59.лнл сцнк 3_0", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {319, Regular,  }
"H60.лнл сцнк 3_1", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {320, Regular,  }
"H61.лнл сцнк 3_2", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {321, Regular,  }
"H62.лнл сцнк 3_3", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {322, Regular,  }
"H63.лнл сцнк 3_4", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {323, Regular,  }
"H64.лнл сцнк 3_5", "%   ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {324, Regular,  }

"H65.сцк яхтс 0_0", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {325, Regular,  }
"H66.сцк яхтс 0_1", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {326, Regular,  }
"H67.сцк яхтс 0_2", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {327, Regular,  }
"H68.сцк яхтс 0_3", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {328, Regular,  }
"H69.сцк яхтс 0_4", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {329, Regular,  }
"H70.сцк яхтс 1_5", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {330, Regular,  }
"H71.сцк яхтс 1_0", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {331, Regular,  }
"H72.сцк яхтс 1_1", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {332, Regular,  }
"H73.сцк яхтс 1_2", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {333, Regular,  }
"H74.сцк яхтс 1_3", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {334, Regular,  }
"H75.сцк яхтс 1_4", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {335, Regular,  }
"H76.сцк яхтс 1_5", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {336, Regular,  }
"H77.сцк яхтс 2_0", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {337, Regular,  }
"H78.сцк яхтс 2_1", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {338, Regular,  }
"H79.сцк яхтс 2_2", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {339, Regular,  }
"H80.сцк яхтс 2_3", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {340, Regular,  }
"H81.сцк яхтс 2_4", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {341, Regular,  }
"H82.сцк яхтс 2_5", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {342, Regular,  }
"H83.сцк яхтс 3_0", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {343, Regular,  }
"H84.сцк яхтс 3_1", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {344, Regular,  }
"H85.сцк яхтс 3_2", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {345, Regular,  }
"H86.сцк яхтс 3_3", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {346, Regular,  }
"H87.сцк яхтс 3_4", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {347, Regular,  }
"H88.сцк яхтс 3_5", "цпюд",      0,    180,      0, MT_DEC|M_NVM|M_RMAX(2),		// {348, Regular,  }
"H89.бп бша гюгнп", "C   ",      0,    100,      0, MT_DEC|M_NVM|M_RMAX(2)|M_PREC(1),		// {349, Regular,  }
"H90.дхюцм яерх  ", "    ",      0,  65530,      0, MT_DEC|M_SADR(35),		// {350, Regular,  }
"H91.япедм мюоп  ", "B   ",      0,    500,      0, MT_DEC|M_RMAX(2),		// {351, Regular,  }
"H92.меаюк яерх  ", "%   ",      0,    100,      0, MT_DEC|M_RMAX(2),		// {352, Regular,  }
"H93.вепед яерх  ", "    ",      0,      2,      0, MT_DEC|M_SADR(182),		// {353, Regular,  }
"H94.яняр бунднб ", "    ",      0,  65530,      0, MT_DEC|M_SADR(86),		// {354, Regular,  }
"H95.яняр бшунднб", "    ",      0,  65530,      0, MT_DEC|M_SADR(103),		// {355, Regular,  }
"  H96.пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {356, Regular,  }
"H97.пекеим пефхл", "    ",      0,      1,      0, MT_DEC|M_NVM|M_SADR(188),		// {357, Regular,  }
#if BUR_90
"   H98.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {358, Regular,  }
"   H99.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {359, Regular,  }
"  H100.пегепб   ", "    ",      0,  65535,      0, MT_DEC|M_RONLY|M_RMAX(4),       // {360, Regular,  }
#else
" H98.йнп рнйю U ", "    ",      0,  65530,   3800, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),
" H99.йнп рнйю V ", "    ",      0,  65530,   3800, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),
"H100.йнп рнйю W ", "    ",      0,  65530,   3800, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),
#endif
"H101.ялеы рнйю U", "    ",      0,  65530,  33000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {361, Regular,  }
"H102.ялеы рнйю V", "    ",      0,  65530,  33000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {362, Regular,  }
"H103.ялеы рнйю W", "    ",      0,  65530,  33000, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {363, Regular,  }
" H104.йнп мюоп R", "    ",      0,  65530,    160, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {364, Regular,  }
" H105.йнп мюоп S", "    ",      0,  65530,    160, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {365, Regular,  }
" H106.йнп мюоп T", "    ",      0,  65530,    160, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {366, Regular,  }
"H107.ялеы мюоп R", "    ",      0,  65530,  32760, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {367, Regular,  }
"H108.ялеы мюоп S", "    ",      0,  65530,  32760, MT_BIN|M_PWP1|M_NVM|M_RMAX(4),		// {368, Regular,  }
"H109.ялеы мюоп T", "    ",      0,  65530,  32760, MT_BIN|M_PWP1|M_NVM|M_RMAX(4), 		// {369, Regular,  }
"H110.SKIP FROM  ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {370, Regular,  }
"H111.SKIP TO    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {371, Regular,  }
"H112.йнмрп.ясллю", "    ", 	 0,  65535,  	 0, MT_DEC|M_NVM|M_RMAX(3),		// {372, Regular,  }
"H113.дхюцм сярп ", "    ",      0,  65530,      0, MT_DEC|M_SADR(69),		// {373, Regular,  }
"H114.хмдхй ярюп ", "    ",      0,     29,     18, MT_DEC|M_NVM|M_SADR(192),		// {374, Regular,  }
"H115.дефспм пеф ", "C   ",      0,   6000,      0, MT_DEC|M_NVM|M_RMAX(3),		// {375, Regular,  }
"H116.опнж хяонкм", "%   ",      0,    100,      0, MT_DEC|M_RMAX(2),		// {376, Regular,  }
"H117.мюв юдп яна", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {377, Regular,  }
"H118.мюв юдп йнл", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {378, Regular,  }
"H119.мюв юдп оюп", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {379, Regular,  }
"H120.гюохях яна ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {380, Regular,  }
"H121.гюохях йнл ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {381, Regular,  }
"H122.гюохях оюп ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {382, Regular,  }
"    H123.лнлемр ", "м*л ",      0,  11000,      0, MT_DEC|M_NVM|M_RMAX(4),		// {383, Regular,  }
"  H124.яйнпнярэ ", "на/л", -3600U,   3600,      0, MT_DEC|M_NVM|M_SIGN|M_RMAX(3),// {384, Regular,  }
"  H125.яейсмдш  ", "    ",      0,  	60,      0, MT_DEC|M_NVM|M_RMAX(1),		// {385, Seconds,  }
"H126.соп йнмр   ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {386, Regular,  }
"H127.йнлюмдш асп", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {387, LogCmdControlWord,  }
"H128.яапня фспм ", "    ",      0,  1,          0, MT_DEC|M_RMAX(4),		// {388, Regular,  }
"H129.мехяоп яерх", "    ",      0,  65530,      0, MT_DEC|M_SADR(35),		// {389, Regular,  }
"     H130.пегепб", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {390, Regular,  }
"H131.дхюцм мюцп ", "    ",      0,  65530,      0, MT_DEC|M_SADR(52),		// {391, Regular,  }
"    H132.ADC_IU ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {392, Regular,  }
"    H133.ADC_IV ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {393, Regular,  }
"    H134.ADC_IW ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {394, Regular,  }
"H135.япедмхи рнй", "A/% ",      0,   8000,      0, MT_DEC|M_RMAX(3)|M_PREC(1),		// {395, Regular,  }
"H136.меа рнй мюц", "%   ",      0,    100,      0, MT_DEC|M_RMAX(2),		// {396, Regular,  }
"  H93.онкнфемхе ", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {397, Regular,  }
" H138.пегепб    ", "    ",      0,  65530,      0, MT_DEC|M_NVM|M_RMAX(4),		// {398, Regular,  }
" H139.пбх йнмжеб", "    ",      0,  65530,      0, MT_DEC|M_RMAX(4),		// {399, Regular,  }
//! цпсоою ю хмдхйюжхъ
"ю0.ярюрся пюанрш", "    ",		0,	65530,		0, MT_RUN|M_RONLY|M_SADR(1),		// {400, Status,  }
"ю1.дхюц опнжеяяю", "    ",		0,	65530,		0, MT_RUN|M_RONLY|M_SADR(18),		// {401, Fault,  }
"ю2.дхюцмняр яерх", "    ",		0,	65530,		0, MT_RUN|M_RONLY|M_SADR(35),		// {402, Fault,  }
"ю3.дхюц мюцпсгйх", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(52),		// {403, Fault,  }
"ю4.дхюцм сярп-бю", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(69),		// {404, Fault,  }
#if BUR_M
#if !BUR_90
"ю5.пегепб       ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {405, Regular, True}
#else
" ю5.яняр бунднб ", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(86),		// {405, Regular, True}
#endif
#else
" ю5.яняр бунднб ", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(86),		// {405, Regular, True}
#endif
" ю6.яняр бшунднб", "    ", 	0,  65530,  	0, MT_RUN|M_RONLY|M_SADR(103),		// {406, StatusDigOut,  }
"  ю7.онкнфемхе  ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4), 		// {407, Regular,  }
"   ю8.лнлемр    ", "м*л ", 	0,  11000,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {408, Regular, True}
"   ю9.яйнпнярэ  ", "на/л",-3600U,   3600,  	0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3),	// {409, Regular,  }
"ю10.мюоп тюгш R ", "б   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),		// {410, Regular, True}
"ю11.мюоп тюгш S ", "б   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),		// {411, Regular, True}
"ю12.мюоп тюгш T ", "б   ", 	0,    500,  	0, MT_DEC|M_RONLY|M_RMAX(2),		// {412, Regular, True}
" ю13.рнй тюгш U ", "ю/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),// {413, Regular,  }
" ю14.рнй тюгш V ", "ю/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),// {414, Regular,  }
" ю15.рнй тюгш W ", "ю/% ", 	0,   8000,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),// {415, Regular,  }
"ю16.сцнк мюцпсг ", "цпюд", -180U,    180,  	0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),		// {416, Regular,  }
"ю17.ярюрся йюкха", "    ", 	0,      3,  	0, MT_STR|M_RONLY|M_SADR(120),			// {417, Regular,  }
"A18.онкнфемхе % ", "%   ",-1000U,   2000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),// {418, Regular, True}
" ю19.онкмши унд ", "на  ",     0,   3000,      0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		 // {419, Regular,  }
"ю20.рейсыхи унд ", "на  ",-3000U,   3000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),// {420, Regular,  }
"ю21.явер жхйкнб ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {421, Regular,  }
"ю22.релоепюрспю ", "цпюд", -100U,    100,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),	// {422, Regular,  }
"ю23.бепяхъ он   ", "    ", 	0,  65530,  	0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(3),	// {423, Regular,  }
"ю24.йнмрп. ясллю", "    ", 	0,  65535,  	0, MT_HEX|M_RONLY|M_RMAX(3),		// {424, Regular,  }
"ю25.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {425, Regular,  }
"ю26.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {426, Regular,  }
"ю27.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {427, Regular,  }
"ю28.пег.дхюцм.до", "    ", 	0,      1,  	0, MT_STR|M_RONLY|M_SADR(265),		// {428, Regular,  }
"ю29.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {429, Regular,  }
"ю30.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {430, Regular,  }
"ю31.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {431, Regular,  }
"ю32.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {432, Regular,  }
"ю33.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {433, Regular,  }
"ю34.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {434, Regular,  }
"ю35.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {435, Regular,  }
"ю36.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {436, Regular,  }
"ю37.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {437, Regular,  }
"ю38.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4),		// {438, Regular,  }
"ю39.пегепб      ", "    ", 	0,  65535,  	0, MT_DEC|M_RONLY|M_RMAX(4), 		// {439, Position,  }
//! цпсоою E фспмюк
"     бпелъ      ", "    ",      0,  65535,      0, MT_TIME|M_RMAX(1)|M_RONLY,			//
"      дюрю      ", "    ",      0,  65535,     33, MT_DATE|M_RMAX(2)|M_RONLY,			//
"E0.ярюрся пюанрш", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(1),		//
"E1.дхюцм опнжеяя", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(18),		//
"E2.дхюцмняр яерх", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(35),		//
"E3.дхюцм мюцпсгй", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(52),		//
"E4.дхюцм сярп-бю", "    ",      0,  65530,      0, MT_RUN|M_RONLY|M_SADR(69),		//
"E5.онкнфемхе %  ", "%   ", -1000U,   2000,      0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(3)|M_PREC(1),		//
"    E6.лнлемр   ", "м*л ",     10,  11000,     10, MT_DEC|M_RONLY|M_RMAX(4),		//
"E7.мюопъф тюгш R", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),		//
"E8.мюопъф тюгш S", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),		//
"E9.мюопъф тюгш T", "B   ",      0,    500,      0, MT_DEC|M_RONLY|M_RMAX(2),		//
"E10.рнй тюгш U  ", "ю/% ", 	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		//
"E11.рнй тюгш V  ", "ю/% ", 	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		//
"E12.рнй тюгш W  ", "ю/% ",  	 0,   8000,  	 0, MT_DEC|M_RONLY|M_RMAX(3)|M_PREC(1),		//
"E13.релоеп акнй ", "цпюд",   -100U,    100,     0, MT_DEC|M_RONLY|M_SIGN|M_RMAX(2),		//
"E14.яняр бунднб ", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(86),		//
"E15.яняр бшунднб", "    ",      0,  65535,      0, MT_RUN|M_RONLY|M_SADR(103),		//
"   E16.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E17.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E18.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E19.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E20.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E21.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E22.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E23.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E24.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E25.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E26.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E27.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E28.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4),		//
"   E29.пегепб   ", "    ", 	 0,  65535,  	 0, MT_DEC|M_RONLY|M_RMAX(4)		//
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
	"   хдер реяр    ",	// 6
	"    гюйпшрн     ",	// 7
	"    нрйпшрн     ",	// 8
	"     лстрю      ",	// 9
	" леярмне сопюбк ",	// 10
	"  бйкчвем рем   ",	// 11
#if BUR_M
	"    охрюмхе     ",	// 12
#else
	" яепбхя охрюмхе ",	// 12
#endif
	"юбюпхъ мю акнйе ",	// 13
	"  юбюпхъ мю ря  ",	// 14
	"  мехяопюбмнярэ ",	// 15
	"мехяопюбм мю акй",	// 16
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
	"  мехяоп лс/дс  ",	// 26
	"     пегепб     ",	// 27
	"пефхл реу.опнцнм",	// 28
	"лон ме пюгнлймср",	// 29
	"лог ме пюгнлймср",	// 30
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
	"меноп вепед тюг ",	// 42
	"меаюкюмя/напшб U",	// 43
	"слем мюоп тюгш R",	// 44
	"слем мюоп тюгш S",	// 45
	"слем мюоп тюгш T",	// 46
	"мюоп тюгш R 47% ",	// 47
	"мюоп тюгш S 47% ",	// 48
	"мюоп тюгш T 47% ",	// 49
	"  веп тюг яерх  ",	// 50
	"     пегепб     ",	// 51
//!---------------
	"   мер юбюпхи   ",	// 52
	"  напшб тюгш U  ",	// 53
	"  напшб тюгш V  ",	// 54
	"  напшб тюгш W  ",	// 55
	"бп-рнй оепецпсгй",	// 56
	"     пегепб     ",	// 57
	"   йг тюгш U    ",	// 58
	"   йг тюгш V    ",	// 59
	"   йг тюгш W    ",	// 60
	"     пегепб     ",	// 61
	"     пегепб     ",	// 62
	" лхмхлюкэм рнй  ",	// 63
	" меаюкюмя рнйю  ",	// 64
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
	#if BUR_M
	"     пегепб     ",	// 78
	#else
	"бшйкчвемхе акнйю",	// 78
	#endif
	"     пегепб     ",	// 79
	"     пегепб     ",	// 80
	"йпхр оепецпеб ак",	// 81
	"ме гюдюмн бпелъ ",	// 82
	"     пегепб     ",	// 83
	"     пегепб     ",	// 84
	"  акнй бйкчвем  ",	// 85
	//!----------------
	"  мер яхцмюкнб  ",	// 86
	"  бунд нрйпшрэ  ",	// 87
	"  бунд гюйпшрэ  ",	// 88
	"   бунд ярно    ",	// 89
	"    бунд лс     ",	// 90
	"    бунд дс     ",	// 91
	"бунд деакнйхпнбй",	// 92
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
#if BUR_M
	"  мер яхцмюкнб  ",	// 103
	"    пегепб      ",	// 104
	"    пегепб      ",	// 105
	"     лстрю      ",	// 106
	"     юбюпхъ     ",	// 107
	"    пегепб      ",	// 108
	"     охрюмхе    ",	// 109
	"     гюйпшрн    ",	// 110
	"     нрйпшрн    ",	// 111
	" мехяопюбмнярэ  ",	// 112
	"     пегепб     ",	// 113
	"     пегепб     ",	// 114
	"     пегепб     ",	// 115
	"     пегепб     ",	// 116
	"     пегепб     ",	// 117
	"     пегепб     ",	// 118
	"     пегепб     ",	// 119
#else
	"  мер яхцмюкнб  ",	// 103
	"    юбюпхъ      ",	// 104
	"    гюйпшрн     ",	// 105
	"    нрйпшрн     ",	// 106
	"     лстрю      ",	// 107
	"  гюйпшбюеряъ   ",	// 108
	"  нрйпшбюеряъ   ",	// 109
	"     лс/дс      ",	// 110
	"  мехяопюбмнярэ ",	// 111
	"     пегепб     ",	// 112
	"     пегепб     ",	// 113
	"     пегепб     ",	// 114
	"     пегепб     ",	// 115
	"     пегепб     ",	// 116
	"     пегепб     ",	// 117
	"     пегепб     ",	// 118
	"     пегепб     ",	// 119
#endif
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
	"    пефхл лс    ",	// 137
	"    пефхл дс    ",	// 138
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
	//!----------------
	"  мЕР ЙНЛЮМДШ   ",	// 171
	"гЮОХЯЮРЭ СПНБ. 1",	// 172
	"гЮОХЯЮРЭ СПНБ. 0",	// 173
	"яНУПЮМХРЭ ДЮММШЕ",	// 174
	//!----------------
	"   осщ v 0.013  ",	// 175
	"   осщ v 0.014  ",	// 176
	//!----------------
	"я ондрбепфдемхел",	// 177
	"    пюгпеьемн   ",	// 178
	"    гюопеыемн   ",	// 179
	//!----------------
	" аег хглемемхи  ",	// 180
	"  онкнфемхе/10  ",	// 181
	//!----------------
	" ме нопедекемн  ",	// 182
	"напюрм онякеднб ",	// 183
	"опълюъ онякеднб ",	// 184
	//!----------------
	"    нярюмнб     ",	// 185
	" юбрнлюрхвеяйхи ",	// 186
	"  хцмнпхпнбюмхе ", // 187
	//!----------------
	"    бшйкчвем    ",	// 188
	"    бйкчвем     ",	// 189
	//!----------------
	"дбсутюгнбне рнпл",	// 190
	"рпеутюгнбне рнпл",	// 191
	//!----------------
	" ярюрся пюанрш  ",	// 192
	" дхюцм опнжеяяю ",	// 193
	" дхюцмняр яерх  ",	// 194
	" дхюцм мюцпсгйх ",	// 195
	" дхюцм сярп-бю  ",	// 196
	"  яняр бунднб   ",	// 197
	"  яняр бшунднб  ",	// 198
	"     пегепб     ",	// 199
	"     лнлемр     ",	// 200
	"    яйнпнярэ    ",	// 201
	"  япедмее мюоп  ",	// 202
	"  япедмхи рнй   ",	// 203
	" сцнк мюцпсгйх  ",	// 204
	"     пегепб     ",	// 205
	"     пегепб     ",	// 206
	"     пегепб     ",	// 207
	"     пегепб     ",	// 208
	//!----------------
	" аег хглемемхи  ",	// 209
	"пюглшй йбн х йбг",	// 210
	"пюгл йпюрйнбпел ",	// 211
	//!----------------
	"бшярюбк он тюйрс",	// 212
	" бяецдю сяр. б 1",	// 213
	//!----------------
	" BLUEGIGA WT41-A",	// 214
	" Silicon BGM210P",	// 215
	//!----------------
	"    бйкчвем     ",	// 216
	"    бшйкчвем    ",	// 217
	//!----------------
	"     пегепб     ",	// 218
	"     пегепб     ",	// 219
	//!----------------
	"  мнбши лернд   ",	// 220
	"  ярюпши лернд  ",	// 221
	//!----------------
	"  он сярюбйюл   ",	// 222
	"он сяр я гюдепфй",	// 223
	" бяецдю бйк     ",	// 224
	" псвмне соп     ",	// 225
	//!----------------
	"  аег опнбепйх  ",	// 226
	" мю мевермнярэ  ",	// 227
	"  мю вермнярэ   ",	// 228
	//!----------------
    "ме нопедекем    ",	// 229
	"щож-100 ю.25 с  ",	// 230
	"щож-100 ю.50 с  ",	// 231
	"щож-400 а.20 с  ",	// 232
	"щож-400 а.50 с  ",	// 233
	"щож-800 б.40 с  ",	// 234
	"щож-1000 б.20 с ",	// 235
	"щож-4000 ц.9 с  ",	// 236
	"щож-4000 ц.18 с ",	// 237
	"щож-10000 д.6 с ",	// 238
	"щож-10000 д.12 с",	// 239
	"щож-100 ю.25 я  ",	// 240
	"щож-100 ю.50 я  ",	// 241
	"щож-400 а.20 я  ",	// 242
	"щож-400 а.50 я  ",	// 243
	"щож-800 б.40 я  ",	// 244
	"щож-1000 б.20 я ",	// 245
	"щож-4000 ц.9 я  ",	// 246
	"щож-4000 ц.18 я ",	// 247
	"щож-10000 д.6 я ",	// 248
	"щож-10000 д.12 я",	// 249
	"щож-400 а.40 с  ",	// 250
	"щож-400 а.20 я2 ",	// 251
	"щож-10й д.12 с2 ",	// 252
	"щож-10й д.6 с2  ",	// 253
	//!----------------
	"  OLED WINSTAR  ",	// 254
	"   VAC FUTABA   ",	// 255
	//!----------------
	"рнплнфем. ярюпне",	// 256
	"рнплнфемхе мнбне",	// 257
	//!----------------
	" осяй гюопеыем  ", // 258
	" осяй пюгпеьем  ", // 259
	//!----------------
	"  AVAGO         ", // 260
	"  яйа хя        ", // 261
	//!----------------
	"  мЕР ЙНЛЮМДШ   ",	// 262
	"    бйкчвхрэ    ",	// 263
	"    бшйкчвхрэ   ",	// 264
	//!----------------
	"   до ХЯОПЮБЕМ  ",	// 265
	"яАНХ Б ПЮАНРЕ до",	// 266
	//!----------------
	"  0 x рЮИЛЮСР   ",	// 267
	"  аЕГ ЛМНФХРЕКЪ ",	// 268
	"  2 x рЮИЛЮСР   ",	// 269
	"  3 x рЮИЛЮСР   ",	// 270
	"  4 x рЮИЛЮСР   ",	// 271
	"  5 x рЮИЛЮСР   ",	// 272
	//!----------------
	"    бШЙКЧВЕМ    ",	// 273
	"пЮГДЕКЭМШЕ ярно ",	// 274
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
	" сопюбкемхе лс  ", // 32
	" гюакнйхпнбюмн  ", // 33
	//--------------------------------
	"дкъ ондрбепфдем.",	// 34
	" мюфлхре 'ббнд' ", // 35
	" педюйрхпнбюмхе ",	// 36
	"оюпюл. пюгпеьемн", // 37
	"   мебепмши     ",	// 38
	"  йнд днярсою   ", // 39
	"   йнд днярсою  ",	// 40
	"     яапньем    ", // 41
	"сярюмнбкем мнбши",	// 42
	"  йнд днярсою   ", // 43
	" ббедеммше йндш ",	// 44
	"  ме янбоюдючр! ", // 45
	//--------------------------------
	"йюкхапнбйю окюрш",	// 46
	"хмрептеиянб пюгп", // 47
	"йюкхапнбйю окюрш",	// 48
	"хмрептеиянб гюоп", // 49
	//--------------------------------
	"сЯРЮМНБКЕМ СПНБ.",	// 50
	"КНЦХВ. '*' *2* б", // 51
	" дЮММШЕ СЯОЕЬМН ",	// 52
	"   ЯНУПЮМЕМШ    ", // 53
	//--------------------------------
	"бЙКЧВЕМН РЕЯРХП.", // 54
	"ДЮРВХЙЮ ОНКНФЕМ.", // 55
	"бШОНКМХРЕ ОСЯЙ Б", // 56
	"     нрйпшрн    ", // 57
	"     гюйпшрн    ", // 58
	"  дХЮЦМНЯРХЙЮ до", // 59
	"    ГЮБЕПЬЕМЮ   ", // 60
	"дЮРВХЙ ОНКНФЕМХЪ", // 61
	"    ХЯОПЮБЕМ    ", // 62
	" нАМЮПСФЕМШ ЯАНХ", // 63
	"   Б ПЮАНРЕ до  ", // 64
};


// ТХЙЯХПНБЮММШЕ РНВЙХ ДКЪ ЯМЪРХЪ ЛНЛЕМРЮ
Int VoltArray[CUB_COUNT1] = {160, 190,  220,  250};
Int CurrArray[CUB_COUNT2] = {400, 800, 1200, 1600, 2000, 3000};	// ДНАЮБХК 3000 PIA 19.05.15
Int AnUIArray[CUB_COUNT2] = { 25,  35,   50,   65, 70,   80};	// ДНАЮБХК 70 	PIA 19.05.15
Int TorqArray[CUB_COUNT2] = { 25,  35,   50,   75,  100, 120};	// ДНАЮБХК 120 	PIA 19.05.15

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


// лЮЙПНЯ ВРЕМХЪ ЯРПНЙХ ХГ ТКЕЬ. лЮЯЯХБ add_strings
#define ReadAddStr(Str, Index) \
	PFUNC_blkRead((int16*)&AddStr[Index], (int16*)Str, 16)

// лЮЙПНЯ ВРЕМХЪ ЯРПНЙХ ХГ ТКЕЬ. лЮЯЯХБ add_strings
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
