#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 100
void cargarpun(char arch1_1[],char arch2_2[]);
void imprimirArr(struct puntos_y_goles,char arch3[]);
int main();

struct puntos_goles
    {
        char equip[T];
        int pg;
        int pp;
        int pe;
        int ga;
        int gc;
    };
typedef struct puntos_goles puntos_y_goles;
void cargarpun(char arch1_1[],char arch2_2[])
{
    puntos_y_goles arr[5];
    int r;
    int r1;
    char str[T]={0};
    int pg1;
    int pp1;
    int pe1;
    int ga1;
    int gc1;
    int i=0;
    int c=0;
    FILE*arch1;
    FILE*arch2;
    arch1=fopen(arch1_1,"r");
    arch2=fopen(arch2_2,"r");

    if (arch1==NULL){
        return -1;
    }
    if (arch2==NULL){
        return -1;
    }

    r=fscanf(arch2,"%d,%d,%d,%d,%d,%d,%d,%d",&pg1,&pp1,%pe1,&ga1,&gc1);
    while(r!=0)
    {
        arr[i].pg=pg1;
        arr[i].pp=pp1;
        arr[i].pe=pe1;
        arr[i].ga=ga1;
        arr[i].gc=gc1;
        i++;
        r=fscanf(arch2,"%d,%d,%d,%d,%d",&pg1,&pp1,%pe1,&ga1,&gc1);
    }
    fclose(arch2);
/**--------------------------------------------------------------------*/
    r1=fgets(str, T, arch1);
    while(r1!=0)
    {
        strcpy(arr[c].equip,str);;
        c++;
        r1=fgets(str, T, arch1);
    }
    fclose(arch1);                   /** cerrar el archivo arch" */
}
/**------------------------------------------------------------------------*/
void imprimirArr(struct puntos_y_goles arr[5], char arch3[])
{
    FILE*archivo;
    char str[T]={0}
    int r3;
    int c=0;
    archivo=fopen(arch3,"r");
    r3=fgets(str, T, arch1);
    while (r3!=0)
    {
        for(c=0,c<5,c++)
        {
        printf("%s %2d %2d %2d %2d %2d",str,arr[i].pg,arr[i].pp,arr[i].pe,arr[i].ga,arr[i].gc);           /** Imprimir en pantalla la variable que contiene la información leida del archivo */)
        r3= fgets (str, T, arch1);    /** LEER archivo. (al final del while)  */
        c++;
        }
    }
    fclose(arch1);
/**------------------------------------------------------------------------*/

}
