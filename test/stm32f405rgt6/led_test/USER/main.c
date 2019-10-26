#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"

#include "GUI.h"
#include "Lcd_Driver.h"

const char array[900 * 1024] = {0x1, 0x2, 0x3, 0x4};

int main(void)
{ 
  int i;
	delay_init(168);
	LED_Init();		
	
	
	Lcd_Init();	
	Lcd_Clear(GRAY0);
	Gui_DrawFont_GBK16(0,16,RED,GRAY0," Test STM32 LED ");
	

	while(1)
	{
	GPIO_ResetBits(GPIOA,GPIO_Pin_8);  
	
	delay_ms(500); 
		
	GPIO_SetBits(GPIOA,GPIO_Pin_8);	
	
	delay_ms(500);
		
#if 1		
	delay_ms(array[i++]);
		
	if (i == sizeof(array)) {
		i = 0;
	}
#endif
		
	}
}



 



