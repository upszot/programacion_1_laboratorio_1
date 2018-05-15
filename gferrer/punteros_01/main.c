#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pEntero;
    int *pEntero2;
    int Entero=5;

    pEntero=&Entero;
    pEntero2=pEntero;


    system("cls");
    printf("\nValor de Entero: %d \t DirRAM Entero: %x",Entero,&Entero);
    printf("\nValor pEntero: %x  \t DirRAM pEntero: %x \t Valor donde apunta pEntero: %d ",pEntero,&pEntero,*pEntero);
    printf("\nValor pEntero2: %x \t DirRAM pEntero2: %x \t Valor donde apunta pEntero2: %d  ",pEntero2,&pEntero2,*pEntero2);
    printf("\n\n");

    return 0;
}
