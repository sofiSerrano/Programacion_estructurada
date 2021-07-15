#include <stdio.h>
#include <stdlib.h>
#define F 5
#define C 19
void cargarMatTexDeArch(char mat[F][C], char arch[]);
void imprimirMatI(char mat[F][C]);
int main ();

void cargarMatTexDeArch(char mat[F][C], char arch[])
{
    FILE* archivo;
    char l;
    int f =0, c = 0;
    archivo = fopen(arch, "r");
    if (archivo==NULL)
    {
        printf(" error in opening file sad");
        return -1;
    }
   // c = fgetc(archivo);                  /*LEER archivo. - (antes del while) */
    for(f = 0; f<F ;f++)
    {
        for (c = 0;c<C-1 ;c++)
        {
            l = fgetc(archivo);
            mat[f][c] = l;

        }
        mat[f][c] = '\0';
    }
    fclose(archivo);
}

void imprimirMatI(char mat[F][C]){
	int f = 0, c = 0;		 // inicializar indice f y c en 0

	for (f=0; f<F; f++){
		for(c=0;c<C;c++){
			printf("%3c",mat[f][c]);
		}
		//printf("\n");
	}
}
int main ()
{
    char mat[F][C]={0};
    char arch[] ="ejer10.txt";
    cargarMatTexDeArch(mat,arch);
    imprimirMatI(mat);
    return 0;

}
