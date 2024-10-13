#include "LED/bsp_gpio_led.h"

//初始化控制LED的IO
void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef gpio_inittypedef = {0};

	//开启端口时钟
	RCC_APB2PeriphClockCmd (R_LED_GPIO_CLK_PORT, ENABLE);
	RCC_APB2PeriphClockCmd (G_LED_GPIO_CLK_PORT, ENABLE);
	RCC_APB2PeriphClockCmd (B_LED_GPIO_CLK_PORT, ENABLE);

	//关闭灯
	GPIO_SetBits (R_LED_GPIO_PORT, R_LED_GPIO_PIN);
	GPIO_SetBits (G_LED_GPIO_PORT, G_LED_GPIO_PIN);
	GPIO_SetBits (B_LED_GPIO_PORT, B_LED_GPIO_PIN);


	//配置io模式，推完模式， 50m
	gpio_inittypedef .GPIO_Mode = GPIO_Mode_Out_PP;
	gpio_inittypedef .GPIO_Pin = R_LED_GPIO_PIN;
	gpio_inittypedef .GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init (R_LED_GPIO_PORT, &gpio_inittypedef);

	gpio_inittypedef .GPIO_Mode = GPIO_Mode_Out_PP;
	gpio_inittypedef .GPIO_Pin = G_LED_GPIO_PIN;
	gpio_inittypedef .GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init (G_LED_GPIO_PORT, &gpio_inittypedef);

	gpio_inittypedef .GPIO_Mode = GPIO_Mode_Out_PP;
	gpio_inittypedef .GPIO_Pin = B_LED_GPIO_PIN;
	gpio_inittypedef .GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init (B_LED_GPIO_PORT, &gpio_inittypedef);

}