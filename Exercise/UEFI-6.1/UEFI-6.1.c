#include <Library/UefiLib.h>

extern EFI_HANDLE		gImageHandle;
extern EFI_SYSTEM_TABLE		*gST;
extern EFI_RUNTIME_SERVICES	*gRT;
extern EFI_BOOT_SERVICES	*gBS;

EFI_EVENT	Event_TIMER;
VOID EFIAPI	NotifyFunction_TIMER	(EFI_EVENT Event,VOID *Context);

#define		NumberOfEvents_SIGNAL	6
EFI_EVENT	Event_SIGNAL		[NumberOfEvents_SIGNAL];
VOID EFIAPI	NotifyFunction_SIGNAL	(EFI_EVENT Event,VOID *Context);
EFI_GUID	EventGroup_SIGNAL=	{'ifeU','6-','1.','S','I','G','N','A','L',' ',' '};

#define		NumberOfEvents_WAIT	8
EFI_EVENT	Event_WAIT		[NumberOfEvents_WAIT];
VOID EFIAPI	NotifyFunction_WAIT	(EFI_EVENT Event,VOID *Context);
EFI_GUID	EventGroup_WAIT=	{'ifeU','6-','1.','W','A','I','T',' ',' ',' ',' '};

EFI_TPL		NotifyTpl[2]={TPL_CALLBACK,TPL_NOTIFY};
EFI_STATUS	STATUS;
volatile UINTN	TIMERCount;

EFI_STATUS EFIAPI UefiImageEntryPoint(
	IN EFI_HANDLE		ImageHandle,
	IN EFI_SYSTEM_TABLE	*SystemTable
){
	EFI_TPL OldTpl;
	EFI_STATUS Status;
	UINTN Index,i;

	STATUS|=gBS->CreateEvent(EVT_TIMER|EVT_NOTIFY_SIGNAL,TPL_NOTIFY,NotifyFunction_TIMER,(UINTN*)&TIMERCount,&Event_TIMER);
	for(i=0;i<NumberOfEvents_SIGNAL;i++)
		STATUS|=gBS->CreateEventEx(EVT_NOTIFY_SIGNAL,NotifyTpl[i%2],NotifyFunction_SIGNAL,&Event_SIGNAL[i],&EventGroup_SIGNAL,&Event_SIGNAL[i]);
	for(i=0;i<NumberOfEvents_WAIT;i++)
		STATUS|=gBS->CreateEventEx(EVT_NOTIFY_WAIT,  NotifyTpl[i%2],NotifyFunction_WAIT,  &Event_WAIT[i],  &EventGroup_WAIT,  &Event_WAIT[i]);
	STATUS|=gBS->SetTimer(Event_TIMER,TimerPeriodic,800000);

	Print(L"%d:WaitForEvent(){\n",TIMERCount);
	STATUS|=gBS->WaitForEvent(NumberOfEvents_WAIT,Event_WAIT,&Index);
	Print(L"%d:WaitForEvent()}:Index=%d\n",TIMERCount,Index);

	OldTpl=gBS->RaiseTPL(TPL_CALLBACK);
	i=TIMERCount;
	while(i==TIMERCount);
	for(i=0;i<NumberOfEvents_WAIT;i++){
		Status=gBS->CheckEvent(Event_WAIT[i]);
		if(Status==EFI_SUCCESS||Status==EFI_NOT_READY)
			Print(L"%d:CheckEvent(%d):%s\n",TIMERCount,i,Status==EFI_SUCCESS?L"EFI_SUCCESS":L"EFI_NOT_READY");
		else
			STATUS|=Status;
	}
	gBS->RestoreTPL(OldTpl);

	STATUS|=gBS->CloseEvent(Event_TIMER);
	for(i=0;i<NumberOfEvents_SIGNAL;i++)
		STATUS|=gBS->CloseEvent(Event_SIGNAL[i]);
	for(i=0;i<NumberOfEvents_WAIT;i++)
		STATUS|=gBS->CloseEvent(Event_WAIT[i]);

	if(EFI_ERROR(STATUS))
		Print(L"Error 0x%016lX!!!\n",STATUS);
	return STATUS;
}

VOID EFIAPI NotifyFunction_SIGNAL(
	IN EFI_EVENT	Event,
	IN VOID		*Context
){
	Print(L"%d:SIGNAL%d ",TIMERCount,(EFI_EVENT*)Context-Event_SIGNAL);
}

VOID EFIAPI NotifyFunction_TIMER(
	IN EFI_EVENT	Event,
	IN VOID		*Context
){
	UINTN i;
	Print(L"%d:TIMER{  ",(*(UINTN*)Context)++);
	STATUS|=gBS->SignalEvent(Event_SIGNAL[NumberOfEvents_SIGNAL/2]);
	for(i=NumberOfEvents_WAIT/2;i<NumberOfEvents_WAIT;i++)
		STATUS|=gBS->SignalEvent(Event_WAIT[i]);
	Print(L"%d:TIMER}  ",*(UINTN*)Context);
}

VOID EFIAPI NotifyFunction_WAIT(
	IN EFI_EVENT	Event,
	IN VOID		*Context
){
	Print(L"%d:WAIT%d   ",TIMERCount,(EFI_EVENT*)Context-Event_WAIT);
}
