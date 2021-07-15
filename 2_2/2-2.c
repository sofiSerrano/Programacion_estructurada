#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 10

struct s_punto
    {
        int x;
        int y;
    };
int main()
{
    FILE*archivo;
    archivo=fopen("puntos1.txt",'r');
    struct s_punto arr[TAM];
    int q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15,q16,q17,q18,q19,q20;
    fscanf(archivo,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&q1,&q2,&q3,&q4,&q5,&q6,&q7,&q8,&q9,&q10,&q11,&q12,&q13,&q14,&q15,&q16,&q17,&q18,&q19,&q20);
        arr[0].x=q1;
        arr[0].y=q2;
        arr[1].x=q3;
        arr[1].y=q4;
        arr[2].x=q5;
        arr[2].y=q6;
        arr[3].x=q7;
        arr[3].y=q8;
        arr[4].x=q9;
        arr[4].y=q10;
        arr[5].x=q11;
        arr[5].y=q12;
        arr[6].x=q13;
        arr[6].y=q14;
        arr[7].x=q15;
        arr[7].y=q16;
        arr[8].x=q17;
        arr[8].y=q18;
        arr[9].x=q19;
        arr[9].y=q20;
    fclose(archivo);
    int i=0;
    for(i=0;i<TAM;i++)
    {
        printf("%6d %6d",arr[i].x,arr[i].y);
    }
    return 0;
}
/**no me corre el programa y no sé poque*/
