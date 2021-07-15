#include <stdio.h>
#include <stdlib.h>
#define TERM_I 0
#define TAM 100
#define INF 0
#define SUP 99
void cargarArrI(int arrI[TAM]);
void imprimirArrI(int arrI[TAM]);


int main()
{
    int arrI[TAM]={0};
    cargarArrI(arrI);
    printf("el arreglo cargado es -->");
    printf("\n\t");
    imprimirArrI(arrI);
    return 0;
}
int nume(int aux)
{
    if (aux>0)
    {
        return 0;
    }
    if (aux<0)
    {
        return 1;
    }
}

int repi (int aux,int arrI[TAM],int ter)
{
    int i=0;
    int resp=0;
    for (i=0;i<TAM && arrI[i]!=ter;i++)
    {
        if (arrI[i]==aux)
            {
                resp=1;
            }
        i++;
    }
    if (resp==0)
    {
        return 0;
    }

    if (resp==1)
    {
        return 1;
    }

}

void cargarArrI(int arrI[TAM])
{
    int i=0;
    int aux;
    int num;
    int res;
    int ter;
    printf("\t num: ");
    scanf("%d",&aux);
    if (aux!=TERM_I && nume(aux)==0 && res==0)
        {
            arrI[i] = aux;
            i++;
        }
    while(aux!=TERM_I)
    {
        printf("\t num: ");
        scanf("%d",&aux);
        ter=arrI[i];
        res=repi(aux,arrI[TAM],ter);
        if (aux!=TERM_I && nume(aux)==0 & res==0)
        {
                arrI[i] = aux;
                i++;
        }
        if (aux!=TERM_I && num==1)
        {
            printf("\t %d no estará en lista o se repite");
        }

    }
    arrI[i]=TERM_I;                     /** Por una cuestion de convención, le colocamos el valor del número terminador,*/
                                     /** como elemento terminador indicando el fin de los datos utiles del arreglo.*/
}
void imprimirArrI(int arrI[TAM]){

    /** El arreglo se imprime recorriendolo con un ciclo*/

    int i;

    for (i=0; i<TAM && arrI[i]!=TERM_I;i++){
            printf("%d - ",arrI[i]);
    }


}
