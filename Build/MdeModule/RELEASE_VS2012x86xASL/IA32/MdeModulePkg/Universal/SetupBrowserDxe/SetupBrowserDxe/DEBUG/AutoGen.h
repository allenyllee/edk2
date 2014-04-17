/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_EBf342FE_B1D3_4EF8_957C_8048606FF671
#define _AUTOGENH_EBf342FE_B1D3_4EF8_957C_8048606FF671

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xEBf342FE, 0xB1D3, 0x4EF8, {0x95, 0x7C, 0x80, 0x48, 0x60, 0x6F, 0xF6, 0x71}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFrameworkCompatibilitySupport  31U
#define _PCD_VALUE_PcdFrameworkCompatibilitySupport  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport;
#define _PCD_GET_MODE_BOOL_PcdFrameworkCompatibilitySupport  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport
//#define _PCD_SET_MODE_BOOL_PcdFrameworkCompatibilitySupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBrowserGrayOutTextStatement  80U
#define _PCD_VALUE_PcdBrowserGrayOutTextStatement  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdBrowserGrayOutTextStatement;
#define _PCD_GET_MODE_BOOL_PcdBrowserGrayOutTextStatement  _gPcd_FixedAtBuild_PcdBrowserGrayOutTextStatement
//#define _PCD_SET_MODE_BOOL_PcdBrowserGrayOutTextStatement  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBrowserSubtitleTextColor  81U
#define _PCD_VALUE_PcdBrowserSubtitleTextColor  0x01U
extern const  UINT8  _gPcd_FixedAtBuild_PcdBrowserSubtitleTextColor;
#define _PCD_GET_MODE_8_PcdBrowserSubtitleTextColor  _gPcd_FixedAtBuild_PcdBrowserSubtitleTextColor
//#define _PCD_SET_MODE_8_PcdBrowserSubtitleTextColor  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBrowserFieldTextColor  82U
#define _PCD_VALUE_PcdBrowserFieldTextColor  0x00U
extern const  UINT8  _gPcd_FixedAtBuild_PcdBrowserFieldTextColor;
#define _PCD_GET_MODE_8_PcdBrowserFieldTextColor  _gPcd_FixedAtBuild_PcdBrowserFieldTextColor
//#define _PCD_SET_MODE_8_PcdBrowserFieldTextColor  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBrowserFieldTextHighlightColor  83U
#define _PCD_VALUE_PcdBrowserFieldTextHighlightColor  0x07U
extern const  UINT8  _gPcd_FixedAtBuild_PcdBrowserFieldTextHighlightColor;
#define _PCD_GET_MODE_8_PcdBrowserFieldTextHighlightColor  _gPcd_FixedAtBuild_PcdBrowserFieldTextHighlightColor
//#define _PCD_SET_MODE_8_PcdBrowserFieldTextHighlightColor  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBrowserFieldBackgroundHighlightColor  84U
#define _PCD_VALUE_PcdBrowserFieldBackgroundHighlightColor  0x00U
extern const  UINT8  _gPcd_FixedAtBuild_PcdBrowserFieldBackgroundHighlightColor;
#define _PCD_GET_MODE_8_PcdBrowserFieldBackgroundHighlightColor  _gPcd_FixedAtBuild_PcdBrowserFieldBackgroundHighlightColor
//#define _PCD_SET_MODE_8_PcdBrowserFieldBackgroundHighlightColor  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeSetup (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "SetupBrowserStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
