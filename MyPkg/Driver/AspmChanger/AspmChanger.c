#include <Protocol/PciRootBridgeIo.h>
#include <AspmChanger.h>

extern EFI_GUID gEfiAspmChangerProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiDriverBindingGuid;

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
				EFI_OPEN_PROTOCOL_BY_DRIVER
				);
				
	if(EFI_ERROR(Status)){
		return Status;
	}
	
	Status = gBS->InstallMultipleProtocolInterfaces(
				&ControllerHandle,
				&gEfiAspmChangerProtocolGuid, &gAspmChangerProtocol,
				NULL
				);
	
	if(EFI_ERROR(Status)){
		gBS->CloseProtocol(
			ControllerHandle,
			&gEfiPciRootBridgeIoProtocolGuid,
			This->DriverBindingHandle,
			ControllerHandle
			);
		return Status;
	}
	
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
	
	return EFI_SUCCESS;
	
}

EFI_STATUS
EFIAPI
_AspmChanger(IN UINT8 AspmControl){
	EFI_STATUS Status;
	UINT8 CapabilityIdOffset = 0x34;
	UINT8 CapabilityId;
	UINT8 AspmOffset = 0x10;
	
	Status = PciRootBridgeIo->Pci.Read(PciRootBridgeIo, EfiPciWidthUint8, Address + CapabilityIdOffset , 1, (VOID *)&CapabilityId);
	if(EFI_ERROR(Status)){	
		return Status;
	}
	
	Status = PciRootBridgeIo->Pci.Write(PciRootBridgeIo, EfiPciWidthUint8, Address + CapabilityId + AspmOffset, 1, (VOID *)&AspmControl);
	if(EFI_ERROR(Status)){		
		return Status;
	}
	
	return EFI_SUCCESS;
}


EFI_STATUS
EFIAPI
AspmChangerEntryPoint(
	IN EFI_HANDLE 			ImageHandle,
	IN EFI_SYSTEM_TABLE 	*SystemTable
	)
{
	EFI_STATUS Status;
	gBS = SystemTable->BootServices;
	gAspmChangerDriverBinding.ImageHandle = ImageHandle;
	
	Status = gBS->InstallMultipleProtocolInterfaces(
				&(gAspmChangerDriverBinding.ImageHandle),
				&gEfiDriverBindingGuid, &gAspmChangerDriverBinding,
				NULL);
				
	return EFI_SUCCESS;
	
}


