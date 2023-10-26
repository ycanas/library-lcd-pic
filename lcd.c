
/*
 * File: lcd.c
 * Author: ycanas
 * Revision history: 25/10/2023
 */


#include "config.h"
#include "lcd.h"

void cmd(unsigned char cmd) {

    /******************* NIBLE ALTO *******************/
    
    PORTLCD = 0;
    
    D4 = (cmd >> 4) & 1;
    D5 = (cmd >> 5) & 1;
    D6 = (cmd >> 6) & 1;
    D7 = (cmd >> 7) & 1;
    
    E = 0;
    
    __delay_us(100);
    
    E = 1;
    
    __delay_us(100);
    
    E = 0;
    
    __delay_us(100);
    
    /******************* NIBLE BAJO *******************/
    
    PORTLCD = 0;
    
    D4 = 1 & (cmd >> 0);
    D5 = 1 & (cmd >> 1);
    D6 = 1 & (cmd >> 2);
    D7 = 1 & (cmd >> 3);
    
    E = 0;
    
    __delay_us(100);
    
    E = 1;
    
    __delay_us(100);
    
    E = 0;
    
    __delay_us(100);
    PORTLCD = 0;
}


void str(unsigned char cmd) {
    
    /******************* NIBLE ALTO *******************/
    
    PORTLCD = 0;
    
    D4 = (cmd >> 4) & 1;
    D5 = (cmd >> 5) & 1;
    D6 = (cmd >> 6) & 1;
    D7 = (cmd >> 7) & 1;
    
    RS = 1;
    E  = 0;
    
    __delay_us(100);
    
    E = 1;
    
    __delay_us(100);
    
    E  = 0;
    RS = 0;
    
    __delay_us(100);
    
    /******************* NIBLE BAJO *******************/
    
    PORTLCD = 0;
    
    D4 = 1 & (cmd >> 0);
    D5 = 1 & (cmd >> 1);
    D6 = 1 & (cmd >> 2);
    D7 = 1 & (cmd >> 3);
    
    RS = 1;
    E  = 0;
    
    __delay_us(100);
    
    E  = 1;
    
    __delay_us(100);
    
    E  = 0;
    RS = 0;
    
    __delay_us(100);
    PORTLCD = 0;
}


void lcd_init() {
    TRISLCD = 0;
    PORTLCD = 0;
    
    __delay_ms(20);
    
    cmd(0x03);
    __delay_ms(10);
    
    cmd(0x03);
    __delay_us(150);
    
    for (int i = 0; i < 6; i++) {
        cmd(CMDs[i]);
        __delay_us(100);
    }
}


void lcd_setcursor(unsigned char y, unsigned char x) {
    cmd(POSy[y] + x);
    __delay_us(100);
}   


void lcd_print(char *string) {
    while (*string) {
        str(*string);
        string++;
    }
}


void lcd_clear() {
    cmd(0x01);
    __delay_ms(1);
}
