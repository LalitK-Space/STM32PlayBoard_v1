/**
 * @file stm32f103xx.h
 * @author Lalit Kumar (www.lalitk.space)
 * @brief This file Contains all the details specific to STM32F103xx microcontroller.
 * @version 1.0
 * @date 2023-08-15
 * 
 */

#ifndef STM32F103XX_H_
#define STM32F103XX_H_

# include <stdint.h>
# include <stddef.h>

/**
 * @brief ARM Cortex Mx NVIC_ISERx (Interrupt Set Enable) Registers Addresses (MPU)
 * 
 */
#define NVIC_ISER0		((volatile uint32_t *) 0xE000E100)
#define NVIC_ISER1		((volatile uint32_t *) 0xE000E104)
#define NVIC_ISER2		((volatile uint32_t *) 0xE000E108)
#define NVIC_ISER3		((volatile uint32_t *) 0xE000E10C)
#define NVIC_ISER4		((volatile uint32_t *) 0xE000E110)
#define NVIC_ISER5		((volatile uint32_t *) 0xE000E114)
#define NVIC_ISER6		((volatile uint32_t *) 0xE000E118)
#define NVIC_ISER7		((volatile uint32_t *) 0xE000E11C)

/**
 * @brief ARM Cortex Mx NVIC_ICERx (Interrupt Clear Enable) Registers Addresses (MPU)
 * 
 */
#define NVIC_ICER0		((volatile uint32_t *) 0xE000E180)
#define NVIC_ICER1		((volatile uint32_t *) 0xE000E184)
#define NVIC_ICER2		((volatile uint32_t *) 0xE000E188)
#define NVIC_ICER3		((volatile uint32_t *) 0xE000E18C)
#define NVIC_ICER4		((volatile uint32_t *) 0xE000E190)
#define NVIC_ICER5		((volatile uint32_t *) 0xE000E194)
#define NVIC_ICER6		((volatile uint32_t *) 0xE000E198)
#define NVIC_ICER7		((volatile uint32_t *) 0xE000E19C)

/**
 * @brief ARM Cortex Mx NVIC_ISPRx (Interrupt Set-Pending) Registers Addresses (MPU)
 * 
 */
#define NVIC_ISPR0		((volatile uint32_t *) 0xE000E200)
#define NVIC_ISPR1		((volatile uint32_t *) 0xE000E204)
#define NVIC_ISPR2		((volatile uint32_t *) 0xE000E208)
#define NVIC_ISPR3		((volatile uint32_t *) 0xE000E20C)
#define NVIC_ISPR4		((volatile uint32_t *) 0xE000E210)
#define NVIC_ISPR5		((volatile uint32_t *) 0xE000E214)
#define NVIC_ISPR6		((volatile uint32_t *) 0xE000E218)
#define NVIC_ISPR7		((volatile uint32_t *) 0xE000E21C)

/**
 * @brief ARM Cortex Mx NVIC_ICPRx (Interrupt Clear-Pending) Registers Addresses (MPU)
 * 
 */
#define NVIC_ICPR0		((volatile uint32_t *) 0xE000E280)
#define NVIC_ICPR1		((volatile uint32_t *) 0xE000E284)
#define NVIC_ICPR2		((volatile uint32_t *) 0xE000E288)
#define NVIC_ICPR3		((volatile uint32_t *) 0xE000E28C)
#define NVIC_ICPR4		((volatile uint32_t *) 0xE000E290)
#define NVIC_ICPR5		((volatile uint32_t *) 0xE000E294)
#define NVIC_ICPR6		((volatile uint32_t *) 0xE000E298)
#define NVIC_ICPR7		((volatile uint32_t *) 0xE000E29C)

/**
 * @brief ARM Cortex Mx NVIC_IABRx (Interrupt Active Bit) Registers Addresses (MPU)
 * 
 */
#define NVIC_IABR0		((volatile uint32_t *) 0xE000E300)
#define NVIC_IABR1		((volatile uint32_t *) 0xE000E304)
#define NVIC_IABR2		((volatile uint32_t *) 0xE000E308)
#define NVIC_IABR3		((volatile uint32_t *) 0xE000E30C)
#define NVIC_IABR4		((volatile uint32_t *) 0xE000E310)
#define NVIC_IABR5		((volatile uint32_t *) 0xE000E314)
#define NVIC_IABR6		((volatile uint32_t *) 0xE000E318)
#define NVIC_IABR7		((volatile uint32_t *) 0xE000E31C)

/**
 * @brief ARM Cortex Mx NVIC_IPRx (Interrupt Priority) Registers Addresses (MPU)
 * 
 */
#define NVIC_IPR0		((volatile uint32_t *) 0xE000E400)
#define NVIC_IPR1		((volatile uint32_t *) 0xE000E404)
#define NVIC_IPR2		((volatile uint32_t *) 0xE000E408)
#define NVIC_IPR3		((volatile uint32_t *) 0xE000E40C)
#define NVIC_IPR4		((volatile uint32_t *) 0xE000E410)
#define NVIC_IPR5		((volatile uint32_t *) 0xE000E414)
#define NVIC_IPR6		((volatile uint32_t *) 0xE000E418)
#define NVIC_IPR7		((volatile uint32_t *) 0xE000E41C)

#define NVIC_IPR59		((volatile uint32_t *) 0xE000E4EF)

/**
 * @brief 4 bits for pre-emption priority 0 bits for subpriority 
 * 
 */
