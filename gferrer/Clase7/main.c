#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int legajo;
    int nota;
    int nota2;
    float promedio;
}T_Alumno;

typedef struct
{
    int legajo;
    int nota;
    int nota2;
    float promedio;

    struct T_Persona * next;
}T_Persona;

float promedio(int nota,int nota2);

int main()
{

    T_Alumno alumnos[3];

    T_Persona *persona= new T_Persona;



    for (int i =0; i < 3; i ++)
    {
        printf("\nIngrese legajo del alumno %i: ",i);
        scanf("%d",&alumnos[i].legajo);
        printf("\nIngrese Nota 1: ");
        scanf("%d",&alumnos[i].nota);
        printf("\nIngrese Nota 2: ");
        scanf("%d",&alumnos[i].nota2);
    }

    system("cls");
    for (int i =0; i < 3; i ++)
    {
        alumnos[i].promedio=promedio(alumnos[i].nota,alumnos[i].nota2);
        printf("\n\nAlumno: %d  Tiene el promedio: %f",alumnos[i].legajo,alumnos[i].promedio);
    }
    getch();
    return 0;
}

float promedio(int nota,int nota2)
{
    float rta;
    rta= ((float)nota+nota2)/2;
    return rta;
}
