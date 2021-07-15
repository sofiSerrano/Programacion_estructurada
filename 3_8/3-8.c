#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char* cargarStrDin1() ;
void escribirArch(const char * nomArch, char* cadena);
void imprimirArch(const char * nomArch);
/**--------------------------------------------------------*/
char* cargarStrDin1()
{
    int i=0;
	char letra;
	char* arr=NULL;

	arr = (char *) malloc(sizeof(char));
	if (arr==NULL){return NULL;}

	putchar(letra); // guarda todos caracteres para el getchar
	letra=getchar();       // letra = getche();
	while (letra!='\n')    //(letra!='\r')
	{
		*(arr+i)=letra;
		i++;
		arr=(char *) realloc(arr,(i+1)*sizeof(char));
		letra=getchar();
	}
	arr[i]='\0'; // *(arr+i)='\0'
	printf("\n");
	return arr;
}
/**------------------------------------------------------------*/
void escribirArch(const char * nomArch, char* cadena)
{
    FILE* arch;
    arch=fopen(nomArch,"w");
    fprintf(arch,"%s",cadena);
}
/**------------------------------------------------------------*/
void imprimirArch(const char * nomArch)
{
    FILE* arch;
    arch=fopen(nomArch,"r");
    int c;
    if (arch==NULL)
    {
        printf("nada");
    }
    c=fgetc(arch);
    while(c!=EOF)
    {
            printf("%c", c);
             c=fgetc(arch);

    }
     printf("EOF= %d\n",c);
    printf("EOF= %d\n",EOF);
    fclose(arch);
}
/**-------------------------------------------------------------*/
int main()
{
    char* str=NULL;
    str = cargarStrDin1();
    //cargarStrDin2(&str);
    escribirArch("frase.txt", str);
//cargo el archivo pero me aparece que no esta
    imprimirArch("frase.txt");
    return 0;
}

