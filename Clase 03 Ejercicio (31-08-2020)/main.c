/******************************************************************************
Apellido y Nombre: Fedczuk Alex


Con lo visto de hoy, tenemos que hacer un programa que pueda realizar suma,
resta, multiplicacion y division...

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int PedirUnNumero(char mensaje[20]);

int SumarNumeros(int primerNumero, int segundoNumero);
int RestarNumeros(int primerNumero, int segundoNumero);
int MultiplicarNumeros(int primerNumero, int segundoNumero);
float DividirNumeros(int primerNumero, int segundoNumero);

void MostrarResultados(int unNumero,
                       int otroNumero,
                       int resultadoSuma,
                       int resultadoResta,
                       int resultadoMultiplicacion,
                       float resultadoDivision);

int main()
{
    int unNumero;
    int otroNumero;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    float resultadoDivision;

    unNumero = PedirUnNumero("Ingrese un numero: ");
    otroNumero = PedirUnNumero("Ingrese otro numero: ");

    resultadoSuma = SumarNumeros(unNumero, otroNumero);
    resultadoResta = RestarNumeros(unNumero, otroNumero);
    resultadoMultiplicacion = MultiplicarNumeros(unNumero, otroNumero);
    resultadoDivision = DividirNumeros(unNumero, otroNumero);

    MostrarResultados(unNumero,
                      otroNumero,
                      resultadoSuma,
                      resultadoResta,
                      resultadoMultiplicacion,
                      resultadoDivision);

    return 0;
}

int PedirUnNumero(char mensaje[20])
{
    int numeroIngresado;

    printf(mensaje);
    scanf("%d", &numeroIngresado);

    return numeroIngresado;
}

int SumarNumeros(int primerNumero, int segundoNumero)
{
    int resultado;

    resultado = primerNumero + segundoNumero;

    return resultado;
}

int RestarNumeros(int primerNumero, int segundoNumero)
{
    int resultado;

    resultado = primerNumero - segundoNumero;

    return resultado;
}

int MultiplicarNumeros(int primerNumero, int segundoNumero)
{
    int resultado;

    resultado = primerNumero * segundoNumero;

    return resultado;
}

float DividirNumeros(int primerNumero, int segundoNumero)
{
    int resultado;

    if(segundoNumero != 0)
    {
        resultado = (float)primerNumero / segundoNumero;
    }

    return resultado;
}

void MostrarResultados(int unNumero,
                       int otroNumero,
                       int resultadoSuma,
                       int resultadoResta,
                       int resultadoMultiplicacion,
                       float resultadoDivision)
{
    printf("\nLa suma de %d mas %d es igual a %d", unNumero, otroNumero, resultadoSuma);
    printf("\nLa resta de %d menos %d es igual a %d", unNumero, otroNumero, resultadoResta);
    printf("\nLa multiplicacion de %d por %d es igual a %d", unNumero, otroNumero, resultadoMultiplicacion);
    if(otroNumero == 0)
    {
        printf("\nError! No se puede dividir por cero!\n");
    }else
    {
        printf("\nLa division de %d dividido %d es igual a %.2f\n", unNumero, otroNumero, resultadoDivision);
    }
}
