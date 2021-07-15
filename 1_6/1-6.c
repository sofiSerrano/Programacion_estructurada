#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define T 101
#define TERM '\0'

void cargarText(char txt[]);
void imprimirText(char txt[]);
void normalizar(char txt[]);
int esLetra(char let);
int esMinuscula(char let);
char aMayus(char let);
int tamTxt(char txt[]);

int main(){
    char txt[T];

    cargarText(txt);
    imprimirText(txt);
    //Normalizo e imprimo
    normalizar(txt);
    imprimirText(txt);

    return 0;
}

void cargarText(char txt[]){
    char temp;
    int i=0;

    printf("Ingrese un texto, finalize con Enter: \n");
    temp = getche();
    while(i<T-2 && temp!='\r'){
        txt[i] = temp;
        i++;
        if(i<T-2){
            temp = getche();
        }
    }
    txt[i] = ' ';
    txt[i+1] = TERM;
}

void imprimirText(char txt[]){
    printf("\n");
    printf("%s", txt);

}

void normalizar(char txt[]){
    int i, j, proxMayus;
    proxMayus = 1;
    i=0;
    j=0;
    int temp;

    while(j<tamTxt(txt)){
        if(esLetra(txt[j]) && esMinuscula(txt[j]) && (proxMayus == 1)){
            txt[i] = aMayus(txt[j]);
            proxMayus = 0;
            i++;
        }
        else if(esLetra(txt[j]) && esMinuscula(txt[j]) == 0 && (proxMayus == 1)){
            temp = txt[j];
            txt[i] = temp;
            proxMayus =0;
            i++;
        }
        else if(esLetra(txt[j])){
            temp = txt[j];
            txt[i] = temp;
            i++;
        }
        else if(txt[j] == '.'){
            temp = txt[j];
            txt[i] = temp;
            proxMayus = 1;
            i++;
        }
        else if((j+1==tamTxt(txt)) && txt[j+1] == TERM){
            txt[i] = '.';
        }
        else if(isspace(txt[j])){
            if(i != 0){
                temp = txt[j];
                txt[i] = temp;
                i++;
            }
            while(isspace(txt[j+1])){
                j++;
            }
        }
        j++;
    }

    txt[i+1] = TERM;
}

int tamTxt(char txt[]){
    int i;
    for(i=0; i<T-1 && txt[i]!=TERM; i++){
    }
    return i;
}

int esMinuscula(char let){
    if(let>='a' && let<='z'){
        return 1;
    }
    return 0;
}

int esLetra(char let){
    if((let>='a' && let<='z') || (let>='A' && let<='Z')){
        return 1;
    }
    return 0;
}

char aMayus(char let){
    char a = let -32;
    return a;
}
