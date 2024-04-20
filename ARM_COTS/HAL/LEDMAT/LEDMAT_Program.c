/*********************************************
 * Author:				Rober Maher		         
 * Creation Data:		22 Mar, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				HAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  22 Mar, 2024	Rober Maher		          Initial Creation
 * v1.0		  21 Apr, 2024	Rober Maher		          Fix The Driver
*********************************************/
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include "../include/GPIO_Interface.h"
#include "../include/STK_Interface.h"


#include "../include/LEDMAT_Interface.h"
#include "../include/LEDMAT_Private.h"
#include "../include/LEDMAT_Cfg.h"



void HLEDMAT_voidInit(void)
{
    /*Set Columns Pins To Be Output*/
    MGPIO_voidSetPinMode(HLEDMAT_COL0_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_COL1_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_COL2_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_COL3_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_COL4_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_COL5_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_COL6_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_COL7_PORT_PIN, MGPIO_OUTPUT);

    /*Set Columns Pins To Be Output PP*/
    MGPIO_voidSetPinOutputMode(HLEDMAT_COL0_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_COL1_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_COL2_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_COL3_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_COL4_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_COL5_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_COL6_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_COL7_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);

    /*Set Columns Pin To Be Output Low Speed*/
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_COL0_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_COL1_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_COL2_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_COL3_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_COL4_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_COL5_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_COL6_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_COL7_PORT_PIN, MGPIO_OUTPUT_LOW);


    /*Set Rows Pins To Be Output*/
    MGPIO_voidSetPinMode(HLEDMAT_ROW0_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_ROW1_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_ROW2_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_ROW3_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_ROW4_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_ROW5_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_ROW6_PORT_PIN, MGPIO_OUTPUT);
    MGPIO_voidSetPinMode(HLEDMAT_ROW7_PORT_PIN, MGPIO_OUTPUT);

    /*Set Rows Pins To Be Output PP*/
    MGPIO_voidSetPinOutputMode(HLEDMAT_ROW0_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_ROW1_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_ROW2_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_ROW3_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_ROW4_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_ROW5_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_ROW6_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);
    MGPIO_voidSetPinOutputMode(HLEDMAT_ROW7_PORT_PIN, MGPIO_OUTPUT_PUSH_PULL);

    /*Set Rows Pin To Be Output Low Speed*/
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_ROW0_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_ROW1_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_ROW2_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_ROW3_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_ROW4_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_ROW5_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_ROW6_PORT_PIN, MGPIO_OUTPUT_LOW);
    MGPIO_voidSetPinOutputSpeed(HLEDMAT_ROW7_PORT_PIN, MGPIO_OUTPUT_LOW);
}

void HLED_voidDisplay(u8 * Copy_pu8Data)
{
    {
    	int pinID;
    	for (pinID = 0 ; pinID < 8 ; pinID++)
    	{
    		/*Disable All Columns*/
			voidDisableAllColumns();
			/*Set Rows Value*/
			voidSetRowsValue(Copy_pu8Data[pinID]);
			/*Activate Column 0*/
			//MGPIO_voidSetPinValue(HLEDMAT_COL0_PORT_PIN, GPIO_PIN_LOW);
			MGPIO_voidSetPinValue(MGPIO_PORTA, pinID, MGPIO_RESET);
			/*Delay for 2.5msec*/
			MSTK_voidSetBusyWait(2500);// 1000 ms /8*50, {8 Columns , 50 - 60 Pictures in one second}
    	}
    }
}

static void voidDisableAllColumns(void)
{
    MGPIO_voidSetPinValue(HLEDMAT_COL0_PORT_PIN, MGPIO_SET);
    MGPIO_voidSetPinValue(HLEDMAT_COL1_PORT_PIN, MGPIO_SET);
    MGPIO_voidSetPinValue(HLEDMAT_COL2_PORT_PIN, MGPIO_SET);
    MGPIO_voidSetPinValue(HLEDMAT_COL3_PORT_PIN, MGPIO_SET);
    MGPIO_voidSetPinValue(HLEDMAT_COL4_PORT_PIN, MGPIO_SET);
    MGPIO_voidSetPinValue(HLEDMAT_COL5_PORT_PIN, MGPIO_SET);
    MGPIO_voidSetPinValue(HLEDMAT_COL6_PORT_PIN, MGPIO_SET);
    MGPIO_voidSetPinValue(HLEDMAT_COL7_PORT_PIN, MGPIO_SET);
}

static void voidSetRowsValue(u8 Copy_u8Value)
{
    u8 Local_u8Bit;
    /*Set Rows Value*/
    Local_u8Bit = GET_BIT(Copy_u8Value, 0);
    MGPIO_voidSetPinValue(HLEDMAT_ROW0_PORT_PIN, Local_u8Bit);
    Local_u8Bit = GET_BIT(Copy_u8Value, 1);
    MGPIO_voidSetPinValue(HLEDMAT_ROW1_PORT_PIN, Local_u8Bit);
    Local_u8Bit = GET_BIT(Copy_u8Value, 2);
    MGPIO_voidSetPinValue(HLEDMAT_ROW2_PORT_PIN, Local_u8Bit);
    Local_u8Bit = GET_BIT(Copy_u8Value, 3);
    MGPIO_voidSetPinValue(HLEDMAT_ROW3_PORT_PIN, Local_u8Bit);
    Local_u8Bit = GET_BIT(Copy_u8Value, 4);
    MGPIO_voidSetPinValue(HLEDMAT_ROW4_PORT_PIN, Local_u8Bit);
    Local_u8Bit = GET_BIT(Copy_u8Value, 5);
    MGPIO_voidSetPinValue(HLEDMAT_ROW5_PORT_PIN, Local_u8Bit);
    Local_u8Bit = GET_BIT(Copy_u8Value, 6);
    MGPIO_voidSetPinValue(HLEDMAT_ROW6_PORT_PIN, Local_u8Bit);
    Local_u8Bit = GET_BIT(Copy_u8Value, 7);
    MGPIO_voidSetPinValue(HLEDMAT_ROW7_PORT_PIN, Local_u8Bit);
}