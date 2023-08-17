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
 * @brief ARM Cortex Mx NVIC_ISERx (Interrupt Set Enable) Registers Addresses
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
 * @brief ARM Cortex Mx NVIC_ICERx (Interrupt Clear Enable) Registers Addresses
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
 * @brief ARM Cortex Mx NVIC_ISPRx (Interrupt Set-Pending) Registers Addresses
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
 * @brief ARM Cortex Mx NVIC_ICPRx (Interrupt Clear-Pending) Registers Addresses
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
 * @brief ARM Cortex Mx NVIC_IABRx (Interrupt Active Bit) Registers Addresses
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
 * @brief ARM Cortex Mx NVIC_IPRx (Interrupt Priority) Registers Addresses
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


#endif /* STM32F103XX_H_ */