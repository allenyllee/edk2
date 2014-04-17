/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9622E42C_8E38_4a08_9E8F_54F784652F6B
#define _AUTOGENH_9622E42C_8E38_4a08_9E8F_54F784652F6B

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x9622E42C, 0x8E38, 0x4a08, {0x9E, 0x8F, 0x54, 0xF7, 0x84, 0x65, 0x2F, 0x6B}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdInstallAcpiSdtProtocol  95U
#define _PCD_VALUE_PcdInstallAcpiSdtProtocol  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdInstallAcpiSdtProtocol;
#define _PCD_GET_MODE_BOOL_PcdInstallAcpiSdtProtocol  _gPcd_FixedAtBuild_PcdInstallAcpiSdtProtocol
//#define _PCD_SET_MODE_BOOL_PcdInstallAcpiSdtProtocol  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeAcpiTableDxe (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
