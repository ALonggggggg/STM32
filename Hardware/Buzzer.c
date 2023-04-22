#include <stm32f10x.h>

void Buzzer_Init()
{
    RCC_AHBPeriphClockCmd(GPIOB,ENABLE);
    GPIO_InitTypeDef GPIO_InitSturcture;
    GPIO_InitSturcture.GPIO_Mode=GPIO_Mode_IPU;
    GPIO_InitSturcture.GPIO_Pin=GPIO_Pin_12;
    GPIO_InitSturcture.GPIO_Speed=GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&GPIO_InitSturcture);
}
