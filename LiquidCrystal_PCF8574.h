/*
 * LiquidCrystal_PCF8574.h
 *
 *  Created on: Aug 27, 2024
 *      Author: USER
 */

#ifndef INC_LIQUIDCRYSTAL_PCF8574_H_
#define INC_LIQUIDCRYSTAL_PCF8574_H_

void lcd_init (void);
void lcd_send_string (char *str);
void setCursor(int a, int b);
void lcd_clear (void);

#endif /* INC_LIQUIDCRYSTAL_PCF8574_H_ */
