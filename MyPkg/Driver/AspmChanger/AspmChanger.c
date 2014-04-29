
#include <Protocol/LoadedImage.h>
#include <Library/UefiLib.h>
//#include <Library/PrintLib.h>
#include <Protocol/PciRootBridgeIo.h>
#include <AspmChanger.h>

extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
//EFI_GUID gEfiLoadedImageProtocolGuid = EFI_LOADED_IMAGE_PROTOCOL_GUID;
EFI_GUID gEfiAspmChangerProtocolGuid = EFI_ASPM_CHANGER_PROTOCOL_GUID;			
//EFI_GUID gEfiDriverBindingProtocolGuid = EFI_DRIVER_BINDING_PROTOCOL_GUID;
EFI_GUID gEfiPciRootBridgeIoProtocolGuid = EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL_GUID;

EFI_BOOT_SERVICES *gBS;
UINT64 Address;

EFI_PCI_ROOT_BRIDGE_IO_PROTOCOL *PciRootBridgeIo;
EFI_ASPM_CHANGER_PROTOCOL *AspmChangerProtocol;

EFI_DRIVER_BINDING_PROTOCOL gAspmChangerDriverBinding = {
	AspmChangerDriverSupported,
	AspmChangerDriverStart,
	AspmChangerDriverStop,
	0x1,
	NULL,
	NULL
};

EFI_ASPM_CHANGER_PROTOCOL gAspmChangerProtocol = {
	_AspmChanger
};

EFI_STATUS
EFIAPI
AspmChangerDriverSupported(
	IN EFI_DRIVER_BINDING_PROTOCOL 		*This,
	IN EFI_HANDLE						ControllerHandle,
	IN EFI_DEVICE_PATH_PROTOCOL			*RemainingDevicePath
	)
{
	EFI_STATUS Status;
	UINT8 ReadBuffer;
	UINTN Func;

	Status = gBS->OpenProtocol(
				ControllerHandle,
				&gEfiPciRootBridgeIoProtocolGuid,
				(VOID **)&PciRootBridgeIo,
				This->DriverBindingHandle,
				ControllerHandle,
				EFI_OPEN_PROTOCOL_GET_PROTOCOL
				);
	
	if(EFI_ERROR(Status)){
		return EFI_UNSUPPORTED;
	}
	
	for(Func = 0; Func < 6; Func++ ){
		Address = EFI_PCI_ADDRESS(0x0, 0x1c, Func, 0x0);
		Status = PciRootBridgeIo->Pci.Read(PciRootBridgeIo, EfiPciWidthUint8, Address, 1, (VOID *)&ReadBuffer);
		if(Status == EFI_SUCCESS){
			Print(L"Support PCIe\n");
			Print(L"PciRootBridgeIo pointer: %X\n", PciRootBridgeIo);
			Print(L"Pcie Address: %X\n",Address);
			return EFI_SUCCESS;
		}
	}
				
	return EFI_UNSUPPORTED;
	
}

EFI_STATUS
EFIAPI
AspmChangerDriverStart(
	IN EFI_DRIVER_BINDING_PROTOCOL 	*This,
	IN EFI_HANDLE 					ControllerHandle,
	IN EFI_DEVICE_PATH_PROTOCOL 	*RemainingDevicePath
	)
{

	EFI_STATUS Status;
	
	Status = gBS->OpenProtocol(
				ControllerHandle,
				&gEfiPciRootBridgeIoProtocolGuid,
				(VOID **)&PciRootBridgeIo,
				This->DriverBindingHandle,
				ControllerHandle,
				EFI_OPEN_PROTOCOL_GET_PROTOCOL
				);
	
	if(Status != EFI_ALREADY_STARTED){
		if(EFI_ERROR(Status)){
			Print(L"failed to open pci protocol\n");
			return Status;
		}
	}

	Print(L"PciRootBridgeIo pointer: %X\n", PciRootBridgeIo);
	
	Status = gBS->InstallMultipleProtocolInterfaces(
				&ControllerHandle,
				&gEfiAspmChangerProtocolGuid, &gAspmChangerProtocol,
				NULL
				);
	
	if(EFI_ERROR(Status)){
		Print(L"failed to install AspmChanger protocol\n");
		gBS->CloseProtocol(
			ControllerHandle,
			&gEfiPciRootBridgeIoProtocolGuid,
			This->DriverBindingHandle,
			ControllerHandle
			);
		return Status;
	}
	
	Print(L"Start driver success.\n");
	return EFI_SUCCESS;
	
}

