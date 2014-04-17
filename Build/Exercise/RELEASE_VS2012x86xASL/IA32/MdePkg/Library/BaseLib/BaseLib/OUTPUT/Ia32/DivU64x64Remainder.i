#line 1 "d:\\myworkspace\\MdePkg\\Library\\BaseLib\\Ia32\\DivU64x64Remainder.asm"
#line 1 "d:\\myworkspace\\Build\\Exercise\\RELEASE_VS2012x86xASL\\IA32\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"















#line 1 "d:\\myworkspace\\MdePkg\\Include\\Base.h"



























#line 1 "d:\\myworkspace\\MdePkg\\Include\\Ia32\\ProcessorBind.h"


























#pragma pack()
#line 29 "d:\\myworkspace\\MdePkg\\Include\\Ia32\\ProcessorBind.h"


























#line 56 "d:\\myworkspace\\MdePkg\\Include\\Ia32\\ProcessorBind.h"












#pragma warning ( disable : 4214 )




#pragma warning ( disable : 4100 )





#pragma warning ( disable : 4057 )




#pragma warning ( disable : 4127 )




#pragma warning ( disable : 4505 )




#pragma warning ( disable : 4206 )

#line 97 "d:\\myworkspace\\MdePkg\\Include\\Ia32\\ProcessorBind.h"




  
  
  

  
  
  
  typedef unsigned __int64    UINT64;
  
  
  
  typedef __int64             INT64;
  
  
  
  typedef unsigned __int32    UINT32;
  
  
  
  typedef __int32             INT32;
  
  
  
  typedef unsigned short      UINT16;
  
  
  
  
  typedef unsigned short      CHAR16;
  
  
  
  typedef short               INT16;
  
  
  
  
  typedef unsigned char       BOOLEAN;
  
  
  
  typedef unsigned char       UINT8;
  
  
  
  typedef char                CHAR8;
  
  
  
  typedef char                INT8;















































#line 199 "d:\\myworkspace\\MdePkg\\Include\\Ia32\\ProcessorBind.h"





typedef UINT32  UINTN;




typedef INT32   INTN;


































  
  
  
  











#line 260 "d:\\myworkspace\\MdePkg\\Include\\Ia32\\ProcessorBind.h"







#line 268 "d:\\myworkspace\\MdePkg\\Include\\Ia32\\ProcessorBind.h"













#line 282 "d:\\myworkspace\\MdePkg\\Include\\Ia32\\ProcessorBind.h"

#line 29 "d:\\myworkspace\\MdePkg\\Include\\Base.h"



















extern UINT8 _VerifySizeofBOOLEAN[(sizeof(BOOLEAN) == (1)) / (sizeof(BOOLEAN) == (1))];
extern UINT8 _VerifySizeofINT8[(sizeof(INT8) == (1)) / (sizeof(INT8) == (1))];
extern UINT8 _VerifySizeofUINT8[(sizeof(UINT8) == (1)) / (sizeof(UINT8) == (1))];
extern UINT8 _VerifySizeofINT16[(sizeof(INT16) == (2)) / (sizeof(INT16) == (2))];
extern UINT8 _VerifySizeofUINT16[(sizeof(UINT16) == (2)) / (sizeof(UINT16) == (2))];
extern UINT8 _VerifySizeofINT32[(sizeof(INT32) == (4)) / (sizeof(INT32) == (4))];
extern UINT8 _VerifySizeofUINT32[(sizeof(UINT32) == (4)) / (sizeof(UINT32) == (4))];
extern UINT8 _VerifySizeofINT64[(sizeof(INT64) == (8)) / (sizeof(INT64) == (8))];
extern UINT8 _VerifySizeofUINT64[(sizeof(UINT64) == (8)) / (sizeof(UINT64) == (8))];
extern UINT8 _VerifySizeofCHAR8[(sizeof(CHAR8) == (1)) / (sizeof(CHAR8) == (1))];
extern UINT8 _VerifySizeofCHAR16[(sizeof(CHAR16) == (2)) / (sizeof(CHAR16) == (2))];







  
  
  
  
  
  







#line 80 "d:\\myworkspace\\MdePkg\\Include\\Base.h"
















#line 97 "d:\\myworkspace\\MdePkg\\Include\\Base.h"







#line 105 "d:\\myworkspace\\MdePkg\\Include\\Base.h"
  
#line 107 "d:\\myworkspace\\MdePkg\\Include\\Base.h"








  
#line 117 "d:\\myworkspace\\MdePkg\\Include\\Base.h"





typedef struct {
  UINT32  Data1;
  UINT16  Data2;
  UINT16  Data3;
  UINT8   Data4[8];
} GUID;




typedef UINT64 PHYSICAL_ADDRESS;




