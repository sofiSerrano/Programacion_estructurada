#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define TAM 20

struct estructura_alum
{
    char nombre[20];
    int edad;
};


int main()
{
    FILE*archivo;
    int i=0;
    struct estructura_alum alumnos[10];
    int band=0;
    while(i < 10 && band==0)
    {
        printf("Introduce nombre del alumno %i: ", i+1);
        gets(alumnos[i].nombre);
        if (alumnos[i].nombre=="0")
            {
                band=1;
            }
        printf("Introduce edad del alumno %i: ", i+1);
        scanf("%i", &alumnos[i].edad); //Recoge la edad
        if (alumnos[i].edad=="0")
            {
                band=1;
            }
        while(getchar()!='\n'); //Bucle que vacía buffer de entrada
        i++;
    }
    archivo=fopen("estudiantes.txt","w");
    for (int i = 0; i < 10; i++)
    {
        printf("\nALUMNO %i \n", i+1); //Muestra numero de alumno
        printf("Nombre: %s\n", alumnos[i].nombre); //Nombre de dicho alumno
        printf("Edad: %i \n\n", alumnos[i].edad); //Edad de dicho alumno
        fprintf(archivo, "%s %d \n",alumnos[i].nombre,alumnos[i].edad);
    }
    fclose(archivo);
}
//problemas para cortar con un valor o algo
