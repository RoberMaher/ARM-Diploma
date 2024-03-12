#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include "../include/GPIO_Interface.h"
#include "../include/RCC_Interface.h"
#include "../include/STK_Interface.h"

void main(void)
{
	RCC_voidInit();
	RCC_voidEnablePeripheralClock(RCC_AHB, RCC_AHB1ENR_GPIOAEN);
	GPIO_voidSetPortMode(GPIO_PORTA,GPIO_OUTPUT);
	GPIO_voidSetPortOutputMode(GPIO_PORTA, GPIO_OUTPUT_PUSH_PULL);
	GPIO_voidSetPortOutputSpeed(GPIO_PORTA, GPIO_OUTPUT_LOW);


	MSTK_voidInit();
	MSTK_voidInit();
	while(1)
	{

		GPIO_voidSetPortValue(GPIO_PORTA,GPIO_SET);
		STK_voidSetBusyWait(1000000);

		GPIO_voidSetPortValue(GPIO_PORTA,GPIO_RESET);
		STK_voidSetBusyWait(1000000);

	}
}
