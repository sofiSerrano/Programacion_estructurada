#include <stdio.h>
#include <stdlib.h>

#define F 5
#define C 8
#define EOF -1

void cargarmat(int matr[F][C],char name[]);
void imprimirMatNum(int matr[F][C]);
int main();

void cargarmat(int matr[F][C],char name[])
{
    int r;
    int f=0;
    int c=0;
    int punt,pj,pg,pe,pp,ga,gc,dg;

    FILE *archivo;
    archivo=fopen(name,'r');

    if(archivo==NULL)
    {
        return -1;
    }
    r=fscanf("%d,%d,%d,%d,%d,%d,%d,%d",&punt,&pj,&pg,&pe,&pp,&ga,&gc,&dg);

    for (f=0;f<F;f++)
    {
            matr[f][0]=punt;
            matr[f][1]=pj;
            matr[f][2]=pg;
            matr[f][3]=pe;
            matr[f][4]=pp;
            matr[f][5]=ga;
            matr[f][6]=gc;
            matr[f][7]=dg;
            r=fscanf("%d,%d,%d,%d,%d,%d,%d,%d",&punt,&pj,&pg,&pe,&pp,&ga,&gc,&dg);
    }
    matr[f][0]=-1;
    fclose(archivo);
}

void imprimirMatNum (int matr[F][C])
{
int f = 0;
int c = 0;		 // inicializar indice f y c en 0

	for (f=0;f<F;f++)
    {
		for(c=0;c<C;c++)
        {
			printf("%3d",matr[f][c]);
		}
		//printf("\n");
	}
}
int main()
{
    int matr[F][C];
    cargarmat(matr,"puntos.txt");
    imprimirMatNum(matr);
    return 0;
}
