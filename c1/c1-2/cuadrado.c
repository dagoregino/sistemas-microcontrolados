#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    char texto[20];
    int numero;
    int suma;

    while (1)
    {
        if (fgets(texto, sizeof(texto), stdin) != NULL)
        {
            texto[strcspn(texto, "\r\n")] = 0;

            if (sscanf(texto, "%d", &numero) == 1)
            {
                if (numero < 1)
                {
                    printf("Ingrese un numero valido\n");
                }
                else
                {
                    suma = 0;

                    for (int i = 0; i < numero; i++)
                    {
                        suma = suma + (2 * i + 1);
                    }

                    printf("Cuadrado del numero usando suma de numeros impares: %d\n", suma);
                }
            }
        }

        vTaskDelay(pdMS_TO_TICKS(10));
    }
}