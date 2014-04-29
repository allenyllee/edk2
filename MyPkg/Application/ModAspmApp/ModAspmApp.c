#include <AspmChanger.h>
#include <Library/UefiLib.h>

EFI_GUID gEfiAspmChangerProtocolGuid = EFI_ASPM_CHANGER_PROTOCOL_GUID;

EFI_STATUS
EFIAPI
ModAspmAppEntryPoint(
	IN EFI_HANDLE			ImageHandle,
	IN EFI_SYSTEM_TABLE		*SystemTable
	)
{
	EFI_STATUS Status;
	EFI_SYSTEM_TABLE *mST = SystemTable;
	EFI_BOOT_SERVICES *mBS = SystemTable->BootServices;
	EFI_ASPM_CHANGER_PROTOCOL *mAspmChangerProtocol = NULL;
	UINTN index;
	EFI_INPUT_KEY key;
	//UINT8 AspmValue;
	
	Status = mBS->LocateProtocol(
				&gEfiAspmChangerProtocolGuid,
				NULL,
				&mAspmChangerProtocol
				);
	
	if(EFI_ERROR(Status)){
		Print(L"failed to locate protocol.\n");
		return Status;
	}
	
	
		//Print(L"Please enter a number for ASPM value in decimal\n");
		//Status = mST->ConIn->Reset(mST->ConIn,0);
		
	while(1){
		Status = mST->ConIn->ReadKeyStroke(mST->ConIn, &key);
		if(Status == EFI_NOT_READY){
			Print(L"Please enter a number for ASPM value in decimal\n");
			Status = mBS->WaitForEvent(1, &mST->ConIn->WaitForKey, &index);
		}else{
			if(key.UnicodeChar >= L'0' && key.UnicodeChar <= L'3'){
				Print(L"it's valid number\n");
				break;
			}else{
				Print(L"it's invalid number\n");
			}
		}
	}
		
	Status = mAspmChangerProtocol->AspmChanger((UINT8)(key.UnicodeChar - 0x0030));
	if(EFI_ERROR(Status)){
		Print(L"failed to call AspmChanger()\n");
		return Status;
	}
	
	Print(L"Call AspmChanger successfully.\n");	
	
	return EFI_SUCCESS;
}