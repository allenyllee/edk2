/** @file
  This sample application bases on HelloWorld PCD setting 
  to print "UEFI Hello World!" to the UEFI Console.

  Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials                          
  are licensed and made available under the terms and conditions of the BSD License         
  which accompanies this distribution.  The full text of the license may be found at        
  http://opensource.org/licenses/bsd-license.php                                            

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             

**/

//#include <Uefi.h>
//#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
//#include <Library/UefiApplicationEntryPoint.h>
#include <PrintHelloWorld.h>
//#include <../../Driver/PrintHelloWorld/PrintHelloWorld.h>

/**
  The user Entry Point for Application. The user code starts with this function
  as the real entry point for the application.

  @param[in] ImageHandle    The firmware allocated handle for the EFI image.  
  @param[in] SystemTable    A pointer to the EFI System Table.
  
  @retval EFI_SUCCESS       The entry point is executed successfully.
  @retval other             Some error occurs when executing this entry point.

**/
EFI_STATUS
EFIAPI
PrintAppEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS Status;
  EFI_BOOT_SERVICES *gBS = SystemTable->BootServices;
  extern EFI_GUID gEfiPrintHelloWorldProtocolGuid;
  EFI_PRINTHELLOWORLD_PROTOCOL *mPrintHelloWorldProtocol = NULL;
  
  Status = gBS->LocateProtocol(&gEfiPrintHelloWorldProtocolGuid,NULL,&mPrintHelloWorldProtocol);
  if(Status == EFI_SUCCESS){
	Print(L"Locate protocol success\n");
	Status = mPrintHelloWorldProtocol->PrintHelloWorld(0);
	if(Status == EFI_INVALID_PARAMETER){
		Print(L"Call PrintHelloWorld success\n");
		return Status;
	}else{
		Print(L"Call PrintHelloWorld failed\n");
	}
  }else{
	Print(L"Locate protocol failed\n");
  }
  return Status;
}
