
/*
 * File: main.c
 * Author: ycanas
 * Created on 17 de octubre de 2023, 11:44 AM
 */


#include <xc.h>
#include "config.h"
#include "lcd.h"

void main(void) {
    lcd_init();
    lcd_setcursor(0, 0);
    lcd_print("Iniciando...");
    __delay_ms(1000);
    
    while (1) {
        lcd_clear();
        
        lcd_setcursor(0, 0);
        lcd_print("Hola Mundo");
        __delay_ms(1);
        
        lcd_setcursor(1, 0);
        lcd_print("LCD");
        __delay_ms(1);
        
        lcd_setcursor(2, 0);
        lcd_print("16x2");
        __delay_ms(1);
        
        lcd_setcursor(3, 0);
        lcd_print("& 20x4");
        __delay_ms(1000);
    }
}
