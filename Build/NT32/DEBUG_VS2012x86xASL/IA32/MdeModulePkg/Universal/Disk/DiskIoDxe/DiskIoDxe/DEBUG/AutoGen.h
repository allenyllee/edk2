/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_6B38F7B4_AD98_40e9_9093_ACA2B5A253C4
#define _AUTOGENH_6B38F7B4_AD98_40e9_9093_ACA2B5A253C4

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x6B38F7B4, 0xAD98, 0x40e9, {0x90, 0x93, 0xAC, 0xA2, 0xB5, 0xA2, 0x53, 0xC4}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeDiskIo (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
