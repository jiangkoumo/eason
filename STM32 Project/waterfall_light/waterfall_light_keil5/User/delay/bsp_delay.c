#include "delay/bsp_delay.h"

//粗略阻塞延时函数接口

void Rough_Delay(__IO uint32_t ncount)
{

    __NOP();
    for (uint32_t i = 0; i < ncount; i++)
    {
        __NOP();
    }

}

//微秒级
void Rough_Delay_Us(__IO uint32_t time)
{
    Rough_Delay(time);
}

//毫秒级
void Rough_Delay_Ms(__IO uint32_t time)
{
    Rough_Delay(0x3e8*8*time);
}

//秒级
void Rough_Delay_S(__IO uint32_t time)
{
    Rough_Delay(0x318*0x318*time); 
}