#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#define			RCC_BASE_ADDRESS		0x00
	
#define			GPIOx_MODER				*((volatile u32 *)(RCC_BASE_ADDRESS + 0x00))
#define			GPIOx_OTYPER			*((volatile u32 *)(RCC_BASE_ADDRESS + 0x04))
#define			GPIOx_OSPEEDR			*((volatile u32 *)(RCC_BASE_ADDRESS + 0x08))
#define			GPIOx_PUPDR				*((volatile u32 *)(RCC_BASE_ADDRESS + 0x0C))
#define			GPIOx_IDR				*((volatile u32 *)(RCC_BASE_ADDRESS + 0x10))
#define			GPIOx_ODR				*((volatile u32 *)(RCC_BASE_ADDRESS + 0x14))
#define			GPIOx_BSRR				*((volatile u32 *)(RCC_BASE_ADDRESS + 0x18))
#define			GPIOx_LCKR				*((volatile u32 *)(RCC_BASE_ADDRESS + 0x1C))
#define			GPIOx_AFRL				*((volatile u32 *)(RCC_BASE_ADDRESS + 0x20))
#define			GPIOx_AFRH				*((volatile u32 *)(RCC_BASE_ADDRESS + 0x24))


#endif