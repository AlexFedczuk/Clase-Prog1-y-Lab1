#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

void HarcCodearValores(int legajos[], float sueldos[], char nombres[][20], int tam);
void IngresarEmpleados(int[], float[], char[][20], int tam);
void IngresarOrdenarPorNombre(int[], float[], char[][20], int tam);
void MostrarEmpleados(int[], float[], char[][20], int tam);

int main()
{
    int legajos[TAM] = {1000,999,666,111,777};
    float sueldos[TAM] = {50000,75000,20000,15000,25000};
    char nombres[TAM][20] = {"Aose","Baria","Cedro","Dusana","Eodolfo"};

    int i;
    int j;

    int auxInt;
    float auxFloat;
    char auxString[25];


    //IngresarEmpleados(legajos, sueldos, nombres, TAM);

    for(i=0; i<TAM-1;i++)
    {
        for(j=i+1; j<TAM; j++)
        {
            //if(legajos[i]>legajos[j])// Este criterio de ordenamiento es para ordenar los legajos!
            if(strcmp(nombres[i], nombres[j]) > 0)// Este criterio es para ordenar alfabeticamente, de Z a A!
            {
                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                auxFloat = sueldos[i];
                sueldos[i] = sueldos[j];
                sueldos[j] = auxFloat;

                strcpy(auxString,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxString);
            }
        }
    }

    /*for(i=0; i<TAM; i++)
    {
        printf("%4d %10.2f %15s\n", legajos[i], sueldos[i], nombres[i]);
    }*/
    MostrarEmpleados(legajos, sueldos, nombres, TAM);

    return 0;
}
// Un valor ilogico en un ARRAY es por ejemplo el -1

void HarcCodearValores(int legajos[], float sueldos[], char nombres[][20], int tam)
{
    int legajosAux[5] = {1000,999,666,111,777};
    float sueldosAux[5] = {50000,75000,20000,15000,25000};
    char nombresAux[5][20] = {"Aose","Baria","Cedro","Dusana","Eodolfo"};

    int i;

    for(i = 0; i < tam; i++)
    {
        legajos[i] = legajosAux[i];
        sueldos[i] = sueldosAux[i];
        strcpy(nombres[i], nombresAux[i]);
    }

}//Esto queda suspendido para la clase del martes (15-09-2020)!

void IngresarEmpleados(int legajos[], float sueldos[], char nombres[][20], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("Ingrese un legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrese un sueldo: ");
        scanf("%f", &sueldos[i]);

        printf("Ingrese un nombre: ");
        fflush(stdin);
        scanf("%s", nombres[i]);
        //scanf("%[^\n]", nombres[i]);
    }
}

void IngresarOrdenarPorNombre(int legajos[], float sueldos[], char nombres[][20], int tam)
{
    int auxInt;
    float auxFloat;
    char auxString[20];

    int i;
    int j;

    for(i=0; i<tam-1;i++)
    {
        for(j=i+1; j<tam; j++)
        {
            //if(legajos[i]>legajos[j])// Este criterio de ordenamiento es para ordenar los legajos!
            if(strcmp(nombres[i], nombres[j]) < 0)// Este criterio es para ordenar alfabeticamente, de Z a A!
            {
                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                auxFloat = sueldos[i];
                sueldos[i] = sueldos[j];
                sueldos[j] = auxFloat;

                strcpy(auxString,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxString);
            }
        }
    }

}

void MostrarEmpleados(int legajos[], float sueldos[], char nombres[][20], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%4d %10.2f %15s\n", legajos[i], sueldos[i], nombres[i]);
    }
}
