#include <stdio.h>
#include<strings.h>
#include<stdio.h>
/**int main()
{
    int a=0; //Declaraci�n de variable entera de tipo entero
    int *puntero; //Declaraci�n de variable puntero de tipo entero
    puntero = &a; //Asignaci�n de la direcci�n memoria de a

    printf("El valor de a es: %d. //\nEl valor de *puntero es: %d. \n",a,*puntero);
    printf("La direcci�n de memoria de *puntero es: %p",puntero);

    return 0;
}


/**
 Desarrollar una funci�n que reciba como par�metros dos punteros a int y qu�
 intercambie los valores de las variables apuntadas por dichos punteros.
*/
#include <stdio.h>
int main()
{
 int i = 1, j = 2;
 int *p1, *p2;
 p1 = &i; // p1 apunte a i
 p2 = &j; //p2 apunte a j
 scanf("num:%d", p1); // p1/&i, o p2/&j
 scanf("num2:%d", &j);

 printf("i: %2d - j: %2d\n", i, j);
 p2 = p1;
 (*p2)++;
 printf("i: %2d - j: %2d\n", i, j);
 return 0;
}
