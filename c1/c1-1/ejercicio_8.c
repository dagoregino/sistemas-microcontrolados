//Crear una función que reciba tres variables booleanas (A, B, C) y retorne el resultado de la siguiente expresión lógica: F= (a*b)+ C(negada). El resultado debe mostrarse como una pequeña tabla de verdad en la consola para todas las combinaciones posibles de las entradas.

//(aclaracion del ejercicio que me di cuenta, le comente que solo iba a mostrar el resultado con los valores ingresados)
#include <stdio.h>
int variables[3];
char nombres_variables[3]={'A','B','C'};
int main()
{
//se piden las 3 variables y se verifica que sean 0 o 1
for (int i=0;i<3;i=i+1){
    printf("Ingrese la variable %c: ", nombres_variables[i]);
    scanf("%d", &variables[i]);
    if (variables[i]!= 1 && variables[i]!= 0){
        printf("ingrese valores dentro del rango (0 o 1)");
        return 0;
    }
}
printf("el resultado de la expresion logica (A⋅B)+ C(negada) es:  %d",(variables[0] && variables[1]) || (!variables[2]));
    return 0;
}