#include <stm32f10x.h>                  // Device header
#include <delay.h>
#include <LED.h>
#include <Key.h>
#include <stdio.h>
#include <RedL_Led.h>

int main(void)
{
	LED_Init();
	RedL_LED_Init();
	
	while(1) 
	{

		
		 if( RedL_LED_Get() == 1 )
		{
			LED_Switch(GPIO_Pin_2,DISABLE);
			LED_Switch(GPIO_Pin_1,ENABLE);
		}
		else
		{
			LED_Switch(GPIO_Pin_1,DISABLE);
			LED_Switch(GPIO_Pin_2,ENABLE);
			Delay_ms(500);
		}   
		
	} 
}



