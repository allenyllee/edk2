/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_27F05AF5_1644_4EF4_8944_48C4F75675A0
#define _AUTOGENH_27F05AF5_1644_4EF4_8944_48C4F75675A0

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x27F05AF5, 0x1644, 0x4EF4, {0x89, 0x44, 0x48, 0xC4, 0xF7, 0x56, 0x75, 0xA0}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeRealTimeClock (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
