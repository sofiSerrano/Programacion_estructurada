#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MASK 128
// convertir la letra a numero

/**
int convertir(char tex[])
{
    int num=tex[0];
    return num;
}

int main()
{
    char tex[10];
    printf("ingrese letra a convertir:");
    scanf("%s",&tex);
    printf("%d",convertir(tex));
    return 0;

}
**/

// convertir de letra a

/**void convert(int letr);
int main();

void convert(int letr)
{
     convierte a binario e imprime (bit  bit) un numero decimal "unsigned"  */

  //  unsigned int mask=1<<8;        /** coloca el uno en el bit más significativo (a la izquierda)
/**    int i=0;

    printf("\n%12c",letr);
    for (i=0;i<8;i++)
    {
        printf("%d",(letr&(mask>>i))!=0);
    }
}
*/
/**
int main()
{
    int i=0;
    char letr;
    printf("ingrese letra para pasar a binario:");
    scanf("d%",&letr);
    convert(letr);
    return 0;
}
*/
/**
int main()
{
    char letr="a";
    unsigned int contador=;
    for (contador;contador>0;contador>>=1)
    {
        if (contador & letr)
        {
            printf("1");
        }
        else
        {
        printf("0");
        }
    }
    return 0;

}
*/
int convertbin(char num);
//int convertirlet(char tex[]);
int main();
int convertbin(char num)
{
    /** convierte a binario e imprime (bit  bit) un numero decimal "signed"  */
    unsigned int mask=1<<7;        /** coloca el uno en el bit más significativo (a la izquierda)*/
    int i;
    for (i=0;i<8;i++)
    {
        printf("%d",(num&(mask>>i))!=0);

    }
    printf("\n");
}

/**int convertirlet(char tex[])
{
    int num=tex[0];
    return num;
}
*/
int main()
{
    char tex;
    printf("ingrese letra a convertir:");
    scanf("%c",&tex);
//    printf("\n%d",convertirlet(tex));
    printf("\n");
 //   convertbin(convertirlet(tex));
    convertbin(tex);
    return 0;

}
