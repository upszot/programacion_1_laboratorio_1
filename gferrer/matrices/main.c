#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAB 9
#define TAM 2


float calculapromedio(int nota,int nota2);
void ordenaVectores(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50], int TipoOrden );
void mostrar_resultado(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50], int cantidad);
void cargaVectores(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50]);
void CargaAlumno(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50], int index);
void intercambia_posicion(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50], int posAnt, int postSig);

void menu();
int BuscarLibre(int [],int);

int main()
{
    int legajo[TAM]={};
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    char nombre[TAM][50];
    int index;
    char seguir='s';
    int opcion;

    do
    {
        system("cls");
        menu();
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1: //cargar
                index=BuscarLibre(legajo,TAM);
                CargaAlumno(legajo,nota1,nota2,promedio, nombre, index);
                //llamo a funcion cargar
                break;
            case 2: //Mostrar
                mostrar_resultado(legajo,nota1,nota2,promedio,nombre,TAM);
                system("pause");
                break;
            case 3: //Modificar
                break;
            case 4: //Baja
                break;
            case 5: //Ordenar
                ordenaVectores(legajo,nota1,nota2,promedio,nombre,1);
                break;
            case 6: //Salir
                seguir = 'n';
                break;
        }
    }while(seguir=='s');

    //cargaVectores(legajo,nota1,nota2,promedio,nombre);


    return 0;
}

void menu()
{
    printf("\n\n 1 Carga: ");
    printf("\n 2 Mostrar: ");
    printf("\n 3 Modificar: ");
    printf("\n 4 Baja: ");
    printf("\n 5 Ordenar: ");
    printf("\n 6 Salir (s): ");
    printf("\n\nElija opcion: ");
}

int BuscarLibre(int legajo[],int cantidad)
{
    int index=-1;
    for(int i=0;i<cantidad;i++)
    {
        if(legajo[i]==0)
        {
            index=i;
        }
    }
    return index;
}

float calculapromedio(int nota,int nota2)
{
    float rta;
    rta= ((float)nota+nota2)/2;
    return rta;
}

void CargaAlumno(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50], int index)
{
    do
    {
        printf("Ingrese el legajo del alumno: ");
        scanf("%d", &legajo[index]);
        if(legajo[index] < 1)
        {
            printf("El numero de legajo debe ser positivo\n");
        }
        } while(legajo[index] < 1);

        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(nombre[index]);

        do
        {
            printf("Ingrese la primer nota del alumno: ");
            scanf("%d", &nota1[index]);
            if(nota1[index] < 1 || nota1[index] > 10)
            {
                printf("La nota debe estar comprendida entre 1 y 10\n");
            }
        } while(nota1[index] < 1 || nota1[index] > 10);

        do
        {
            printf("Ingrese la segunda nota del alumno: ");
            scanf("%d", &nota2[index]);
            if(nota2[index] < 1 || nota2[index] > 10)
            {
                printf("La nota debe estar comprendida entre 1 y 10\n");
            }
        } while(nota2[index] < 1 || nota2[index] > 10);

        promedio[index]=calculapromedio(nota1[index],nota2[index]);
}

void cargaVectores(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50])
{
    for(int i = 0; i < TAM; i++)
    {
        do
        {
            printf("Ingrese el legajo del alumno %d: ", i + 1);
            scanf("%d", &legajo[i]);
            if(legajo[i] < 1)
            {
                printf("El numero de legajo debe ser positivo\n");
            }
        } while(legajo[i] < 1);

        fflush(stdin);
        printf("Ingrese el nombre del alumno %d: ", i + 1);
        gets(nombre[i]);

        do
        {
            printf("Ingrese la primer nota del alumno %d: ", i + 1);
            scanf("%d", &nota1[i]);
            if(nota1[i] < 1 || nota1[i] > 10)
            {
                printf("La nota debe estar comprendida entre 1 y 10\n");
            }
        } while(nota1[i] < 1 || nota1[i] > 10);

        do
        {
            printf("Ingrese la segunda nota del alumno %d: ", i + 1);
            scanf("%d", &nota2[i]);
            if(nota2[i] < 1 || nota2[i] > 10)
            {
                printf("La nota debe estar comprendida entre 1 y 10\n");
            }
        } while(nota2[i] < 1 || nota2[i] > 10);

        promedio[i]=calculapromedio(nota1[i],nota2[i]);
    }//FIN for(int i = 0; i < TAM; i++)
}
void ordenaVectores(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50], int TipoOrden )
{

    for(int i=0;i<TAM -1;i++)
    {
        for(int j=i+1;j<TAM ;j++)
        {
            switch(TipoOrden)
            {
                case 1: //ordena por promedio mayor a menor
                    if(promedio[i]<promedio[j])
                    {// los muevo
                        intercambia_posicion( legajo, nota1, nota2, promedio,  nombre,  i,  j);
                    } //FIN if(promedio[i]<promedio[j])
                    break;
                case 2:
                    break;

            }

        }
    }
}
void intercambia_posicion(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50], int posAnt, int postSig)
{
    float aux_float;
    int aux_int;
    char aux_char[50];

    aux_float=promedio[posAnt];
    promedio[posAnt]=promedio[postSig];
    promedio[postSig]=aux_float;

    aux_int=nota1[posAnt];
    nota1[posAnt]=nota1[postSig];
    nota1[postSig]=aux_int;

    aux_int=nota2[posAnt];
    nota2[posAnt]=nota2[postSig];
    nota2[postSig]=aux_int;

    strcpy(aux_char,nombre[posAnt]);
    strcpy(nombre[posAnt],nombre[postSig]);
    strcpy(nombre[postSig],aux_char);
}

void mostrar_resultado(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50], int cantidad)
{

    printf("\n---------------------------------------\n");
    printf("LEGAJO%cNOMBRE%cNOTA 1%cNOTA 2%cPROMEDIO\n", TAB, TAB, TAB);
    printf("---------------------------------------\n");

    for(int i = 0; i < cantidad; i++)
    {
        if(legajo[i]!=0)
        printf("%d%c%c%s%c%d%c%d%c%f\n", legajo[i], TAB,TAB, nombre[i], TAB, nota1[i], TAB, nota2[i], TAB, promedio[i]);
    }
    printf("---------------------------------------\n");
}
