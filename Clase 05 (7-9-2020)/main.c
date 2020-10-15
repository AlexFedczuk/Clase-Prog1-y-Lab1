#include <stdio.h>
#include <stdlib.h>

void CargarNumeros(int numeros[], int tam);
//Primer PARAM: El array a trabajar
//Segundo PARAM: El tamanio del Array

int main()
{
    //int numero; Una variable escalar
    int numeros [5]; //Esto es un array, un vector
    //int i;// Variable de control, 'Indice'

    /*numero [2] = 100; En esta linea le estoy diciendo al
    copilador que le asigne el valor '100' en la posicion
    indice '[2]' del vector*/

    /*for(i = 0; i < 5; i++)
    {
        printf("%d\n", numeros[i]);
    }Este Bucle For, muestra los valores 'basura', que encuentra en los
    elementos de este vector*/

    /*for(i = 0; i < 5; i++)
    {
        printf("Ingrese un numero entero: ");
        scanf("%d", &numeros[i]);
    }
    for(i = 0; i < 5; i++)
    {
        printf("\nEn el indice [%d], de este vector se encuentra el valor %d",
               i, numeros[i]);
    } En estos dos bucles for, se le pide al usuario ingrese numeros enteros
    y mustra el valor ingresado y donde se guardo, en el vector*/

    /*for(i = 0; i < 10; i++)
    {
        printf("Ingrese aqui: ");
        scanf("%d", &numeros[i]);
    }Hay que pasar este bloque de codigo a una funcion!*/

    CargarNumeros(numeros, 10);
    //Asi queda la carga de numeros en el array mas eficiente y modulado!

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}

void CargarNumeros(int numeros[], int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("Ingrese aqui: ");
        scanf("%d", &numeros[i]);
    }
}
