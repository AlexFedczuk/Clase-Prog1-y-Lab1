#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaAlumnos.h"

void MostrarListadoDivisiones(eDivision listaDivisiones[], int tamDivisiones)
{
    int i;

    printf("LISTADO DIVISIONES:\n");
    printf("ID NOMBRE CUATRIMESTRE\n");
    for(i = 0; i < tamDivisiones; i++)
    {
        printf("%2d     %s            %d\n",listaDivisiones[i].idDivision,
                                            listaDivisiones[i].nombreDivision,
                                            listaDivisiones[i].cuatrimestre);
    }
}

void MostrarListadoAlumnos(eAlumno listaAlumnos[], int tamAlumnos)
{
    int i;

    printf("\nLISTADO ALUMNOS:\n");
    printf(" ID    APELLIDO    NOMBRE EDAD\n");
    for(i = 0; i < tamAlumnos; i++)
    {
        printf("%3d %10s %10s  %3d\n", listaAlumnos[i].idAlumno,
                                       listaAlumnos[i].apellidoAlumno,
                                       listaAlumnos[i].nombreAlumno,
                                       listaAlumnos[i].edadAlumno);
    }
}

void MostrarListadoAlumnosConSuDivision(eAlumno listaAlumnos[],
                                        eDivision listaDivisiones[],
                                        int tamAlumnos,
                                        int tamDivisiones)
{
    int i;
    int j;

    printf("\nLISTADO ALUMNOS Y NOMBRE DIVISION:\n");
    printf(" ID    APELLIDO    NOMBRE EDAD DIVISION\n");
    for(i = 0; i < tamAlumnos; i++)
    {
        for(j = 0; j < tamDivisiones; j++)
        {
            if(listaAlumnos[i].idDivision == listaDivisiones[j].idDivision)
            {
                printf("%3d %10s %10s  %3d       %s\n", listaAlumnos[i].idAlumno,
                                                        listaAlumnos[i].apellidoAlumno,
                                                        listaAlumnos[i].nombreAlumno,
                                                        listaAlumnos[i].edadAlumno,
                                                        listaDivisiones[j].nombreDivision);
                break;
            }
        }
    }
}

void MostrarListadoCursosConSusAlumnos(eAlumno listaAlumnos[],
                                       eDivision listaDivisiones[],
                                       int tamAlumnos,
                                       int tamDivisiones)
{
    int i;

    printf("\nCURSOS CON SUS ALUMNOS:\n");
    for(i = 0; i < tamDivisiones; i++)
    {
        printf("\nCURSO %s\n", listaDivisiones[i].nombreDivision);
        MostrarUnCursoYSusAlumnos(listaAlumnos,
                                  tamAlumnos,
                                  listaDivisiones[i].idDivision);
    }
}

void MostrarUnCursoYSusAlumnos(eAlumno listaAlumnos[], int tamAlumnos, int idDivision)
{
    int i;

    printf(" ID    APELLIDO    NOMBRE EDAD\n");
    for(i = 0; i < tamAlumnos; i++)
    {
        if(listaAlumnos[i].idDivision == idDivision)
        {
            printf("%3d %10s %10s  %3d\n", listaAlumnos[i].idAlumno,
                                           listaAlumnos[i].apellidoAlumno,
                                           listaAlumnos[i].nombreAlumno,
                                           listaAlumnos[i].edadAlumno);
        }
    }
}

void DejarElegirAlUsuariQueCursoMostrar(eAlumno listaAlumnos[], int tamAlumnos)
{
    int opcion;

    opcion = MostraMenu(1, 3);

    switch(opcion)
    {
        case 1:
            printf("\nCURSO 1C\n");
            MostrarUnCursoYSusAlumnos(listaAlumnos, tamAlumnos, 1);
            break;
        case 2:
            printf("\nCURSO 2B\n");
            MostrarUnCursoYSusAlumnos(listaAlumnos, tamAlumnos, 3);
            break;
        case 3:
            printf("\nCURSO 3A\n");
            MostrarUnCursoYSusAlumnos(listaAlumnos, tamAlumnos, 2);
            break;
        default:
            break;
    }
}

