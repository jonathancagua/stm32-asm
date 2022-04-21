/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32l4xx.h"
#include "stm32l475e_iot01.h"
			


int main(void)
{
  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();
//  uint8_t testing = 0;
  uint32_t aValue = 20,otherValue = 30,sumResult;
  while (1)
  {
	  sumResult = asm_sum(aValue, otherValue);
  }

}

