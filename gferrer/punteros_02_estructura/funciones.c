#include "funciones.h"

void menu(char *opciones)
{
    system("cls");
    printf("%s \n",opciones);
    printf("\n0.  Salir \n");
    printf("\n\tIngrese Opcion: ");
}


void muestra_valores_1(dato *puntero,int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("\nVec[%d]= %d",i,( *(puntero+i) ).nro)   ;
        printf("\tVec[%d]= %c",i,( *(puntero+i) ).letra)   ;
    }
    printf("\n\n");
    system("pause");
}

void muestra_valores_2(dato *puntero,int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("\nVec[%d]= %d",i,(puntero+i)->nro )   ;
        printf("\tVec[%d]= %c",i,(puntero+i)->letra )   ;
    }
    printf("\n\n");
    system("pause");
}
