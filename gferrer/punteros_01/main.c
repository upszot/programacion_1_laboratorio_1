#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define CANT 3


int main()
{
    int vec[3]={5,9,1};
    system("cls");

    carga_puntero(vec,CANT);
    muestra_valores_puntero(vec,CANT);

    return 0;
}

