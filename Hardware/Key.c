#include <stm32f10x.h>>
#include <Delay.h>



void Key_Init()//开关初始化
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
    
    GPIO_InitTypeDef GPIO_InitSturcture;
    GPIO_InitSturcture.GPIO_Mode=GPIO_Mode_IPU;
    GPIO_InitSturcture.GPIO_Pin=GPIO_Pin_1 |GPIO_Pin_11;
    GPIO_InitSturcture.GPIO_Speed=GPIO_Speed_50MHz;
    
}

uint8_t Key_GetNum()
{
    uint8_t KeyNum =0 ;

    if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0)
    {
        Delay_ms(20);
        while (GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0);
        Delay_ms(20);
        KeyNum = 1;
    }

     if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11==0))
    {
        Delay_ms(20);
        while (GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0);
        Delay_ms(20);
        KeyNum = 2;
    }

    return KeyNum;
}
