/******************************************************************************

 Apellido y nombre: Alex Fedczuk

03:
se ingresan 10 números en un array , validar entre 0 y 20  ingresados por el
ususario en forma secuencial, mostrar:
a- La cantidad de que coinciden numeros maximos y sus indices
b- La cantidad de que coinciden numeros minimo y sus indices
c- Luego  solo mostrar los elementos con sus indices que superen el numero 10
d- Mostrar el listado de numeros completo.
e- Mostrar los elementos mayores a 17 o menores a 3
f- Mostar el promedio de todos los numeros ingresados

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "funcionesClase05.h"

int main()
{
    int numeros [10];

    int numeroMaximo;
    int numeroMinimo;
    int cantidadNumerosMaximos;
    int cantidadNumerosMinimos;
    int acumuladorNumeros;
    float promedio;

    int i;

    acumuladorNumeros = 0;

    printf("Debe ingresar 10 numeros enteros entre 0 y 20, ingrese uno a la vez\n");

    CargarNumeros(numeros, 10);

    numeroMaximo = CalcularNumeroMaximo(numeros, 10);

    numeroMinimo = CalcularNumeroMinimo(numeros, 10);

    cantidadNumerosMaximos = ContarNumerosMaximos(numeros, 10, numeroMaximo);

    cantidadNumerosMinimos = ContarNumerosMinimos(numeros, 10, numeroMinimo);

    acumuladorNumeros = AcumularNumeros(numeros, 10);

    promedio = CalcularPromedio(acumuladorNumeros, 10);

    printf("\nLa cantidad de numeros que coinciden con el maximo: %d\n", cantidadNumerosMaximos);
    MostrarNumerosMaximosYIndice(numeros, 10, numeroMaximo);

    printf("\nLa cantidad de numeros que coinciden con el minimo: %d\n", cantidadNumerosMinimos);
    MostrarNumerosMinimosYIndice(numeros, 10, numeroMinimo);

    printf("\nNumeros que superan el 10 y con sus indices: \n");
    for(i = 0; i < 10; i++)
    {
        if(numeros[i] > 10)
        {
            printf("numero: %d, indice: %d\n", numeros[i], i);
        }
    }

    printf("\nLista de los numeros ingresados: \n");
    MostrarListadoNumeros(numeros, 10);

    printf("\nLos elementos mayores a 17:\n");
    for(i = 0; i < 10; i++)
    {
        if(numeros[i] > 17)
        {
            printf("%d\n", numeros[i]);
        }
    }

    printf("\nEl promedio de los numeros ingresados es: %.2f\n", promedio);

    return 0;
}
