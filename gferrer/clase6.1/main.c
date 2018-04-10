#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMOSTRING 20

void mostrarcadena(char aux[MAXIMOSTRING]);
void ingresecadena(char aux[MAXIMOSTRING]);

/*
    declarar variable donde voy a guarar el nombre
    otra variable donde voy a guardar apellido

    char apellido_nombre []; // donde se guarde el "Apellido, Nombre" (1ra letra con mayusculas)
    las variables nombres y apellido no se pueden modificar.

*/

int main()
{
    int len;
    system("cls");
    char cadena[MAXIMOSTRING]={};
    char cadena2[MAXIMOSTRING]={};

    ingresecadena(cadena);
    mostrarcadena(cadena);

    len=strlen( cadena);
    printf("cantidad de caracteres: %d",len );

    strcpy(cadena2,cadena);
    mostrarcadena(cadena2);

    stricmp(cadena,"hola"); // compara cadenas ignorando mayusculas
    strcat(cadena,cadena2);
    strupr(cadena); // convierte a mayusculas
    strupr(cadena2); // convierte a minusculas

    return 0;
}

void mostrarcadena(char aux[MAXIMOSTRING])
{
    printf("\nContenido de la cadena: \n");
    puts(aux);
}
void ingresecadena(char aux[MAXIMOSTRING])
{
    printf("\n Ingrese cadena: ");
    gets(aux);
}
