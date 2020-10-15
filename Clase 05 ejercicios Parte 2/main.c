/******************************************************************************

 Apellido y nombre: Alex Fedczuk

02: se ingresan 10 números en un array , validar entre 0 y 20  ingresados por el
ususario en forma secuencial, mostrar:
el maximo y su indice
el minimo y su indice
y luego  solo mostrar los elementos con sus indices que superen el numero 10
mostrar el listado de numeros completo

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [10];

    int numeroMaximo;
    int indiceMaximo;
    int numeroMinimo;
    int indiceMinimo;

    int i;
    int banderaMaximo;
    int banderaMinimo;

    banderaMaximo = 0;
    banderaMinimo = 0;

    printf("Debe ingresar 10 numeros enteros entre 0 y 20, ingrese uno a la vez\n");

    for(i = 0; i < 10; i++)
    {
        printf("Ingrese aqui: ");
        scanf("%d", &numeros[i]);

        if(numeros[i] < 0 || numeros[i] > 20)
        {
            do
            {
                printf("\nError! El numero ingresado debe ser entre 0 y 20\n");
                printf("Ingrese un numero: ");
                scanf("%d", &numeros[i]);
            }
            while(numeros[i] < 0 || numeros[i] > 20);
        }
    }

    for(i = 0; i < 10; i++)
    {
        if(banderaMaximo == 0)
        {
            numeroMaximo = numeros[i];
            indiceMaximo = i;
            banderaMaximo = 1;
        }else
        {
            if(numeroMaximo < numeros[i])
            {
                numeroMaximo = numeros[i];
                indiceMaximo = i;
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        if(banderaMinimo == 0)
        {
            numeroMinimo = numeros[i];
            indiceMinimo = i;
            banderaMinimo = 1;
        }else
        {
            if(numeroMinimo > numeros[i])
            {
                numeroMinimo = numeros[i];
                indiceMinimo = i;
            }
        }
    }

    printf("\nEl maximo es %d y su indice es %d", numeroMaximo, indiceMaximo);
    printf("\nEl minimo es %d y su indice es %d", numeroMinimo, indiceMinimo);
    printf("\nNumeros que superan el 10 y con sus indices: \n");
    for(i = 0; i < 10; i++)
    {
        if(numeros[i] > 10)
        {
            printf("numero: %d, indice: %d\n", numeros[i], i);
        }
    }
    printf("\nLista de los numeros ingresados: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
