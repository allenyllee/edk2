#include <Library/UefiLib.h>

EFI_SYSTEM_TABLE *gST;
EFI_BOOT_SERVICES *gBS;
EFI_RUNTIME_SERVICES *gRT;
EFI_EVENT tcount;
EFI_EVENT *keyevent;
EFI_EVENT waitforkey;

EFI_STATUS
EFIAPI
_CurrentDate(VOID){
	EFI_STATUS Status;
	EFI_TIME *Time;
	
	Status = gBS->AllocatePool(EfiBootServicesData,sizeof(EFI_TIME),(VOID**)&Time);
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	Status = gRT->GetTime(Time,NULL);
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	
	Status = gST->ConOut->ClearScreen(gST->ConOut);
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	//Status = gST->ConOut->OutputString(gST->ConOut,L"%d/%d/%d %d:%d:%d\n", Time->Year, Time->Month, Time->Day, Time->Hour, Time->Minute, Time->Second);
	Print(L"Current Date: %d/%d/%d %d:%d:%d\n", Time->Year, Time->Month, Time->Day, Time->Hour, Time->Minute, Time->Second);

	Status = gBS->FreePool(Time);
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	return EFI_SUCCESS;
}

VOID TimerCallback(EFI_EVENT Event, VOID *Context){
	_CurrentDate();
}

VOID KeyboardCallback(EFI_EVENT Event, VOID *Context){
	EFI_INPUT_KEY key;
	EFI_STATUS Status;
	
	//Print(L"Press \'a\' to close timer event\n");
	Status = gST->ConIn->ReadKeyStroke(gST->ConIn, &key);
	if(EFI_ERROR(Status)){
		//Print(L"no keyboard stroke.\n");
		//return Status;
	}
	
	
	if(key.UnicodeChar == L'a'){
		//gBS->CloseEvent(tcount);
		Status = gBS->CloseEvent(*keyevent);
		*keyevent = waitforkey;
		if(EFI_ERROR(Status)){
			Print(L"fail to close keyevent.\n");
			//return Status;
		}
		
		
		
		Status = gBS->CloseEvent(tcount);
		if(EFI_ERROR(Status)){
			Print(L"fail to close tcount event.\n");
			//return Status;
		}
		

	}else{
		//Print(L"key != a\n");
	}
	
	
}


EFI_STATUS
EFIAPI
CurrentDateEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
	EFI_STATUS Status;
	
	//UINTN index;
	//EFI_INPUT_KEY key;
	
	gST = SystemTable;
	gBS = SystemTable->BootServices;
	gRT = SystemTable->RuntimeServices;
	
	waitforkey = gST->ConIn->WaitForKey;
	keyevent = &gST->ConIn->WaitForKey;

	
	Status = gBS->CreateEvent(EVT_NOTIFY_WAIT, TPL_CALLBACK, KeyboardCallback, NULL, keyevent);
	if(EFI_ERROR(Status)){
		Print(L"fail to create keyevent.\n");
		return Status;
	}
	
	Status = gBS->SignalEvent(*keyevent);
	if(EFI_ERROR(Status)){
		Print(L"fail to signal keyevent.\n");
		gBS->CloseEvent(*keyevent);
		*keyevent = waitforkey;
		return Status;
	}
	
	
	Status = gBS->CreateEvent(EVT_TIMER|EVT_NOTIFY_SIGNAL, TPL_CALLBACK, TimerCallback, NULL, &tcount);
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	Status = gBS->SetTimer(tcount, TimerPeriodic, 10000000);
	if(EFI_ERROR(Status)){
		gBS->CloseEvent(tcount);
		return Status;
	}
	
	
	//while(1){
	//	Print(L"Press \'a\' to close timer event\n");
	//	Status = gBS->WaitForEvent(1,&gST->ConIn->WaitForKey,&index);
	//	if(EFI_ERROR(Status)){
	//		return Status;
	//	}
	//	
	//	Status = gST->ConIn->ReadKeyStroke(gST->ConIn, &key);
	//	if(key.UnicodeChar == L'a'){
	//		gBS->CloseEvent(tcount);
	//		break;
	//	}
	//}
	
	return EFI_SUCCESS;
}