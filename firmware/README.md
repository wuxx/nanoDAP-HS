# 固件说明

**sam3u2c_bl.hex**  
msd bootloader 将nRST和GND短接，然后将仿真器上电，可进入bootloader，PC中会出现一个名为MAINTENANCE的U盘，将固件拖入U盘中即可完成固件更新。  

**sam3u2c_if.hex**  
firmware固件，支持JTAG/SWD/虚拟串口

