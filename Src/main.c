
#include "stm32f4xx.h"

#define GPIOAEN        (1U<<0)
#define PIN5           (1U<<5)
#define PIN5      	   (1U<<5)
#define PIN6           (1U<<6)

int main(void)
{
    RCC->AHB1ENR |= GPIOAEN;

    //Configurar PA5 como salida
    GPIOA->MODER |= (1U<<10);
    GPIOA->MODER &= ~(1U<<11);

    //Configurar PA6 como salida
    GPIOA->MODER |= (1U<<12);
    GPIOA->MODER &= ~(1U<<13);


    while(1)
    {
    	GPIOA->BSRR = PIN5 | PIN6;

    	for(int i=0; i<1000000; i++) {}

    	GPIOA->BSRR = (PIN5 | PIN6) << 16;

    	for(int i=0; i<1000000; i++) {}
    }
}

