/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C3811036_710B_4E39_8CF1_0AF9BE3A8198
#define _AUTOGENH_C3811036_710B_4E39_8CF1_0AF9BE3A8198

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xC3811036, 0x710B, 0x4E39, {0x8C, 0xF1, 0x0A, 0xF9, 0xBE, 0x3A, 0x81, 0x98}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
WinNtTimerDriverInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
