#line 1 "d:\\myworkspace\\MdePkg\\Library\\BaseLib\\X64\\DisablePaging64.asm"
#line 1 "d:\\myworkspace\\Build\\Exercise\\RELEASE_VS2012x86xASL\\X64\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"















#line 1 "d:\\myworkspace\\MdePkg\\Include\\Base.h"



























#line 1 "d:\\myworkspace\\MdePkg\\Include\\X64\\ProcessorBind.h"


























#pragma pack()
#line 29 "d:\\myworkspace\\MdePkg\\Include\\X64\\ProcessorBind.h"



























#line 57 "d:\\myworkspace\\MdePkg\\Include\\X64\\ProcessorBind.h"












#pragma warning ( disable : 4214 )




#pragma warning ( disable : 4100 )





#pragma warning ( disable : 4057 )




#pragma warning ( disable : 4127 )




#pragma warning ( disable : 4505 )




#pragma warning ( disable : 4206 )

#line 98 "d:\\myworkspace\\MdePkg\\Include\\X64\\ProcessorBind.h"



  
  
  

  
  
  
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















































#line 199 "d:\\myworkspace\\MdePkg\\Include\\X64\\ProcessorBind.h"





typedef UINT64  UINTN;




typedef INT64   INTN;



































  
  
  
  
















#line 266 "d:\\myworkspace\\MdePkg\\Include\\X64\\ProcessorBind.h"







#line 274 "d:\\myworkspace\\MdePkg\\Include\\X64\\ProcessorBind.h"













#line 288 "d:\\myworkspace\\MdePkg\\Include\\X64\\ProcessorBind.h"

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


#line 17 "d:\\myworkspace\\Build\\Exercise\\RELEASE_VS2012x86xASL\\X64\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"
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

#line 18 "d:\\myworkspace\\Build\\Exercise\\RELEASE_VS2012x86xASL\\X64\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"

extern GUID  gEfiCallerIdGuid;




extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;



extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;



extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;



extern const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList;








#line 46 "d:\\myworkspace\\Build\\Exercise\\RELEASE_VS2012x86xASL\\X64\\MdePkg\\Library\\BaseLib\\BaseLib\\DEBUG\\AutoGen.h"
#line 1 "d:\\myworkspace\\MdePkg\\Library\\BaseLib\\X64\\DisablePaging64.asm"
;------------------------------------------------------------------------------
;
; Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
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
;   DisablePaging64.Asm
;
; Abstract:
;
;   AsmDisablePaging64 function
;
; Notes:
;
;------------------------------------------------------------------------------

    .code

;------------------------------------------------------------------------------
; void
; __cdecl
; InternalX86DisablePaging64 (
;         UINT16                    Cs,
;         UINT32                    EntryPoint,
;         UINT32                    Context1,  
;         UINT32                    Context2,  
;         UINT32                    NewStack
;   );
;------------------------------------------------------------------------------
InternalX86DisablePaging64    PROC
    cli
    lea     rsi, @F                     ; rsi <- The start address of transition code
    mov     edi, [rsp + 28h]            ; rdi <- New stack
    lea     rax, mTransitionEnd         ; rax <- end of transition code
    sub     rax, rsi                    ; rax <- The size of transition piece code 
    add     rax, 4                      ; Round RAX up to the next 4 byte boundary
    and     al, 0fch
    sub     rdi, rax                    ; rdi <- Use stack to hold transition code
    mov     r10d, edi                   ; r10 <- The start address of transicition code below 4G
    push    rcx                         ; save rcx to stack
    mov     rcx, rax                    ; rcx <- The size of transition piece code
    rep     movsb                       ; copy transition code to top of new stack which must be below 4GB
    pop     rcx                         ; restore rcx
    
    mov     esi, r8d
    mov     edi, r9d
    mov     eax, r10d                   ; eax <- start of the transition code on the stack
    sub     eax, 4                      ; eax <- One slot below transition code on the stack
    push    rcx                         ; push Cs to stack
    push    r10                         ; push address of tansition code on stack
    DB      48h                         ; prefix to composite "retq" with next "retf"
    retf                                ; Use far return to load CS register from stack

; Start of transition code
@@:
    mov     esp, eax                    ; set up new stack
    mov     rax, cr0
    btr     eax, 31                     ; Clear CR0.PG
    mov     cr0, rax                    ; disable paging and caches
    
    mov     ebx, edx                    ; save EntryPoint to rbx, for rdmsr will overwrite rdx
    mov     ecx, 0c0000080h
    rdmsr
    and     ah, NOT 1                   ; clear LME
    wrmsr
    mov     rax, cr4
    and     al, NOT (1 SHL 5)           ; clear PAE
    mov     cr4, rax
    push    rdi                         ; push Context2
    push    rsi                         ; push Context1
    call    rbx                         ; transfer control to EntryPoint
    hlt                                 ; no one should get here
InternalX86DisablePaging64    ENDP

mTransitionEnd LABEL    BYTE

    END