typedef struct _LIST_ENTRY LIST_ENTRY;




struct _LIST_ENTRY {
  LIST_ENTRY  *ForwardLink;
  LIST_ENTRY  *BackLink;
};


























































































































































































































































































































#line 461 "d:\\myworkspace\\MdePkg\\Include\\Base.h"


















#line 480 "d:\\myworkspace\\MdePkg\\Include\\Base.h"




typedef CHAR8 *VA_LIST;






























































#line 548 "d:\\myworkspace\\MdePkg\\Include\\Base.h"




typedef UINTN  *BASE_LIST;

















































#line 603 "d:\\myworkspace\\MdePkg\\Include\\Base.h"

















































































































typedef UINTN RETURN_STATUS;































































































































































































































































































#line 1005 "d:\\myworkspace\\MdePkg\\Include\\Base.h"


#line 17 "d:\\myworkspace\\Build\\Exercise\\RELEASE_VS2012x86xASL\\IA32\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\myworkspace\\MdePkg\\Include\\Library/PcdLib.h"






































































































































































































































































































































































































































































































































                                            






























































































































































































































































                                         
















UINTN
__cdecl
LibPcdSetSku (
   UINTN   SkuId
  );












UINT8
__cdecl
LibPcdGet8 (
   UINTN             TokenNumber
  );












UINT16
__cdecl
LibPcdGet16 (
   UINTN             TokenNumber
  );












UINT32
__cdecl
LibPcdGet32 (
   UINTN             TokenNumber
  );












UINT64
__cdecl
LibPcdGet64 (
   UINTN             TokenNumber
  );












void *
__cdecl
LibPcdGetPtr (
   UINTN             TokenNumber
  );












BOOLEAN 
__cdecl
LibPcdGetBool (
   UINTN             TokenNumber
  );










UINTN
__cdecl
LibPcdGetSize (
   UINTN             TokenNumber
  );
















