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

    FILE *fp; //puntero a estructura FILE de stdio
    char buffer[100]="\nEsto es un texto dentro del fichero.";
    char buffin[100];
    do
    {
            menu("1. Escribir en archivo: \n"
                 "2. Agregar contenido de variable buffer \n"
                 "3. Borrar archivo \n"
                 "4. Cerrar archivo: \n"
                 "5. Leer archivo: \n"
                 );

            scanf("%d",&opcion);
            switch(opcion)
            {
                case 1:
                   // Err=Alta_moneda(moneda,TAM_MONEDA);
                    fp=fopen(Archivo,"w");
                    fprintf(fp,"hola");
                    break;
                case 2:
                    fprintf(fp,buffer);
                    break;
                case 3:
                    fclose(fp);
                    remove(Archivo);//Borra el archivo
                    break;
                case 4:
                    fclose(fp);
                    break;
                case 5:
                    fp=fopen(Archivo,"r");
                    system("cls");
                    printf("Texto del archivo: \n");
                    printf("--------------------\n");
                    while(!feof(fp))
                    {
                        fgets(buffin,100,fp);
                        puts(buffin);
                    }

                    system("pause");
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
