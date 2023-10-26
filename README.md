<h1 align="center">Libreria LCD - PICs 🤖</h1>

Esta es una librería para microcontroladores PIC que proporciona funciones para controlar una LCD de 16x2 y 20x4. Con esta librería, puedes enviar comandos y datos a la LCD, y controlar su funcionamiento de manera sencilla.

En el archivo de cabecera "lcd.h" se encuentra la configuración inicial, la declaración de los pines y constantes, de igual forma en el archivo "lcd.c" se encuentra toda la logica del programa.

Además, en el archivo "main.c", se encuentra un ejemplo de uso de la librería, acompañado de sus archivos de cabecera "cofig.h" y "fuses.c". Estos últimos son responsables de configurar tanto el cristal como los fusibles del microcontrolador PIC utilizado en el ejemplo (PIC16F877A).


## Características

- Soporte para pantallas LCD de 16x2 y 20x4.
- Control de posición del cursor.
- Envío de comandos y datos a la LCD.
- Funciones para escribir y limpiar la pantalla.


## Funciones - Metodos

```
╭─────────────────────────────────────────────────────────────────────────────────────────────────────────────╮
│  1. lcd_init(void)       --->  Inicializa y configura la LCD, no recibe ningún parámetro.                   │
│  2. lcd_setcursor(y, x)  --->  Posiciona el cursor en la ubicación deseada, @params (y: fila, x: columna).  │
│  3. lcd_print(string)    --->  Imprime texto en la LCD, @params (string: texto).                            │
│  4. lcd_clear(void)      --->  Limpia la pantalla de la LCD, no recibe parámetros.                          │                                                                       
│  5. cmd(cmd)             --->  Envía comandos a la LCD, @params (cmd: comando).                             │
│  6. str(cmd)             --->  Escribe caracteres a la LCD, @params (cmd: caracter).                        │
╰─────────────────────────────────────────────────────────────────────────────────────────────────────────────╯
```

Nota🗒️: Las funciones cmd() y str() son de uso interno y no es necesario utilizarlas directamente. Sin embargo, si se posee un conocimiento avanzado de su funcionamiento, es posible implementarlas para enviar comandos personalizados y caracteres. Se recomienda precaución al hacer uso de estas funciones, ya que podrían afectar el funcionamiento general de la LCD. 


## Conexiones

```
       PIC                       LCD
╭───────────────╮         ╭──────────────╮
│      RB0      │--------►│      D7      │
│      RB1      │--------►│      D6      │
│      RB2      │--------►│      D5      │
│      RB3      │--------►│      D4      │
│      RB4      │--------►│      E       │
│      RB5      │--------►│      RS      │
╰───────────────╯         ╰──────────────╯

```

Nota🗒️: Si bien se estableció una configuración de pines predeterminada, con el conocimiento necesario, se puede generar variaciones y personalizar la distribución de pines a conveniencia mediante la modificación de los archivos "lcd.h" y "lcd.c".


## Ejemplo

![Ejemplo](./ejemplo.png)


¡Gracias por visitar este proyecto! Si te ha sido útil, no dudes en darle una ⭐ (estrella) al repositorio. Tu apoyo es muy apreciado. Si tienes alguna pregunta, sugerencia o simplemente quieres charlar, estaré encantado de escucharte. No dudes en ponerte en contacto. 📫 yairca3.7@gmail.com


![GitHub Repo stars](https://img.shields.io/github/stars/ycanas/library-lcd-pic?color=004ef6&style=for-the-badge&labelColor=101010)
[![GitHub](https://img.shields.io/badge/GitHub-ycanas-14a1f0?style=for-the-badge&logo=github&logoColor=white&labelColor=101010&color=ccd300)](https://github.com/ycanas)
![GitHub Top Languages](https://img.shields.io/github/languages/count/ycanas/library-lcd-pic?style=for-the-badge&labelColor=101010&color=e50000)
![GitHub Top Language](https://img.shields.io/github/languages/top/ycanas/library-lcd-pic?color=b4008e&style=for-the-badge&labelColor=101010)
