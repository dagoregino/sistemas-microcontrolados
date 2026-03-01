#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

char texto[20];
int numero, ultimo , mayor, menor,suma, contador;

void app_main(void) {
    while(1){
        if (fgets(texto, sizeof(texto), stdin) != NULL) {
            if ((sscanf(texto, "'valor':%d", &numero) == 1) &&
                (numero<=99 && numero>=0)) {

                ultimo = numero;
                suma += numero;
                contador++;

                if (contador == 1) {
                    mayor = menor = numero;
                } else {
                    if (numero > mayor) mayor = numero;
                    if (numero < menor) menor = numero;
                }

                printf("{'ultimo': %d, 'mayor': %d, 'menor': %d, 'promedio': %.2f}\n",
                       ultimo, mayor, menor, (double)suma / contador);
            }
        }

        vTaskDelay(pdMS_TO_TICKS(10));
    }
}