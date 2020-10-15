/******************************************************************************

Apellido y nombre: Fedczuk Alex

La clase de hoy estaremos viendo PUNTEROS!

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void funcionSwap(int*, int*);//Pasaje por referencia

int main()
{
    int x = 10;
    int* punteroEntero = NULL;/*Esto es una variable puntero, y cuando las declaramos
    hay que inicializarlas, sino apuntara a basura!*/

    punteroEntero = &x;/*Con el operador &, indico que estoy pasando
    la direccion de memoria de la variable*/

    printf("valor de *punteroEntero es %d\n", *punteroEntero);

    /**----------------------------------------------------------------------*/
    /*int x;
    int y;

    x = 33;
    y = 77;

    printf("\nAntes x = %d", x);
    printf("\nAntes y = %d\n", y);

    printf("\nLlamo la funcion swapeo!\n");
    funcionSwap(&x, &y);*//*Con el operador &, indico que estoy pasando
    la direccion de memoria de la variable*/

    /*printf("\nDespues x = %d", x);
    printf("\nDespues y = %d\n", y);*/

    return 0;
}

void funcionSwap(int* x, int* y)
{
    int valorAuxiliar;

    valorAuxiliar = *x;//Operador de inacceso
    *x = *y;
    *y = valorAuxiliar;
}
