#ifndef __BSP_DELAY_H
#define __BSP_DELAY_H

#include "stm32f10x.h"

void Rough_Delay(__IO uint32_t ncount);
void Rough_Delay_Us(__IO uint32_t time);
void Rough_Delay_Ms(__IO uint32_t time);
void Rough_Delay_S(__IO uint32_t time);


#endif /*__BSP_DELAY_H*/