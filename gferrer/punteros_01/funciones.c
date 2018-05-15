#include "funciones.h"

/*
Home Work

1. recibe array -> maneja con notacion de array
2. recibo array -> maneja puntero
3. recibo puntero -> manejo array
4. Recibo puntero -> manejo puntero
*/

void carga_puntero(int *puntero,int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("\nIngrese valor: ");
        scanf("%d",puntero+i);
    }
}

void carga_vector(int *puntero,int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("\nIngrese valor: ");
        scanf("%d",puntero[i]);
    }
}

void muestra_valores_puntero(int *puntero,int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("\nVec[%d]= %d",i,*(puntero+i));
    }
    printf("\n\n");
}

void muestra_valores_vector(int *puntero,int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("\nVec[%d]= %d",i,puntero[i]);
    }
    printf("\n\n");
}
