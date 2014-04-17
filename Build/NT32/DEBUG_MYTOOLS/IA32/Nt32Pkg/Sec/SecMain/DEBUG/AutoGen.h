/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4b837b03_6587_4d19_b82b_edfad836c0a0
#define _AUTOGENH_4b837b03_6587_4d19_b82b_edfad836c0a0

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x4b837b03, 0x6587, 0x4d19, {0xb8, 0x2b, 0xed, 0xfa, 0xd8, 0x36, 0xc0, 0xa0}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdWinNtBootMode  17U
#define _PCD_VALUE_PcdWinNtBootMode  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtBootMode;
#define _PCD_GET_MODE_32_PcdWinNtBootMode  _gPcd_FixedAtBuild_PcdWinNtBootMode
//#define _PCD_SET_MODE_32_PcdWinNtBootMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFirmwareFdSize  18U
#define _PCD_VALUE_PcdWinNtFirmwareFdSize  0x2a0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFirmwareFdSize;
#define _PCD_GET_MODE_32_PcdWinNtFirmwareFdSize  _gPcd_FixedAtBuild_PcdWinNtFirmwareFdSize
//#define _PCD_SET_MODE_32_PcdWinNtFirmwareFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtMemorySizeForSecMain  19U
#define _PCD_PATCHABLE_PcdWinNtMemorySizeForSecMain_SIZE 16
#define _PCD_VALUE_PcdWinNtMemorySizeForSecMain  _gPcd_FixedAtBuild_PcdWinNtMemorySizeForSecMain
extern const UINT16 _gPcd_FixedAtBuild_PcdWinNtMemorySizeForSecMain[8];
#define _PCD_GET_MODE_PTR_PcdWinNtMemorySizeForSecMain  _gPcd_FixedAtBuild_PcdWinNtMemorySizeForSecMain
//#define _PCD_SET_MODE_PTR_PcdWinNtMemorySizeForSecMain  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFirmwareVolume  20U
#define _PCD_PATCHABLE_PcdWinNtFirmwareVolume_SIZE 36
#define _PCD_VALUE_PcdWinNtFirmwareVolume  _gPcd_FixedAtBuild_PcdWinNtFirmwareVolume
extern const UINT16 _gPcd_FixedAtBuild_PcdWinNtFirmwareVolume[18];
#define _PCD_GET_MODE_PTR_PcdWinNtFirmwareVolume  _gPcd_FixedAtBuild_PcdWinNtFirmwareVolume
//#define _PCD_SET_MODE_PTR_PcdWinNtFirmwareVolume  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
