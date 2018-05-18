#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define CANT 3


int main()
{
    int vec[3]={5,9,1};
    int *pVec=vec;
    char seguir='s';
    int opcion;
    system("cls");

    carga_puntero(vec,CANT);
    do
    {
            menu("1. recibe array -> maneja con notacion de array \n"
                 "2. recibo array -> maneja puntero \n"
                 "3. recibo puntero -> manejo array \n"
                 "4. Recibo puntero -> manejo puntero \n"
                 );

            scanf("%d",&opcion);
            switch(opcion)
            {
                case 1:
                    muestra_valores_vector_1(vec,CANT);
                    break;
                case 2:
                    muestra_valores_vector_2(vec,CANT);
                    break;
                case 3:
                    muestra_valores_vector3(pVec,CANT);
                    break;
                case 4:
                    muestra_valores_puntero4(pVec,CANT);
                    break;
                case 0:
                    seguir = 'n';
                    break;
            }
            system("pause");
    }while(seguir=='s');

    return 0;
}

