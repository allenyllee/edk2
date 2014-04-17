/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_00160F8D_2B35_4df2_BBE0_B272A8D631F0
#define _AUTOGENH_00160F8D_2B35_4df2_BBE0_B272A8D631F0

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x00160F8D, 0x2B35, 0x4df2, {0xBB, 0xE0, 0xB2, 0x72, 0xA8, 0xD6, 0x31, 0xF0}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFirmwarePerformanceDataTableS3Support  100U
#define _PCD_VALUE_PcdFirmwarePerformanceDataTableS3Support  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdFirmwarePerformanceDataTableS3Support;
#define _PCD_GET_MODE_BOOL_PcdFirmwarePerformanceDataTableS3Support  _gPcd_FixedAtBuild_PcdFirmwarePerformanceDataTableS3Support
//#define _PCD_SET_MODE_BOOL_PcdFirmwarePerformanceDataTableS3Support  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdProgressCodeOsLoaderLoad  101U
#define _PCD_VALUE_PcdProgressCodeOsLoaderLoad  0x03058000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderLoad  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderLoad  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdProgressCodeOsLoaderStart  102U
#define _PCD_VALUE_PcdProgressCodeOsLoaderStart  0x03058001U
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderStart  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdExtFpdtBootRecordPadSize  103U
#define _PCD_VALUE_PcdExtFpdtBootRecordPadSize  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdExtFpdtBootRecordPadSize;
#define _PCD_GET_MODE_32_PcdExtFpdtBootRecordPadSize  _gPcd_FixedAtBuild_PcdExtFpdtBootRecordPadSize
//#define _PCD_SET_MODE_32_PcdExtFpdtBootRecordPadSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FirmwarePerformanceDxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
