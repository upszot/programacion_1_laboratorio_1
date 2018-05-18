#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int nro;
    char letra;
}dato;

void menu(char *opciones);

void muestra_valores_1(dato *puntero,int tam);
void muestra_valores_2(dato *puntero,int tam);
