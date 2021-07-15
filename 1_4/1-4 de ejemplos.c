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

void cargarArrI();
void imprimirArrI();
void caso01();

int main() {
    srand(time(NULL));          /** Seteo de la semilla del generador de valores aleatorios*/
    printf("\nARREGLOS DE NUMEROS\n");

    printf("\n------------- ----------------\n");
    caso01();
    return 0;
}
int buscarelem(int aux,int arrI[TAM])
{
    int i;
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
void caso01(){
    int aux;
    int n;
    printf("CASO01: Cargar una arreglo de numeros entero desde el teclado \n");

    int arrI[TAM]={0};                  /** Se define el arreglo nombre y se lo inicializa con 0 en todas sus posiciones */
    cargarArrI(arrI);                   /** Carga arreglo desde teclado*/
    printf("\tEl arreglo cargado contiene: -> ");
    printf("\n\t");
    imprimirArrI(arrI);                 /** Imprime arreglo*/
    printf("\n esta elemento en arreglo?:");
    scanf("%d",&aux);
    n=buscarelem(aux,arrI);
    if (n==1)
    {
    printf("\t el elemento SI se repite");
    }
    if (n==0)
    {
    printf("\t el elemento no se repite");
    }

}
void imprimirArrI(int arrI[TAM]){

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
    if(i<TAM-1)
        scanf("%d",&aux);
    while(aux!=TERM_I)
    {      /** hasta que el usuaior ingrese 0 cero (que es TERM_I)*/
                                        /** Se debe controlar no pasarse del tamanio TAM*/
        arrI[i] = aux;                  /** Asignar valor al arreglo en la posición i*/
        i++;                            /** cambia posicion del arreglo / i es variable de control */
        printf("\t[%d]: ",i);
        if(i<TAM-1)
{
            scanf("%d",&aux);
}        /** Leer desde el teclado*/
    }
    arrI[i]=TERM_I;                     /** Por una cuestion de convención, le colocamos el valor del número terminador,*/
                                     /** como elemento terminador indicando el fin de los datos utiles del arreglo.*/
}
