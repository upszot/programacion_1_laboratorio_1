#include <stdio.h>
#include <stdlib.h>

#define TAM 2

int despedir(char *);
int saludar(char *);

void fDelegado(int (*)(char *),char *);


struct
{
    int id;
    int (*pF)();
}typedef prueba;

int main()
{
    /*
    int (*F1)(char *);
    F1=saludar;
    int RTA=F1("pepe");
    printf("\n RTA: %d",RTA);
*/
    //fDelegado(saludar,"Gonzalo");
    //fDelegado(despedir,"Gonzalo");

/*  Vector de punteros a funciones

    int (*vF[TAM]) (char *) ={saludar,despedir};
    for (int i=0;i<TAM;i++)
    {
        //vF[i]("pepe");
        //returnAux= *(this->pElements + index);

        (*(vF+i))("pepe");
    }
*/

    prueba p1[2];
    p1[1].pF=saludar;

    //p1[1].pF("pepe");
    ( (p1+1)  ->pF )   ("pepe");

    return 0;
}


int saludar(char *sms)
{
    printf("\nHola %s\n",sms);
    return 1;
}

int despedir(char *sms)
{
    printf("\nChau %s\n",sms);
    return 1;
}


void fDelegado(int (*F1)(char *),char *Texto)
{
    int RTA;
    RTA=F1(Texto);
    printf("RTA: %d\n",RTA);
}
