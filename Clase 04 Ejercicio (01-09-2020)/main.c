/*******************************************************************************************

    Apellido y nombre: Fedczuk Alex

    Tengo que realizar una funcion que pueda realizar la factorizacion
    de numeros y que a la ves sea una funcion recursiva... Tambien, ya que
    estamos, voy a crear una biblioteca para guardar las funciones.


********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "funcionClase04.h"

int main()
{
    int operador;
    int resultado;

    operador = 5;

    resultado = CalcularFactorial(operador);

    printf("%d! = %d", operador, resultado);

    return 0;
}
