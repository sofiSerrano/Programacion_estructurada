#include <stdio.h>
#include <math.h>

int suma(int num1,int num2)
{
    int sum;
    sum= num1+num2;
    return sum;
}
int resta(int num1,int num2)
{
    int rest;
    if (num1>num2){
        rest=num1-num2;
    }
    else if (num2>num1){
        rest=num2-num1;
    }
    else if (num1==num2){
        rest=num1-num1;
    }
    return rest;
}
int multi(int num1, int num2)
{
    int mult;
    mult=num1*num2;
    return mult;
}
int divisi(int num1, int num2)
{
    int div;
    if (num2>num1){
        div=num2/num1;
}
    else if (num1>num2){
        div=num2/num1;
    }
    else if (num1==num2){
        div=num1/num2;
    }
    return div;
}
int main()
{
   char simb[0];
   int cuenta;
   int num1;
   int num2;
   printf("simbolo + - / * :  ");
   gets(simb);
   printf("el numero 1: ");
   scanf("%d",&num1);
   printf("el numero 2: ");
   scanf("%d",&num2);
   if (simb=="+"){

       cuenta=suma(num1,num2);
       printf("la cuenta es : %d + %d",num1,num2);
       printf("resultado es: %d",cuenta);
   }
   else if (simb=="-"){
       cuenta=resta(num1,num2);
       printf("la cuenta es : %d - %d",num1,num2);
       printf("resultado es: %d",cuenta);
   }
   else if (simb=="*"){
        cuenta=multi(num1,num2);
        printf("la cuenta es : %d * %d",num1,num2);
        printf("resultado es: %d",cuenta);
   }
   else if (simb=="/"){
        cuenta=divisi(num1,num2);
        printf("la cuenta es : %d / %d",num1,num2);
        printf("resultado es: %d",cuenta);
   }
   return 0;
}
