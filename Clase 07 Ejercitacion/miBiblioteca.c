#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "miBiblioteca.h"

void PedirUnaCadena(char cadena[], int buffer, char mensaje[])
{
    printf(mensaje);
    fflush(stdin);
    gets(cadena);

    while(strlen(cadena) > buffer)
    {
        printf("\nError! No ingrese mas de %d caracteres!\n", buffer);
        printf(mensaje);
        fflush(stdin);
        gets(cadena);
    }
}

void FormalizarApellidoNombreParte1(char apellidoNombre[], char apellido[], char nombre[])
{
    strcpy(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre, nombre);
    strlwr(apellidoNombre);
}

void FormalizarApellidoNombreParte2(int buffer, char apellidoNombre[])
{
    int i;

    for(i = 0; i < buffer; i++)
    {
        if(i == 0)
        {
            apellidoNombre[i] = toupper(apellidoNombre[i]);
        }else
        {
            if(apellidoNombre[i] == ' ')
            {
                apellidoNombre[i + 1] = toupper(apellidoNombre[i + 1]);
            }
        }
    }
}
