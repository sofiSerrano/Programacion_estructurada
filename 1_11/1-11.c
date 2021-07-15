#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define F 6
#define C 20

void cargarArch(char tex[F][C],char arch[]);
void imprimir(char tex[F][C]);
void ordenarTex(char tex[F][C]);
int main();
/**-------------------------------------------------*/
void cargarArch(char tex[F][C],char arch[])
{
    FILE*archivo;
    char aux;
    int f=0;
    int c=0;
    archivo=fopen(arch,'r');
    if (archivo==NULL)
    {
        printf("No hay nada inside brou");
    }
    for (f=0;f<F;f++)
    {
        for (c=0;c<C-1;c++)
        {
            aux=fgetc(archivo);
            tex[f][c]=aux;
        }
    tex[f][c]='\0';
    }
    fclose(archivo);
}
void imprimir(char text[F][C])
{
    int f=0;
    int c=0;

    for (f=0;f<F;f++)
    {
        for (c=0;c<C && c<C;c++)
        {
            printf("%3c",text[f][c]);
        }
    printf("\n");
    }
}


int main()
{
    char text[F][C]={0};
    char arch[] ="ej10.txt";
    cargarArch(text,arch);
    imprimir(text);
    ordenarTex(text);
    imprimir(text);
}
