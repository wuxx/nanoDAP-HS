# 固件说明

**sam3u2c_bl.hex**  
bootloader

**sam3u2c_if.hex**  
firmware固件，支持JTAG/SWD/虚拟串口，请取日期最新的固件即可

# 升级说明 #
DAPLink自带一个带U盘的bootloader，可以方便的
进行拖拽升级，升级步骤如下：
1. 使用杜邦线将nRST和GND短接
2. 将DAP插入到PC中，预期应该会出现一个名为MAINTENANCE的U盘
3. 此时可以将nRST和GND断开
4. 将新的固件拖动到MAINTENANCE U盘中，即可自动完成固件升级

