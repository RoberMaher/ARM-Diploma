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

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_SET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN4,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN5,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN4,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN6,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN5,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN7,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN6,GPIO_RESET);
		STK_voidSetBusyWait(1000000);

/***************************************************************************/
/***************************************************************************/

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_SET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN4,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN5,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN4,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN6,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN5,GPIO_RESET);
		STK_voidSetBusyWait(1000000);


/***************************************************************************/
/***************************************************************************/

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_SET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN4,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN5,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN4,GPIO_RESET);
		STK_voidSetBusyWait(1000000);


/***************************************************************************/
/***************************************************************************/


		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_SET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN4,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_RESET);
		STK_voidSetBusyWait(1000000);


/***************************************************************************/
/***************************************************************************/


		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_SET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN3,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_RESET);
		STK_voidSetBusyWait(1000000);



/***************************************************************************/
/***************************************************************************/


		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_SET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_RESET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN2,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_RESET);
		STK_voidSetBusyWait(1000000);



/***************************************************************************/
/***************************************************************************/


		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_SET);
		STK_voidSetBusyWait(1000000);
		GPIO_voidSetPinValue(GPIO_PORTA, PIN1,GPIO_SET);

		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_RESET);
		STK_voidSetBusyWait(1000000);



/***************************************************************************/
/***************************************************************************/


		GPIO_voidSetPinValue(GPIO_PORTA, PIN0,GPIO_SET);
		STK_voidSetBusyWait(1000000);



/***************************************************************************/
/***************************************************************************/

		GPIO_voidSetPortValue(GPIO_PORTA,GPIO_RESET);


	}
}
