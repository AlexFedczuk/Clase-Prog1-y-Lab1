#include <stdio.h>
#include <stdlib.h>
/*Cuando vamos a trabajar con cadenas de caracteres
hay que llammar la siguiente biblioteca*/
#include <string.h>

int main()
{
    char cadenaCaracteres [5] = "Hola";
    char segundaCadena [5] = "Chau";
    char otraCadena [5] = "hola";
    int cantidad;
    int comparacion;
    int comparacionStrcmp;

    /*
    Esta funcion STRLEN me dice cuantos caracteres tiene la cadena:
        Por ej: "Hola" => 4 caracteres, el '\0' no lo cuenta!
    */
    cantidad = strlen(cadenaCaracteres);

    /*
    Esta funcion STRCPY me permite pasar a una cadena de caracteres
    un contenido(string), o incluso, pasar el contenido de un string
    a OTRO string:
        Por ej:
        strcpy(otraCadena, cadenaCaracteres);

        otraCadena = cadenaCaracteres;
    */
    strcpy(segundaCadena, cadenaCaracteres);

    /*
    Esta funcion STRCMP me permite comparar dos STRINGS entre si,
    y saber si son iguales o no. Si son IGUALES(0), si son
    DISTINTAS(1):
        Por ej:
    */
    comparacionStrcmp = strcmp(cadenaCaracteres,otraCadena);

    /*
    Esta funcion STRICMP hace lo mismo que la funcion STRCMP,
    pero IGNORA LAS MAYUSCULAS, no las considera en la comparacion:
        Por ej:
    */
    comparacion = stricmp(cadenaCaracteres,otraCadena);

    /*
    Esta funcion STRLWR te permite dejar todos los caracteres en
    LOWER CASE, minusculas.
    */
    strlwr();//REVISAR!

    /*
    Esta funcion STRUPR te permite dejar todos los caracteres en
    UPPER CASE, mayusculas.
    */
    strupr();//REVISAR!

    /*
    Esta funcion PUTS al parecer te permite MOSTRAR la cadena de
    caracteres que tenga la variable de contenido sin la necesidad
    de PRINTF...
    */
    puts();

    /*
    Esta funcion STRCAT te permite CONCATENAR dos cadenas.
    AVISO: Cuidado con desbordar la variable a modificar!
    */
    strcat();

    /*
    Esta funcion GETS te permite GUARDAR una cadena de caracteres,
    en un ARRAY o VECTOR, sin el problema de perder parte del contenido
    como pasa con el SCANF.
    Consejo: GUARDA CADENAS DE CARACTERES CON GETS, el resto guarda
    con un SCANF.
    */
    gets();


    printf("%s\n", otraCadena);
    printf("comparacion: %d\n",comparacion);
    printf("comparacion: %d\n",comparacionStrcmp);

    return 0;
}
