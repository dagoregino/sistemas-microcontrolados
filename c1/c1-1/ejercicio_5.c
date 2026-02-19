//Preguntar al usuario un número entero y almacenar en la variable NUMERO. Imprimir el valor de la posición NUMERO de la secuencia de Fibonacci asumiendo que y f_0= 0 y f_1= 1. Verificar que NUMERO debe ser >= 2, en caso contrario, mostrar un mensaje que NUMERO debe cumplir esa condición.
#include <stdio.h>
int numero;
//primeros dos valores secuencia de Fibonacci
int numero_1=0;
int numero_2=1;
int suma;
int main()
{
    printf("ingrese la posicion de la secuencia de Fibonacci que desea saber (mayor o igual a 2):");
    scanf("%d", &numero);
    //condicion de mayor o igual a 2
    if (numero<2){
        printf ("ingrese un numero valido");
        return 0;
    }
    if  (numero==2){
        printf ("la posicion 2 de la secuencia de Fibonacci es: 1");
        return 0;
    }
    //secuencia de Fibonacci
    for (int i = 2; i<numero; i= i+1){
        suma = numero_1+ numero_2;
        numero_1= numero_2;
        numero_2= suma;
    }
    printf("la posicion %d de la secuencia de Fibonacci es : %d", numero ,suma);


    return 0;
}