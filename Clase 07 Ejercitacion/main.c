#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "miBiblioteca.h"

#define TAM 5

//void HardCodearArray(int legajos[], char nombres[], float sueldos[], int tam);//No estoy preparado aun...
void InicializarArray(int legajos[], char nombres[][25], float sueldos[], int tam);//No estoy preparado aun...
int MostrarMenuYDevolverOpcion(int opcionMenor, int opcionMayor);
void IngresarEmpleados(int legajos[], char nombres[][25], float sueldos[], int tam);
void EliminarUnEmpleado(int legajos[], char nombres[][25], float sueldos[], int tam);
void MostrarDatosArray(int legajos[], char nombres[][25], float sueldos[], int tam);
void ModificarUnEmpleado(int legajos[], char nombres[][25], float sueldos[], int tam);


int PedirNumeroEntero(char mensaje[]);
void PedirUnNombreArray(char mensaje[], char nombre[]);
float PedirNumeroFlotante(char mensaje[]);
int BuscarEmpleadoPorIndice(int legajos[], char mensaje[], int tam);

int main()
{
    int legajos[TAM] = {3, 2, 1, 5, 4};
    char nombres[TAM][25] = {"Carlos", "Bauti", "Alex", "Estor", "Dontor"};
    float sueldos[TAM] = {25000, 20000, 150000, 30000, 35000};

    //InicializarArray(legajos, nombres, sueldos, TAM);

    int opcion;

    do
    {
        opcion = MostrarMenuYDevolverOpcion(1, 5);

        switch(opcion)
        {
            case 1:
                IngresarEmpleados(legajos, nombres, sueldos, TAM);
                break;

            case 2:
                EliminarUnEmpleado(legajos, nombres, sueldos, TAM);
                break;

            case 3:
                //Falta codear...
                break;

            case 4:
                MostrarDatosArray(legajos, nombres, sueldos, TAM);
                break;

            default:
                break;
        }
    }while(opcion != 5);

    return 0;
}

/*void HardCodearArray(int legajos[], char nombres[], float sueldos[], int tam)
{
    legajos[tam] = {0003, 0002, 0001, 0005, 0004};
    nombres[tam][25] = {"Carlos", "Bauti", "Alex", "Estor", "Dontor"};
    sueldos[tam] = {25000, 20000, 150000, 30000, 35000};
}*/

void InicializarArray(int legajos[], char nombres[][25], float sueldos[], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        legajos[i] = -1;
        strcpy(nombres[i], " ");
        sueldos[i] = 0;
    }
}

int MostrarMenuYDevolverOpcion(int opcionMenor, int opcionMayor)
{
    int opcionElegida;

    //printf("\t*Menu principal*\n\n");
    printf("\t*Menu principal*\n\n");
    //printf("1. opcion");
    printf("1. Ingresar un/unos empleado/s\n");
    //printf("2. opcion");
    printf("2. Dar de baja un empleado\n");
    printf("3. Modificar empleado\n");
    printf("4. Mostrar empleados\n");
    printf("5. Salir\n\n");
    printf("Ingresar opcion: ");
    fflush(stdin);
    scanf("%d", &opcionElegida);
    do
    {
        if(opcionElegida < opcionMenor || opcionElegida > opcionMayor)
        {
            printf("\nError! Opcion invalida!\n");
            printf("Ingresar una opcion del menu: ");
            fflush(stdin);
            scanf("%d", &opcionElegida);
        }
    }
    while(opcionElegida < opcionMenor || opcionElegida > opcionMayor);

    return opcionElegida;
}

void IngresarEmpleados(int legajos[], char nombres[][25], float sueldos[], int tam)
{
    int i;
    char respuesta;

    for(i = 0; i < tam; i++)
    {
        legajos[i] = PedirNumeroEntero("\nIngrese su legajo: ");

        PedirUnNombreArray("Ingrese su nombre: ", nombres[i]);

        sueldos[i] = PedirNumeroFlotante("Ingrese su sueldo: ");

        printf("Desea ingresar otro empleado (s/n): ");
        fflush(stdin);
        scanf("%c", &respuesta);
        if(respuesta == 'n' || respuesta == 'N')
        {
            break;
        }
    }
}

void EliminarUnEmpleado(int legajos[], char nombres[][25], float sueldos[], int tam)
{
    int legajoEmpleado;

    int i;

    legajoEmpleado = BuscarEmpleadoPorIndice(legajos,"\nIngrese el legajo del empleado que quiere eliminar: " , tam);

    for(i = 0; i < tam; i++)
    {
        if(legajoEmpleado == legajos[i])
        {
            legajos[i] = -1;
            strcpy(nombres[i], " ");
            sueldos[i] = 0;
            break;
        }
    }
}

void MostrarDatosArray(int legajos[], char nombres[][25], float sueldos[], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("%04d %s %.2f\n", legajos[i], nombres[i], sueldos[i]);
    }
}

void ModificarUnEmpleado(int legajos[], char nombres[][25], float sueldos[], int tam)
{
    int indiceIngresado;
    int i;

    indiceEncontrado = BuscarEmpleadoPorIndice(legajos, "\nIngresar el legajo del empleado que quiere modificar: ", tam);

    for(i = 0; i < tam; i ++)
    {
        if(indiceIngresado == i)
        {

        }
    }
}

//------------------------------------------------------------------------------------

int PedirNumeroEntero(char mensaje[])
{
    int numero;

    printf(mensaje);
    fflush(stdin);
    scanf("%d", &numero);

    return numero;
}

void PedirUnNombreArray(char mensaje[], char nombre[])
{
    printf(mensaje);
    fflush(stdin);
    gets(nombre);
}

float PedirNumeroFlotante(char mensaje[])
{
    float numero;

    printf(mensaje);
    fflush(stdin);
    scanf("%f", &numero);

    return numero;
}

int BuscarEmpleadoPorIndice(int legajos[], char mensaje[], int tam)
{
    int indiceEncontrado;
    int legajoIngresado;

    int i;

    indiceEncontrado = -1;

    printf(mensaje);
    scanf("%d", &legajoIngresado);

    for(i = 0; i < tam; i++)
    {
        if(legajoIngresado == legajos[i])
        {
            indiceEncontrado = i;
            break;
        }
    }

    if(indiceEncontrado == -1)
    {
        printf("\nEl el legajo ingresado no esta afiliado a ningun empleado!");
    }

    return indiceEncontrado;
}