UINT8
__cdecl
LibPcdGetEx8 (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















UINT16
__cdecl
LibPcdGetEx16 (
   const GUID        *Guid,
   UINTN             TokenNumber
  );













UINT32
__cdecl
LibPcdGetEx32 (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















UINT64
__cdecl
LibPcdGetEx64 (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















void *
__cdecl
LibPcdGetExPtr (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















BOOLEAN
__cdecl
LibPcdGetExBool (
   const GUID        *Guid,
   UINTN             TokenNumber
  );
















UINTN
__cdecl
LibPcdGetExSize (
   const GUID        *Guid,
   UINTN             TokenNumber
  );














UINT8
__cdecl
LibPcdSet8 (
   UINTN             TokenNumber,
   UINT8             Value
  );














UINT16
__cdecl
LibPcdSet16 (
   UINTN             TokenNumber,
   UINT16            Value
  );














UINT32
__cdecl
LibPcdSet32 (
   UINTN             TokenNumber,
   UINT32            Value
  );














UINT64
__cdecl
LibPcdSet64 (
   UINTN             TokenNumber,
   UINT64            Value
  );
























void *
__cdecl
LibPcdSetPtr (
          UINTN             TokenNumber,
       UINTN             *SizeOfBuffer,
   const  void              *Buffer
  );














BOOLEAN
__cdecl
LibPcdSetBool (
   UINTN             TokenNumber,
   BOOLEAN           Value
  );


















UINT8
__cdecl
LibPcdSetEx8 (
   const GUID        *Guid,
   UINTN             TokenNumber,
   UINT8             Value
  );


















UINT16
__cdecl
LibPcdSetEx16 (
   const GUID        *Guid,
   UINTN             TokenNumber,
   UINT16            Value
  );


















UINT32
__cdecl
LibPcdSetEx32 (
   const GUID        *Guid,
   UINTN             TokenNumber,
   UINT32            Value
  );

















UINT64
__cdecl
LibPcdSetEx64 (
   const GUID        *Guid,
   UINTN             TokenNumber,
   UINT64            Value
  );
























void *
__cdecl
LibPcdSetExPtr (
        const GUID        *Guid,
        UINTN             TokenNumber,
     UINTN             *SizeOfBuffer,
        void              *Buffer
  );


















BOOLEAN
__cdecl
LibPcdSetExBool (
   const GUID        *Guid,
   UINTN             TokenNumber,
   BOOLEAN           Value
  );


















typedef
void
(__cdecl *PCD_CALLBACK)(
          const GUID        *CallBackGuid, 
          UINTN             CallBackToken,
       void              *TokenData,
          UINTN             TokenDataSize
  );


















void
__cdecl
LibPcdCallbackOnSet (
   const GUID               *Guid,       
   UINTN                    TokenNumber,
   PCD_CALLBACK             NotificationFunction
  );















void
__cdecl
LibPcdCancelCallback (
   const GUID               *Guid,       
   UINTN                    TokenNumber,
   PCD_CALLBACK             NotificationFunction
  );





















UINTN           
__cdecl
LibPcdGetNextToken (
   const GUID               *Guid,       
   UINTN                    TokenNumber
  );
















GUID *
__cdecl
LibPcdGetNextTokenSpace (
   const GUID  *TokenSpaceGuid
  );

























void *
__cdecl
LibPatchPcdSetPtr (
          void        *PatchVariable,
          UINTN       MaximumDatumSize,
       UINTN       *SizeOfBuffer,
   const  void        *Buffer
  );

#line 1507 "d:\\myworkspace\\MdePkg\\Include\\Library/PcdLib.h"

#line 18 "d:\\myworkspace\\Build\\Exercise\\RELEASE_VS2012x86xASL\\IA32\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"

extern GUID  gEfiCallerIdGuid;




extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;



extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;



extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;



extern const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList;








#line 46 "d:\\myworkspace\\Build\\Exercise\\RELEASE_VS2012x86xASL\\IA32\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\myworkspace\\MdePkg\\Library\\BaseLib\\Ia32\\DivU64x64Remainder.asm"
;------------------------------------------------------------------------------
;
; Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
; This program and the accompanying materials
; are licensed and made available under the terms and conditions of the BSD License
; which accompanies this distribution.  The full text of the license may be found at
; http:
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;
; Module Name:
;
;   DivU64x64Remainder.asm
;
; Abstract:
;
;   Calculate the quotient of a 64-bit integer by a 64-bit integer and returns
;   both the quotient and the remainder
;
;------------------------------------------------------------------------------

    .386
    .model  flat,C
    .code

EXTERN  InternalMathDivRemU64x32:PROC

;------------------------------------------------------------------------------
; UINT64
; __cdecl
; InternalMathDivRemU64x64 (
;         UINT64                    Dividend,
;         UINT64                    Divisor,
;        UINT64                    *Remainder    
;   );
;------------------------------------------------------------------------------
InternalMathDivRemU64x64    PROC
    mov     ecx, [esp + 16]             ; ecx <- divisor[32..63]
    test    ecx, ecx
    jnz     _@DivRemU64x64              ; call _@DivRemU64x64 if Divisor > 2^32
    mov     ecx, [esp + 20]
    jecxz   @F
    and     dword ptr [ecx + 4], 0      ; zero high dword of remainder
    mov     [esp + 16], ecx             ; set up stack frame to match DivRemU64x32
@@:
    jmp     InternalMathDivRemU64x32
InternalMathDivRemU64x64    ENDP

_@DivRemU64x64  PROC    USES    ebx esi edi
    mov     edx, dword ptr [esp + 20]
    mov     eax, dword ptr [esp + 16]   ; edx:eax <- dividend
    mov     edi, edx
    mov     esi, eax                    ; edi:esi <- dividend
    mov     ebx, dword ptr [esp + 24]   ; ecx:ebx <- divisor
@@:
    shr     edx, 1
    rcr     eax, 1
    shrd    ebx, ecx, 1
    shr     ecx, 1
    jnz     @B
    div     ebx
    mov     ebx, eax                    ; ebx <- quotient
    mov     ecx, [esp + 28]             ; ecx <- high dword of divisor
    mul     dword ptr [esp + 24]        ; edx:eax <- quotient * divisor[0..31]
    imul    ecx, ebx                    ; ecx <- quotient * divisor[32..63]
    add     edx, ecx                    ; edx <- (quotient * divisor)[32..63]
    mov     ecx, dword ptr [esp + 32]   ; ecx <- addr for Remainder
    jc      @TooLarge                   ; product > 2^64
    cmp     edi, edx                    ; compare high 32 bits
    ja      @Correct
    jb      @TooLarge                   ; product > dividend
    cmp     esi, eax
    jae     @Correct                    ; product <= dividend
@TooLarge:
    dec     ebx                         ; adjust quotient by -1
    jecxz   @Return                     ; return if Remainder == ((void *) 0)
    sub     eax, dword ptr [esp + 24]
    sbb     edx, dword ptr [esp + 28]   ; edx:eax <- (quotient - 1) * divisor
@Correct:
    jecxz   @Return
    sub     esi, eax
    sbb     edi, edx                    ; edi:esi <- remainder
    mov     [ecx], esi
    mov     [ecx + 4], edi
@Return:
    mov     eax, ebx                    ; eax <- quotient
    xor     edx, edx                    ; quotient is 32 bits long
    ret
_@DivRemU64x64  ENDP

    END
