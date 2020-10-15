/******************************************************************************

Apellido y nombre: Fedczuk Alex

1- funcion que reciba un parametro y lo cargue dentro de la función

2- Funcion que recibe dos numeros flotantes, y un puntero a flotante llamado maximo, retorna int.
esta funcion nos retorna el maximo en el puntero y 0 si son los dos iguales o 1 si hay un maximo
ejemplo :
a-si pasamos { 1,3} , el puntero deberia valer 3 y la funcion retornaria 1
b-si pasamos { 2,2} , el puntero deberia valer 2 y la funcion retornaria 0

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int cargarValor(int* dato);
int DevolverElNumeroMaximo(float primerNumero, float segundoNumero, float* maximo);

int main()
{
    int numero;
    float numeroMaximo;
    int resultado;

     // Parte 1
     if(cargarValor(&numero) == 0)
     {
         printf("\nNo hubo error! El valor del dato ingresado es: %d\n", numero);
     }else
     {
         printf("\nError! El dato no se pudo carga\n");
     }

    //Parte 2
    resultado = DevolverElNumeroMaximo(5.50, 4.25, &numeroMaximo);

    printf("valor del puntero es %d\n\n", numero);
    printf("Resultado de la funcion es %d y el numero maximo es %.2f\n",resultado,
                                                                       numeroMaximo);

    return 0;
}

int cargarValor(int* dato)
{
    int retorno;

    retorno = 1;//Retorna 1 si hubo un error!

    if(dato != NULL)
    {
        printf("\Ingrese un numero: ");
        scanf("%d", dato);
        retorno = 0;//Retorna 0 si NO hubo ningun error!
    }else
    {
        printf("Error!\n");
    }

    return retorno;
}

int DevolverElNumeroMaximo(float primerNumero, float segundoNumero, float* maximo)
{
    int resultado;
    float numeroMaximo;

    if(primerNumero < segundoNumero)
    {
        numeroMaximo = segundoNumero;
        maximo = &numeroMaximo;
        resultado = 1;
    }else
    {
        if(primerNumero > segundoNumero)
        {
            numeroMaximo = primerNumero;
            maximo = &numeroMaximo;
            resultado = 1;
        }else
        {
            resultado = 0;
        }
    }





    return resultado;
}
