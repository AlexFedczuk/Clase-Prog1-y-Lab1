/******************************************************************************

    Hoy empezaremos a ver estructuras!

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

/*declaracion de estructura
{
    Aqui irian las variables
    variable a;
    variable a;
    variable a;
    ...
}eNombre;*/

typedef struct
{
    int legajo;//Campo o Atributo!
    float sueldo;
    char nombre[25];
    int edad;
}eEmpleado;

eEmpleado cargarEmpleado();
void mostrarUnEmpleado(eEmpleado);


int main()
{
    /*
    Sacar provecho a la estructura:
        Ahora inicializamos un objeto a trabajar..
        eNombreDeEstructura miObjeto;
    */
    //eEmpleado miEmpleado = {1000, 15000.25, "Pepito"};
    //eEmpleado otroEmpleado = {2200, 25000.5, "Pepita"};
    //printf("%d bytes", sizeof (eEmpleado));//Para ver el espacio que ocpa en memoria

    //otroEmpleado = miEmpleado;//Se puede hacer una igualacion con estructuras!
                              //Ya no es necesario pasar dato por dato(como pasa con vectores paralelos)...

    /*printf("legajo: %d sueldo: %.2f nombre: %s\n", miEmpleado.legajo, miEmpleado.sueldo, miEmpleado.nombre);
    printf("legajo: %d sueldo: %.2f nombre: %s\n", otroEmpleado.legajo, otroEmpleado.sueldo, otroEmpleado.nombre);*/


    eEmpleado listaEmpleados[TAM];
    eEmpleado unEmpleado;

    int i;

    unEmpleado = cargarEmpleado();
    mostrarUnEmpleado(unEmpleado);

    otroEmpleado = cargarEmpleado();
    mostrarUnEmpleado(otroEmpleado);


    return 0;
}

eEmpleado cargarEmpleado()
{
   eEmpleado miEmpleado;

   printf("Ingrese legajo: ");
   scanf("%d", &miEmpleado.legajo);
   printf("Ingrese sueldo: ");
   scanf("%f", &miEmpleado.sueldo);
   printf("Ingrese nombre: ");
   fflush(stdin);
   scanf("%[^\n]", miEmpleado.nombre);
   printf("Ingrese edad: ");
   scanf("%d", &miEmpleado.edad);

   return miEmpleado;

}

void mostrarUnEmpleado(eEmpleado unEmpleado)
{
  printf("%d %f %s %d\n", unEmpleado.legajo, unEmpleado.sueldo, unEmpleado.nombre, unEmpleado.edad);
}
