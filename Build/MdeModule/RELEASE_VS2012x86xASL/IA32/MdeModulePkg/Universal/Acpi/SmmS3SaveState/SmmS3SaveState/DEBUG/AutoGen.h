/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2D59F041_53A4_40d0_A6CD_844DC0DFEF17
#define _AUTOGENH_2D59F041_53A4_40d0_A6CD_844DC0DFEF17

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x2D59F041, 0x53A4, 0x40d0, {0xA6, 0xCD, 0x84, 0x4D, 0xC0, 0xDF, 0xEF, 0x17}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeSmmS3SaveState (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
