/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B8E62775_BB0A_43f0_A843_5BE8B14F8CCD
#define _AUTOGENH_B8E62775_BB0A_43f0_A843_5BE8B14F8CCD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xB8E62775, 0xBB0A, 0x43f0, {0xA8, 0x43, 0x5B, 0xE8, 0xB1, 0x4F, 0x8C, 0xCD}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
BootGraphicsDxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
