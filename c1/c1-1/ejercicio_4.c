//Se puede calcular el cuadrado de un número NUMERO al sumar los primeros NUMERO números impares. Con esta lógica, el cuadrado del número 7 es la sumatoria de los primeros 7 números impares, es decir 1+3+5+7+9+11+13=49. Crear un programa que pida al usuario un número y se almacene en la variable NUMERO y luego imprima la suma de todos los números impares y su resultado.
#include <stdio.h>
int numero;
int suma =0;
int main()
{
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);
    //condicion para numeros positivos
    if (numero<1){
    printf("ingrese un numero valido");
    return 0;
    }
    
    // se realiza la sumatoria de los impares 
   for (int i=0;i<numero; i=i+1){
       suma=  suma + (2*i+1);
   }
   
    printf("cuadrado del numero usando suma de numeros impares: %d\n ", suma);

    return 0;
}