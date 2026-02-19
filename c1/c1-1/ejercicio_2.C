//De un número entero positivo que está guardado en una variable llamada NUMERO, mostrar en pantalla su raíz cuadrada usando el método de Newton. Para este ejercicio debe realizarse una función que acepte el valor la variable NUMERO y retorne el resultado usando el método de Newton, sin usar una librería que contenga esa función. Resultado esperado en pantalla: {'Número' : NUMERO, 'Raíz cuadrada usando Newton' : RESULTADO}
#include <stdio.h>
//declaracion variable 
int numero = 145;
int numero_aproximacion = 4; // sin incluir la primera aproximacion
int contador = 0;
int main()
{
    // se halla el entero cuyo cuadrado se acerque mas al numero
    double aprox_1 = 0;
    while (aprox_1*aprox_1 <= numero){
        aprox_1 = aprox_1 + 1;
    }
    if ((aprox_1*aprox_1 -numero) >(numero-(aprox_1-1)*(aprox_1-1))){
        aprox_1 = aprox_1 - 1;
    }
    printf("numero: %d\n", numero);
    printf("aproximacion 1 Raiz cuadrada usando Newton :%f\n", aprox_1);
    
    //se halla el resto de aproximaciones con la formula de Newton
    double aprox_2 ;
    while (contador < numero_aproximacion){
    aprox_2 = ((numero/aprox_1)+aprox_1) /2;
    aprox_1= aprox_2;
    contador = contador + 1;
    printf("aproximacion  %d Raiz cuadrada usando Newton : %.20f\n", contador+1 , aprox_2);
    }

    return 0;
}