#include <Library/UefiLib.h>
#include <wchar.h>
#include <stdlib.h>

extern EFI_HANDLE		gImageHandle;
extern EFI_SYSTEM_TABLE		*gST;
extern EFI_RUNTIME_SERVICES	*gRT;
extern EFI_BOOT_SERVICES	*gBS;

const wchar_t	*MemoryTypeString[]={
	L"EfiReservedMemoryType",
	L"EfiLoaderCode",
	L"EfiLoaderData",
	L"EfiBootServicesCode",
	L"EfiBootServicesData",
	L"EfiRuntimeServicesCode",
	L"EfiRuntimeServicesData",
	L"EfiConventionalMemory",
	L"EfiUnusableMemory",
	L"EfiACPIReclaimMemory",
	L"EfiACPIMemoryNVS",
	L"EfiMemoryMappedIO",
	L"EfiMemoryMappedIOPortSpace",
	L"EfiPalCode",
	L"EfiMaxMemoryType"
};

void GetMemoryMap(int i);
void CompareMemoryMap(int inew,int iold,int WaitForKey);
int PrintNewEfi_memory_descriptor(int inew,int iold,wchar_t *HeadString);
void PrintEfi_memory_descriptor(EFI_MEMORY_DESCRIPTOR *p);

int CompareEfi_memory_descriptor(EFI_MEMORY_DESCRIPTOR *p1,EFI_MEMORY_DESCRIPTOR *p2);
int CompareUintn(UINTN i1,UINTN i2);

UINTN MemoryMapBufferSize,DescriptorSize;
#define	NoOfMemoryMapBuffer	2
EFI_MEMORY_DESCRIPTOR	*MemoryMap	[NoOfMemoryMapBuffer];
UINTN			MemoryMapSize	[NoOfMemoryMapBuffer];
UINTN			MapKey		[NoOfMemoryMapBuffer];

EFI_STATUS	STATUS;

UINTN EFIAPI main(UINTN argc,wchar_t *argv[]){
	UINT32 DescriptorVersion,*Buffer=0;
	EFI_PHYSICAL_ADDRESS Memory=0;
	int CurrentMemoryMap=NoOfMemoryMapBuffer-1,i;

	STATUS=gBS->GetMemoryMap(&MemoryMapBufferSize,0,0,&DescriptorSize,&DescriptorVersion);
	if(STATUS==EFI_BUFFER_TOO_SMALL)
		STATUS=EFI_SUCCESS;
	MemoryMapBufferSize+=DescriptorSize*6;//make sure 6 is enough
	for(i=0;i<NoOfMemoryMapBuffer;i++)
		STATUS|=gBS->AllocatePool(EfiLoaderData,MemoryMapBufferSize,&MemoryMap[i]);
	Print(L"DescriptorVersion: %d\n",DescriptorVersion);
	if(DescriptorSize==sizeof(EFI_MEMORY_DESCRIPTOR))
		Print(L"DescriptorSize (%d) == sizeof(EFI_MEMORY_DESCRIPTOR)\n",DescriptorSize);
	else
		Print(L"DescriptorSize (%d) != sizeof(EFI_MEMORY_DESCRIPTOR) (%d)\n",DescriptorSize,sizeof(EFI_MEMORY_DESCRIPTOR));
	Print(L"MemoryMapBufferSize: %d, maximum number of descriptors: %d\n\n",MemoryMapBufferSize,MemoryMapBufferSize/DescriptorSize);
	GetMemoryMap(CurrentMemoryMap=(CurrentMemoryMap+1)%NoOfMemoryMapBuffer);
	Print(L"\n");

	Print(     L"AllocatePool(EfiUnusableMemory,4,0x%lX)",Buffer);
	STATUS|=gBS->AllocatePool(EfiUnusableMemory,4,&Buffer);
	Print(L": 0x%lX\n",Buffer);
	GetMemoryMap(CurrentMemoryMap=(CurrentMemoryMap+1)%NoOfMemoryMapBuffer);
	CompareMemoryMap(CurrentMemoryMap,(CurrentMemoryMap-1+NoOfMemoryMapBuffer)%NoOfMemoryMapBuffer,0);
	Print(     L"FreePool(0x%lX)\n",Buffer);
	STATUS|=gBS->FreePool(Buffer);
	GetMemoryMap(CurrentMemoryMap);
	CompareMemoryMap(CurrentMemoryMap,(CurrentMemoryMap-1+NoOfMemoryMapBuffer)%NoOfMemoryMapBuffer,1);

	Print(     L"AllocatePages(AllocateAnyPages,EfiUnusableMemory,1,0x%lX)",Memory);
	STATUS|=gBS->AllocatePages(AllocateAnyPages,EfiUnusableMemory,1,&Memory);
	Print(L": 0x%lX\n",Memory);
	GetMemoryMap(CurrentMemoryMap=(CurrentMemoryMap+1)%NoOfMemoryMapBuffer);
	CompareMemoryMap(CurrentMemoryMap,(CurrentMemoryMap-1+NoOfMemoryMapBuffer)%NoOfMemoryMapBuffer,0);
	Print(     L"FreePages(0x%lX,1)\n",Memory);
	STATUS|=gBS->FreePages(Memory,1);
	GetMemoryMap(CurrentMemoryMap);
	CompareMemoryMap(CurrentMemoryMap,(CurrentMemoryMap-1+NoOfMemoryMapBuffer)%NoOfMemoryMapBuffer,1);

	Memory+=0x1000;
	Print(     L"AllocatePages(AllocateMaxAddress,EfiUnusableMemory,1,0x%lX)",Memory);
	STATUS|=gBS->AllocatePages(AllocateMaxAddress,EfiUnusableMemory,1,&Memory);
	Print(L": 0x%lX\n",Memory);
	GetMemoryMap(CurrentMemoryMap=(CurrentMemoryMap+1)%NoOfMemoryMapBuffer);
	CompareMemoryMap(CurrentMemoryMap,(CurrentMemoryMap-1+NoOfMemoryMapBuffer)%NoOfMemoryMapBuffer,0);
	Print(     L"FreePages(0x%lX,1)\n",Memory);
	STATUS|=gBS->FreePages(Memory,1);
	GetMemoryMap(CurrentMemoryMap);
	CompareMemoryMap(CurrentMemoryMap,(CurrentMemoryMap-1+NoOfMemoryMapBuffer)%NoOfMemoryMapBuffer,1);

	Print(     L"AllocatePages(AllocateAddress,EfiUnusableMemory,1,0x%lX)",Memory);
	STATUS|=gBS->AllocatePages(AllocateAddress,EfiUnusableMemory,1,&Memory);
	Print(L": 0x%lX\n",Memory);
	GetMemoryMap(CurrentMemoryMap=(CurrentMemoryMap+1)%NoOfMemoryMapBuffer);
	CompareMemoryMap(CurrentMemoryMap,(CurrentMemoryMap-1+NoOfMemoryMapBuffer)%NoOfMemoryMapBuffer,0);
	Print(     L"FreePages(0x%lX,1)\n",Memory);
	STATUS|=gBS->FreePages(Memory,1);
	GetMemoryMap(CurrentMemoryMap);
	CompareMemoryMap(CurrentMemoryMap,(CurrentMemoryMap-1+NoOfMemoryMapBuffer)%NoOfMemoryMapBuffer,1);

	for(i=0;i<NoOfMemoryMapBuffer;i++)
		STATUS|=gBS->FreePool(MemoryMap[i]);

	if(EFI_ERROR(STATUS))
		Print(L"Error 0x%08lX!!!\n",STATUS);
	return STATUS;
}

