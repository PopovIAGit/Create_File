/*======================================================================
Имя файла:          modbus_interrupts.h
Автор:              
Версия файла:       01.00
Описание:
Модуль обработки прерываний приема и передачи
======================================================================*/

#ifndef MODBUS_INTERRUPTS_
#define MODBUS_INTERRUPTS_
//-------------------------------------------------------------------------------
void ModBusRxIsr(TMbPort *hPort)
{
	TMbFrame *Frame = &hPort->Frame;
	Byte Data = 0;

	Data = SCI_getstatus(hPort->Params.ChannelID);

	if (Data & 0x90)
	{
		SCI_recieve(hPort->Params.ChannelID);
		SCI_reset(hPort->Params.ChannelID);
		StopTimer(&Frame->Timer1_5);
		StopTimer(&Frame->Timer3_5);
		StopTimer(&Frame->TimerPre);
		StopTimer(&Frame->TimerPost);
		StopTimer(&Frame->TimerAck);
		SCI_rx_enable(1);
		SCI_tx_disable(1);
		Frame->Timer3_5.Counter = 0;
		Frame->RxLength = 0;
		Frame->RetryCounter = 0;
		return;
	}

	Data = SCI_recieve(hPort->Params.ChannelID);

	if ((Frame->Data - Frame->Buf) < 256)
	{
			*Frame->Data++ = Data;

		StartTimer(&Frame->Timer1_5);
		StartTimer(&Frame->Timer3_5);
	}

	hPort->Stat.RxBytesCount++;
}

//-------------------------------------------------------------------------------
void ModBusTxIsr(TMbPort *hPort)
{
	TMbFrame *Frame = &hPort->Frame;
	//Uns DataSend=0;
	//Uns Stop=0;
	
	if ((Frame->Data - Frame->Buf) < Frame->TxLength){
		SCI_transmit(hPort->Params.ChannelID, *Frame->Data++);
		StartTimer(&Frame->TimerPost);
	}
	else
	{
		StartTimer(&Frame->TimerPost);
	}
	//StartTimer(&Frame->TimerPost);
	
	hPort->Stat.TxBytesCount++;
}

#endif

