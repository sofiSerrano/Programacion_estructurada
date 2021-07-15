
	/* Impresión de los datos */
//	for( num_amigo=0; num_amigo<ELEMENTOS; num_amigo++ ) {
//		printf( "Mi amigo %s ", amigo[num_amigo].nombre );
//		printf( "%s tiene ", amigo[num_amigo].apellido );
//		printf( "%i años ", amigo[num_amigo].edad );
//		printf( "y su teléfono es el %s.\n" , amigo[num_amigo].telefono );
//	}
//}
//
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include TAM 100

void cargarch(char archivo[],char arrC[TAM]);
void imprimirArrC(char arrC[TAM]);

void cargarch(char archivo[],char arrC[TAM])
{
                                /** declaro el arreglo donde voy a guardar el string que lee fgets. */
    int r;                          /** en r guardo lo que retorna fgets*/
    int i=0;
    int c=0;
    FILE* arch;                     /** Declaro la variable arch com tipo de dato FILE*  */
    arch=fopen(archivo,"r");     /** Abrir el archivo "arch.txt" de lectura. En arch queda el puntero que refrerencia al archivo*/

    if(arch==NULL)                  /** Si el arch contiene NULL es porque el archivo no pudo ser abierto*/
        return -1;                  /** Termina el programa */

    r= fgets (str, TAM, arch);        /** LEER archivo. (antes del while) */
    while(r!=0)                     /** Mientras no sea fin de archivo*/
    {

        printf("%s",str);                       /** guardar en arreglo la variable que contiene la información leida del archivo */
        arrI[i]=str;
        i++;
        r= fgets (str, T, arch);    /** LEER archivo. (al final del while)  */
    }
    fclose(arch);                   /** cerrar el archivo arch" */
}

void imprimirArrC(char arrC[TAM])
{
    /** El arreglo de carcteres se puede impirmir con una solo linea*/
    printf("%s",arrC);

    // El arreglo tambien se puede imprimir recorriendolo con un ciclo
    int i;
    printf("\n");
    for (i=0; arrC[i]!='\0';i++)
    {
            printf("%c",arrC[i]);

    }
    printf("\n");
}

int main()
{
    char arrC[TAM]={0};
    archivo="nomina.txt"
    cargarch(char archivo[],char arrC[TAM]);
    imprimirArrC(arrC[TAM]);
    return 0;
}