int MostraMenu(int opcionMinima, int opcionMaxima)
{
    int opcionIngresada;

    printf("\n1. CURSO 1C\n");
    printf("2. CURSO 2B\n");
    printf("3. CURSO 3A\n");
    printf("Elija una opcion para ver un curso: ");
    fflush(stdin);
    scanf("%d", &opcionIngresada);

    do
    {
        if(opcionIngresada < opcionMinima || opcionIngresada > opcionMaxima)
        {
            printf("Error! La opcion ingresada es invalida!\n");
            printf("Elija una opcion del menu: ");
            fflush(stdin);
            scanf("%d", &opcionIngresada);
        }
    }
    while(opcionIngresada < opcionMinima || opcionIngresada > opcionMaxima);

    return opcionIngresada;
}

void InicializarContadorArray(int contadorArray[], int buffer)
{
    int i;

    for(i = 0; i < buffer; i++)
    {
        contadorArray[i] = 0;
    }
}

void MostrarElCursoConMasAlumnos(eAlumno listaAlumnos[],
                                 eDivision listaDivisiones[],
                                 int tamAlumnos,
                                 int tamDivisiones)
{
    int contadorAlumnosDivisiones[tamDivisiones];
    int cantidadAlumnosMaxima;

    int i;
    //int j;

    InicializarContadorArray(contadorAlumnosDivisiones, tamDivisiones);
    cantidadAlumnosMaxima = 0;

    ContarCantidadAlumnosPorDivision(listaDivisiones,
                                     listaAlumnos,
                                     contadorAlumnosDivisiones,
                                     tamDivisiones,
                                     tamAlumnos);

    cantidadAlumnosMaxima = CalcularCantidadMaximaAlumnos(tamDivisiones,
                                                          contadorAlumnosDivisiones);

    for(i = 0; i < tamDivisiones; i++)
    {
        if(contadorAlumnosDivisiones[i] == cantidadAlumnosMaxima)
        {
            printf("\n%s es el curso con mas alumnos\n", listaDivisiones[i].nombreDivision);
        }
    }
}

void ContarCantidadAlumnosPorDivision(eDivision listaDivisiones[],
                                      eAlumno listaAlumnos[],
                                      int contadorArray[],
                                      int tamDivisiones,
                                      int tamAlumnos)
{
    int i;
    int j;

    for(i = 0; i < tamDivisiones; i++)
    {
        for(j = 0; j < tamAlumnos; j++)
        {
            if(listaDivisiones[i].idDivision == listaAlumnos[j].idDivision)
            {
                contadorArray[i]++;
            }
        }
    }
}

int CalcularCantidadMaximaAlumnos(int tamDivisiones, int contadorArray[])
{
    int cantidadAlumnosMaxima;

    int i;

    for(i = 0; i < tamDivisiones; i++)
    {
        if(cantidadAlumnosMaxima < contadorArray[i])
        {
            cantidadAlumnosMaxima = contadorArray[i];
        }
    }

    return cantidadAlumnosMaxima;
}

void MostrarLosAlumnosDeUnCautrimestre(eAlumno listaAlumnos[],
                                       int tamDivisiones,
                                       int tamAlumnos,
                                       int idCuatrimestre,
                                       char numeroCuatrimestre[])
{
    int i;
    int j;

    printf("\nLOS ALUMNOS DEL %s CUATRIMESTRE:\n", numeroCuatrimestre);
    printf(" ID    APELLIDO    NOMBRE EDAD\n");
    for(i = 0; i < tamAlumnos; i++)
    {
        for(j = 0; j < tamDivisiones; j++)
        {
            if(listaAlumnos[i].idDivision == idCuatrimestre)
            {
                printf("%3d %10s %10s  %3d\n", listaAlumnos[i].idAlumno,
                                               listaAlumnos[i].apellidoAlumno,
                                               listaAlumnos[i].nombreAlumno,
                                               listaAlumnos[i].edadAlumno);
                break;
            }
        }
    }
}

void MostrarElCuatrimestreConMenosMujeres(eAlumno listaAlumnos[], int tamAlumnos, eDivision listaDivisiones[], int tamDivisiones)
{
    int contadorMujeresEnCuatrimestres[tamDivisiones];
    int cantidadMujeresMinima;
    int indiceCuatrimestreConMinimoMujeres;

    int i;
    int j;

    //cantidadMujeresMinima = 0;

    InicializarContadorArray(contadorMujeresEnCuatrimestres, tamDivisiones);

    for(i = 0; i < tamAlumnos; i++)
    {
        for(j = 0; j < tamDivisiones; j++)
        {
            if(listaAlumnos[i].idDivision == listaDivisiones[j].idDivision &&
               listaAlumnos[i].sexo == 'f')
            {
                contadorMujeresEnCuatrimestres[j]++;
            }
        }
        //printf("contador: indice[%d] = %d\n",i,contadorMujeresEnCuatrimestres[i]);
    }

    /*for(i = 0; i < 3; i ++)
    {
        printf("contador: indice[%d] = %d\n",i,contadorMujeresEnCuatrimestres[i]);
    }*/


    for(i = 0; i < tamDivisiones; i++)
    {
        if(i == 0 || cantidadMujeresMinima > contadorMujeresEnCuatrimestres[i])
        {
            cantidadMujeresMinima = contadorMujeresEnCuatrimestres[i];
            indiceCuatrimestreConMinimoMujeres = i;
        }
    }

    printf("\nEl cuatrimestre %d es el que tiene menos mujeres\n", listaDivisiones[indiceCuatrimestreConMinimoMujeres].cuatrimestre);
}

