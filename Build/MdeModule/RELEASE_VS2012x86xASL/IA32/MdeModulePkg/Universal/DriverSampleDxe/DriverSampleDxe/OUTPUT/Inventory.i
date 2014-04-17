#line 1 "d:\\myworkspace\\MdeModulePkg\\Universal\\DriverSampleDxe\\Inventory.vfr"
#line 1 "d:\\myworkspace\\Build\\MdeModule\\RELEASE_VS2012x86xASL\\IA32\\MdeModulePkg\\Universal\\DriverSampleDxe\\DriverSampleDxe\\DEBUG\\DriverSampleStrDefs.h"


























































































































































































extern unsigned char DriverSampleStrings[];




#line 193 "d:\\myworkspace\\Build\\MdeModule\\RELEASE_VS2012x86xASL\\IA32\\MdeModulePkg\\Universal\\DriverSampleDxe\\DriverSampleDxe\\DEBUG\\DriverSampleStrDefs.h"
#line 1 "d:\\myworkspace\\MdeModulePkg\\Universal\\DriverSampleDxe\\Inventory.vfr"















#line 1 "d:\\myworkspace\\mdemodulepkg\\universal\\driversampledxe\\NVDataStruc.h"



























#line 1 "d:\\myworkspace\\MdePkg\\Include\\Guid/HiiPlatformSetupFormset.h"






























extern EFI_GUID gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID gEfiHiiDriverHealthFormsetGuid;
extern EFI_GUID gEfiHiiUserCredentialFormsetGuid;

#line 36 "d:\\myworkspace\\MdePkg\\Include\\Guid/HiiPlatformSetupFormset.h"
#line 29 "d:\\myworkspace\\mdemodulepkg\\universal\\driversampledxe\\NVDataStruc.h"
#line 1 "d:\\myworkspace\\MdePkg\\Include\\Guid/HiiFormMapMethodGuid.h"






















extern EFI_GUID gEfiHiiStandardFormGuid;

#line 26 "d:\\myworkspace\\MdePkg\\Include\\Guid/HiiFormMapMethodGuid.h"
#line 30 "d:\\myworkspace\\mdemodulepkg\\universal\\driversampledxe\\NVDataStruc.h"
#line 1 "d:\\myworkspace\\MdeModulePkg\\Include\\Guid/DriverSampleHii.h"
































extern EFI_GUID gDriverSampleFormSetGuid;
extern EFI_GUID gDriverSampleInventoryGuid;
extern EFI_GUID gEfiIfrRefreshIdOpGuid;

#line 38 "d:\\myworkspace\\MdeModulePkg\\Include\\Guid/DriverSampleHii.h"
#line 31 "d:\\myworkspace\\mdemodulepkg\\universal\\driversampledxe\\NVDataStruc.h"
#line 1 "d:\\myworkspace\\MdeModulePkg\\Include\\Guid/ZeroGuid.h"






















extern EFI_GUID gZeroGuid;

#line 26 "d:\\myworkspace\\MdeModulePkg\\Include\\Guid/ZeroGuid.h"
#line 32 "d:\\myworkspace\\mdemodulepkg\\universal\\driversampledxe\\NVDataStruc.h"



#pragma pack(1)
typedef struct {
  UINT16  WhatIsThePassword[20];
  UINT16  WhatIsThePassword2[20];
  UINT16  MyStringData[40];
  UINT16  PasswordClearText[20];
  UINT16  SomethingHiddenForHtml;
  UINT8   HowOldAreYouInYearsManual;
  UINT16  HowTallAreYouManual;
  UINT8   HowOldAreYouInYears;
  UINT16  HowTallAreYou;
  UINT8   MyFavoriteNumber;
  UINT8   TestLateCheck;
  UINT8   TestLateCheck2;
  UINT8   QuestionAboutTreeHugging;
  UINT8   ChooseToActivateNuclearWeaponry;
  UINT8   SuppressGrayOutSomething;
  UINT8   OrderedList[8];
  UINT16  BootOrder[8];
  UINT8   BootOrderLarge;
  UINT8   DynamicRefresh;
  UINT8   DynamicOneof;
  UINT8   DynamicOrderedList[5];
  UINT8   Reserved;
  EFI_HII_REF RefData;
  UINT8   NameValueVar0;
  UINT16  NameValueVar1;
  UINT16  NameValueVar2[20];
  UINT8   SerialPortNo;
  UINT8   SerialPortStatus;
  UINT16  SerialPortIo;
  UINT8   SerialPortIrq;
  UINT8   GetDefaultValueFromCallBack;
  UINT8   GetDefaultValueFromAccess;
  EFI_HII_TIME  Time;
  UINT8   RefreshGuidCount;
} DRIVER_SAMPLE_CONFIGURATION;




typedef struct {
  UINT8         Field8;
  UINT16        Field16;
  UINT8         OrderedList[3];
} MY_EFI_VARSTORE_DATA;









#pragma pack()

#line 93 "d:\\myworkspace\\mdemodulepkg\\universal\\driversampledxe\\NVDataStruc.h"
#line 17 "d:\\myworkspace\\MdeModulePkg\\Universal\\DriverSampleDxe\\Inventory.vfr"

formset
  guid     = { 0xb3f56470, 0x6141, 0x4621, {0x8f, 0x19, 0x70, 0x4e, 0x57, 0x7a, 0xa9, 0xe8} },
  title    = STRING_TOKEN(0x0002),
  help     = STRING_TOKEN(0x0003),
  class    = 0x04,
  subclass = 0x03,

  form formid = 1,
       title  = STRING_TOKEN(0x0004);  

  	text
      help   = STRING_TOKEN(0x0006),
      text   = STRING_TOKEN(0x0005),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x0007),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x0008),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x0009),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

    subtitle text = STRING_TOKEN(0x0012);

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x000A),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x000B),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x000C),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x000D),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x000E),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x000F),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

  	text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x0010),
	    text   = STRING_TOKEN(0x0012),
      flags  = 0,
      key    = 0;

    subtitle text = STRING_TOKEN(0x0012);

    subtitle text = STRING_TOKEN(0x0011);

  endform;

endformset;
