# LabTres 
Preguntas Parte01:

¿Para qué se utiliza la directiva #include en C dentro de este laboratorio con STM32?

¿Para qué sirve definir el símbolo STM32F446xx en la configuración del proyecto? Es decir, vincularlo a "stm32f4xx.h".

Sirve para que el archivo stm32f4xx.h sepa exactamente qué microcontrolador estás usando y cargue las definiciones correctas. Permite que el preprocesador seleccione e incluya el archivo de cabecera específico del microcontrolador.

¿Qué pasaría si no se habilita el reloj del GPIO antes de configurar los registros del pin?

¿Por qué es necesario configurar el registro GPIOA->MODER antes de escribir en GPIOA->ODR?

¿Qué efecto físico tiene la instrucción GPIOA->ODR ^= LED_PIN sobre el hardware?
