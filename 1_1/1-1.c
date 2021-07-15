#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    float num1;
    float redondeo = round(num1);
    int techo= floor(num1);
    int piso= ceil(num1);
    printf("ingrese numero: ");
    scanf("%f",&num1);

    printf("%f con round es %i, con floor %g\n y con ceil %g",redondeo,techo,piso);

    return 0;
}
