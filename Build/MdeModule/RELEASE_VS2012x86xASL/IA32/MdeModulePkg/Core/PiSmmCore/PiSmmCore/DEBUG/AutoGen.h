/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_E94F54CD_81EB_47ed_AEC3_856F5DC157A9
#define _AUTOGENH_E94F54CD_81EB_47ed_AEC3_856F5DC157A9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xE94F54CD, 0x81EB, 0x47ed, {0xAE, 0xC3, 0x85, 0x6F, 0x5D, 0xC1, 0x57, 0xA9}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdLoadFixAddressSmmCodePageNumber  112U
#define _PCD_PATCHABLE_VALUE_PcdLoadFixAddressSmmCodePageNumber  ((UINT32)0U)
extern volatile   UINT32  _gPcd_BinaryPatch_PcdLoadFixAddressSmmCodePageNumber;
#define _PCD_GET_MODE_32_PcdLoadFixAddressSmmCodePageNumber  _gPcd_BinaryPatch_PcdLoadFixAddressSmmCodePageNumber
#define _PCD_SET_MODE_32_PcdLoadFixAddressSmmCodePageNumber(Value)  (_gPcd_BinaryPatch_PcdLoadFixAddressSmmCodePageNumber = (Value))

#define _PCD_TOKEN_PcdLoadModuleAtFixAddressEnable  34U
#define _PCD_VALUE_PcdLoadModuleAtFixAddressEnable  0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable;
#define _PCD_GET_MODE_64_PcdLoadModuleAtFixAddressEnable  _gPcd_FixedAtBuild_PcdLoadModuleAtFixAddressEnable
//#define _PCD_SET_MODE_64_PcdLoadModuleAtFixAddressEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SmmMain (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