EFI_STATUS
EFIAPI
AspmChangerDriverStop(
	IN EFI_DRIVER_BINDING_PROTOCOL 	*This,
	IN EFI_HANDLE 					ControllerHandle,
	IN UINTN						NumberOfChildren,
	IN EFI_HANDLE					*ChilHandleBuffer
	)
{

	EFI_STATUS Status;
	
	Status = gBS->OpenProtocol(
				ControllerHandle,
				&gEfiAspmChangerProtocolGuid,
				(VOID **)&AspmChangerProtocol,
				This->DriverBindingHandle,
				ControllerHandle,
				EFI_OPEN_PROTOCOL_GET_PROTOCOL
				);
	
	if(EFI_ERROR(Status)){
		return EFI_UNSUPPORTED;
	}
	
	Status = gBS->OpenProtocol(
				ControllerHandle,
				&gEfiPciRootBridgeIoProtocolGuid,
				(VOID **)&PciRootBridgeIo,
				This->DriverBindingHandle,
				ControllerHandle,
				EFI_OPEN_PROTOCOL_GET_PROTOCOL
				);
				
	if(EFI_ERROR(Status)){
		return EFI_UNSUPPORTED;
	}
	
	gBS->UninstallMultipleProtocolInterfaces(
			&ControllerHandle,
			&gEfiAspmChangerProtocolGuid, &gAspmChangerProtocol,
			NULL
			);
	
	gBS->CloseProtocol(
			ControllerHandle,
			&gEfiPciRootBridgeIoProtocolGuid,
			This->DriverBindingHandle,
			ControllerHandle
			);
	
	Print(L"Stop driver success.\n");
	return EFI_SUCCESS;
	
}

EFI_STATUS
EFIAPI
_AspmChanger(IN UINT8 AspmControl){
	EFI_STATUS Status;
	UINT64 CapabilityIdOffset = 0x34;
	UINT64 CapabilityId = 0x0;
	UINT64 AspmOffset = 0x10;
	
	Print(L"enter AspmChanger()\n");
	
	Status = gBS->LocateProtocol(
				&gEfiPciRootBridgeIoProtocolGuid,
				NULL,
				&PciRootBridgeIo
				);	
	
	Print(L"PciRootBridgeIo pointer: %X\n", PciRootBridgeIo);
	Print(L"Pcie Address: %X\n",Address);
	
	
	Status = PciRootBridgeIo->Pci.Read(PciRootBridgeIo, EfiPciWidthUint8, Address + CapabilityIdOffset , 1, (VOID *)&CapabilityId);
	if(EFI_ERROR(Status)){	
		Print(L"read pci error\n");
		return Status;
	}
	
	Print(L"Capbility Id:%X\n",CapabilityId);
	
	Status = PciRootBridgeIo->Pci.Write(PciRootBridgeIo, EfiPciWidthUint8, Address + CapabilityId + AspmOffset, 1, (VOID *)&AspmControl);
	if(EFI_ERROR(Status)){		
		Print(L"write pci error\n");
		return Status;
	}
	
	
	Print(L"Change ASPM value to %d\n",AspmControl);
	return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
_Unload(IN EFI_HANDLE ImageHandle){
	
	EFI_STATUS Status = 0;
	
	Print(L"Aspm Changer Driver Binding: %X\n", &gAspmChangerDriverBinding);	
	
	Status = gBS->UninstallMultipleProtocolInterfaces(
				ImageHandle,
				&gEfiDriverBindingProtocolGuid, &gAspmChangerDriverBinding,
				NULL);	
	
	return Status;
	
}


EFI_STATUS
EFIAPI
AspmChangerEntryPoint(
	IN EFI_HANDLE 			ImageHandle,
	IN EFI_SYSTEM_TABLE 	*SystemTable
	)
{
	
	EFI_STATUS Status;
	EFI_LOADED_IMAGE_PROTOCOL  *LoadedImage;
	
	gBS = SystemTable->BootServices;
	gAspmChangerDriverBinding.ImageHandle = ImageHandle;

	Status = gBS->InstallMultipleProtocolInterfaces(
				&(gAspmChangerDriverBinding.ImageHandle),
				&gEfiDriverBindingProtocolGuid, &gAspmChangerDriverBinding,
				NULL);
	
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	Status = gBS->HandleProtocol (
				ImageHandle,
                &gEfiLoadedImageProtocolGuid,
                (VOID **)&LoadedImage
                );
					
	if(EFI_ERROR(Status)){
		Print(L"failed to assign Unload()\n");
		return Status;
	}

	LoadedImage->Unload = _Unload;				
				

	return EFI_SUCCESS;
	
}


