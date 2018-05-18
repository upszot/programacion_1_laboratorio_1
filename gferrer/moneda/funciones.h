#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char pais[10];
    int id;
    char nombre[10];
    int estado;
}e_moneda;

void sms_error(int mensaje,int Error);
void menu(char *opciones);
int get_int_Rango(char sms[30],int desde,int hasta);
char *get_char(char sms[],int LongitudCadena);
//#------------------------------------------
int graba_archivo(FILE *fp,char NomArch[30],e_moneda *lista,int cant);

//#------------------- ESTRUCTURAS ------------------#
e_moneda *carga_datos_moneda();
void carga_1_moneda(e_moneda *record);
int moneda_mostrarLista(e_moneda *lista,int cant);
int eGen_siguienteId(e_moneda listado[],int limite);
int Alta_moneda(e_moneda *lista,int cant);


int eGen_buscarPorId(e_moneda *listado ,int limite, int id);
int Borra_moneda(e_moneda *lista,int cant,int ID);
