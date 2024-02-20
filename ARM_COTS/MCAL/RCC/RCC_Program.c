//Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

//Lower Layer Inclusion


//Self Leyer Inclusion

//Self Files Inclusion
#include "../include/RCC_Interface.h"
#include "../include/RCC_Private.h"
#include "../include/RCC_Cfg.h"

/*
	0 -> HSI
	1 -> HSE
	2 -> PLL
*/

#define RCC_HSI		0
#define RCC_HSE		1
#define RCC_PLL		2

void RCC_voidEnableClockSource(u8 Copy_u8ClockSource)
{
	if(Copy_u8ClockSource == RCC_HSI)
	{
		SET_BIT(RCC_RC, 0);
	}
	else if(Copy_u8ClockSource == RCC_HSE)
	{
		SET_BIT(RCC_RC, 16);
	}
	else if(Copy_u8ClockSource == RCC_PLL)
	{
		SET_BIT(RCC_RC, 24);
	}
	else
	{
			//Error
	}
}

void RCC_voidDisableClockSource(u8 Copy_u8ClockSource)
{
	if(Copy_u8ClockSource == RCC_HSI)
	{
		CLR_BIT(RCC_RC, 0);
	}
	else if(Copy_u8ClockSource == RCC_HSE)
	{
		CLR_BIT(RCC_RC, 16);
	}
	else if(Copy_u8ClockSource == RCC_PLL)
	{
		CLR_BIT(RCC_RC, 24);
	}
	else
	{
			//Error
	}
}