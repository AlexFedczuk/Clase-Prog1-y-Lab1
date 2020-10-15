#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miBiblioteca.h"

int main()
{
    char nombre [20];
    char apellido [20];
    char apellidoNombre [45];

    PedirUnaCadena(nombre, 19, "Ingrese su primer y segundo nombre: ");

    PedirUnaCadena(apellido, 19, "Ingrese su apellido: ");

    FormalizarApellidoNombreParte1(apellidoNombre, apellido, nombre);

    FormalizarApellidoNombreParte2(45, apellidoNombre);

    puts(apellidoNombre);

    return 0;
}
