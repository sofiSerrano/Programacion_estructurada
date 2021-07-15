#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define F 6
#define C 10

void cargarMatI(char mat[F][C]);
void imprimirMatI(char mat[F][C]);
void ordenarMatI(char mat[F][C]);
char aMinus(char c);

int main()
{
    char tex[F][C]={0};
    cargarText(tex);
    printf("\n");
    imprimirText(tex);
    ordenarText(tex);
    printf("\n");
    imprimirText(tex);

    return 0;
}

/*char aMinus(char c){
    if (c>='A' && c<='Z')
        return c+32;
    return c;
}*/

void cargarText(char tex[F][C]){
	int f = 0, c = 0;
	char aux;
    printf("\nIngrese(cero para cortar): ");
	aux=getche();

	for (f=0; f<F-1 && aux!= '\r'; f++){
		for(c=0;c<C-1 && aux!='\r' ; c++){
			tex[f][c]=aux;
			aux=getche();
		}
		tex[f][c]='\0';
		printf("\nIngrese: ");
        aux=getche();
	}
	tex[f][0]='\0';
}

void imprimirText(char tex[F][C]){
	int f = 0, c = 0;


	for (f=0; f<F; f++){
		for(c=0;c<C;c++){
			printf("%4c",tex[f][c]);
		}
		printf("\n");
	}
}

void ordenarText(char tex[F][C])
{
    int f=0;
    int c=0;
    char aux;
    for(f=0;tex[f][0]!='\0';f++){
        for (c=f+1;tex[c][0]!='\0';c++){
            if (tex[f][0]>tex[c][0]){
                aux=tex[f][0];
                tex[f][0]=tex[c][0];
                tex[c][0]=tex;
            }
        }
    }
}
