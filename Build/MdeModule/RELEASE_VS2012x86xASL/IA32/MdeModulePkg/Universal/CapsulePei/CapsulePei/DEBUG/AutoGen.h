/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C779F6D8_7113_4AA1_9648_EB1633C7D53B
#define _AUTOGENH_C779F6D8_7113_4AA1_9648_EB1633C7D53B

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xC779F6D8, 0x7113, 0x4AA1, {0x96, 0x48, 0xEB, 0x16, 0x33, 0xC7, 0xD5, 0x3B}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdDxeIplSwitchToLongMode  37U
#define _PCD_VALUE_PcdDxeIplSwitchToLongMode  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSwitchToLongMode  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSwitchToLongMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCapsuleCoalesceFile  57U
#define _PCD_PATCHABLE_PcdCapsuleCoalesceFile_SIZE 16
#define _PCD_VALUE_PcdCapsuleCoalesceFile  (VOID *)_gPcd_FixedAtBuild_PcdCapsuleCoalesceFile
extern const UINT8 _gPcd_FixedAtBuild_PcdCapsuleCoalesceFile[16];
#define _PCD_GET_MODE_PTR_PcdCapsuleCoalesceFile  (VOID *)_gPcd_FixedAtBuild_PcdCapsuleCoalesceFile
//#define _PCD_SET_MODE_PTR_PcdCapsuleCoalesceFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse1GPageTable  39U
#define _PCD_VALUE_PcdUse1GPageTable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse1GPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse1GPageTable  _gPcd_FixedAtBuild_PcdUse1GPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse1GPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
CapsuleMain (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
