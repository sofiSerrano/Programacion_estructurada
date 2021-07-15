#include <stdio.h>
#include <stdlib.h>

/**char textmin(char c)
{
    if (c>='A' && c<='Z'){
/**afecta usar comillas "" y ´´ ¿por que? no sé recordatorio
        return c+32;
    }
    return c;
}

int main()
{
    char c;
    printf("ingresar letra:");
    scanf("%c",&c);
    printf("letra %c",textmin(c));
    return 0;
}
*/
/**
01G-arreglo-1d-int
*/

#include <stdio.h>
#include <stdlib.h>

#define INF 0                   /** limite inferior para el rango de valores para cargar en el arreglo */
#define SUP 99                  /** limite superior para el rango de valores para cargar en el arreglo */

#define TAM 100
#define TERM_I 0                /** Elemento entero (int) para indicar el fin de numeros utiles en el arreglo */

/**
IMPORTANTE:
    Los arreglos de numeros no tienen por definicion un elemento terminador (es decir un elemento que indique
    el finde los elemnentos útiles).
    NOSOTROS, tendremos como convención indicar con un número, que no pertenezca al dominio de datos, el fin
    de los datos útiles del arreglo. Lo llamaremos  dicho número elemento teminador.
    Para el caso definimos la constante TERM_I.
    Es mandatorio que el valor del terminador NO pertenezca al dominio de los datos útiles.
*/

void cargarArrI(int *arrI[TAM]);
void imprimirArrI(int *arrI[TAM]);
int buscarelem(int *aux, int *arrI[TAM]);
int main();

int buscarelem(int *aux,int* arrI[TAM])
{
    int i=0;
    int c=0;
    for (i=0;i<TAM && arrI[i]!=TERM_I;i++)
    {
        if (arrI[i]==aux)
        {
            c=1;
        }
    }
    if (c==0)
    {
        return 0;
    }
    if (c==1)
    {
        return 1;
    }
}
int main(){
    int aux;
    printf("CASO01: Cargar una arreglo de numeros entero desde el teclado \n");

    int arrI[TAM]={0};                  /** Se define el arreglo nombre y se lo inicializa con 0 en todas sus posiciones */
    cargarArrI(arrI);                   /** Carga arreglo desde teclado*/
    printf("\tEl arreglo cargado contiene: -> ");
    printf("\n\t");
    imprimirArrI(arrI);
    return 0;
}


void imprimirArrI(int *arrI[TAM]){

    /** El arreglo se imprime recorriendolo con un ciclo*/

    int i;

    for (i=0; i<TAM && arrI[i]!=TERM_I;i++){
            printf("%d - ",arrI[i]);
    }


}

void cargarArrI(int arrI[TAM]){
    int i=0;
    int aux;
    printf("\tIngrese contenido. O Ingrese 0 (Cero) para terminar la carga: \n");
    /** Leer desde el teclado*/
    printf("\t[%d]: ",i);
    scanf("%d",&aux);
    if(i<TAM-1 && aux>0)
        arrI[i] = aux;
        i=1;

    while(aux!=TERM_I)
    {
        printf("\t[%d]: ",i);
        scanf("%d",&aux);
        if (aux!=TERM_I && aux>0 && buscarelem(aux,arrI[i])==0)
        {
            arrI[i] = aux;
            i++;

        }
        if (aux!=TERM_I && aux<0 && buscarelem(aux,arrI[i])==1)
        {
            printf("no habra en arreglo");
        }
    }
    arrI[i]=TERM_I;

}
