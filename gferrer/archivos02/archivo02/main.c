#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM_MONEDA 10


int main()
{
    char seguir='s';
    int opcion;
    int Err=0;
    char Archivo[15]="fichero.txt";
    char Archivo2[15]="fichero.bin";

    FILE *fp; //puntero a estructura FILE de stdio
    char buffer[100]="\nEsto es un texto dentro del fichero.";
    char buffin[100];
    int nro=123;
    char id[10];
    char nombre[10];
    char apellido[10];
    int cont=0;
    int idNro;
    do
    {
            menu("1. Escribir en archivo:(modo texto) \n"
                 "2. Escribir en archivo:(modo binario) \n"
                 "3. Borrar archivos \n"
                 "5. Leer archivo: (modo texto) \n"
                 "6. Leer archivo: (modo binario) \n"
                 "7.  \n"
                 "8. Leer CSV:  \n"
                 );

            scanf("%d",&opcion);
            switch(opcion)
            {
                case 1:
                   // Err=Alta_moneda(moneda,TAM_MONEDA);
                    fp=fopen(Archivo,"w");
                    fwrite(&nro,sizeof(int),1,fp);// otra forma de escribir en un archivo...
                    fclose(fp);
                    break;
                case 2:
                    fp=fopen(Archivo2,"wb");
                    fwrite(&nro,sizeof(int),1,fp);// otra forma de escribir en un archivo...
                    fclose(fp);
                    break;
                case 3:
                    remove(Archivo);//Borra el archivo
                    remove(Archivo2);//Borra el archivo
                    break;
                case 5:
                    fp=fopen(Archivo,"r");
                    system("cls");
                    printf("Texto del archivo: \n");
                    printf("--------------------\n");
                    while(!feof(fp))
                    {
                        if(feof(fp))
                        {//soluciona bug de EOF falso
                            break;
                        }
                        fread(&nro,sizeof(int),1,fp);
                        printf("\n valor: %d",nro);
                    }

                    system("pause");
                    break;
                case 6:
                    fp=fopen(Archivo,"rb");
                    system("cls");
                    printf("Texto del archivo: \n");
                    printf("--------------------\n");
                    while(!feof(fp))
                    {
                        if(feof(fp))
                        {//soluciona bug de EOF falso
                            break;
                        }
                        fread(&nro,sizeof(int),1,fp);
                        printf("\n valor: %d",nro);
                    }

                    system("pause");
                    break;
                case 7://mascaras
                    //mockaroo.com   -> generador de datos
                    // para CVS separacion por , con salto de linea

                    if(cont %10==0)
                    {//hago una pausa cada 10 lineas
                        system("pause");
                    }
                    cont++;
                    fp=fopen(Archivo,"rb");
                    fscanf(fp,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,apellido);
                    idNro=atoi(id);
                    printf("%d %s %s \n",idNro,nombre,apellido);

                    break;
                case 0:
                    seguir = 'n';
                    fclose(fp);
                    break;
            }
            if(Err!=0)
            {
                sms_error(opcion,Err);
            }
    }while(seguir=='s');
    return 0;
}
