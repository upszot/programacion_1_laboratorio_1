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
