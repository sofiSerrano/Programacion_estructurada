#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define F 6
#define C 10

void cargarMatI(char mat[F][C]);
void imprimirMatI(char mat[F][C]);
void ordenarMatI(char mat[F][C]);

/*char aMinus(char c){
    if (c>='A' && c<='Z')
        return c+32;
    return c;
}*/

void cargarMatI(char mat[F][C]){
	int f = 0, c = 0;
	char aux;
    printf("\nIngrese(cero para cortar): ");
	aux=getche();

	for (f=0; f<F-1 && aux!= '\0'; f++){
		for(c=0;c<C-1 && aux!='\r' ; c++)
        {
			mat[f][c]=aux;
			aux=getche();
		}
		mat[f][c]='\0';
		printf("\nIngrese: ");
        aux=getche();
	}
	mat[f][0]='\0';
}

void imprimirMatI(char mat[F][C]){
	int f = 0, c = 0;

	for (f=0; f<F; f++){
		for(c=0;c<C;c++){
			printf("%2c",mat[f][c]);
		}
		printf("\n");
	}
}

void ordenarMatI(char mat[F][C])
{
    int f=0;
    int c=0;
    char aux;
    for(f=0;mat[f][0]!='\0';f++)
    {
            for (c=f+1;mat[c][0]!='\0';c++)
        {
                if (mat[f][0]>mat[c][0]) /** strcmp, que nos servirá para comparar dos CADENAS y así saber si son iguales o son diferentes. */
                {
                    strcpy(aux,mat[f]); /**lo que hay en mat f lo copia en a aux TOMA TODA LA CADENA*/
                    strcpy(mat[f],mat[c]);/**lo que hay en mat c lo copia en mat f*/
                    strcpy(mat[c],aux); /**lo que hay en mat c lo copia en mat f*/
                }
        }
    }
}


int main(){
    char mat[F][C]={0};
    cargarMatI(mat);
    printf("\n");
    imprimirMatI(mat);
    printf("\n");
    ordenarMatI(mat);
    imprimirMatI(mat);

    return 0;
}
