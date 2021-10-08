[Variables]
; HWInfo_GPU variables

TempUnit=C

;HWiNFOSensorId0=0xe0001800
;HWiNFOSensorInstance0=0x0
;HWiNFOType0=SensorName

HWInfoDesc1=GPU Temp
HWInfoSensorId1=0xe0001800
HWInfoSensorInstance1=0x0
HWInfoEntryId1=0x1000000
HWInfoType1=CurrentValue
HWInfoValue1=%1 #TempUnit#
HWInfoMin1=25
HWInfoMax1=90

HWInfoDesc2=GPU Fan
HWiNFOSensorId2=0xe0001800
HWiNFOSensorInstance2=0x0
HWiNFOEntryId2=0x3000000
HWiNFOType2=CurrentValue
HWInfoValue2=%1 RPM
HWInfoMin2=0
HWInfoMax2=2000

HWInfoDesc3=GPU Usage
HWiNFOSensorId3=0xe0001800
HWiNFOSensorInstance3=0x0
HWiNFOEntryId3=0x7000000
HWiNFOType3=CurrentValue
HWInfoValue3=%1 %
HWInfoMin3=0
HWInfoMax3=100

HWInfoDesc4=GPU Memory
HWiNFOSensorId4=0xe0001800
HWiNFOSensorInstance4=0x0
HWiNFOEntryId4=0x8000004
HWiNFOType4=CurrentValue
HWInfoValue4=%1 MB
HWInfoMin4=0
HWInfoMax4=6144

HWiNFODesc5=CPU Package
HWiNFOSensorId5=0xf0002a00
HWiNFOSensorInstance5=0x0
HWiNFOEntryId5=0x1000004
HWiNFOType5=CurrentValue
HWiNFOValue5=%1
HWiNFOMin5=35
HWiNFOMax5=95
