/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BE0FEABA_3443_4919_9F3A_2D4216329EA9
#define _AUTOGENH_BE0FEABA_3443_4919_9F3A_2D4216329EA9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xBE0FEABA, 0x3443, 0x4919, {0x9F, 0x3A, 0x2D, 0x42, 0x16, 0x32, 0x9E, 0xA9}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeWinNtAutoScan (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
