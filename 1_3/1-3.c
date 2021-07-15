
#include <stdio.h>
#include <string.h>
/**
void ejemplo(char* s)
{
   char texto[100];
    printf("ingrese text:");
    gets(texto);// elijo gets porque me lee el ejercicio entero
    strcpy(s, texto);
}
void main()
{
    char texto[100]; // se reserva memoria para
ejemplo(texto);
printf(texto);
}
*/

void cambio(char *cambiar,char* sustituir ,char* cadena[100]);
void leer(char *cadena[100]);
int main();

void leer(char* cadena[100])
{
   char texto[100];
    printf("ingrese text:");
    gets(texto);// elijo gets porque me lee el ejercicio entero
    strcpy(cadena, texto);
}


void cambio(char *cambiar, char* sustituir, char* cadena[100])
{
    int i=0;
    for (i=0;cadena[i]!='\n' && i<100;i++)
    {
        if (cadena[i]==cambiar)
        {
            cadena[i]=sustituir;
        }

    }
}

int main()
{
    char cambiar;
    char sustituir;
    char cadena[100];
    leer(cadena);
    printf("%s",cadena[100]);
    printf("\nCaracter sustituto: ");
    scanf("%c",&sustituir);
    printf("\nCaracter para cambiar: ");
    scanf("%c",&cambiar);
    while (getchar ()!='\n');
    cambio(cambiar,sustituir,cadena[100]);
            printf("\n");
        printf("%s",cadena[100]);
        printf("\n");
    return 0;
}

/**me funciona pero separado*/
/**
#include <stdio.h>

    int main(){
    char cadena[100];
    char cambiar;
    char sustituir;
    int i;
    printf("Escribe una frase: ");
    gets(cadena);
    printf("\nCaracter para cambiar: ");
    scanf("%c",&cambiar);
    while (getchar ()!='\n');
    printf("\nCaracter sustituto: ");
    scanf("%c",&sustituir);
    for (i=0;cadena[i]!='\0';i++){
        if (cadena[i]==cambiar){
            cadena[i]=sustituir;
        }

    }
        printf("\n");
        printf("%s",cadena);
        printf("\n");
      return 0;
    }

*/
