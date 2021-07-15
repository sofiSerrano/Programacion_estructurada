#include<stdio.h>
#include<stdlib.h>
#define TAM 1000
#define
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

