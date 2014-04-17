/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BD7E9A27_D6C5_416a_B245_5F507D95B2BD
#define _AUTOGENH_BD7E9A27_D6C5_416a_B245_5F507D95B2BD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;

#define EFI_CALLER_ID_GUID \
  {0xBD7E9A27, 0xD6C5, 0x416a, {0xB2, 0x45, 0x5F, 0x50, 0x7D, 0x95, 0xB2, 0xBD}}

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdWinNtMemorySize  4U
#define _PCD_GET_MODE_PTR_PcdWinNtMemorySize  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtMemorySize)
#define _PCD_SET_MODE_PTR_PcdWinNtMemorySize(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtMemorySize, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtPhysicalDisk  5U
#define _PCD_GET_MODE_PTR_PcdWinNtPhysicalDisk  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtPhysicalDisk)
#define _PCD_SET_MODE_PTR_PcdWinNtPhysicalDisk(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtPhysicalDisk, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtVirtualDisk  6U
#define _PCD_GET_MODE_PTR_PcdWinNtVirtualDisk  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtVirtualDisk)
#define _PCD_SET_MODE_PTR_PcdWinNtVirtualDisk(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtVirtualDisk, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtFileSystem  7U
#define _PCD_GET_MODE_PTR_PcdWinNtFileSystem  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtFileSystem)
#define _PCD_SET_MODE_PTR_PcdWinNtFileSystem(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtFileSystem, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtSerialPort  8U
#define _PCD_GET_MODE_PTR_PcdWinNtSerialPort  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtSerialPort)
#define _PCD_SET_MODE_PTR_PcdWinNtSerialPort(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtSerialPort, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtGop  9U
#define _PCD_GET_MODE_PTR_PcdWinNtGop  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtGop)
#define _PCD_SET_MODE_PTR_PcdWinNtGop(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtGop, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtUga  10U
#define _PCD_GET_MODE_PTR_PcdWinNtUga  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtUga)
#define _PCD_SET_MODE_PTR_PcdWinNtUga(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtUga, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtConsole  11U
#define _PCD_GET_MODE_PTR_PcdWinNtConsole  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtConsole)
#define _PCD_SET_MODE_PTR_PcdWinNtConsole(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtConsole, (SizeOfBuffer), (Buffer))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeWinNtBusDriver (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
