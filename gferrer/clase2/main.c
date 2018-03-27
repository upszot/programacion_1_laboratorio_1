#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

void  cant_nros_pares_impares(int numero,int pares, int impares);

int main()
{
    int Nro;
    int cant_nros=0;
    int NrosPares=0;
    int NrosImpares=0;
    int maximoPar;
    int maximo;
    int minimo;
    char corte;





  while (corte !='n');
  {

        scanf("%f",&Nro);

            if(cant_nros==0)
            {//1ra vez que pasa
                maximoPar=Nro;
                minimo=Nro;
                maximo=Nro;
            }
            cant_nros++;
            cant_nros_pares_impares(Nro,&NrosPares,&NrosImpares);
            if(Nro>maximoPar)
            {
                maximoPar=Nro;
            }
            if(Nro>maximo)
            {
                maximo=Nro;
            }

            if(Nro<minimo)
            {
                minimo=Nro;
            }

         setbuf(stdin,NULL);
         printf("\n Desea continuar S/N: ");
         scanf("%c",&corte);
         fflush( stdin );
         isdigit(corte);
   }

printf("\n Cantidad de Nros: %d",cant_nros );
printf("\n Cantidad de Nros pares: %d",NrosPares );
printf("\n Cantidad de Nros impares: %d",NrosImpares );
printf("\n Maximo numero: %d",maximo );
printf("\n Minimo numero: %d",minimo );
printf("\n Maximo numero par: %d",maximoPar );

return 0;
}

void  cant_nros_pares_impares(int numero,int pares, int impares)
{
    if((numero % 2 == 0) && (numero !=0))
    {
        pares++;
    }
    else
    {
        impares++;
    }
}

int validaNumero()
{
    do
    {
        printf("Ingrese un Nro: ");
        scanf("%c",&corte);
        fflush( stdin );

    }while(isdigit(corte));

}
