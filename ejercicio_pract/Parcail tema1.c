//** SECCIÓN[0] ---------------- G E N E R A L -------------------------------*/
///////////////////////////////////////////////////////  V E R S I O N   //////
// P R O G R A M A C I Ó N   E S T R U C T U R A D A //  20200427 19:30  //////
///////////////////////////////////////////////////////////////////////////////

/** SECCIÓN[1]----- D A T O S   E S T U D I A N T E --------- */
/** ------ C O M P L E T A R    O B L I G A T O R I O ------ */
///////////////////////////////////////////////////////////////////////////////
// FECHA        :  28 / 09 / 2020
// COMISIÓN     : AM
// EXAMEN Nro   : 1
// EXAMEN [P|R] : p
// TEMA Nro     : 3
// APELLIDO     : SERRANO
// NOMBRE       : SOFÍA
// LEGAJO       : 151902219
// DNI          : 431190995
//
// COMENTARIOS o OBSERVACIONES del estudiante:
// <Usar si desea comunicar algo al profesor corrector>
//
//
///////////////////////////////////////////////////////////////////////////////

/** SECCIÓN[2] ---- N O M B R E   D E L   A R C H I V O ------ */
///////////////////////////////////////////////////////////////////////////////
// ¿Como confeccionar el nombre del archivo ?
// [Apellido].PE.[Anio].[Cuatrimestre].[Comisión][NroExamen][TipoExamen][NroTema].c
//
// [Apellido]    -> REEMPLAZAR por tu apellido y nombre, con
//                  la forma apellidoNombre.
//  PE           -> NO se reemplaza, signifa Programación Estructurada.
// [Anio]        -> REEMPLAZAR con dos dígitos del año actual. Ej: 20
// [Cuatrimestre]-> REEMPLAZAR con un dígito 1 =  1° Cuatr | 2 = 2° Cuatr.
// [Comisión]    -> REEMPLAZAR por las dos letras de su comisión Ejemplo: BM.
// [NroExamen]   -> REEMPLAZAR por el número (entero) de examen ej: 1.
// [TipoExamen]  -> REEMPLAZAR con P  = Parcial | R = Recuperatorio |
//                  E = Extraordinario.
// [NroTema]     -> REEMPLAZAR por en número(entero) de tema ej: 2.
//  c            -> NO se reemplaza, es la extensión del archivo.
//
//
// Un ejemplo del "nombre de un archivo" podria ser:
//
//     Ej ->   Serrano.PE.20.1C.AM.1.P.2.c
//
///////////////////////////////////////////////////////////////////////////////

/** SECCIÓN[3]--- E N V Í O   D E L   A R C H I V O --------- */
///////////////////////////////////////////////////////////////////////////////
// El archivo .c con la solución deberá ser entregado
// a través de la plataforma EVA UCA
// Dentro de la pagina de la materia en EVA, IR a la
// solapa EVALUACIONES o bien copiar el siguiente link
//
// https://eva.uca.edu.ar/course/view.php?id=1360&section=4
//
// Ahí podrán encontrar una tarea de entrega de parcialito
// Deberán hacer click sobre ella y se abrirá una ventana
// donde aparecerá el botón 'Agregar Entrega'  en el cual deberán hacer click
// sobre él para desplegar una nueva ventana donde podrán realizar la carga del
// archivo
//
// IMPORTANTE: La tarea será abierta pasados los 15 minutos
// del horario del comiezo de la clase y estará disponible 90 minuto
// Ejemplo: Si tu clase es de 7:45 a 10:15 => la tarea se
//          abrirá a las 8:00 y se cerrará 9:30
///////////////////////////////////////////////////////////////////////////////

/** SECCIÓN[4]----- P A R A   E L   P R O F E S O R --------- */
///////////////////////////////////////////////////////////////////////////////
// COMENTARIOS o OBSERVACIONES del PROFESOR:
// <Reservado para uso del profesor>
//
//
///////////////////////////////////////////////////////////////////////////////

/** SECCIÓN[5]-- S O L U C I Ó N   A  L A  C O N S I G N A --*/
// ||||| ///////////////////////////////////////////////////////// ||||| //////
// |||||  ESCRIBA su código de la Solución a partir de AQUI ABAJO  ||||| //////
// vvvvv ///////////////////////////////////////////////////////// vvvvv //////


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define F 8
#define C 20
void cargartext(char mat[F][C], char* );
void imprimirMatI(char mat[F][C]);
void ordenarText(char mat[F][C]);
char A_min(char c);

char A_min(char c){

    if (c>='A' && c<='Z')
        return c+32;
    return c;
}

void cargartext(char mattext[F][C],char* arch)
{
    FILE *archivo;
    archivo=fopen(arch,"r");
    int f,c;
    char aux;
    if (archivo==NULL)
    {
        printf("no hay archivo;");
    }
    aux=fgetc(archivo);
    for (f=0;f<F && aux!=EOF;f++)
    {
        for (c=0;c<C && aux!='\n' && aux!=EOF;c++)
        {
             //fgetc nos permite leer un carácter del archivo y desplazar el cursor en 1 posición.
            mattext[f][c]=aux;
            aux=fgetc(archivo);
        }
        mattext[f][c]='\0';
        aux=fgetc(archivo);
    }
    fclose(archivo);
}

void imprimirMatI(char mat[F][C])
{
    int f=0;
    int c=0;
    for (f=0;f<F && mat[f][0]!='\0';f++) // así me imprime hasta llegar al /0 de la ultima fila
    {
        for (c=0;c<C && mat[f][c]!='\0';c++)
            printf("%c",mat[f][c]);
        printf("\n");
    }
}

void ordenarText(char text[F][C])
{
    int f=0;
    int c=0;
    char aux[C]={0};
    for (f=0;f<F && text[f][0]!='\0';f++)
    {
        for (c=f+1;c<F && text[c][0]!='\0';c++)
        {
            if(strcmp(text[f],text[c])>0) //ompara dos cadenas de carácter por carácter.y si si el valor ASCII del primer carácter no coincidente es mayor que el segundo va a devolver 1
            {
                strcpy(aux,text[f]); // la cadena de la fila f pasa al aux
                strcpy(text[f],text[c]); //la cadena de la fila c pasa a la fila f
                strcpy(text[c],aux); // la cadena de la fila aux pasa a la fila c
            }
        }
    }
}

int main ()
{
    char mat[F][C]={0};
    char arch[]="equipos.txt";
    cargartext(mat,arch);
    imprimirMatI(mat);
    printf("\n");
    ordenarText(mat);
    imprimirMatI(mat);
    return 0;
}

