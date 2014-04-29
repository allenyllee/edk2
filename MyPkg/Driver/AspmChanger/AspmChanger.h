#ifndef _ASPM_CHANGER_H_
#define _ASPM_CHANGER_H_

#include <Protocol/DriverBinding.h>

#define EFI_ASPM_CHANGER_PROTOCOL_GUID \
		{0xd269e666, 0x0850, 0x4f2d, {0xaa,0xe6,0xdf,0x1c,0xcc,0x0d,0xd5,0xf7} }
		
typedef
EFI_STATUS
(EFIAPI *ASPM_CHANGER)(UINT8);	
	
typedef
struct _EFI_ASPM_CHANGER_PROTOCOL{
	ASPM_CHANGER AspmChanger;
}EFI_ASPM_CHANGER_PROTOCOL;			

			
EFI_STATUS
EFIAPI
AspmChangerDriverSupported(
	IN EFI_DRIVER_BINDING_PROTOCOL 	*This,
	IN EFI_HANDLE 					ControllerHandle,
	IN EFI_DEVICE_PATH_PROTOCOL 	*RemainingDevicePath
	);

EFI_STATUS
EFIAPI
AspmChangerDriverStart(
	IN EFI_DRIVER_BINDING_PROTOCOL 	*This,
	IN EFI_HANDLE 					ControllerHandle,
	IN EFI_DEVICE_PATH_PROTOCOL 	*RemainingDevicePath
	);

EFI_STATUS
EFIAPI
AspmChangerDriverStop(
	IN EFI_DRIVER_BINDING_PROTOCOL 	*This,
	IN EFI_HANDLE 					ControllerHandle,
	IN UINTN						NumberOfChildren,
	IN EFI_HANDLE					*ChilHandleBuffer
	);

EFI_STATUS
EFIAPI
_AspmChanger(IN UINT8 AspmControl);	

EFI_STATUS
EFIAPI
_Unload(IN EFI_HANDLE ImageHandle);

extern EFI_GUID gEfiAspmChangerProtocolGuid;
	
#endif
	