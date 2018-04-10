#include <stdio.h>
#include <stdlib.h>
//#include <curses.h>
//#include <conio.h>

void mostrarvector(int[],int );
void cargarvector(int [],int );
void ordenavector(int [],int);

void menu(int opcion);

int main()
{
    int op;
    //int vector[5]={};
    int vector[5]={1,5,6,8,3};
    do
    {
        menu(&op);
        switch(op)
        {
            case 1:
                cargarvector(vector,5);
                break;
            case 2:
                mostrarvector(vector,5);
                break;
            case 3:
                ordenavector(vector,5);
                break;
            case 4:
                BuscaMaximo(vector,5);
                break;
            case 5:
                break;
        }
    }while(op!=5);

    return 0;
}

void mostrarvector(int vector[],int tamanio)
{
    int i;
    for(i =0; i<tamanio;i++)
    {
        printf("\nPosicion %d: %d",i,vector[i]);
    }
    printf("\n\n");
}
void cargarvector(int vector[],int tamanio)
{
    int i;
    for(i =0; i<tamanio;i++)
    {
        printf("Posicion %d: ",i);
        scanf("%d",&vector[i]);
    }
}

void ordenavector(int vector[],int cant)
{//metodo de la burbuja
    int aux;
    for(int i =0;i<cant-1;i++)
    {
        for(int j=i+1;j<cant;j++)
        {
            if(vector[i]<vector[j])
            {
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }

}

int BuscaMaximo(int vector [],int cant)
{
    int maximo;
        for(int i=0;i<cant;i++)
        {
            if((i==0)|| (vector[i]>maximo))
            {
                maximo=vector[i];
            }
        }
        printf("\n El valor maximo es: %d",maximo);

}

void menu(int opcion)
{
    printf("1. Cargar Vector: \n");
    printf("2. Mostrar Vector: \n");
    printf("3. Ordenar Vector: \n");
    printf("4. Buscar Maximo y mostrar posicion: \n");
    printf("5. Salir: \n");
    printf("\Ingrese opcion \n");
    scanf("%d",&opcion);
}
