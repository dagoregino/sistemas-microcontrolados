//Leer un número entero en la variable VALOR. Utilizar operadores de bits (bitwise) para determinar si el número es par o impar (verificando el bit menos significativo) y mostrar el resultado. No está permitido usar el operador de módulo (%)
#include <stdio.h>
int numero;
int main()
{
    printf("ingrese un numero:");
    scanf("%d", &numero);
    //se usa el operador bitwise y se analiza el ultimo bit ( si es 0 es par)
  if (numero & 1) {
    printf("Es impar\n");
} else {
    printf("Es par\n");
}
    return 0;
}