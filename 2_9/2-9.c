#include <stdio.h>
#define MASK 1<<5
//bin de a 01100001
//bin de A 01000001
int camb(char let);
int convertbin(char let);
int main();

int camb(char let)
{
    if (let>="a" && let<="z")
    {
        return (let^MASK);

    }
    if (let>="A" && let<="Z")
    {
        return (let|MASK);
    }
}
int convertbin(char let)
{
    /** convierte a binario e imprime (bit  bit) un numero decimal "signed"  */
    unsigned int mask=1<<7;        /** coloca el uno en el bit más significativo (a la izquierda)*/
    int i;
    for (i=0;i<8;i++)
    {
        printf("%d",(let&(mask>>i))!=0);

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
    char let;
    printf("ingrese letra a convertir:");
    scanf("%c",&let);
    camb(let);
    convertbin(let);
    return 0;
}
