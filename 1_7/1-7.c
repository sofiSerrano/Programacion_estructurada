#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F 3
#define C 3
/**preguntar si hay manera de pasar el tamaño de la matriz por parametro*/
void cargarMat(int mat[F][C]);
void imprimirMat(int mat[F][C]);
void promMat(int mat[F][C]);
int ingresar(f,c);

int main()
{
    /**int F;
    int C;
    printf("ingrese cantidad de columna:")
    scanf("%d"&C)
    printf("ingrese cantidad de filas:")
    scanf("%d",&F)*/
    cargarMat( int mat[F][C]);
    imprimirMat( int mat[F][C]);
    promMat( int mat[F][C]);
}

/**------------------------------------------*/
int ingreasar(f,c)
{
    int x;
    printf("[%d][%d]:",f,c)
    scanf("%d",&x)
    return x;
}
/**------------------------------------------*/
void cargarMat(int mat[F][C])
{
int f=0;
int c=0;
/** puedo inicializar en 0*/
for (f=0;f<F;f++)
    {
        for (c=0;c<C;c++)
        {
            mat[f][c]=ingresarM(f,c);
        }
    }

}
/**------------------------------------------*/
void imprimirMat(int mat[F][C])
{
    int f;
    int c;
    for (f=0;f<F;f++)
    {
        for (c=0;c<C;c++)

            if (c<C && f<F)
            {
                printf("%d",mat[f][c]);
            }
            else
            {
                printf("\n%d",mat[f][c]);
            }
    }   printf("\n")
}
/**------------------------------------------*/
double promMat(int math[F][C])
{
    int c;
    int f;
    int cant;
    int s;
    int num;
    double prom;
    for (f=0;f<F;f++)
    {
        for (c=0;c<C;c++)
        {
            num=mat[f][c];
            s=s+num;
        }
    }
    cant=F*C
    prom=s/cant
    printf("promedio total es %0.2f",prom)
}
/**------------------------------------------*/
