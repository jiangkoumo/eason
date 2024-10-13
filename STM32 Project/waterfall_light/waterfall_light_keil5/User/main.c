#include "stm32f10x.h"
#include <stdio.h>
#include "delay/bsp_delay.h"
#include "LED/bsp_gpio_led.h"


int main(void)
{
	uint32_t time_temp = 500;
	LED_GPIO_Config();

	while (1)
	{
		//实现流水灯
		//只第一个灯亮
		R_LED_ON_ONLY;
		Rough_Delay_Ms(time_temp);

		//只第二个灯亮
		G_LED_ON_ONLY;
		Rough_Delay_Ms(time_temp);

		//只第三个灯亮
		B_LED_ON_ONLY;
		Rough_Delay_Ms(time_temp);

		//三个灯一起亮和灭;重复三次
		R_G_B_ALL_ON;
		Rough_Delay_Ms(time_temp);
		R_G_B_ALL_OFF;
		Rough_Delay_Ms(time_temp);

		R_G_B_ALL_ON;
		Rough_Delay_Ms(time_temp);
		R_G_B_ALL_OFF;
		Rough_Delay_Ms(time_temp);

		R_G_B_ALL_ON;
		Rough_Delay_Ms(time_temp);
		R_G_B_ALL_OFF;
		Rough_Delay_Ms(time_temp);

	}
	
}
