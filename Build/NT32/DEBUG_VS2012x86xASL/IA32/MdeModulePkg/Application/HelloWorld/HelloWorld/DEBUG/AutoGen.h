/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_6987936E_ED34_44db_AE97_1FA5E4ED2116
#define _AUTOGENH_6987936E_ED34_44db_AE97_1FA5E4ED2116

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x6987936E, 0xED34, 0x44db, {0xAE, 0x97, 0x1F, 0xA5, 0xE4, 0xED, 0x21, 0x16}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdHelloWorldPrintEnable  110U
#define _PCD_VALUE_PcdHelloWorldPrintEnable  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdHelloWorldPrintEnable;
#define _PCD_GET_MODE_BOOL_PcdHelloWorldPrintEnable  _gPcd_FixedAtBuild_PcdHelloWorldPrintEnable
//#define _PCD_SET_MODE_BOOL_PcdHelloWorldPrintEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHelloWorldPrintString  111U
#define _PCD_PATCHABLE_PcdHelloWorldPrintString_SIZE 44
#define _PCD_VALUE_PcdHelloWorldPrintString  _gPcd_FixedAtBuild_PcdHelloWorldPrintString
extern const UINT16 _gPcd_FixedAtBuild_PcdHelloWorldPrintString[22];
#define _PCD_GET_MODE_PTR_PcdHelloWorldPrintString  _gPcd_FixedAtBuild_PcdHelloWorldPrintString
//#define _PCD_SET_MODE_PTR_PcdHelloWorldPrintString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHelloWorldPrintTimes  112U
#define _PCD_VALUE_PcdHelloWorldPrintTimes  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdHelloWorldPrintTimes;
#define _PCD_GET_MODE_32_PcdHelloWorldPrintTimes  _gPcd_FixedAtBuild_PcdHelloWorldPrintTimes
//#define _PCD_SET_MODE_32_PcdHelloWorldPrintTimes  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
