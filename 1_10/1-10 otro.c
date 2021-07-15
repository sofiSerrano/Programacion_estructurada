#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**-------------------------------------------------*/
void cargarArch(char arch[])
{
    FILE*archivo;
    char c;
    int i=0;
    char st[100];
    archivo=fopen(arch,'r');

    if (archivo==NULL)
    {
        printf("No hay nada inside brou");
    }
    c=fgetc(archivo);
    while(c!=EOF)
    {
        st[i]=c;
        printf("%c",st[i]);
        i++;
        c=fgetc(archivo);
    }
    st[i]="\0";
    fclose(archivo);
}

int main()
{
    char arch[] ="ejerchar.txt";
    cargarArch(arch);
    return 0;
}
