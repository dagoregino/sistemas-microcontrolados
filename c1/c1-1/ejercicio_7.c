//En sistemas embebidos, los registros suelen empaquetar varios estados. Leer una variable de 8 bits llamada REGISTRO_ESTADO. El programa debe extraer y mostrar por separado el valor de los 4 bits menos significativos (nibble inferior) y el estado (0 o 1) del bit número 5. Usar exclusivamente operadores de bits (&, >>).
#include <stdio.h>
int registro_estado;
int main()
{
    printf("ingrese un numero entre 0 y 255: ");
    scanf("%d", &registro_estado);
    //condicion que el numero sea de 8 bits
  if (registro_estado<0 || registro_estado>255) {
    printf("ingrese un numero dentro del rango\n");
    return 0;
}
 printf("el nibble inferior es: ");
 //se recorre desde la posicion 3 hasta la 0
for ( int i = 3; i>=0; i= i-1){
    printf("%d", (registro_estado>>i) & 1);
}
printf("\n");
//dezplazamos la posicion 4 para saber el estado del bit 5
printf("el estado del bit 5 es %d", (registro_estado>>5)&1 );
    return 0;
}