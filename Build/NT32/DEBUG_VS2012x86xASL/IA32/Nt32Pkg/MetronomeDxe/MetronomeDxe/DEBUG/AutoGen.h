/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_154CAB4A_52B5_46CD_99C3_4368ABBACFFD
#define _AUTOGENH_154CAB4A_52B5_46CD_99C3_4368ABBACFFD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x154CAB4A, 0x52B5, 0x46CD, {0x99, 0xC3, 0x43, 0x68, 0xAB, 0xBA, 0xCF, 0xFD}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
WinNtMetronomeDriverInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
