
/*
 * File: main.c
 * Author: ycanas
 * Created on 17 de octubre de 2023, 11:44 AM
 */


#include <xc.h>
#include "config.h"
#include "lcd.h"

void main(void) {
    LCD_Init();
    LCD_SetCursor(0, 0);
    LCD_Print("Iniciando...");
    __delay_ms(1000);
    
    while (1) {
        LCD_Clear();
        
        LCD_SetCursor(0, 0);
        LCD_Print("Hola Mundo");
        __delay_ms(1);
        
        LCD_SetCursor(1, 0);
        LCD_Print("LCD");
        __delay_ms(1);
        
        LCD_SetCursor(2, 0);
        LCD_Print("16x2");
        __delay_ms(1);
        
        LCD_SetCursor(3, 0);
        LCD_Print("& 20x4");
        __delay_ms(1000);
    }
}
