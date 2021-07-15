#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define F 10
#define C 20
void cargarArch(char text[F][C],char arch[]);
void imprimir(char textt[F][C]);
int main();
/**----------------------------*/
void cargarArch(char text[F][C],char arch[])
{
   /**fgetc devuelve caracter del archivo en tal numero*/
   FILE * archivo;
   char aux;
   int f=0;
   int c=0;
   archivo= fopen (arch, "r");
   if (archivo==NULL) /** Si el arch contiene NULL es porque el archivo no pudo ser abierto*/
    {
        printf("hay error -1;");
        return -1;
    }
    //c = fgetc(archivo); no lo pongo porque me cambia el valor de c

	for (f=0; f<F; f++){
		for(c=0;c<C-1;c++){
			 aux=fgetc(archivo);
             text[f][c]=aux;
		}
      text[f][c]='\0';
	}
   fclose(archivo);
}
/**----------------------------*/
void imprimir(char text[F][C])
{
    int f=0;
    int c=0;
    for (f=0;f<F;f++)
    {    for(c=0;c<C;c++)
        {
            printf("%3c",text[f][c]);
        }
    }

}
/**----------------------------*/
int main()
{
    char text[F][C]={0};
    char *arch="ejer10.txt";/**en este caso parece que pasar archivo como lista para pasarle cosas y hay que declarar el archivo*/
    cargarArch(text,arch);
    imprimir(text);
    return 0;
}
