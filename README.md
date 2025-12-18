# Proyecto de Arquitectura de Computadoras: Simulador de Arquitectura x86
- [Documentación del Proyecto](https://docs.google.com/document/d/1KKtLAXFcgBtAzEGTTEpY-WYw88LDdAY-NJ-RIYdQiSw/edit?usp=sharing)
- [Presentación en Diapositivas](https://www.canva.com/design/DAG7yzjryYk/g6mAtIfryLVGmUtJAyIDwQ/edit?utm_content=DAG7yzjryYk&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton)

# Guía de uso

## 1. Inicio del simulador
1. Abrir el archivo Excel del proyecto
2. Habilitar macros al iniciar el documento
3. Hacer click a "Usar" en la parte del teclado
4. Elegir en la ventana emergete si introducir código en: C++ o Assembler

## 2. Ejecución del código ensamblador
Cada instrucción debe seguir el formato:
```asm
OPCODE DESTINO, FUENTE
```
Ejemplo:
```asm
MOV EAX, 10
ADD EAX, EBX
INC EAX
```
1. Escribe una instrucción
2. Presiona el botón "Run"
3. Selecciona el formato de visualización en RAM: binario, hexadecimal o texto.

## 3. Ejecución del código C++
1. Ingresa código C++ simple en el formulario
2. Presiona "Compilar y Ejecutar"

Ejemplo:
```
int a = 10;
int b = 20;
int c = a + b;
c++;
cout << c;
```
