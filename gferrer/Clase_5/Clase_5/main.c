#include <stdio.h>
#include <stdlib.h>


void buscaMayor(int A,int B);

int main()
{

    int vectorA[5]={10,5,-1,11,4};
    int vectorB[5]={9,3,9,12,6};
    int vectorC[5];
    int posicion; // borrar despues
    int i;

/*
    for(posicion=0; posicion<5; posicion++)
    {
        if(vectorA[posicion]>vectorB[posicion])
        {//a mayor que b
            vectorC[posicion]=vectorA[posicion];
        }
        else
        {
            vectorC[posicion]=vectorB[posicion];
        }
    }
*/

    for (int i=0;i<5;i++)
    {
         if((vectorA[i] % 2 == 0) && (vectorB[i] % 2 == 0))
         {// son pares
             vectorC[i]=buscaMayor(vectorA[i],vectorB[i]);
         }
         else
        {
            if(vectorA[i] % 2 == 0)
            {// A es par
                vectorC[i]=vectorA[i];
            }
        }

    }

    for(posicion=0; posicion<5; posicion++)
    {
        printf("\n Vector C[%d]: ", posicion,vectorC[posicion]);
    }

    return 0;
}


void buscaMayor(int A,int B)
{
    int valor;

        if(A>B)
        {//a mayor que b
            valor=A;
        }
        else
        {
            valor=B;
        }

    return valor
}


// mostrar el nro par mas alto.. si son impares cargar 0
