/*
 * stm32f103xx.h
 *
 *  Created on: May 26, 2021
 *      Author: juan_
 */

#ifndef INC_STM32F103XX_H_
#define INC_STM32F103XX_H_

/*
 * Base addresses of flash and SRAM memories
 */

#define FLASH_BASEADDR					0x08000000U		/* Flash Base address - RM_S3.3.3 */
#define SRAM_BASEADDR					0x20000000U		/* SRAM Base address  - RM_S3.3.1 */
#define ROM								0x1FFFF000U		/* System Memory (ROM) - RM_S3.3.3 - Table 4*/
#define SRAM SRAM_BASEADDR				SRAM_BASEADDR   /* SRAM Base address - RM_S3.3.3 */

/*
 * AHBx and APBx Bus Peripheral base address
 */

#define PERIPH_BASE						0x40000000U
#define APB1PERIPH_BASE					PERIPH_BASE
#define APB2PERIPH_BASE					0x40010000U
#define AHBPERIPH_BASE					0x40018000U



#endif /* INC_STM32F103XX_H_ */
