#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int  sumar_prototipo1(int numero1, int numero2);
int  sumar_prototipo2(void);
void sumar_prototipo3(int nro1,int nro2);
void sumar_prototipo4(void);

int main()
{

        //prototipo 1
        int numero1;
        int numero2;
        printf("Prototipo 1: ");
        printf("\nIngrese Nro1: ");
        scanf("%d",&numero1);
        printf("\nIngrese Nro2: ");
        scanf("%d",&numero2);

        printf("\nLa suma de los numeros es: %d", sumar_prototipo1(numero1,numero2));

        //prototipo2
        printf("\nLa suma de los numeros es: %d", sumar_prototipo2());
        //prototipo3
        printf("Prototipo 3:");
        printf("Ingrese Nro1: ");
        scanf("%d",&numero1);
        printf("Ingrese Nro2: ");
        scanf("%d",&numero2);
        sumar_prototipo3(numero1,numero2);
        //prototipo4
        sumar_prototipo4();

    return 0;
}

void sumar_prototipo4(void)
{
        int nro1; int nro2; int rta;

        printf("Prototipo 3:");
        printf("Ingrese Nro1: ");
        scanf("%d",&nro1);
        printf("Ingrese Nro2: ");
        scanf("%d",&nro2);
        rta=nro1+nro2;
        printf("\n valor suma: %d",rta);

}

void sumar_prototipo3(int nro1,int nro2)
{
    int RTA;
    RTA=nro1+nro2;
    printf("\nLa suma de los numeros es: %d", RTA);
}

int sumar_prototipo2()
{
    int RTA; int nro1; int nro2;

    printf("Ingrese Nro1: ");
    scanf("%d",&nro1);
    printf("Ingrese Nro2: ");
    scanf("%d",&nro2);

    RTA=nro1+nro2;
    return RTA;

}
int sumar_prototipo1 (int numero1, int numero2)
{
    int RTA=numero1+numero2;
    return RTA;

}
