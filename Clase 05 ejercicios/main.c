/******************************************************************************

 Apellido y nombre: Alex Fedczuk

 01: se ingresan 10 números en un array , ingresados por el ususario en forma
 secuencial, mostrarlos despues de cargarlos

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [10];
    int i;


    printf("Debe ingresar 10 numeros enteros, ingrese uno a la vez\n");

    for(i = 0; i < 10; i++)
    {
        printf("Ingrese aqui: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nEstos son los numeros que ingreso:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
