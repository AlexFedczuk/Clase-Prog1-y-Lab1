/******************************************************************************

Hoy veremos funciones!
En la clase de hoy tuvimos una introduccion al concepto de funciones y me voy a
poner a desarrollar una...

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
//PASO 1: Empezaremos con el prototipo o declaracion de la funcion...
//typo nombre (parametros);
int SumarNumeros(int primerNumero, int segundoNumero);

int main()
{
    int unNumero;
    int otroNumero;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);

    printf("Ingrese otro numero: ");
    scanf("%d", &otroNumero);
    //PASO 3: Y por ultimo realizaremos la llamada de la funcion.
    suma = SumarNumeros(unNumero, otroNumero);

    printf("\nLa suma de %d y %d es igual a %d\n", unNumero, otroNumero, suma);

    return 0;
}
//PASO 2: Ahora vamos a realizar la logica o el desarrollo de la funcion...
int SumarNumeros(int primerNumero, int segundoNumero)
{
    int resultado;

    resultado = primerNumero + segundoNumero;

    return resultado;
}
