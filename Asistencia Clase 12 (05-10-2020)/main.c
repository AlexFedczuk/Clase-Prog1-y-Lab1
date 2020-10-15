/******************************************************************************

Apellido y nombre: Fedczuk Alex

Craer una funcion que intercambie los valores de las variables recibidas

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void funcionDeIntercambio(int*, int*);//Pasaje por referencia

int main()
{
    printf("\nmodificar valor");
    int primerValor;
    int segundoValor;
    primerValor=33;
    segundoValor=77;
    printf("\nel valor de 'primervalor' es: %d",primerValor);
    printf("\nel valor de 'segundoValor' es: %d",segundoValor);
    funcionDeIntercambio(&primerValor, &segundoValor);
    //funcionDeIntercambio(primerValor,segundoValor);
    printf("\nahora 'primervalor' es 77?: %d",primerValor);//deberia mostrar 77
    printf("\nahora de 'segundoValor' es 33?: %d",segundoValor);//deberia mostrar 33


    return 0;
}

void funcionDeIntercambio(int* primerValor, int* segundoValor)
{
    int valorAuxiliar;

    valorAuxiliar = *primerValor;//Operador de inacceso
    *primerValor = *segundoValor;
    *segundoValor = valorAuxiliar;
}
