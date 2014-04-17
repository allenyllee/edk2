/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D233D6BD_F1B1_425A_BF45_5CAF2B88EDDC
#define _AUTOGENH_D233D6BD_F1B1_425A_BF45_5CAF2B88EDDC

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xD233D6BD, 0xF1B1, 0x425A, {0xBF, 0x45, 0x5C, 0xAF, 0x2B, 0x88, 0xED, 0xDC}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
WinNtOemHookStatusCodeHandlerPeiEntry (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
