//Crear un programa pida al usuario un número entero positivo y almacenarlo en la variable NUMERO. Usando NUMERO como límite, aplicar la Criba de Eratóstenes e imprimir en pantalla todos los números menores a NUMERO que son primos.
#include <stdio.h>
int numero;
int main() {
    
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    if (numero <= 2) {
        printf("No hay numeros primos menores que %d\n", numero);
        return 0;
    }
    int es_primo[numero];
    // colocamos todos como primos inicialmente
    for (int i = 0; i < numero; i= i+1){
        es_primo[i] = 1;
    }
    //el 0 y 1 no son primos
    es_primo[0] = 0;
    es_primo[1] = 0;
    // Criba de Eratóstenes
    for (int i = 2; i * i < numero; i=i+1) {
        if (es_primo[i]) {
    //inicialmente i*i porque los anteriores multiplos ya se han eliminado antes
            for (int j = i * i; j < numero; j = j+i) {
                es_primo[j] = 0;
            }
        }
    }
    printf("Numeros primos menores que %d:\n", numero);
    for (int i = 2; i < numero; i= i+1) {
        if (es_primo[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
