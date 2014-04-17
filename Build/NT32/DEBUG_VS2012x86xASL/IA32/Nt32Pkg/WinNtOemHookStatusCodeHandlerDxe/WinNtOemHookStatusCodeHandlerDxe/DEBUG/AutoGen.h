/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_CA4233AD_847E_4E5D_AD3F_21CABFE5E23C
#define _AUTOGENH_CA4233AD_847E_4E5D_AD3F_21CABFE5E23C

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xCA4233AD, 0x847E, 0x4E5D, {0xAD, 0x3F, 0x21, 0xCA, 0xBF, 0xE5, 0xE2, 0x3C}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
WinNtOemHookStatusCodeHandlerDxeEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
