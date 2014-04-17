/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_F0384FFD_8633_452f_9010_F6B7D2EAE2F1
#define _AUTOGENH_F0384FFD_8633_452f_9010_F6B7D2EAE2F1

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xF0384FFD, 0x8633, 0x452f, {0x90, 0x10, 0xF6, 0xB7, 0xD2, 0xEA, 0xE2, 0xF1}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdWinNtFlashFvRecoveryBase  53U
#define _PCD_VALUE_PcdWinNtFlashFvRecoveryBase  0x00000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoveryBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashFvRecoveryBase  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoveryBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashFvRecoveryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashFvRecoverySize  54U
#define _PCD_VALUE_PcdWinNtFlashFvRecoverySize  0x00280000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoverySize;
#define _PCD_GET_MODE_32_PcdWinNtFlashFvRecoverySize  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoverySize
//#define _PCD_SET_MODE_32_PcdWinNtFlashFvRecoverySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageEventLogBase  55U
#define _PCD_VALUE_PcdWinNtFlashNvStorageEventLogBase  0x0028C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageEventLogBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageEventLogBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageEventLogSize  56U
#define _PCD_VALUE_PcdWinNtFlashNvStorageEventLogSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageVariableBase  51U
#define _PCD_VALUE_PcdWinNtFlashNvStorageVariableBase  0x00280000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageFtwSpareBase  50U
#define _PCD_VALUE_PcdWinNtFlashNvStorageFtwSpareBase  0x00290000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  46U
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  47U
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  48U
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0000C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeWinNtFwh (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