int CompareEfi_memory_descriptor(EFI_MEMORY_DESCRIPTOR *p1,EFI_MEMORY_DESCRIPTOR *p2){
	int i;
	if(0==(i=CompareUintn(p1->PhysicalStart,p2->PhysicalStart)))
	if(0==(i=CompareUintn(p1->NumberOfPages,p2->NumberOfPages)))
	if(0==(i=CompareUintn(p1->VirtualStart, p2->VirtualStart)))
	if(0==(i=CompareUintn(p1->Type,         p2->Type)))
	if(0==(i=CompareUintn(p1->Attribute,    p2->Attribute)))
		;
	return i;
}

void CompareMemoryMap(int inew,int iold,int WaitForKey){
	int NoOfChanged;
	Print(L"Compare %d with %d:\n",MapKey[inew],MapKey[iold]);
	NoOfChanged=PrintNewEfi_memory_descriptor(iold,inew,L"-");
	NoOfChanged+=PrintNewEfi_memory_descriptor(inew,iold,L"+");
	if(NoOfChanged==0)
		Print(L"No change.\n");
	if(WaitForKey){
		Print(L"Press ENTER to continue.");
		while(L'\r'!=getwchar());
	}
	Print(L"\r                        \n");
}

int CompareUintn(UINTN i1,UINTN i2){
	return i1<i2?-1:i1==i2?0:1;
}

void GetMemoryMap(int i){
	MemoryMapSize[i]=MemoryMapBufferSize;
	STATUS|=gBS->GetMemoryMap(&MemoryMapSize[i],MemoryMap[i],&MapKey[i],0,0);
	Print(L"MapKey: %d, MemoryMapSize: %d, number of descriptors: %d\n",MapKey[i],MemoryMapSize[i],MemoryMapSize[i]/DescriptorSize);
	qsort(MemoryMap[i],MemoryMapSize[i]/DescriptorSize,DescriptorSize,(int(*)(const void*,const void*))CompareEfi_memory_descriptor);
}

void PrintEfi_memory_descriptor(EFI_MEMORY_DESCRIPTOR *p){
	Print(L"0x%lX..0x%lX",p->PhysicalStart,p->PhysicalStart+p->NumberOfPages*0x1000-1);
	Print(L", VirtualStart: 0x%lX, Attribute: 0x%lX",p->VirtualStart,p->Attribute);
	if(p->Type<EfiMaxMemoryType)
		Print(L", %s\n",MemoryTypeString[p->Type]);
	else
		Print(L", Type: 0x%lX\n",p->Type);
}

int PrintNewEfi_memory_descriptor(int inew,int iold,wchar_t *HeadString){
	EFI_MEMORY_DESCRIPTOR *p;
	int NoOfChanged=0;
	UINTN i;
	for(i=MemoryMapSize[inew],p=MemoryMap[inew];i>=DescriptorSize;i-=DescriptorSize,p=(EFI_MEMORY_DESCRIPTOR*)((UINT8*)p+DescriptorSize))
		if(0==bsearch(p,MemoryMap[iold],MemoryMapSize[iold]/DescriptorSize,DescriptorSize,(int(*)(const void*,const void*))CompareEfi_memory_descriptor)){
			Print(L"%s",HeadString);
			PrintEfi_memory_descriptor(p);
			NoOfChanged++;
		}
	return NoOfChanged;
}
