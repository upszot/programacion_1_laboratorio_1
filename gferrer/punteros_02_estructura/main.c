#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 2


int main()
{
    char seguir='s';
    int opcion;

    dato vec[TAM]={{1,'a'},{2,'b'}};
    dato *p;

    p=vec;

    do
    {
            menu("1. Con operador de inaxeso y *\n"
                 "2. con -> \n"
                 );

            scanf("%d",&opcion);
            switch(opcion)
            {
                case 1:
                    muestra_valores_1(p,TAM);
                    break;
                case 2:
                    muestra_valores_2(p,TAM);
                    break;
                case 0:
                    seguir = 'n';
                    break;
            }
            //system("pause");
    }while(seguir=='s');
    return 0;
}
