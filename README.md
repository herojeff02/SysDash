![Modified Screenshot](/screenshot.png?raw=true "Modified Screenshot")
![Modified Screenshot 2](/screenshot2.png?raw=true "Modified Screenshot 2")
Modification of macropixel's sysDash[https://github.com/marcopixel/SysDash] for personal use(modifications are not user friendly). 
1. Replaced SpeedFan integration/plugin with HWiNFO
2. Created more background and graphs
3. Removed settings page (settings are still editable via variable.ini)

You need to have HWiNFO running at all times, with "Shared Memory Support" enabled for the temperature/graph skins to work.
1. Right-click on the skin and click "View HWiNFO Sensors" to laucnh HWiNFO Shared Memory Viewer.
2. Change the following to match your hardware
    i. HWiNFOSensorId (see @Resources/hwinfo/example.jpg)
    ii. HWiNFOSensorInstance
    iii. HWiNFOEntryId
    iv. (for fan speed only) MeasureFanMax / MeasureFanMin - Formula
    v. (for cpu/gpu termperature + utilization only) MeterCPUDescText - Text

All credits go to the original author(macropixel) and jsmorley's post[https://forum.rainmeter.net/viewtopic.php?t=33202] which I used as an example.