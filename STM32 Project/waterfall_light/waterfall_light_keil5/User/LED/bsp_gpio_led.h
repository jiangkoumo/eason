#ifndef __BSP_GPIO_LED_H
#define __BSP_GPIO_LED_H

#include "stm32f10x.h"
/* 定义LED连接的GPIO端口, 用户只需要修改下面的代码即可改变控制的LED引脚 */
// R_LED
#define R_LED_GPIO_PORT    			GPIOA			                /* GPIO端口 */
#define R_LED_GPIO_CLK_PORT 	  RCC_APB2Periph_GPIOA			/* GPIO端口时钟 */
#define R_LED_GPIO_PIN			    GPIO_Pin_1	       				/* 连接到GPIO */

// G_LED
#define G_LED_GPIO_PORT    			GPIOA			                /* GPIO端口 */
#define G_LED_GPIO_CLK_PORT 	  RCC_APB2Periph_GPIOA			/* GPIO端口时钟 */
#define G_LED_GPIO_PIN			    GPIO_Pin_2	       				/* 连接到GPIO */

// B_LED
#define B_LED_GPIO_PORT    			GPIOA			                /* GPIO端口 */
#define B_LED_GPIO_CLK_PORT 	  RCC_APB2Periph_GPIOA			/* GPIO端口时钟 */
#define B_LED_GPIO_PIN			    GPIO_Pin_3	       				/* 连接到GPIO */







/** 触发 板载LED 条件 
  * 0 - on  开
  * 1 - off  关
  */
  
#define R_G_B_LED_ON  0
#define R_G_B_LED_OFF 1

/* 使用标准的固件库控制IO*/
#define R_LED(A)	if (A)        GPIO_SetBits(R_LED_GPIO_PORT,R_LED_GPIO_PIN);   \
                    else      GPIO_ResetBits(R_LED_GPIO_PORT,R_LED_GPIO_PIN)

#define G_LED(A)	if (A)        GPIO_SetBits(G_LED_GPIO_PORT,G_LED_GPIO_PIN);   \
                    else      GPIO_ResetBits(G_LED_GPIO_PORT,G_LED_GPIO_PIN)

#define B_LED(A)	if (A)        GPIO_SetBits(B_LED_GPIO_PORT,B_LED_GPIO_PIN);   \
                    else      GPIO_ResetBits(B_LED_GPIO_PORT,B_LED_GPIO_PIN)







/* 直接操作寄存器的方法控制IO */
#define	    DIGITALHI(P,I)		    {P->BSRR	=I;}	    //输出为高电平		
#define     DIGITALLO(P,I)		    {P->BRR     =I;}	    //输出低电平
#define DIGITALTLGGLE(P,I)          {P->ODR    ^=I;}        //输出反转状态

/* 定义控制IO的宏 */
#define R_LED_TOGGLE        DIGITALTLGGLE(R_LED_GPIO_PORT,R_LED_GPIO_PIN)
#define R_LED_OFF		            DIGITALHI(R_LED_GPIO_PORT,R_LED_GPIO_PIN)
#define R_LED_ON		            DIGITALLO(R_LED_GPIO_PORT,R_LED_GPIO_PIN)

#define G_LED_TOGGLE		    DIGITALTLGGLE(G_LED_GPIO_PORT,G_LED_GPIO_PIN)
#define G_LED_OFF		            DIGITALHI(G_LED_GPIO_PORT,G_LED_GPIO_PIN)
#define G_LED_ON			          DIGITALLO(G_LED_GPIO_PORT,G_LED_GPIO_PIN)
                                                                  
#define B_LED_TOGGLE		    DIGITALTLGGLE(B_LED_GPIO_PORT,B_LED_GPIO_PIN)
#define B_LED_OFF		            DIGITALHI(B_LED_GPIO_PORT,B_LED_GPIO_PIN)
#define B_LED_ON			          DIGITALLO(B_LED_GPIO_PORT,B_LED_GPIO_PIN)

/* 单灯操作 */
//R_LED
#define R_LED_ON_ONLY       R_LED_ON    \
                            G_LED_OFF   \
                            B_LED_OFF
//G_LED
#define G_LED_ON_ONLY       R_LED_OFF   \
                            G_LED_ON    \
                            B_LED_OFF
//B_LED
#define B_LED_ON_ONLY       R_LED_OFF   \
                            G_LED_OFF   \
                            B_LED_ON

//R_G_B_LED全亮
#define R_G_B_ALL_ON        R_LED_ON    \
                            G_LED_ON    \
                            B_LED_ON 

//R_G_B_LED全灭
#define R_G_B_ALL_OFF       R_LED_OFF    \
                            G_LED_OFF    \
                            B_LED_OFF   


void LED_GPIO_Config(void);
#endif /*__BSP_GPIO_LED_H*/