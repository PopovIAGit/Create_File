#ifndef _BTWT41_H_
#define _BTWT41_H_

#include "std.h"

#define BT_SCI			SCIA
#define BT_SCI_BAUD		1152

#define BT_DBG					0

#define BT_COMMAND_MODE			0
#define BT_DATA_MODE			1

#define BT_RX_BUFFER_SIZE		10

#define BT_IDLE					40
#define BT_TRANSMIT_COMPLETE	41
#define BT_TRANSMIT_BUSY		42
#define BT_RECEIVE_COMPLETE		43
#define BT_RECEIVE_BUSY			44
// AT - команды для микросхемы bluegiga WT41-A
#define CMD_CONTROL_CONFIG 		"SET CONTROL CONFIG 0000 0040 0080\r\n"
#define CMD_CONTROL_ECHO 		"SET CONTROL ECHO 0004\r\n"
#define CMD_CONTROL_NAME 		"SET BT NAME "
#define CMD_CONTROL_AUTH		"SET BT AUTH * "
#define CMD_CONTROL_BAUD		"SET CONTROL BAUD 115200,8N1\r\n"

// AT - команды для микросхемы Amp'edRF BT-31
#define CMD_CONFIG_PIN			"AT+AB config PIN = 5124\r\n"
#define CMD_CONFIG_NAME			"AT+AB config DeviceName = "
#define CMD_CONFIG_AT_REPLY		"AT+AB config ATReply =\r\n"
#define CMD_CONFIG_BAUD			"AT+AB config UartBaudrate = 115200\r\n"
#define CMD_CONFIG_UART_TOUT	"AT+AB config UartTimeout = 16\r\n"
#define CMD_CONFIG_CONN_MAX		"AT+AB config ConnectIntMax = 4000\r\n"
#define CMD_CONFIG_CLASSofDEVICE "AT+AB config COD = 000000\r\n"
#define CMD_CONFIG_SECURITY 	"AT+AB config DefaultSecurity = 3\r\n"
#define CMD_LOCAL_NAME			"AT+AB LocalName BoriskaSosiska\r\n"
#define CMD_PASSKEY_ACCEPT		"AT+AB PassKeyAccept n\r\n"
#define CMD_VERSION				"AT+AB Version\r\n"
#define CMD_RESET 				"AT+AB Reset\r\n"

// AT - команды для микросхемы SiliconLabs BGM210PJIA
#define AT_CONFIG_NAME			"AT+NM "
#define AT_CONFIG_PATH			"AT+PASS "
#define AT_RUN_DATA_MODE		"RUN\r\n"

#define BT_AUTH_CODE_STRING		"5124"	// Строка с кодом авторизации Bluetooth


#define BTWT41_DEFAULT { \
	False, 0, 0, 0, BT_COMMAND_MODE, \
	0, 0, (1.00 * PRD_10HZ), False, False, "", "", \
	BtHardwareSetup, CheckSciCommErr, \
	EnableBtRx, EnableBtTx, ReceiveBtByte, \
	TransmitBtByte \
}

typedef struct _TBt
{
	Bool TxBusy;
	Byte State;
	Byte CmdState;
	Byte Status;
	Byte Mode;
	Uns StrIndex;
	Uns Timer;
	Uns Period;

	Bool IsConnected;
	Bool Error;

	char *DeviceNameString;
	char *DeviceAuthCodeString;

	void (*BtHardwareSetup)(Bool Enable);
	Bool (*CheckCommError)(void);
	void (*EnableRx)(void);
	void (*EnableTx)(void);
	Byte (*ReceiveByte)(void);
	void (*TransmitByte)(Byte Data);

	char RxBuffer[BT_RX_BUFFER_SIZE];

	#if BT_DBG
	Uns TxBytesCount;
	Uns RxBytesCount;
	#endif
			
} TBt;

void InitBluetooth(TBt *p);
void BtWTUpdate(TBt *p);
void BluetoothRxHandler(TBt *p);
void BluetoothTxHandler(TBt *p);
void BtTimer(TBt *p);

void BtHardwareSetup(Bool Enable);
Bool CheckSciCommErr(void);
void EnableBtRx(void);
void EnableBtTx(void);
Byte ReceiveBtByte(void);
void TransmitBtByte(Byte Data);


#endif


