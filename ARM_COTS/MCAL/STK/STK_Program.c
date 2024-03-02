/*********************************************
 * Author:				Rober Maher
 * Creation Data:		2 MAR, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  2 MAR, 2024		Rober Maher			    Initial Creation
*********************************************/

//Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

//Lower Layer Inclusion


//Self Leyer Inclusion

//Self Files Inclusion
#include "../include/STK_Interface.h"
#include "../include/STK_Private.h"
#include "../include/STK_Cfg.h"


void MSTK_voidInit(void)
{
    // Choose the Clock Source For Systick
    #if STK_CLK_SRC == STK_AHB
        SET_BIT(STK->CTRL, STK_CTRL_CLKSOURCE);
    #elif STK_CLK_SRC == STK_AHB_DIV_8
        CLR_BIT(STK->CTRL, STK_CTRL_CLKSOURCE);
    #else
        #error "STK_CLK_SRC Configuration Error"
    #endif

    // Control The Systick Interrupt
    #if STK_INT_CTRL == STK_DISABLE
        CLR_BIT(STK->CTRL, STK_CTRL_TICKINT);
    #elif STK_INT_CTRL == STK_ENABLE
        SET_BIT(STK->CTRL, STK_CTRL_TICKINT);
    #else
        #error "STK_INT_CTRL Configuration Error"
    #endif

    // Control The Systick Enable/Disable
    #if STK_CTRL == STK_DISABLE
        CLR_BIT(STK->CTRL, STK_CTRL_ENABLE);
    #elif STK_CTRL == STK_ENABLE
        SET_BIT(STK->CTRL, STK_CTRL_ENABLE);
    #else
        #error "STK_CTRL Configuration Error"
    #endif
}

void MSTK_voidSetBusyWait(u32 Copy_u32Ticks)
{
    // Load The Ticks Value into the LOAD Register
    STK -> LOAD = Copy_u32Ticks;
    // Polling (Busy Wait) on the flag
    while(GET_BIT(STK->CTRL, STK_CTRL_COUNTFLAG) == 0);
    // Flag Clearance
    STK -> VAL = 0;
}