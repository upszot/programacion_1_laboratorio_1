#include "funciones.h"

void menu(char *opciones)
{
    system("cls");
    printf("%s \n",opciones);
    printf("\n0.  Salir \n");
    printf("\n\tIngrese Opcion: ");
}

void sms_error(int mensaje,int Error)
{
    system("cls");
    printf("\n\n");
    switch(mensaje)
    {
        case -1:
            //printf("ERROR-COD: %d -- Mostrar listado",Error);
            break;
        case 1:
            printf("ERROR-COD: %d -- Mostrar",Error);
            break;
        case 2:
            //printf("ERROR-COD: %d -- Modificacion",Error);
            break;
        case 3:
            //printf("ERROR-COD: %d -- Baja",Error);
            break;
        case 99:
            //printf("ERROR-COD: %d -- No Encontro ID ",Error);
            break;
        default:
            printf("Se produjo un Error Inesperado...");
            break;
    }
    printf("\n\n");
    system("pause");
}

int get_int_Rango(char sms[30],int desde,int hasta)
{
    int aux;
    int flag=0;
    do
    {
        if(flag==1)
        {
            printf("\n Valor fuera de Rango Debe ser: (%d< X <%d)  \n",desde-1,hasta+1);
            system("pause");
            system("cls");
        }
        fflush(stdin);
        printf("%s",sms);
        scanf("%d",&aux);
        flag=1;
    }while( (aux<desde) || (aux>hasta) );

    return aux;
}

char *get_char(char sms[],int LongitudCadena)
{
    char *PTexto= (char *) malloc (sizeof(char)*LongitudCadena);

    //Variable temporal donde cargo el texto pedido...
    //es mas larga para de esa forma poder controlar si se exedieron en la longitud
    char TextoLibre[LongitudCadena+4];

    fflush(stdin);
    int flag=0;
    do
    {
        if(flag==1)
        {
            printf("\n La longitud maxima del campo es: %d \n",LongitudCadena);
            system("pause");
            system("cls");
        }
        printf("%s ",sms);
        // fgets lee desde el teclado (stdin) pero solo almacena en la variable
        //la cantidad de caracteres de longitud +3... (trunca todolo lo que se exeda...
        //si lo que ingresa es mas chico que esa longitud.. carga hasta que le das enter..
        //pero carga el retorno de carro en la variable
        fgets(TextoLibre,LongitudCadena+3,stdin);
        flag=1;
    }while(strlen(TextoLibre) >= LongitudCadena);
    //la funcion strtok elimina un caracter de el arreglo... en este caso el retorno de carro...
    strcpy(PTexto,strtok(TextoLibre, "\n"));
    return PTexto;
}
//#------------------- ARCHIVOS ------------------#
int graba_archivo(FILE *fp,char NomArch[30],e_moneda *lista,int cant)
{
    int retorono=-1;
    fp=fopen(NomArch,"w");
    if(cant>0 && lista!=NULL && fp!=NULL)
    {
        for(int i=0;i<cant;i++)
        {
            if((lista+i)->estado!=0)
            {

                fprintf(fp,"ID: ");
                fprintf(fp,(lista+i)->id);
                fprintf(fp,"Nombre: ");
                fprintf(fp,(lista+i)->nombre);
                fprintf(fp,"Pais: ");
                fprintf(fp,(lista+i)->pais);
            }
        }//for(int i=0;i<cant;i++)
    //fprintf(fp,"hola");
    }


    fclose(fp);
}


//#------------------- ESTRUCTURAS ------------------#
int moneda_mostrarLista(e_moneda *lista,int cant)
{
    int retorono=-1;
    if(cant>0 && lista!=NULL)
    {
        retorono=0;
        for(int i=0;i<cant;i++)
        {
            if((lista+i)->estado!=0)
            {
                printf("\n ID: %d",(lista+i)->id);
                printf("\t\t Nombre: %s",lista[i].nombre);
                printf("\t\t Pais: %s",lista[i].pais);
            }
        }//for(int i=0;i<cant;i++)
    }
    printf("\n\n");
    system("pause");
    return retorono;
}
int eGen_siguienteId(e_moneda listado[],int limite)
{
    int retorno = 0;
    if(limite > 0 && listado != NULL)
    {
        for(int i=0; i<limite; i++)
        {
            if((listado+i)->estado==1)
            {//ocupado
                    if((listado+i)->id > retorno)
                    {
                         retorno=(listado+i)->id;
                    }
            }
        }//FIN for(int i=0; i<limite; i++)
    }
    return retorno+1;
}

e_moneda *carga_datos_moneda()
{//no esta funcionando... =(
    //e_moneda record;
    e_moneda *record= (e_moneda *) malloc (sizeof(e_moneda));

    system("cls");

    strcpy(record->nombre,get_char("\nIngrese Nombre: ",10));
    strcpy(record->pais,get_char("\nIngrese pais: ",10));
    record->estado=1;

    return record;
}

void carga_1_moneda(e_moneda *record)
{
    system("cls");

    strcpy(record->nombre,get_char("\nIngrese Nombre: ",10));
    strcpy(record->pais,get_char("\nIngrese pais: ",10));
    record->estado=1;
}

int Alta_moneda(e_moneda *lista,int cant)
{
    int retorono=-1;
    int next_id;

    if(cant>0 && lista!=NULL)
    {
        retorono=-2;
        next_id= eGen_siguienteId(lista,cant);
        if(next_id>0)
        {
            retorono=0;
/*
                    e_moneda *aux;
                    aux=carga_datos_moneda();
                    printf("xx %s",aux.nombre );
                    system("pause");
*/
                    //(lista+i)=carga_datos_moneda();
                    carga_1_moneda((lista+next_id));
                    (lista+next_id)->id=next_id;
                    (lista+next_id)->estado=1;
                    //strcpy(  (lista+i)->nombre,get_char("\nIngrese Nombre: ",10) );
                    //strcpy(  (lista+i)->pais,get_char("\nIngrese pais: ",10) );




        }
    }//if(cant>0 && lista!=NULL)
    return retorono;
}



int eGen_buscarPorId(e_moneda *listado ,int limite, int id)
{
    int retorno = -1;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(int i=0;i<limite;i++)
        {
            if((listado+i)->estado == 1 && (listado+i)->id == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int Borra_moneda(e_moneda *lista,int cant,int id)
{//(moneda,TAM_MONEDA,get_int_Rango("Ingrese ID de Moneda a dar de baja: ",0,TAM_MONEDA-1)
    int retorno = -1;
    int PosID;

    if(cant > 0 && lista != NULL)
    {
        retorno = -2;
        PosID=eGen_buscarPorId(lista,cant,id);
        if(PosID >= 0)
        {
            retorno = 0;
            lista[PosID].estado = 0;
        }
        else
        {//en este caso PosID va a tener el codigo de error...
            retorno = -3;
            sms_error(99,PosID);
        }

    }
    return retorno;
}
