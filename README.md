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
1. Escribe una instrucción
2. Presiona "Ejecutar"
3. Selecciona el formato de visualización en RAM: binario, hexadecimal o texto.
Ejemplo:
```asm
MOV EAX, 10
ADD EAX, EBX
INC EAX
```

## 3. Ejecución del código C++
1. Ingresa código C++ simple en el formulario
2. Presiona "Ejecutar"
3. Selecciona el formato de visualización en RAM: binario, hexadecimal o texto.
Ejemplo:
```cpp
int a = 10;
int b = 20;
int c = a + b;
c++;
cout << c;
```

## 4. Sistema de memoria y caché
El simulador implementa una jerarquía de memoria didáctica:
- RAM principal
- Caché L2
- Caché L1
- Memoria virtual

Características principales:
- Transferencia RAM --> L2 --> L1 animada
- Simulación de cache miss y page fault
- Reemplazo de líneas mediante el algoritmo LRU
- Panel visual que muestra: hit/miss, nivel de acceso y línea víctima reemplazada

## 5. Flujo interno de ejecución (pipeline)
Cada instrucción es procesada visualmente siguiendo cada etapa del pipeline:
1. Fetch: la instrucción se obtiene desde la caché
2. Decode: la Unidad de Control interpreta el opcode y operandos
3. Execute: la ALU realiza la operación correspondiente
4. Write Back: el resiltado se escribe en el registro o dispositivo destino
Durante este proceso:
- Se resaltan las celdas activas
- Se actualizan los registros EAX, EBX, ECX y EDX

## 6. Dispositivos de Entrada/Salida (E/S)
- En caso de usar como dispositivo de entrada el 'Teclado', el resultado del programa ingresado se mostrará en el dispositivo de salida 'Pantalla'.
- En caso de usar como dispositivo de entrada el 'Escáner' los datos ingresados se mostrarán en el dispositivo de salida 'Impresora'.
- 
## 7. Finalización de la ejecución
Al finalizar el programa, el simulador muestra un resumen indicando:
- Cantidad de celdas usadas en RAM
- Cantidad de celdas usadas en memoria virtual
- Confirmación de ejecución completa del pipeline
Esto permite analizar el impacto del programa sobre la arquitectura simulada.
