#include <stm32f10x.h>                  // Device header
#include <delay.h>

int main(void)
{

	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0| GPIO_Pin_1| GPIO_Pin_2| GPIO_Pin_3| GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Speed= GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure); 
 
	while(1)
	{
		GPIO_Write(GPIOA,~0x00001);
		Delay_ms(200);
		GPIO_Write(GPIOA,~0x00002);
		Delay_ms(200);
		GPIO_Write(GPIOA,~0x00004);
		Delay_ms(200);
		GPIO_Write(GPIOA,~0x00008);
		Delay_ms(200);
		GPIO_Write(GPIOA,~0x00010);
		Delay_ms(200);
		GPIO_Write(GPIOA,~0x00020);
		Delay_ms(200);
		GPIO_Write(GPIOA,~0x00040);
		Delay_ms(200);
		GPIO_Write(GPIOA,~0x00060);
		Delay_ms(200);
		GPIO_Write(GPIOA,~0x00080);
		Delay_ms(200);


	} 
}



