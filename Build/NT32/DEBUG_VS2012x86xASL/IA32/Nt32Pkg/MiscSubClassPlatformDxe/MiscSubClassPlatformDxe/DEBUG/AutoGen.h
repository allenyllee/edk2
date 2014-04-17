/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4A9B9DB8_EC62_4A92_818F_8AA0246D246E
#define _AUTOGENH_4A9B9DB8_EC62_4A92_818F_8AA0246D246E

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x4A9B9DB8, 0xEC62, 0x4A92, {0x81, 0x8F, 0x8A, 0xA0, 0x24, 0x6D, 0x24, 0x6E}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFirmwareReleaseDateString  74U
#define _PCD_PATCHABLE_PcdFirmwareReleaseDateString_SIZE 6
#define _PCD_VALUE_PcdFirmwareReleaseDateString  _gPcd_FixedAtBuild_PcdFirmwareReleaseDateString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareReleaseDateString[3];
#define _PCD_GET_MODE_PTR_PcdFirmwareReleaseDateString  _gPcd_FixedAtBuild_PcdFirmwareReleaseDateString
//#define _PCD_SET_MODE_PTR_PcdFirmwareReleaseDateString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareVersionString  75U
#define _PCD_PATCHABLE_PcdFirmwareVersionString_SIZE 6
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[3];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtMemorySize  4U
#define _PCD_GET_MODE_PTR_PcdWinNtMemorySize  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtMemorySize)
#define _PCD_SET_MODE_PTR_PcdWinNtMemorySize(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtMemorySize, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdUefiVariableDefaultPlatformLang  76U
#define _PCD_PATCHABLE_PcdUefiVariableDefaultPlatformLang_SIZE 7
#define _PCD_VALUE_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang[7];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MiscSubclassDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "MiscSubclassStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
