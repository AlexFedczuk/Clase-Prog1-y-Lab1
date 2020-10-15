#include <stdio.h>
#include "funcionesClase05.h"

void CargarNumeros(int vector[], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("Ingrese aqui: ");
        scanf("%d", &vector[i]);

        if(vector[i] < 0 || vector[i] > 20)
        {
            do
            {
                printf("\nError! El numero ingresado debe ser entre 0 y 20\n");
                printf("Ingrese un numero: ");
                scanf("%d", &vector[i]);
            }
            while(vector[i] < 0 || vector[i] > 20);
        }
    }
}

int CalcularNumeroMaximo(int vector[], int tam)
{
    int i;
    int numeroMaximo;

    for(i = 0; i < tam; i++)
    {
        if(i == 0 || numeroMaximo < vector[i])
        {
            numeroMaximo = vector[i];
        }
    }

    return numeroMaximo;
}

int CalcularNumeroMinimo(int vector[], int tam)
{
    int i;
    int numeroMinimo;

    for(i = 0; i < tam; i++)
    {
        if(i == 0 || numeroMinimo > vector[i])
        {
            numeroMinimo = vector[i];
        }
    }

    return numeroMinimo;
}

int AcumularNumeros(int vector[], int tam)
{
    int i;
    int acumuladorNumeros;

    for(i = 0; i < tam; i++)
    {
        acumuladorNumeros = acumuladorNumeros + vector[i];
    }

    return acumuladorNumeros;
}

float CalcularPromedio(int total, int unidades)
{
    float promedio;

    if(unidades != 0)
    {
        promedio = (float)total / unidades;
    }

    return promedio;
}

int ContarNumerosMaximos(int vector[], int tam, int numeroMaximo)
{
    int i;
    int contador;

    contador = 0;

    for(i = 0; i < tam; i++)
    {
        if(vector[i] == numeroMaximo)
        {
            contador++;
        }
    }

    return contador;
}

int ContarNumerosMinimos(int vector[], int tam, int numeroMinimo)
{
    int i;
    int contador;

    contador = 0;

    for(i = 0; i < tam; i++)
    {
        if(vector[i] == numeroMinimo)
        {
            contador++;
        }
    }

    return contador;
}

void MostrarNumerosMaximosYIndice(int vector[], int tam, int numeroMaximo)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        if(vector[i] == numeroMaximo)
        {
            printf("numero: %d, indice: %d\n", vector[i], i);
        }
    }
}

void MostrarNumerosMinimosYIndice(int vector[], int tam, int numeroMinimo)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        if(vector[i] == numeroMinimo)
        {
            printf("numero: %d, indice: %d\n", vector[i], i);
        }
    }
}

void MostrarListadoNumeros(int vector[], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("%d\n", vector[i]);
    }
}

