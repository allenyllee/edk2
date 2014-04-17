/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_52C05B14_0B98_496c_BC3B_04B50211D680
#define _AUTOGENH_52C05B14_0B98_496c_BC3B_04B50211D680

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0x52C05B14, 0x0B98, 0x496c, {0xBC, 0x3B, 0x04, 0xB5, 0x02, 0x11, 0xD6, 0x80}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPeiCoreMaxFvSupported  41U
#define _PCD_VALUE_PcdPeiCoreMaxFvSupported  6U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxFvSupported;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxFvSupported  _gPcd_FixedAtBuild_PcdPeiCoreMaxFvSupported
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxFvSupported  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreMaxPeimPerFv  42U
#define _PCD_VALUE_PcdPeiCoreMaxPeimPerFv  32U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeimPerFv;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxPeimPerFv  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeimPerFv
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxPeimPerFv  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreMaxPpiSupported  43U
#define _PCD_VALUE_PcdPeiCoreMaxPpiSupported  64U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxPpiSupported;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxPpiSupported  _gPcd_FixedAtBuild_PcdPeiCoreMaxPpiSupported
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxPpiSupported  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreMaxPeiStackSize  44U
#define _PCD_VALUE_PcdPeiCoreMaxPeiStackSize  0x20000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeiStackSize;
#define _PCD_GET_MODE_32_PcdPeiCoreMaxPeiStackSize  _gPcd_FixedAtBuild_PcdPeiCoreMaxPeiStackSize
//#define _PCD_SET_MODE_32_PcdPeiCoreMaxPeiStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPeiCoreImageLoaderSearchTeSectionFirst  45U
#define _PCD_VALUE_PcdPeiCoreImageLoaderSearchTeSectionFirst  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPeiCoreImageLoaderSearchTeSectionFirst;
#define _PCD_GET_MODE_BOOL_PcdPeiCoreImageLoaderSearchTeSectionFirst  _gPcd_FixedAtBuild_PcdPeiCoreImageLoaderSearchTeSectionFirst
//#define _PCD_SET_MODE_BOOL_PcdPeiCoreImageLoaderSearchTeSectionFirst  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFrameworkCompatibilitySupport  31U
#define _PCD_VALUE_PcdFrameworkCompatibilitySupport  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport;
#define _PCD_GET_MODE_BOOL_PcdFrameworkCompatibilitySupport  _gPcd_FixedAtBuild_PcdFrameworkCompatibilitySupport
//#define _PCD_SET_MODE_BOOL_PcdFrameworkCompatibilitySupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdLoadFixAddressPeiCodePageNumber  46U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressPeiCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressPeiCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber
#define _PCD_SET_MODE_32_PcdLoadFixAddressPeiCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressPeiCodePageNumber = (Value))

#define _PCD_TOKEN_PcdLoadFixAddressBootTimeCodePageNumber  32U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressBootTimeCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressBootTimeCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber
#define _PCD_SET_MODE_32_PcdLoadFixAddressBootTimeCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressBootTimeCodePageNumber = (Value))

#define _PCD_TOKEN_PcdLoadFixAddressRuntimeCodePageNumber  33U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressRuntimeCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressRuntimeCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber
#define _PCD_SET_MODE_32_PcdLoadFixAddressRuntimeCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressRuntimeCodePageNumber = (Value))

#define _PCD_TOKEN_PcdLoadModuleAtFixAddressEnable  34U
#define _PCD_VALUE_PcdLoadModuleAtFixAddressEnable  0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable;
#define _PCD_GET_MODE_64_PcdLoadModuleAtFixAddressEnable  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable
//#define _PCD_SET_MODE_64_PcdLoadModuleAtFixAddressEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


VOID
EFIAPI
PeiCore (
  IN CONST  EFI_SEC_PEI_HAND_OFF    *SecCoreData,
  IN CONST  EFI_PEI_PPI_DESCRIPTOR  *PpiList,
  IN VOID                           *Context
  );





#ifdef __cplusplus
}
#endif

#endif
