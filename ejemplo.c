/*
 * File:   main.c
 * Author: ycanas
 * Created on 3 de julio de 2023, 11:09 AM
 */

#include <xc.h>
#include "CONFIG.h"
#include "LCD.h"

void main(void) {
    lcd_init();
    lcd_print("Iniciando...");
    __delay_ms(2000);
    
    while (1) {
        lcd_clear();
        lcd_print("Hola");

        __delay_ms(50);

        lcd_set_cursor(1, 0);
        lcd_print("Mundo");
        __delay_ms(5000);
    }
}
