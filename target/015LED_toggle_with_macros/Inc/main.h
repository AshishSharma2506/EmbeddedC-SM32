/*
 * main.h
 *
 *  Created on: Mar 31, 2023
 *      Author: HP
 */

#ifndef MAIN_H_
#define MAIN_H_
#include <stdint.h>

// Adding macros to improve Readability . Video 193
#define ADDR_REG_ABH1ENR ((RCC_AHB1ENR_t*)0x40023830)   // Use this macro name for Clock control register
#define ADDR_REG_GPIOD_MODE ((GPIOx_MODE_t*)0x40020C00) // GPIO D port mode register address
#define ADDR_REG_GPIOD_OD ((GPIOx_ODR_t*)0x40020C14)    // GPIO D output data(OD) register address
#define CLOCK_ENABLE 1
#define MODE_CONF_OUTPUT 1  //CONFIGURE MODE AS OUTPUT
#define PIN_STATE_HIGH 1
#define PIN_STATE_LOW 0
#define DELAY_COUNT 300000UL

// creating the structures & bitfields for the registers we need
// STEP 1 of ECB 53(ii)
// RCC clock enable register
typedef struct
{
	uint32_t gpioa_en       :1;
	uint32_t gpiob_en       :1;
	uint32_t gpioc_en       :1;
	uint32_t gpiod_en       :1;
	uint32_t gpioe_en       :1;
	uint32_t gpiof_en       :1;
	uint32_t gpiog_en       :1;
	uint32_t gpioh_en       :1;
	uint32_t gpioi_en       :1;
	uint32_t reserved1      :3;
	uint32_t crc_en         :1;
	uint32_t reserved2      :5;
	uint32_t bkpsram_en     :1;
	uint32_t reserved3      :1;
	uint32_t ccmdataram_en  :1;
	uint32_t dma1_en        :1;
	uint32_t dma2_en        :1;
	uint32_t reserved4      :2;
	uint32_t ethmac_en      :1;
	uint32_t ethmactx_en    :1;
	uint32_t ethmacrx_en    :1;
	uint32_t ethmacptp_en   :1;
	uint32_t otghs_en       :1;
	uint32_t otghsulpi_en   :1;
	uint32_t reserved5      :1;



}RCC_AHB1ENR_t;  // see register on ECB 53(ii)
// or refer to Reference Manual>Reset and clock control>RCC Registers>RCC AHB1 peripheral clock enable register

// GPIO Port Mode Register
typedef struct
{
	uint32_t pin_0  :2;
	uint32_t pin_1  :2;
	uint32_t pin_2  :2;
	uint32_t pin_3  :2;
	uint32_t pin_4  :2;
	uint32_t pin_5  :2;
	uint32_t pin_6  :2;
	uint32_t pin_7  :2;
	uint32_t pin_8  :2;
	uint32_t pin_9  :2;
	uint32_t pin_10 :2;
	uint32_t pin_11 :2;
	uint32_t pin_12 :2;
	uint32_t pin_13 :2;
	uint32_t pin_14 :2;
	uint32_t pin_15 :2;

}GPIOx_MODE_t; // see resgiter on ECB 36(ii)
// or Refr Manual>GPIO section>GPIO registers>GPIO port mode register

// GPIO Output port data register
typedef struct
{
	uint32_t pin_0      :1;
	uint32_t pin_1      :1;
	uint32_t pin_2      :1;
	uint32_t pin_3      :1;
	uint32_t pin_4      :1;
	uint32_t pin_5      :1;
	uint32_t pin_6      :1;
	uint32_t pin_7      :1;
	uint32_t pin_8      :1;
	uint32_t pin_9      :1;
	uint32_t pin_10     :1;
	uint32_t pin_11     :1;
	uint32_t pin_12     :1;
	uint32_t pin_13     :1;
	uint32_t pin_14     :1;
	uint32_t pin_15     :1;
	uint32_t reserved   :16;


}GPIOx_ODR_t;// refre to ECB 37(i)
// or Refr Manual>GPIO section>GPIO registers>GPIO port data register


#endif /* MAIN_H_ */
