#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM_MONEDA 10


int main()
{
    char seguir='s';
    int opcion;
    int Err=0;
    e_moneda moneda[TAM_MONEDA]={ {"Argentina",1,"Peso",1},
                           {"Brasil",2,"Real",1},
                           {"EEUU",3,"Dolar",1},
                         };
    //e_moneda p_moneda;
    char Archivo[15]="monedas.txt";
    FILE *fp; //puntero a estructura FILE de stdio
    char buff_file[100];

    do
    {
            menu("1. Alta \n"
                 "2. Mostrar lista de monedas \n"
                 "3. Borrar \n"
                 "4. Guarda en archivo \n"
                 "5. Lee de archivo \n"
                 );

            scanf("%d",&opcion);
            switch(opcion)
            {
                case 1:
                    Err=Alta_moneda(moneda,TAM_MONEDA);
                    break;
                case 2:
                    Err=moneda_mostrarLista(moneda,TAM_MONEDA);
                    break;
                case 3:
                    Err=moneda_mostrarLista(moneda,TAM_MONEDA);
                    if(Err==0)
                    {
                        Err=Borra_moneda(moneda,TAM_MONEDA,get_int_Rango("Ingrese ID de Moneda a dar de baja: ",0,TAM_MONEDA-1) );
                    }
                    break;
                case 4:
                    Err= graba_archivo(fp,Archivo,moneda,TAM_MONEDA);
                    break;
                case 5:
                    Err=moneda_mostrarLista(moneda,TAM_MONEDA);
                    break;
                case 0:
                    seguir = 'n';
                    break;
            }
            if(Err!=0)
            {
                sms_error(opcion,Err);
            }
    }while(seguir=='s');
    return 0;
}
