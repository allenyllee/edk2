/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_29b3c4c6_e5aa_49e4_8ce0_2772f782ddc2
#define _AUTOGENH_29b3c4c6_e5aa_49e4_8ce0_2772f782ddc2

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x29b3c4c6, 0xe5aa, 0x49e4, {0x8c, 0xe0, 0x27, 0x72, 0xf7, 0x82, 0xdd, 0xc2}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeWinNtGop (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
