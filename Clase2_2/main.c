#include <stdio.h>
#include <stdlib.h>


int main()
{
    system("cls");
    char nombre[30];
    float sueldo;
    //float aumento;
    int aumento;
    float sueldo_aumentado;

	printf( "\n Introduzca su nombre: " );
	gets(nombre);
    printf( "\n Ingrese sueldo: " );
    scanf( "%f", &sueldo );
    printf( "\n Ingrese aumento: " );
    //scanf( "%f", &aumento );
    scanf( "%d", &aumento );

    sueldo_aumentado= sueldo + ((sueldo * (float) aumento ) /100);
    //sueldo_aumentado= sueldo + ((sueldo * aumento ) /100);

//    SetConsoleCursorPosition(10,10);

     printf("\n =============================== \n");
     //printf( "\n sueldo aumentado es: %.2f  \n El aumento es del: %.2f %% \n\n\n",sueldo_aumentado,aumento );
     printf( "\n sueldo aumentado es: %.2f  \n El aumento es del: %d %% \n\n\n",sueldo_aumentado,aumento );

    return 0;
}
