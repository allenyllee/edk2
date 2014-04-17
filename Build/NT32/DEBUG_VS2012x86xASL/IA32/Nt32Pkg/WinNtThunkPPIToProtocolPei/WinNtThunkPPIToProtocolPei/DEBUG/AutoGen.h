/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D3AAD8DC_3A48_46ac_B1C7_28A9D3CF6755
#define _AUTOGENH_D3AAD8DC_3A48_46ac_B1C7_28A9D3CF6755

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xD3AAD8DC, 0x3A48, 0x46ac, {0xB1, 0xC7, 0x28, 0xA9, 0xD3, 0xCF, 0x67, 0x55}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeWinNtThunkPPIToProtocolPeim (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
