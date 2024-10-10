#include "stm32f10x.h"
#include <stdio.h>

int main(void)
{
	GPIO_InitTypeDef gpio_inittypedef = {0};

	//开启端口时钟
	RCC_APB2PeriphClockCmd (RCC_APB2Periph_GPIOA, ENABLE);

	//关闭灯
	GPIO_SetBits (GPIOA, GPIO_Pin_1);
	GPIO_SetBits (GPIOA, GPIO_Pin_2);
	GPIO_SetBits (GPIOA, GPIO_Pin_3);


	//配置io模式，推完模式， 50m
	gpio_inittypedef .GPIO_Mode = GPIO_Mode_Out_PP;
	gpio_inittypedef .GPIO_Pin = GPIO_Pin_1;
	gpio_inittypedef .GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init (GPIOA, &gpio_inittypedef);

	gpio_inittypedef .GPIO_Mode = GPIO_Mode_Out_PP;
	gpio_inittypedef .GPIO_Pin = GPIO_Pin_2;
	gpio_inittypedef .GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init (GPIOA, &gpio_inittypedef);

	gpio_inittypedef .GPIO_Mode = GPIO_Mode_Out_PP;
	gpio_inittypedef .GPIO_Pin = GPIO_Pin_3;
	gpio_inittypedef .GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init (GPIOA, &gpio_inittypedef);

	//开启灯
	GPIO_ResetBits (GPIOA, GPIO_Pin_1);
	GPIO_ResetBits (GPIOA, GPIO_Pin_2);
	GPIO_ResetBits (GPIOA, GPIO_Pin_3);

	while (1)
	{

	}
	
}
