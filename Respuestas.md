# LabTres 
Preguntas Parte 1:

a. ¿Para qué se utiliza la directiva #include en C dentro de este laboratorio con STM32?
R// Lo que hace el #include es que toma el contenido de un archivo y lo coloca en la salida que el preprocesador C le entrega al compilador C.

b. ¿Para qué sirve definir el símbolo STM32F446xx en la configuración del proyecto? Es decir, vincularlo a "stm32f4xx.h".
R// Sirve para que el archivo stm32f4xx.h sepa exactamente qué microcontrolador estás usando y cargue las definiciones correctas. Permite que el preprocesador seleccione e incluya el archivo de cabecera específico del microcontrolador.

c. ¿Qué pasaría si no se habilita el reloj del GPIO antes de configurar los registros del pin?

d. ¿Por qué es necesario configurar el registro GPIOA->MODER antes de escribir en GPIOA->ODR?

e. ¿Qué efecto físico tiene la instrucción GPIOA->ODR ^= LED_PIN sobre el hardware?


---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


Preguntas Parte 2:
a. ¿Qué instrucciones específicas del código cambian entre la versión que usa GPIOA->ODR y
la versión que usa GPIOA->BSRR para encender y apagar el LED?

b. ¿Por qué el manual de referencia recomienda el uso de GPIOx->BSRR en lugar de escribir
directamente en GPIOx->ODR cuando se modifican pines individuales?
c. Selecciona 2 pines del puerto A y modifica el código para encender estos dos pines al mismo
tiempo usando una sola instrucción de escritura al BSRR.
En caso de ser necesario, conecta leds a los pines seleccionados )mediant4e resistencias
limitadoras de corriente) y utiliza los conectores/sockets de la placa para verificar
experimentalmente el correcto funcionamiento del programa implementado. Sube un enlace
de YouTube en el que todos los integrantes del grupo expliquen el funcionamientos y
aspectos elementales del código.
