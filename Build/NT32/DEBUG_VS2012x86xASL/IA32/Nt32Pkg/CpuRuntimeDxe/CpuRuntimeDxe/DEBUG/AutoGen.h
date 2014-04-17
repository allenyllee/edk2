/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ee993080_5197_4d4e_b63c_f1f7413e33ce
#define _AUTOGENH_ee993080_5197_4d4e_b63c_f1f7413e33ce

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xee993080, 0x5197, 0x4d4e, {0xb6, 0x3c, 0xf1, 0xf7, 0x41, 0x3e, 0x33, 0xce}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeCpu (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "CpuStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
