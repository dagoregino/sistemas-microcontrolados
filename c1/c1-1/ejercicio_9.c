//Simular un detector de secuencia para una cerradura electrónica (simulación de una máquina de estados). El programa debe recibir una lista de bits uno por uno que ingresa el usuario. Si detecta que los últimos bits ingresados tienen la secuencia específica 1011, el mensaje debe ser "Cerradura abierta". Si el bit ingresado rompe la secuencia, no debe mostrar nada.
#include <stdio.h>
int lista[4];
int nuevo;
int main() {
    //primeros 4 digitos
    for (int i = 0; i < 4; i++) {
        scanf("%d", &lista[i]);
        if (lista[i]!= 1 && lista[i]!= 0){
        printf("ingrese valores dentro del rango (0 o 1)");
        return 0;
    }
    }
    if (lista[0] == 1 && lista[1] == 0 && lista[2] == 1 && lista[3] == 1) {
        printf("cerradura abierta\n");
        return 0;
}
//bucle hasta que se cumpla la condicion
    while (!(lista[0] == 1 && lista[1] == 0 && lista[2] == 1 && lista[3] == 1)) {
        scanf("%d", &nuevo);
    if (nuevo != 1 && nuevo != 0){
        printf("ingrese valores dentro del rango (0 o 1)");
     return 0;
}        //se mueve a la izquierda para agregar en la ultima posicion 
        for (int i = 0; i < 3; i++) {
            lista[i] = lista[i + 1];
        }
        // agregar en ultima posicion
        lista[3] = nuevo;
    }
    printf("cerradura abierta\n");
    return 0;
}
