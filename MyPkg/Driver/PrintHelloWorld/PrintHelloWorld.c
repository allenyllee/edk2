
#include <PrintHelloWorld.h>
//#include <Library/UefiDriverEntryPoint.h>

EFI_HANDLE mPrintThunkHandle = NULL;

EFI_STATUS
EFIAPI
_PrintHelloWorld(BOOLEAN isValid){
	if(isValid){
		return EFI_SUCCESS;
	}else{
		return EFI_INVALID_PARAMETER;
	}
}

CONST EFI_PRINTHELLOWORLD_PROTOCOL mPrintHelloWorldProtocol = {
	_PrintHelloWorld
};

EFI_STATUS
EFIAPI
PrintHelloWorldEntryPoint(
	IN EFI_HANDLE ImageHandle,
	IN EFI_SYSTEM_TABLE *SystemTable
)
{
	EFI_STATUS Status;
	EFI_BOOT_SERVICES *gBS = SystemTable->BootServices;
	extern EFI_GUID gEfiPrintHelloWorldProtocolGuid;
	
	Status = gBS->InstallMultipleProtocolInterfaces(
				&mPrintThunkHandle,
				&gEfiPrintHelloWorldProtocolGuid, &mPrintHelloWorldProtocol,
				NULL
				);
	return Status;			
}