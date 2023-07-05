/* 
 * File: lcd.h
 * Author: ycanas
 * Revision history: 03/07/2023
 */
 
#ifndef LCD_H

#define	LCD_H

#include <xc.h>

#define TRISLCD TRISD
#define PORTLCD PORTD

#define _RS TRISDbits.TRISD0  
#define _RW TRISDbits.TRISD1
#define _E  TRISDbits.TRISD2

#define RS PORTDbits.RD0
#define RW PORTDbits.RD1
#define E  PORTDbits.RD2

void lcd_init();
void lcd_clear();
void lcd_char(unsigned char data);
void lcd_print(const char *str);
void lcd_comand(unsigned char cmd);
void lcd_set_cursor(unsigned char y, unsigned char x);

#endif
