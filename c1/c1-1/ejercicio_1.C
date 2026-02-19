//Una variable llamada NUMERO contiene un entero de 4 dígitos (mayor o igual a 1000 y menor o igual 9999). En caso que la variable NUMERO esté fuera del rango (menor a 1000 o mayor a 9999) entonces no se debe ejecutar el programa. Mostrar en pantalla cual es la unidad de mil, la centena, la decena y la unidad. No usar arreglos, vectores, listas o cualquier otro dato de ese tipo, la variable NUMERO debe ser de tipo entero. Resultado esperado en pantalla: {'Número' : NUMERO, 'Unidad' : UNIDAD, 'Decena' : DECENA, 'Centena' : CENTENA, 'Unidad de mil' : UNIDAD_DE_MIL}
#include <stdio.h>
//declaracion de variables
int numero = 1234;
int main()
{
    //condicion 4 digitos
    if(numero>=1000 && numero <=9999 ){
        int u_mil = numero/1000; //C en division de enteros regresa entero
        //se usa el modulo para tomar el residuo 
        int residuo_u_mil = (numero%1000);
        int residuo_centena = (residuo_u_mil%100);
        int residuo_decena = (residuo_centena%10);
        printf("numero: %d\n", numero);
        printf("unidad de mil: %d\n", u_mil);
        //se divide entre enteros para regresar solo la parte entera 
        printf("centena: %d\n", residuo_u_mil/100);
        printf("decena: %d\n", residuo_centena/10);
        printf("unidad: %d\n", residuo_decena/1);
    return 0;
}
}