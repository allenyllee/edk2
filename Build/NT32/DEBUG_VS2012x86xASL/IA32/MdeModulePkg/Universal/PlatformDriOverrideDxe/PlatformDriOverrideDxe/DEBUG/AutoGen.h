/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_35034CE2_A6E5_4fb4_BABE_A0156E9B2549
#define _AUTOGENH_35034CE2_A6E5_4fb4_BABE_A0156E9B2549

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x35034CE2, 0xA6E5, 0x4fb4, {0xBA, 0xBE, 0xA0, 0x15, 0x6E, 0x9B, 0x25, 0x49}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PlatDriOverrideDxeInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
PlatDriOverrideDxeUnload (
  IN EFI_HANDLE        ImageHandle
  );

#include "PlatDriOverrideDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
