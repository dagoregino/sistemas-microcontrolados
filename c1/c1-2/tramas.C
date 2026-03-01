#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {

    char texto[200];
    char id[50];
    float temperatura, humedad, distancia;

    while (1) {

        if (fgets(texto, sizeof(texto), stdin) != NULL) {

            texto[strcspn(texto, "\r\n")] = 0;

            id[0] = '\0';
            temperatura = -1;
            humedad = -1;
            distancia = -1;

            char *ptr;

            ptr = strstr(texto, "'ID':");
            if (ptr && sscanf(ptr, "'ID': %49s", id) == 1) {
            }

            ptr = strstr(texto, "'temperatura':");
            if (ptr && sscanf(ptr, "'temperatura': %f", &temperatura) == 1) {
            }

            ptr = strstr(texto, "'humedad':");
            if (ptr && sscanf(ptr, "'humedad': %f", &humedad) == 1) {
            }

            ptr = strstr(texto, "'distancia':");
            if (ptr && sscanf(ptr, "'distancia': %f", &distancia) == 1) {
            }

            int camposTotales = 0;

            if (strstr(texto, "'ID':") != NULL) {
                camposTotales++;
            }
            if (strstr(texto, "'temperatura':") != NULL) {
                camposTotales++;
            }
            if (strstr(texto, "'humedad':") != NULL) {
                camposTotales++;
            }
            if (strstr(texto, "'distancia':") != NULL) {
                camposTotales++;
            }

            if (camposTotales < 4) {
                printf("Error: faltan campos en la linea\n");
            } else {

                if (id[0] != '\0') {
                    printf("ID = %s, ", id);
                }

                if (temperatura != -1) {
                    printf("Temperatura = %.2f, ", temperatura);
                }

                if (humedad != -1) {
                    printf("Humedad = %.2f, ", humedad);
                }

                if (distancia != -1) {
                    printf("Distancia = %.2f", distancia);
                }

                printf("\n");
            }
        }

        vTaskDelay(pdMS_TO_TICKS(10));
    }
}