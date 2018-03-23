#include <stdio.h>
#include <conio.h>
//#include <ctype.h>

int main()
{
  int nro1;
  float nro2;
  float suma;
  char letra;

  //gotoxy(5,5);
   printf("prueba");

  printf("\n Ingrese un entero: ");
  scanf("%d", &nro1);

  printf("\n Ingrese un numero flotante: ");
  scanf("%f", &nro2);

  printf("\n Ingrese un caracter: ");
  letra=getche();

  suma=nro1 + nro2;
  printf("\n\n Valor de suma de ambos nros: %f y la letra es: %c",suma,letra);
  printf("\n\n\n");

  system("pause");
  return 0;
}


