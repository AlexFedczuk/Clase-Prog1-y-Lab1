/******************************************************************************

Definir un array de 10 alumnos(id, nombre, apellido, edad)
Definir un array de 3 divisiones (id, nombre, cuatrimestre)
Relacionar los 10 alumnos con las 3 divisiones.
Mostrar:
1. Listado de divisiones.
2. Listado de alumnos.
3. Listado de los alumnos con el NOMBRE de la división
4. Por cada curso, todos sus alumnos.
5. El usuario elige el curso y muestra todos sus alumnos.
6. El/los cursos con mas alumnos.
7. Mostrar los alumnos del segundo cuatrimestre.
8. Mostrar el cuatrimestre con menos mujeres
9. El promedio de edades de los hombres del primer cuatrimestre.
10. Listado de cursos ordenados por cantidad de alumnos (descendentemente)

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaAlumnos.h"

#define TAM_ALUMNOS 10
#define TAM_DIVISIONES 3

int main()
{
    eDivision divisiones[3] = {{1,"1C",1},{2,"3A",3},{3,"2B",2}};
    eAlumno alumnos[10] = {{100,"Juan","Gomez",20,1,'m'},
                           {101,"Sofia","Hoz",23,1,'f'},
                           {102,"Patricia","Gimenez",21,1,'f'},
                           {103,"Agustina","Flor",22,3,'f'},
                           {104,"Bozzo","Hierro",19,1,'m'},
                           {105,"Maria","Argento",18,1,'f'},
                           {106,"Coco","Sanchez",20,3,'m'},
                           {107,"Paul","Millo",24,2,'m'},
                           {108,"Peter","Rafael",26,2,'m'},
                           {109,"Lucia","Guegue",23,3,'f'}};


    //1. Listado de divisiones.
    MostrarListadoDivisiones(divisiones, TAM_DIVISIONES);

    //2. Listado de alumnos.
    MostrarListadoAlumnos(alumnos, TAM_ALUMNOS);

    //3. Listado de los alumnos con el NOMBRE de la división
    MostrarListadoAlumnosConSuDivision(alumnos, divisiones, TAM_ALUMNOS, TAM_DIVISIONES);

    //4. Por cada curso, todos sus alumnos.
    MostrarListadoCursosConSusAlumnos(alumnos, divisiones, TAM_ALUMNOS, TAM_DIVISIONES);

    //5. El usuario elige el curso y muestra todos sus alumnos.
    DejarElegirAlUsuariQueCursoMostrar(alumnos, TAM_ALUMNOS);

    //6. El/los cursos con mas alumnos.
    MostrarElCursoConMasAlumnos(alumnos, divisiones, TAM_ALUMNOS, TAM_DIVISIONES);

    //7. Mostrar los alumnos del segundo cuatrimestre.
    MostrarLosAlumnosDeUnCautrimestre(alumnos, TAM_DIVISIONES, TAM_ALUMNOS, 3, "2do");

    //8. Mostrar el cuatrimestre con menos mujeres
    MostrarElCuatrimestreConMenosMujeres(alumnos, TAM_ALUMNOS, divisiones, TAM_DIVISIONES);

    //9. El promedio de edades de los hombres del primer cuatrimestre.
    MostrarPromedioEdadesHombresPrimerCuatrimestre(alumnos, TAM_ALUMNOS);

    //10. Listado de cursos ordenados por cantidad de alumnos (descendentemente)
    ListadoCursoPorCantidadAlumnos(alumnos, divisiones, TAM_ALUMNOS, TAM_DIVISIONES);

    return 0;
}
