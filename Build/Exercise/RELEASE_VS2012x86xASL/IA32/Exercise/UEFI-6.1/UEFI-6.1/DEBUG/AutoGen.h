/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_49464555_362D_312E_2020_202020202020
#define _AUTOGENH_49464555_362D_312E_2020_202020202020

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x49464555, 0x362D, 0x312E, {0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
UefiImageEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
