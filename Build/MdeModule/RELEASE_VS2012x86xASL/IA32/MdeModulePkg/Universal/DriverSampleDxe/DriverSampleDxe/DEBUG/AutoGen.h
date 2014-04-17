/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FE3542FE_C1D3_4EF8_657C_8048606FF671
#define _AUTOGENH_FE3542FE_C1D3_4EF8_657C_8048606FF671

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xFE3542FE, 0xC1D3, 0x4EF8, {0x65, 0x7C, 0x80, 0x48, 0x60, 0x6F, 0xF6, 0x71}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DriverSampleInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
DriverSampleUnload (
  IN EFI_HANDLE        ImageHandle
  );

#include "DriverSampleStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