void MostrarPromedioEdadesHombresPrimerCuatrimestre(eAlumno listaAlumnos[], int tamAlumnos)
{
    int acumuladorEdadesHombres;
    int contadorHombresPrimerCuatrimestre;
    float promedioEdadesHombresPrimerCuatrimestre;

    int i;

    acumuladorEdadesHombres = 0;
    contadorHombresPrimerCuatrimestre = 0;

    for(i = 0; i < tamAlumnos; i++)
    {
        //for()
        if(listaAlumnos[i].idDivision == 1 && listaAlumnos[i].sexo == 'm')
        {
            acumuladorEdadesHombres = acumuladorEdadesHombres + listaAlumnos[i].edadAlumno;
            contadorHombresPrimerCuatrimestre++;
            //printf("edades: %d\n", listaAlumnos[i].edadAlumno);
            //printf("acumulador: %d\n", acumuladorEdadesHombres);
        }

    }

    if(contadorHombresPrimerCuatrimestre != 0)
    {
        promedioEdadesHombresPrimerCuatrimestre = (float)acumuladorEdadesHombres / contadorHombresPrimerCuatrimestre;
    }

    printf("\nEl promedio de edad de los hombres en el primer cuatri es: %.2f\n", promedioEdadesHombresPrimerCuatrimestre);
}

void ListadoCursoPorCantidadAlumnos(eAlumno alumnosLista[], eDivision divisionesLista[], int tamAlumnos, int tamDivisiones)
{
    int contadorAlumnosCurso[tamDivisiones];
    int contenedorMaximosDecendente[tamDivisiones];
    int numeroAux;

    int i;
    int j;

    eDivision divisionAux;

    InicializarContadorArray(contadorAlumnosCurso, tamDivisiones);

    for(i = 0; i < tamDivisiones; i++)
    {
        for(j = 0; j < tamAlumnos; j++)
        {
            if(alumnosLista[j].idDivision == divisionesLista[i].idDivision)
            {
                contadorAlumnosCurso[i]++;
            }
        }
    }

    for(i = 0; i < tamDivisiones; i++)
    {
        if(i == 0 || contenedorMaximosDecendente[i] < contadorAlumnosCurso[i])
        {
            contenedorMaximosDecendente[i] = contadorAlumnosCurso[i];
        }else
        {
            contenedorMaximosDecendente[i] = contadorAlumnosCurso[i];
        }
    }

    for(i = 0; i < tamDivisiones; i++)
    {
        for(j = i + 1; j < tamDivisiones; j++)
        {
            if(contenedorMaximosDecendente[i] < contenedorMaximosDecendente[j])
            {
                numeroAux = contenedorMaximosDecendente[i];
                contenedorMaximosDecendente[i] = contenedorMaximosDecendente[j];
                contenedorMaximosDecendente[j] = numeroAux;
            }
        }
    }

    for(i = 0; i < tamDivisiones; i++)
    {
        for(j = i + 1; j < tamDivisiones; j++)
        {
            if(contadorAlumnosCurso[i] == contenedorMaximosDecendente[j])
            {
                numeroAux = contadorAlumnosCurso[i];
                contadorAlumnosCurso[i] = contadorAlumnosCurso[j];
                contadorAlumnosCurso[j] = numeroAux;

                divisionAux = divisionesLista[i];
                divisionesLista[i] = divisionesLista[j];
                divisionesLista[j] = divisionAux;
            }
        }
    }

    printf("LISTADO DE CURSOS POR CANTIDAD DE ALUMNOS(decendente):\n");
    for(i = 0; i < tamDivisiones; i++)
    {
        printf("Curso %s\n", divisionesLista[i].nombreDivision);
    }
}
