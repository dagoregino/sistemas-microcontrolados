//Los sensores analógicos suelen presentar ruido. Definir una lista de 10 lecturas llamada LECTURAS_ADC. Crear un programa que calcule una nueva lista donde cada elemento sea el promedio de la lectura actual y las dos anteriores (esto se le conoce como filtro de media móvil). Para la primera posición, segunda y última posición de la nueva lista, dejar en 0.
#include <stdio.h>
int LECTURAS_ADC[10] = {220,235,231,255,189,210,215,217,240,190};
int FILTRADA[10];
int main() {
    // Primera, segunda y ultima posición en 0
    FILTRADA[0] = 0;
    FILTRADA[1] = 0;
    FILTRADA[9] = 0;

    //  filtro de media móvil
    for (int i = 2; i < 9; i= i+1) {
        FILTRADA[i] = (LECTURAS_ADC[i] + LECTURAS_ADC[i-1] + LECTURAS_ADC[i-2]) / 3;
    }
    printf("Lista original: ");
    for (int i = 0; i < 10; i= i+1) {
        printf("%d ", LECTURAS_ADC[i]);
    }
    printf("\n");
    printf("Lista filtrada: ");
    for (int i = 0; i < 10; i= i+1) {
        printf("%d ", FILTRADA[i]);
    }
    return 0;
}
