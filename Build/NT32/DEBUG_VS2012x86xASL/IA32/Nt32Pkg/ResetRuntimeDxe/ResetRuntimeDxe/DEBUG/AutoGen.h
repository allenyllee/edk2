/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BA929954_35B0_4dd3_90CD_9634BD7E1CF1
#define _AUTOGENH_BA929954_35B0_4dd3_90CD_9634BD7E1CF1

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xBA929954, 0x35B0, 0x4dd3, {0x90, 0xCD, 0x96, 0x34, 0xBD, 0x7E, 0x1C, 0xF1}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeNtReset (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
