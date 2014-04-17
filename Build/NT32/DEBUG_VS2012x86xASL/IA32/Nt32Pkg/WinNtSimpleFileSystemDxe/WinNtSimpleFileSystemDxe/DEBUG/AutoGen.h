/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9C25E18B_76BA_43da_A132_DBB0997CEFEF
#define _AUTOGENH_9C25E18B_76BA_43da_A132_DBB0997CEFEF

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x9C25E18B, 0x76BA, 0x43da, {0xA1, 0x32, 0xDB, 0xB0, 0x99, 0x7C, 0xEF, 0xEF}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeWinNtSimpleFileSystem (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
