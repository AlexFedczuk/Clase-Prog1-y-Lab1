typedef struct
{
    int idAlumno;
    char nombreAlumno[25];
    char apellidoAlumno[25];
    int edadAlumno;
    int idDivision;
    char sexo;
}eAlumno;

typedef struct
{
    int idDivision;
    char nombreDivision[25];
    int cuatrimestre;
}eDivision;

void MostrarListadoDivisiones(eDivision listaDivisiones[], int tamDivisiones);
void MostrarListadoAlumnos(eAlumno listaAlumnos[], int tamAlumnos);
void MostrarListadoAlumnosConSuDivision(eAlumno listaAlumnos[],
                                        eDivision listaDivisiones[],
                                        int tamAlumnos,
                                        int tamDivisiones);
void MostrarListadoCursosConSusAlumnos(eAlumno listaAlumnos[],
                                       eDivision listaDivisiones[],
                                       int tamAlumnos,
                                       int tamDivisiones);
void MostrarUnCursoYSusAlumnos(eAlumno listaAlumnos[], int tamAlumnos, int idDivision);
void DejarElegirAlUsuariQueCursoMostrar(eAlumno listaAlumnos[], int tamAlumnos);
int MostraMenu(int opcionMinima, int opcionMaxima);
void MostrarElCursoConMasAlumnos(eAlumno listaAlumnos[],
                                 eDivision listaDivisiones[],
                                 int tamAlumnos,
                                 int tamDivisiones);
void InicializarContadorArray(int contadorArray[], int buffer);
void ContarCantidadAlumnosPorDivision(eDivision listaDivisiones[],
                                      eAlumno listaAlumnos[],
                                      int contadorArray[],
                                      int tamDivisiones,
                                      int tamAlumnos);
int CalcularCantidadMaximaAlumnos(int tamDivisiones, int contadorArray[]);
void MostrarLosAlumnosDeUnCautrimestre(eAlumno listaAlumnos[],
                                       int tamDivisiones,
                                       int tamAlumnos,
                                       int idCuatrimestre,
                                       char numeroCuatrimestre[]);
void MostrarElCuatrimestreConMenosMujeres(eAlumno listaAlumnos[], int tamAlumnos, eDivision listaDivisiones[], int tamDivisiones);
void MostrarPromedioEdadesHombresPrimerCuatrimestre(eAlumno listaAlumnos[], int tamAlumnos);
void ListadoCursoPorCantidadAlumnos(eAlumno alumnosLista[], eDivision divisionesLista[], int tamAlumnos, int tamDivisiones);
