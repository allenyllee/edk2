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

#include <Uefi.h>
#include <Library/PcdLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>


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
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  UINTN MemoryMapSize = 0;
  EFI_MEMORY_DESCRIPTOR *MemoryMap = NULL;
  UINTN MapKey = 0;
  UINTN DescriptorSize = 0;
  UINT32 DescriptorVersion = 0;
  
  EFI_STATUS Status; 
  EFI_BOOT_SERVICES	*BS = SystemTable->BootServices;
  char *Buffer = NULL;
  UINTN i = 0;
  UINTN count = 0;
  
  
  Status = BS->GetMemoryMap(&MemoryMapSize, MemoryMap, &MapKey, &DescriptorSize, &DescriptorVersion);
  if(Status != EFI_SUCCESS)
  {
	Status = BS->AllocatePool(EfiBootServicesData, MemoryMapSize, &Buffer);
	if(Status != EFI_SUCCESS){
		Print(L"error: AllocatePool failed.\n");
		return Status;
	}
		
	MemoryMap = (EFI_MEMORY_DESCRIPTOR *)Buffer;
	Status = BS->GetMemoryMap(&MemoryMapSize, MemoryMap, &MapKey, &DescriptorSize, &DescriptorVersion);
	if(Status != EFI_SUCCESS)
	{
		Print(L"error: GetMemoryMap failed.\n");
		return Status;
	}
  }
  
  //Print(L"UEFI Hello World!\n");
  Print(L"MemoryMap Size: %d\n",MemoryMapSize);
  Print(L"Descriptor Size: %d\n",DescriptorSize);
  
  count = MemoryMapSize/DescriptorSize;
  Print(L"MemoryMap count: %d\n",count);
  
  
  Print(L"Type  PhysicalStart  VirtualStart  NumberOfPages  Attribute\n");
  
  for(i=0; i<count; i++){
	//Print(L"%08X  %08X\n",MemoryMap,Buffer);
	//Print(L"%08X\n",Buffer);
	Print(L"%08X  %08X  %08X  %08X  %08X\n",MemoryMap->Type, MemoryMap->PhysicalStart, MemoryMap->VirtualStart, MemoryMap->NumberOfPages, MemoryMap->Attribute);
	//MemoryMap += 1;
	//Buffer += 1;
	MemoryMap = (EFI_MEMORY_DESCRIPTOR *)(Buffer+DescriptorSize*i);
  }
  
  
  
  BS->FreePool(Buffer);
  
  return EFI_SUCCESS;
 
  
  //	UINT32 Index;
	
  //	Index = 0;
  
  
  
  
  
  
  
  //
  // Three PCD type (FeatureFlag, UINT32 and String) are used as the sample.
  //
  //if (FeaturePcdGet (PcdHelloWorldPrintEnable)) {
  //	for (Index = 0; Index < PcdGet32 (PcdHelloWorldPrintTimes); Index ++) {
  //	  //
  //	  // Use UefiLib Print API to print string to UEFI console
  //	  //
  //  	Print ((CHAR16*)PcdGetPtr (PcdHelloWorldPrintString));
  //  }
  //}

  //return EFI_SUCCESS;
}
