/*
 * lcd.h
 *
 *  Created on: Aug 27, 2024
 *      Author: USER
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include "delay.h"
#include <stdint.h>
void i2c_init(void);
int8_t i2c_readByte(uint8_t saddr,uint8_t maddr,uint8_t *data);
int8_t i2c_writeByte(uint8_t saddr,uint8_t maddr,uint8_t data);
int8_t i2c_WriteMulti(uint8_t saddr,uint8_t maddr,uint8_t *buffer, uint8_t length);
int8_t i2c_ReadMulti(uint8_t saddr,uint8_t maddr, uint8_t n, uint8_t* data);
void i2c_bus_scan(void);

#endif /* INC_LCD_H_ */
