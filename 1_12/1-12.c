#include <stdio.h>
#include <stdlib.h>
#define C 8
#define F 5
#define EOF -1

void cargarMat(int mat[F][C], char* name )
{
    int f = 0, r;
    int a,b,c,d,e,ff,g,h;
    FILE* archi;
    archi = fopen (name, "r");
    if (archi ==NULL)
    {
        return -1;
    }
    r = fscanf(archi, "%d,%d,%d,%d,%d,%d,%d,%d", &a,&b,&c,&d,&e,&ff,&g,&h);
    for (f = 0; f<F; f++)
    {

       mat[f][0] = a;
       mat[f][1] = b;
       mat[f][2] = c;
       mat[f][3] = d;
       mat[f][4] = e;
       mat[f][5] = ff;
       mat[f][6] = g;
       mat[f][7] = h;

       r = fscanf(archi, "%d,%d,%d,%d,%d,%d,%d,%d", &a,&b,&c,&d,&e,&ff,&g,&h);

    }
    mat[f][0] = -1;
    fclose(archi);


}


void imprimir(int mat[F][C]){
	int f = 0, c = 0;		 // inicializar indice f y c en 0

	for (f=0; f<F; f++){
		for(c=0;c<C;c++){
			printf("%4d",mat[f][c]);
		}
		printf("\n");
	}
}


int main()
{
    int mat[F][C];
    cargarMat(mat, "puntos.txt");
    imprimir(mat);
    return 0;

}
