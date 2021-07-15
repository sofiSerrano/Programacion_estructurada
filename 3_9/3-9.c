#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#define T 10
char* leerArch(const char * nomArch)
{
    char str[T]={0};
    int r;
    int c=0;
    int i;
    char* arr;
    FILE* arch;
    arch=fopen(nomArch,'r');
    if (arch==NULL)
    {
        return -1;
    }
    r=fgets(str,T,arch);
    while(r!=0)
    {
        r= fgets (str, T, arch);
        c++;
    }
    fclose(arch);

    arr=(char*) malloc(30 * sizeof(char));
    strcpy( arr, str);
    printf("\n");
    return arr;

}

int main()
{
    char* str=NULL;
 //   char* subStr=NULL;
  //  int i=8, n=5;
    str = leerArch("frase.txt");
    printf("%s",str);
//    subStr = subcadena (str, i, n);
  //  printf("Para i = %d y n = %d ,Se encontro el substring:", i,n);
   // printf(“%s”, subStr);
    return 0;
}
