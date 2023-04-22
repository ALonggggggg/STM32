#include <stm32f10x.h>

//灯光初始化
void LED_Init()
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
    GPIO_InitTypeDef  GPIO_InitSturcture;
    GPIO_InitSturcture.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitSturcture.GPIO_Pin= GPIO_Pin_1 | GPIO_Pin_2;
    GPIO_InitSturcture.GPIO_Speed= GPIO_Speed_50MHz;
    GPIO_Init(GPIOA,&GPIO_InitSturcture); 
    
	GPIO_ResetBits(GPIOA,GPIO_Pin_1);

}

//灯光开关函数
void LED_Switch(uint16_t GPIO_Pin,FunctionalState NewState)
{
    if ( NewState == ENABLE)
    {
        GPIO_ResetBits(GPIOA,GPIO_Pin);
    }
    else
    { 
        GPIO_SetBits(GPIOA,GPIO_Pin);
    }
    
    
}



