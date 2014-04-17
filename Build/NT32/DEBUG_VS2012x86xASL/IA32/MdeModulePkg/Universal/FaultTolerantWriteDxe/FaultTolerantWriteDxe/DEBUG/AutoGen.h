/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FE5CEA76_4F72_49e8_986F_2CD899DFFE5D
#define _AUTOGENH_FE5CEA76_4F72_49e8_986F_2CD899DFFE5D

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xFE5CEA76, 0x4F72, 0x49e8, {0x98, 0x6F, 0x2C, 0xD8, 0x99, 0xDF, 0xFE, 0x5D}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFullFtwServiceEnable  71U
#define _PCD_VALUE_PcdFullFtwServiceEnable  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdFullFtwServiceEnable;
#define _PCD_GET_MODE_BOOL_PcdFullFtwServiceEnable  _gPcd_FixedAtBuild_PcdFullFtwServiceEnable
//#define _PCD_SET_MODE_BOOL_PcdFullFtwServiceEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  1U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64  72U
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingBase64  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase64;
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwWorkingBase64  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingBase64
//#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwWorkingBase64  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  46U
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  2U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64  73U
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareBase64  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase64;
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwSpareBase64  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareBase64
//#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwSpareBase64  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  47U
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FaultTolerantWriteInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
