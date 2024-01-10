/**************************************
* NOMBRE: #Javier#
* PRIMER APELLIDO: #Rubio#
* SEGUNDO APELLIDO: #Burgos#
* DNI: #50560356P#
* EMAIL: #jrubio629@alumno.uned.es#
**************************************/
#include <stdio.h>
int main (){

/*****************************
** DECLARACIÓN DE VARIABLES **
******************************/

int lado;              /*longitud del lado del rombo*/
int blanks;            /*número de espacios en blanco en cada línea*/
int linea;             /*número de linea en la que nos situamos*/
int caracter;          /*caracter correspondiente a imprimir*/

/*****************************
** ASIGNACIÓN VARIABLE LADO **
******************************/

printf("Lado del Rombo?");                /*el usuario aqui es donde define la longitud del rombo*/
scanf("%d", &lado);
printf("\n");

/************************
** BLOQUES FUNCIONALES **
*************************/

if( lado == 1){
printf ("@\n");}                    /*condición para construir el romb*/
if( lado > 1){
if( lado <= 20 ){

/************************
** IMPRESIÓN DEL ROMBO **
*************************/

/*************************************
** IMPRESIÓN DEL TRIÁNGULO SUPERIOR **
**************************************/

for(int linea=1; linea<=lado ; linea++){        /*numero de lineas del triangulo superior*/

for (int blanks=1; blanks<=lado-linea; blanks++){   /*impresion de espacios en blanco*/
printf( " " );}

for (int caracter=1; caracter<=linea ; caracter++){ /*impresion de caracteres del triángulo superior izquierdo*/

if ( caracter % 4 == 1){
printf ("@");}
if ( caracter % 4 == 2){
printf (".");}
if ( caracter % 4 == 3){
printf ("o");}
if ( caracter % 4 == 0){
printf (".");}
}

for (int caracter=linea; caracter>= 2 ; caracter-- ){ /*impresion de caracteres del triángulo superior derecho*/

if ( caracter % 4 == 2){
printf ("@");}
if ( caracter % 4 == 3){
printf (".");}
if ( caracter % 4 == 0){
printf ("o");}
if ( caracter % 4 == 1){
printf (".");}
}
printf("\n"); /*salto de linea para que se imprima la siguiente linea debajo de la anterior*/
}

/*************************************
** IMPRESIÓN DEL TRIÁNGULO INFERIOR **
**************************************/
for(int linea=1; linea<=lado ; linea++){        /*numero de lineas del triangulo inferior*/

for (int blanks=1; blanks<=linea; blanks++){   /*impresion de espacios en blanco*/
printf( " " );}

for (int caracter=1; caracter<=lado-linea ; caracter++){ /*impresion de caracteres del triángulo inferior izquierdo*/

if (caracter %4 == 1 ){
printf ("@");}
if (caracter %4 == 2 ){
printf (".");}
if (caracter %4 == 3 ){
printf ("o");}
if (caracter %4 ==0 ){
printf (".");}
}
for (int caracter=lado-linea; caracter>=2 ; caracter--){ /*impresion de caracteres del triángulo inferior derecho*/

if (caracter %4 == 2 ){
printf ("@");}
if (caracter %4 == 3 ){
printf (".");}
if (caracter %4 == 0 ){
printf ("o");}
if (caracter %4 ==1 ){
printf (".");}
}
printf("\n");
}
}
}
}