#define PRI_BITS_IMPLEMENTED	(4)

/**
 * @brief Base Addresses for various available memory regions 
 * 
 */
#define RAM_BASEADDRESS     (0x20000000U)   // EndAddress 0x20004FFF    (20KB)
#define FLASH_BASEADDRESS   (0x08000000U)   // EndAddress 0x0800FFFF    (64KB)


/**
 * @brief Base Addresses of Bus Domains: AHB and APBx  
 * 
 */
#define APB1_PERIPHERAL_BASEADDRESS		(0x40000000U)
#define APB2_PERIPHERAL_BASEADDRESS		(0x40010000U)
#define AHB_PERIPHERAL_BASEADDRESS		(0x40018000U)

/**
 * @brief Base Addresses of peripherals on APB2 bus
 * 
 */
#define AFIO_BASEADDRESS		((APB2_PERIPHERAL_BASEADDRESS) + (0x0000))
#define GPIOA_BASEADDRESS		((APB2_PERIPHERAL_BASEADDRESS) + (0x0800))
#define GPIOB_BASEADDRESS		((APB2_PERIPHERAL_BASEADDRESS) + (0x0C00))
#define GPIOC_BASEADDRESS		((APB2_PERIPHERAL_BASEADDRESS) + (0x1000))
#define USART1_BASEADDRESS		((APB2_PERIPHERAL_BASEADDRESS) + (0x3800))
#define TIM1_BASEADDRESS		((APB2_PERIPHERAL_BASEADDRESS) + (0x2C00))
#define SPI1_BASEADDRESS		((APB2_PERIPHERAL_BASEADDRESS) + (0x3000))
#define ADC1_BASEADDRESS		((APB2_PERIPHERAL_BASEADDRESS) + (0x2400))

/**
 * @brief Base Addresses of peripherals on APB1 bus
 * 
 */
#define I2C2_BASEADDRESS		((APB1_PERIPHERAL_BASEADDRESS) + (0x5800))

/**
 * @brief Base Addresses of peripherals on AHB bus
 * 
 */
#define RCC_BASEADDRESS		((AHB_PERIPHERAL_BASEADDRESS) + (0x9000))

/**
 * @brief GPIO Peripheral Registers Definition Structure
 * 
 */
typedef struct
{
	volatile uint32_t CRL;	/* - Port Configuration Register Low	- Offset :0x00 - */
	volatile uint32_t CRH; 	/* - Port Configuration Register High	- Offset :0x04 - */
	volatile uint32_t IDR; 	/* - Port Input Data Register			- Offset :0x08 - */
	volatile uint32_t ODR; 	/* - Port Output Data Register			- Offset :0x0C - */
	volatile uint32_t BSRR;	/* - Port Bit Set/Reset Register		- Offset :0x10 - */
	volatile uint32_t BRR;	/* - Port Bit Reset Register			- Offset :0x14 - */
	volatile uint32_t LCKR; /* - Port Configuration Lock Register	- Offset :0x18 - */

}GPIO_RegDef_t;

/**
 * @brief AFIO Peripheral Registers Definition Structure
 * 
 */
typedef struct
{
	volatile uint32_t EVCR;		/* - Event Control Register								- Offset :0x00 - */
	volatile uint32_t MAPR;		/* - AF Re-map and Debug I/O Configuration Register		- Offset :0x04 - */
	volatile uint32_t EXTICR1;	/* - External Interrupt Configuration Register 1		- Offset :0x08 - */
	volatile uint32_t EXTICR2;	/* - External Interrupt Configuration Register 2		- Offset :0x0C - */
	volatile uint32_t EXTICR3;	/* - External Interrupt Configuration Register 3		- Offset :0x10 - */
	volatile uint32_t EXTICR4;	/* - External Interrupt Configuration Register 4		- Offset :0x14 - */
	volatile uint32_t MAPR2;	/* - AF Re-map and Debug I/O Configuration Register 2	- Offset :0x1C - */

}AFIO_RegDef_t;

/**
 * @brief RCC Peripheral Registers Definition Structure
 * 
 */
typedef struct
{
	volatile uint32_t CR;		/* - Clock Control Register								- Offset :0x00 - */
	volatile uint32_t CFGR;		/* - Clock Configuration Register						- Offset :0x04 - */
	volatile uint32_t CIR;		/* - Clock Interrupt Register							- Offset :0x08 - */
	volatile uint32_t APB2RSTR;	/* - APB2 Peripheral Reset Register						- Offset :0x0C - */
	volatile uint32_t APB1RSTR;	/* - APB1 Peripheral Reset Register						- Offset :0x10 - */
	volatile uint32_t AHBENR;	/* - AHB Peripheral Clock Enable Register				- Offset :0x14 - */
	volatile uint32_t APB2ENR;	/* - APB2 Peripheral Clock Enable Register				- Offset :0x18 - */
	volatile uint32_t APB1ENR;	/* - APB1 Peripheral Clock Enable Register				- Offset :0x1C - */
	volatile uint32_t BDCR;		/* - Backup Domain Control Register						- Offset :0x20 - */
	volatile uint32_t CSR;		/* - Control/Status Register							- Offset :0x24 - */
	volatile uint32_t AHBRSTR;	/* - AHB Peripheral Clock Reset Register				- Offset :0x28 - */
	volatile uint32_t CFGR2;	/* - Clock Configuration Register 2						- Offset :0x2C - */

}RCC_RegDef_t;

#endif /* STM32F103XX_H_ */