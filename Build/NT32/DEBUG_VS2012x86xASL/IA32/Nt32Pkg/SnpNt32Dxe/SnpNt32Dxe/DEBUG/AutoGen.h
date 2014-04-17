/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D0893F05_B06D_4161_B947_9BE9B85AC3A1
#define _AUTOGENH_D0893F05_B06D_4161_B947_9BE9B85AC3A1

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xD0893F05, 0xB06D, 0x4161, {0xB9, 0x47, 0x9B, 0xE9, 0xB8, 0x5A, 0xC3, 0xA1}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeSnpNt32Driver (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
SnpNt32Unload (
  IN EFI_HANDLE        ImageHandle
  );



#ifdef __cplusplus
}
#endif

#endif
