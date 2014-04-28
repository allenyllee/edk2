#include <AspmChanger.h>
extern EFI_GUID gEfiAspmChangerProtocolGuid;

EFI_STATUS
EFIAPI
ModAspmAppEntryPoint(
	IN EFI_HANDLE			ImageHandle,
	IN EFI_SYSTEM_TABLE		*SystemTable
	)
{
	EFI_STATUS Status;
	EFI_BOOT_SERVICES *mBS = SystemTable->BootServices;
	EFI_ASPM_CHANGER_PROTOCOL *mAspmChangerProtocol = NULL;
	
	Status = mBS->LocateProtocol(
				&gEfiAspmChangerProtocolGuid,
				NULL,
				&mAspmChangerProtocol
				);
	
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	Status = mAspmChangerProtocol->AspmChanger(1);
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	return EFI_SUCCESS;
}