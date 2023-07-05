#include <xc.h>
#include "LCD.h"
#include "CONFIG.h"

void lcd_init() {
    PORTLCD = 0;
    TRISLCD = 0;
    
    __delay_ms(20);
    
    lcd_comand(0x03);
    __delay_ms(5);
    
    lcd_comand(0x30);
    __delay_us(200);
    
    lcd_comand(0x32);
    __delay_us(200);
    
    lcd_comand(0x28);
    __delay_us(200);
    
    lcd_comand(0x08);
    __delay_us(200);
        
    lcd_comand(0x01);
    __delay_us(200);
    
    lcd_comand(0x07);
    __delay_us(200);
    
    lcd_comand(0x0C);
    __delay_us(200);
}

void lcd_comand(unsigned char cmd) {
    PORTLCD = cmd & 0xF0;
    __delay_us(200);
    E = 1;
    __delay_us(200);
    E = 0;
    __delay_us(200);
    
    PORTLCD = (cmd << 4) & 0xF0;
    __delay_us(200);
    E = 1;
    __delay_us(200);
    E = 0;
    PORTLCD = 0;
}

void lcd_set_cursor(unsigned char y, unsigned char x) {
    const unsigned char POSITIONS[4] = {0x80, 0xC0, 0x90, 0xD0};
    unsigned char cursor = POSITIONS[y] + x;
    
    lcd_comand(cursor);
}

void lcd_print(const char *STR) {
    while(*STR) {
        lcd_char(*STR);
        STR++;
    }
}

void lcd_char(unsigned char data) {
    PORTLCD = data & 0xF0;
    __delay_us(200);
    RS = E = 1;
    __delay_us(200);
    RS = E = 0;
    __delay_us(200);
    
    PORTLCD = (data << 4) & 0xF0;
    __delay_us(200);
    RS = E = 1;
    __delay_us(200);
    RS = E = 0;
    PORTLCD = 0;
}

void lcd_clear() {
    lcd_comand(0x01);
    __delay_us(20);
}
