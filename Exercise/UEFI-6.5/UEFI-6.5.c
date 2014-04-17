#include <Library/UefiLib.h>
#include <wchar.h>
#include <stdlib.h>
#include <Library\BaseMemoryLib.h>

extern EFI_HANDLE		gImageHandle;
extern EFI_SYSTEM_TABLE		*gST;
extern EFI_RUNTIME_SERVICES	*gRT;
extern EFI_BOOT_SERVICES	*gBS;

EFI_EVENT	Event_TIMER;
VOID EFIAPI	NotifyFunction_SetWatchdogTimer	(EFI_EVENT Event,VOID *Context);
VOID EFIAPI	NotifyFunction_Stall		(EFI_EVENT Event,VOID *Context);
volatile UINTN	TIMERCount;

EFI_GUID JustAGuid={'ifeU','6-','5.',' ',' ',' ',' ',' ',' ',' ',' '};

EFI_STATUS STATUS;

UINTN EFIAPI main(UINTN argc,wchar_t *argv[]){
	EFI_TABLE_HEADER *BufferPtr;
	UINT64 Count;
	UINT32 CRC32;
	UINTN ErrorCode,i;

	STATUS|=gBS->AllocatePool(EfiLoaderData,gST->Hdr.HeaderSize,&BufferPtr);

	TIMERCount=5;
	STATUS|=gBS->CreateEvent(EVT_TIMER|EVT_NOTIFY_SIGNAL,TPL_NOTIFY,NotifyFunction_SetWatchdogTimer,(UINTN*)&TIMERCount,&Event_TIMER);
	STATUS|=gBS->SignalEvent(Event_TIMER);
	STATUS|=gBS->SetTimer(Event_TIMER,TimerPeriodic,10000000);
	STATUS|=gBS->SetWatchdogTimer(5,0x10000,0,0);
	while(L'\r'!=getwchar());
	STATUS|=gBS->SetWatchdogTimer(0,0x10000,0,0);
	STATUS|=gBS->CloseEvent(Event_TIMER);
	Print(L"\n\n");

	TIMERCount=0;
	STATUS|=gBS->CreateEvent(EVT_TIMER|EVT_NOTIFY_SIGNAL,TPL_NOTIFY,NotifyFunction_Stall,(UINTN*)&TIMERCount,&Event_TIMER);
	STATUS|=gBS->SetTimer(Event_TIMER,TimerPeriodic,10000);
	STATUS|=gBS->Stall(1000000);
	STATUS|=gBS->CloseEvent(Event_TIMER);
	Print(L"%ld timer events were signaled in a second.\n\n",TIMERCount);

	STATUS|=gBS->GetNextMonotonicCount(&Count);
	Print(L"1st monotonic count is 0x%lX.\n",Count);
	STATUS|=gBS->GetNextMonotonicCount(&Count);
	Print(L"2nd monotonic count is 0x%lX.\n\n",Count);

	i=gST->NumberOfTableEntries;
	STATUS|=gBS->InstallConfigurationTable(&JustAGuid,BufferPtr);
	ErrorCode=0xE0000001;
	if(i+1!=gST->NumberOfTableEntries)
		goto OhNo;
	for(i=0;i<gST->NumberOfTableEntries;i++)
		if(CompareGuid(&gST->ConfigurationTable[i].VendorGuid,&JustAGuid))
			break;
	if(i>=gST->NumberOfTableEntries||BufferPtr!=gST->ConfigurationTable[i].VendorTable){
		ErrorCode=0xE0000002;
		goto OhNo;
	}
	i=gST->NumberOfTableEntries;
	STATUS|=gBS->InstallConfigurationTable(&JustAGuid,0);
	ErrorCode=0xE0000003;
	if(i-1!=gST->NumberOfTableEntries)
		goto OhNo;

	gBS->CopyMem(BufferPtr,gST,gST->Hdr.HeaderSize);
	gBS->SetMem(&BufferPtr->CRC32,sizeof(gST->Hdr.CRC32),0);
	STATUS|=gBS->CalculateCrc32(BufferPtr,gST->Hdr.HeaderSize,&CRC32);
	ErrorCode=0xE0000004;
	if(CRC32!=gST->Hdr.CRC32)
		goto OhNo;

GoodBye:
	STATUS|=gBS->FreePool(BufferPtr);

	if(EFI_ERROR(STATUS))
		Print(L"EFI_ERROR 0x%lX!!!\n",STATUS);
	else
		Print(L"EFI_SUCCESS. Good bye.");
	return EFI_SUCCESS;

OhNo:
	Print(L"ERROR 0x%lX!!!\n",ErrorCode);
	goto GoodBye;
}

VOID EFIAPI NotifyFunction_SetWatchdogTimer(EFI_EVENT Event,VOID *Context){
	Print(L"\r%d seconds to reset, or press ENTER to go.",(*(UINTN*)Context)--);
}

VOID EFIAPI NotifyFunction_Stall(EFI_EVENT Event,VOID *Context){
	(*(UINTN*)Context)++;
}
