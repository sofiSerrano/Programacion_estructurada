#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** 03 Punteros */

/**

*/
int main()
{
	int arrI[4]={10,22,13,40};
	int x=10;

	printf("\n[0][1] -> %d | %d\n",arrI[0],arrI[1]);
	printf("\n[0][1] -> %d | %d\n",*(arrI+0),*(arrI+1));
	printf("\n@[0][1] -> %p | %p\n",(arrI+0),(arrI+1));
	printf("\n@arrI -> %p\n",arrI);
	printf("\nx -> %d\n",x);
	printf("\nx -> %p\n",x);


	return 0;
}
/*
int main()
{

char car = '@';
char* pCar;
int num1, num2=0;
num1 = 20;
printf("\n car    = %4c\n",car);
printf("@car    = %4p\n",&car);
pCar =  &car;
printf("pCar    = %4p\n",pCar);
printf("*pCar   = %4c\n",*pCar);


//printf(" num1  = %4d\n",num1);
//printf("@num1  = %4p\n",&num1);

// printf(" num2  = %4d\n",num2);



return 0;
}
*/
/*
int main()
{
char msj[8]="hola";
char* pMsj;

printf("\n%s\n",msj);
printf("@msj    = %4p\n",msj);
pMsj = msj;
printf("pMsj    = %4p\n",pMsj);
printf("\n");
printf("[0][1]    = %c%c\n", msj[0],msj[1] );
printf("[0][1]    = %c%c\n", *(pMsj+0),*(pMsj+1));
printf("[0][1]    = %c%c\n", *(msj+0),*(msj+1) );
printf("\n@[0][1]    = %u | %u\n", (msj+0),(msj+1) );


return 0;
}
*
