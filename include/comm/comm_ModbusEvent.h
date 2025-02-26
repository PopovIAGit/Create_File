/*======================================================================
Имя файла:          modbus_event.h
Автор:
Версия файла:
Дата изменения:
Описание:
Драйвер коммуникации по протоколу ModBus RTU
======================================================================*/

#ifndef MODBUS_EVENT_
#define MODBUS_EVENT_

#include "comm_ModBusRtu.h"
Uns testPreamble=0;
static void SendMasterResponse(TMbPort *hPort);
__inline void CrcPack(TMbPort *);


//-------------------------------------------------------------------------------
__inline void BreakFrameEvent(TMbPort *hPort)
{
	SCI_rx_disable(hPort->Params.ChannelID);

}

//-------------------------------------------------------------------------------
__inline void NewFrameEvent(TMbPort *hPort)
{
	hPort->Frame.NewMessage = true;
	hPort->Frame.RxLength   = hPort->Frame.Data - hPort->Frame.Buf;
	hPort->Frame.Data       = hPort->Frame.Buf;
	if (hPort->Params.ChannelID==SCIA)
	{
		//hPort->Serial.RsState=1;
		hPort->Packet.Exception = FR_SUCCESS;
	}
}

//-------------------------------------------------------------------------------
__inline void PreambleEvent(TMbPort *hPort)
{
	hPort->Frame.Data = hPort->Frame.Buf;

	SCI_transmit(hPort->Params.ChannelID, *hPort->Frame.Data++);
}

//-------------------------------------------------------------------------------
__inline void PostambleEvent(TMbPort *hPort)
{
	//LgUns i=0;

	hPort->Frame.Data = hPort->Frame.Buf;
	hPort->Params.TrEnable(0);
	SCI_tx_disable(hPort->Params.ChannelID);
	SCI_rx_enable(hPort->Params.ChannelID);

	if (hPort->Params.Mode==MB_SLAVE) hPort->Params.TrEnable(0);
	else if (hPort->Params.Mode==MB_MASTER)
	{
		StartTimer(&hPort->Frame.TimerAck);
	}
	testPreamble=0;
}

//-------------------------------------------------------------------------------
__inline void ConnTimeoutEvent(TMbPort *hPort)
{
	/*if (IsMaster())
	{
		if (hPort->Packet.Exception)
		{
			hPort->Stat.SlaveNoRespCount++;
			hPort->Frame.RetryCounter++;
			if (hPort->Frame.RetryCounter < hPort->Params.RetryCount)
			{
				hPort->Frame.WaitResponse = false;
				return;	
			}
			hPort->Packet.Exception = EX_NO_CONNECTION;
		}
		SendMasterResponse(hPort);
	}*/
	
	if(IsSlave())
	{
		if (hPort->Params.ChannelID==SCIB)
		{
			//hPort->Serial.RsState=EX_NO_CONNECTION;
			hPort->Packet.Exception = EX_NO_CONNECTION;
		}
	}
}

//-------------------------------------------------------------------------------
__inline void AcknoledgeEvent(TMbPort *hPort)
{
	if (hPort->Params.Mode==MB_SLAVE) hPort->Packet.Acknoledge = false;
	else if (hPort->Params.Mode==MB_MASTER)
	{

		hPort->Params.TrEnable(1);
		SCI_rx_disable(hPort->Params.ChannelID);
		SCI_tx_disable(hPort->Params.ChannelID);

		if (hPort->Stat.SlaveNoRespCount<65500) hPort->Stat.SlaveNoRespCount++;// Счетчик неответов
		if (hPort->Frame.RetryCounter > hPort->Params.RetryCount)
		{
			//hPort->Packet.Exception = EX_NO_CONNECTION; //???
			hPort->Stat.Status.bit.NoConnect = 1;
		}
		StopTimer(&hPort->Frame.TimerConn);
		StopTimer(&hPort->Frame.TimerAck);
		if (hPort->Frame.RetryCounter<65500) hPort->Frame.RetryCounter++;
		hPort->Frame.WaitResponse = 0;
		hPort->Stat.Status.bit.Error = 1;
	}
}

//-------------------------------------------------------------------------------
static void SendFrame(TMbPort *hPort)
{
	CrcPack(hPort);
	hPort->Params.TrEnable(1);

	SCI_rx_disable(hPort->Params.ChannelID);
	SCI_tx_enable(hPort->Params.ChannelID);


	StartTimer(&hPort->Frame.TimerPre);
	hPort->Stat.TxMsgCount++;
}

//-------------------------------------------------------------------------------
static void SendMasterResponse(TMbPort *hPort)
{
	hPort->Packet.Response    = hPort->Packet.Request;
	hPort->Packet.Request     = 0;
	hPort->Frame.RetryCounter = 0;
	hPort->Frame.WaitResponse = false;
}

#endif

