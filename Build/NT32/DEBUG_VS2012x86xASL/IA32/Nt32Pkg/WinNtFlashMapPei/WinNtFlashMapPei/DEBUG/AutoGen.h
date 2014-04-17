/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_681F3771_6F1D_42DE_9AA2_F82BBCDBC5F9
#define _AUTOGENH_681F3771_6F1D_42DE_9AA2_F82BBCDBC5F9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x681F3771, 0x6F1D, 0x42DE, {0x9A, 0xA2, 0xF8, 0x2B, 0xBC, 0xDB, 0xC5, 0xF9}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  46U
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  1U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  47U
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  2U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  48U
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0000C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  3U
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageVariableBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageVariableBase, (Value))

#define _PCD_TOKEN_PcdWinNtFlashNvStorageFtwWorkingBase  49U
#define _PCD_VALUE_PcdWinNtFlashNvStorageFtwWorkingBase  0x0028E000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageFtwSpareBase  50U
#define _PCD_VALUE_PcdWinNtFlashNvStorageFtwSpareBase  0x00290000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageVariableBase  51U
#define _PCD_VALUE_PcdWinNtFlashNvStorageVariableBase  0x00280000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeFlashMap (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
