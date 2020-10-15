#include "funcionClase04.h"

int CalcularFactorial(int operador)
{
    int resultado;

    if(operador == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = operador * CalcularFactorial(operador - 1);
    }

    return resultado;
}
