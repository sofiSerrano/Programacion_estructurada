#include <stdio.h>
#include <stdlib.h>
#define F 3
#define C 3

int trasponer(int mat[F][C])// 1era fila pasa a ser la primera columna
{
    int i,j,x,y;
    int aux;
    for (i=0;i<F-1;i++)
    {
        for (j=0;j<C-1;j++)
        {
            for (x=1+i;x<F;x++)
            {
                for (y=1+j;y<C;y++)
                {
                    if (mat[i][j]<mat[x][y])
                    {
                    aux=mat[j][i];
                    mat[j][i] = mat[x][y];
                    mat[x][y]=aux;
                    }
                }
            }
        }
    }

}
int ingresarIM(int f, int c){
	int x;
	printf("[%d][%d]: ",f,c);
	scanf("%d", & x);
	return x;
}

void cargarMatI(int mat[F][C]){
	int f = 0, c = 0;		// inicializar indice f y c en 0

	for (f=0; f<F; f++){
		for(c=0;c<C; c++){
			mat[f][c]=ingresarIM(f,c);
		}
	}
}

void imprimirMatI(int mat[F][C]){
	int f = 0, c = 0;		 // inicializar indice f y c en 0

	for (f=0; f<F; f++){
		for(c=0;c<C;c++){
			printf("%4d",mat[f][c]);
		}
		printf("\n");
	}
}

int main() {

	int mat[F][C]={0};
	cargarMatI(mat);
	printf("\n");
	imprimirMatI(mat);
	trasponer(mat);
	printf("la matriz  transpuesta es: \n");
	imprimirMatI(mat);
	return 0;
}
