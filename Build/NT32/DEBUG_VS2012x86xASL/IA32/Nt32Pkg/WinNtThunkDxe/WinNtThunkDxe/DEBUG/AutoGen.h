/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0C95A916_A006_11d4_BCFA_0080C73C8881
#define _AUTOGENH_0C95A916_A006_11d4_BCFA_0080C73C8881

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x0C95A916, 0xA006, 0x11d4, {0xBC, 0xFA, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81}}

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeWinNtThunk (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
