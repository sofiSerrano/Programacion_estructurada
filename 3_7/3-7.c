/**
Desarrollar la función ​cargarStrDin() ​que permita ingresar una frase desde el teclado
hasta presionar ENTER. Y que lo ingresado lo almacene en un arreglo en memoria
dinámica y sin desperdiciar espacio. Luego la función deberá remitir al exterior el
contenido cargado. Realizar una prueba desde el programa principal imprimiendo en
consola el contenido remitido por la función.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** 03 Punteros */

char* cargarStrDin(){
	int i=0;
	char letra;
	char* arr=NULL; // tipo base del puntero es char y es char

/**asigna un valor NULL a una variable
de puntero en caso de que no tenga una dirección exacta para asignar.
Esto se hace en el momento de la declaración de variable.
Un puntero al que se le asigna NULL se llama puntero nulo .*/

	arr = (char *) malloc(10*sizeof(char));
    //Sizeof calcula la memoria requerida para variables, tipo de datos,
	if (arr==NULL){return NULL;}


	strcpy(letra,"hola mi");       // letra = getche();
	while (letra!='\n')    //(letra!='\r')
	{
		*(arr+i)=letra;
		i++;
		arr=(char *) realloc(arr,(i+1)*sizeof(char));
    //ntenta cambiar el tamaño del bloque de memoria al que apunta arr que se asignó previamente con una llamada a malloc o calloc .
	}
	arr[i]='\0'; // *(arr+i)='\0'
	printf("\n");
	return arr;
}

int main()
{
    printf("%s\n",cargarStrDin());
	return 0;
}
