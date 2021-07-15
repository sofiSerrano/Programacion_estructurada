
#define F 7
#define C 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cargarMatTexDeArch(char mat[F][C], char arch[]);
void imprimirMatI(char mat[F][C]);
void modificar(char mat1[F][C],char mat2[F][C]);
int main ();

void cargarMatTexDeArch(char mat[F][C], char arch[])
{
    FILE* archivo;
    char l;
    int f =0, c = 0;
    archivo = fopen(arch, "r");
    if (archivo==NULL)
    {
        printf(" no hay nada adentro");
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
			printf("%c",mat[f][c]);
		}
		//printf("\n");
	}
}

void modificar(char mat1[F][C],char mat2[F][C])
{

    int f=0, c=0;
    char aux;
    for(f=0;mat1[f][0]!='\0';f++){
        for (c=0;mat2[c][0]!='\0';c++){
            if (strcmp(mat1[f],mat2[c])==0){
                strcpy(mat1[f],mat2[c]);
            }
        }
    }
}


int main ()
{
    char mat1[F][C]={0};
    char mat2[F][C]={0};
    char arch1[] ="nomina1.txt";
    char arch2[]="actualizaciones1.txt";
    cargarMatTexDeArch(mat2,arch2);
    imprimirMatI(mat2);
    printf("\n");
    cargarMatTexDeArch(mat1,arch1);
    imprimirMatI(mat1);
    printf("\n matriz corregida es:");
    printf("\n");
    modificar(mat1,mat2);
    imprimirMatI(mat1);
    return 0;

}
