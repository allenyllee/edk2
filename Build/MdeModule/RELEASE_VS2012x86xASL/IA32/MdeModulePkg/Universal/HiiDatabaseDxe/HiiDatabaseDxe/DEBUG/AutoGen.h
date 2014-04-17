/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_348C4D62_BFBD_4882_9ECE_C80BB1C4783B
#define _AUTOGENH_348C4D62_BFBD_4882_9ECE_C80BB1C4783B

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x348C4D62, 0xBFBD, 0x4882, {0x9E, 0xCE, 0xC8, 0x0B, 0xB1, 0xC4, 0x78, 0x3B}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSupportHiiImageProtocol  73U
#define _PCD_VALUE_PcdSupportHiiImageProtocol  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSupportHiiImageProtocol;
#define _PCD_GET_MODE_BOOL_PcdSupportHiiImageProtocol  _gPcd_FixedAtBuild_PcdSupportHiiImageProtocol
//#define _PCD_SET_MODE_BOOL_PcdSupportHiiImageProtocol  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiVariableDefaultPlatformLang  74U
#define _PCD_PATCHABLE_PcdUefiVariableDefaultPlatformLang_SIZE 7
#define _PCD_VALUE_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang[7];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeHiiDatabase (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
