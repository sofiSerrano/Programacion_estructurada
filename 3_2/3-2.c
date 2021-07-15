#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/** Desarrollar una función que reciba como parámetro un arreglo de int y una posición de
dicho arreglo. Luego la función deberá retornar la dirección de memoria de la variable
que se encuentra en esa posición del arreglo.  Aclaración ​ : La función se resuelve en una sóla línea de código. */


int main()
{
    int arr[4]={1,2,3,4,5};
    int pos=2;
    printf("posicion del arreglo %d %p",arr[pos],&arr[pos]); //problemas para definir funcion ya que no imprime
    return 0;

}
