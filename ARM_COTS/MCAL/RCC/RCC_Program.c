//Library Inclusion
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

//Lower Layer Inclusion


//Self Leyer Inclusion

//Self Files Inclusion
#include "../include/RCC_Interface.h"
#include "../include/RCC_Private.h"
#include "../include/RCC_Cfg.h"


//Pre_Build Configuration
void RCC_voidInit(void)
{
	#if RCC_CLOCK_SOURCE == RCC_CLK_HSI
		SET_BIT(RRC_CR, 0);			//Enable  HSI
		CLR_BIT(RRC_CR, 16);		//Disable HSE
		CLR_BIT(RRC_CR, 24);		//Disable PLL
		
	#elif RCC_CLOCK_SOURCE == RCC_CLK_HSE
		CLR_BIT(RRC_CR, 0);			//Disable HSI
		SET_BIT(RRC_CR, 16);		//Enable  HSE
		CLR_BIT(RRC_CR, 24);		//Disable PLL
		
	#elif RCC_CLOCK_SOURCE == RCC_CLK_PLL
		#if RCC_CLK_PLL_SRC == RCC_CLK_HSI
			CLR_BIT(RCC_PLLCFGR, 22);
			
		#elif RCC_CLK_PLL_SRC == RCC_CLK_HSE
			SET_BIT(RCC_PLLCFGR, 22);
		
		#else
			#error "RCC_CLK_PLL_SRC Configuration Error"
		
		#endif
		CLR_BIT(RRC_CR, 0);			//Disable  HSI
		CLR_BIT(RRC_CR, 16);		//Disable  HSE
		SET_BIT(RRC_CR, 24);		//Enable   PLL
		
	#else
		#error "RCC_CLOCK_SOURCE Configuration Error"
	#endif
	
    //AHB Prescaler Settings
    RCC_CR &= ~(RCC_AHB_PRESCALER_MASK << 4);
    RCC_CR |= (RCC_AHB_PRESCALER << 4);
	
    //APB1 Prescaler Settings
    RCC_CR &= ~(RCC_APB1_PRESCALER_MASK << 10);
    RCC_CR |= (RCC_APB1_PRESCALER << 10);
	
    //APB2 Prescaler Settings
    RCC_CR &= ~(RCC_APB2_PRESCALER_MASK << 13);
    RCC_CR |= (RCC_APB2_PRESCALER << 13);
	
}

//Post-Build Configuration
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