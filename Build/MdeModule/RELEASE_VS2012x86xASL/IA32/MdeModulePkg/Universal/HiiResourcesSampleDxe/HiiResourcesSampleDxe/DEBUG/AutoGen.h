/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D49D2EB0_44D5_4621_9FD6_1A92C9109B99
#define _AUTOGENH_D49D2EB0_44D5_4621_9FD6_1A92C9109B99

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xD49D2EB0, 0x44D5, 0x4621, {0x9F, 0xD6, 0x1A, 0x92, 0xC9, 0x10, 0x9B, 0x99}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
HiiResourcesSampleInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
HiiResourcesSampleUnload (
  IN EFI_HANDLE        ImageHandle
  );

#include "HiiResourcesSampleStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
