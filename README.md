<h1 align="center">Libreria LCD - PIC16F877A</h1>

Esta es una librería para el microcontrolador PIC16F877A que proporciona funciones para controlar una LCD de 16x2 y 20x4. Con esta librería, puedes enviar comandos y datos a la LCD, y controlar su funcionamiento de manera sencilla.

## Características

- Soporte para pantallas LCD de 16x2 y 20x4.
- Control de posición del cursor.
- Envío de comandos y datos a la LCD.
- Funciones para escribir texto en la pantalla.

## Funciones - Metodos

```
Inicialización de la LCD: lcd_init()
Limpiar LCD: lcd_clear()
Posicionar cursor en la lcd: lcd_set_cursor()
Imprimir datos en la lcd: lcd_print()
Enviar comando a la lcd: lcd_comand()
```

## Materiales

- Microcontrolador PIC16F877A.
- Compilador compatible con el PIC16F877A.
- Pantalla LCD de 16x2 o 20x4.
- Conexión adecuada de los pines entre el microcontrolador y la LCD.

## Conexiones

| Pin PIC16F877A | Pin LCD |
| --- | ----------- |
| RD0 | RS |
| RD1 | RW |
| RD2 | E |
| RD3 | NC|
| RD4 | D4 |
| RD5 | D5 |
| RD6 | D6 |
| RD7 | D7 |

```
Como se denota en la anterior tabla, el pin RD3 del microcontrolador no se conecta a ningun pin de la LCD.
```

![GitHub Repo stars](https://img.shields.io/github/stars/ycanas/LCD-PIC16F877A?color=004ef6&style=for-the-badge&labelColor=101010)
[![GitHub](https://img.shields.io/badge/GitHub-ycanas-14a1f0?style=for-the-badge&logo=github&logoColor=white&labelColor=101010&color=ccd300)](https://github.com/ycanas)
![GitHub Top Languages](https://img.shields.io/github/languages/count/ycanas/LCD-PIC16F877A?style=for-the-badge&labelColor=101010&color=e50000)
![GitHub Top Language](https://img.shields.io/github/languages/top/ycanas/LCD-PIC16F877A?color=b4008e&style=for-the-badge&labelColor=101010)
