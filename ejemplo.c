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
    lcd_set_cursor(0, 0);
    lcd_print("ANDERSON");
 
    lcd_set_cursor(1, 0);
    lcd_print("YAIR");
    
    lcd_set_cursor(2, 0);
    lcd_print("CANAS");
    
    lcd_set_cursor(3, 0);
    lcd_print("RANGEL");
    
    while (1) {
        
    }
}
