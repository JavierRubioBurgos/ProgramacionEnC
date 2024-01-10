#pragma once
#include "BaseDeDatos.h"

void EditarBuque(){

  char identificador;
  typedef char Nombres[20];
  Nombres nombre;
  int dia;
  int mes;
  int anno;
  int identificadorPuertoInicio;
  char SN;

printf("\n\n\n\n\nEditar Buque:\n");
printf("\n");
printf("       Identificador (letra entre A y E)?");
scanf(" %c", &identificador);
while(identificador!='A'&&identificador!='B'&&identificador!='C'&&identificador!='D'&&identificador!='E'){
  printf("       Identificador (letra entre A y E)?");
  scanf(" %c", &identificador);
}
printf("       Nombre (entre 1 y 20 caracteres)?");
scanf("%s", &nombre);
while(strlen(nombre)>20 || strlen(nombre)<1){
printf("       Nombre (entre 1 y 20 caracteres)?");
scanf("%s", &nombre);
}
printf("       Fecha inicio: Dia?");
scanf("%d", &dia);
while(dia<1 || dia>31){
  printf("       Fecha inicio: Dia?");
  scanf("%d", &dia);
}
printf("       Fecha inicio: Mes?");
scanf("%d", &mes);
while(mes<1 || mes>12){
  printf("       Fecha inicio: Mes?");
  scanf("%d", &mes);
}
printf("       Fecha inicio: Anno?");
scanf("%d", &anno);
while(anno<1600 || anno>2023){
  printf("       Fecha inicio: Anno?");
  scanf("%d", &anno);
}
printf("       Puertos posibles para la ubicacion inicial del buque:\n");
printf("          %d - %s\t\t\tTipo: %s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);
printf("          %d - %s\t\t\tTipo: %s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);
printf("       Identificador de puerto inicio?");
scanf("%d", &identificadorPuertoInicio);
while(identificadorPuertoInicio>10 || identificadorPuertoInicio<1){
scanf("%d", &identificadorPuertoInicio);}
printf("\nIMPORTANTE: Esta opcion borra los datos anteriores.\n");
printf("Son correctos los nuevos datos (S/N)?");
scanf(" %c", &SN);
while(SN!='S'&&SN!='N'){
printf("Son correctos los nuevos datos (S/N)?");
scanf(" %c", &SN);
}
if(SN='S'){
switch(identificador){

  case 'A':
  strcpy(Buque1.nombre,nombre);
  Buque1.dia=dia;
  Buque1.mes=mes;
  Buque1.anno=anno;
  switch(identificadorPuertoInicio){
    case 1:
    strcpy(Buque1.PuertoSalida,Puerto1.nombre);
    break;
    case 2:
    strcpy(Buque1.PuertoSalida,Puerto2.nombre);
    break;
    case 3:
    strcpy(Buque1.PuertoSalida,Puerto3.nombre);
    break;
    case 4:
    strcpy(Buque1.PuertoSalida,Puerto4.nombre);
    break;
    case 5:
    strcpy(Buque1.PuertoSalida,Puerto5.nombre);
    break;
    case 6:
    strcpy(Buque1.PuertoSalida,Puerto6.nombre);
    break;
    case 7:
    strcpy(Buque1.PuertoSalida,Puerto7.nombre);
    break;
    case 8:
    strcpy(Buque1.PuertoSalida,Puerto8.nombre);
    break;
    case 9:
    strcpy(Buque1.PuertoSalida,Puerto9.nombre);
    break;
    case 10:
    strcpy(Buque1.PuertoSalida,Puerto10.nombre);
    break;
  }
  break;
  case 'B':
  strcpy(Buque2.nombre,nombre);
  Buque2.dia=dia;
  Buque2.mes=mes;
  Buque2.anno=anno;
  switch(identificadorPuertoInicio){
    case 1:
    strcpy(Buque2.PuertoSalida,Puerto1.nombre);
    break;
    case 2:
    strcpy(Buque2.PuertoSalida,Puerto2.nombre);
    break;
    case 3:
    strcpy(Buque2.PuertoSalida,Puerto3.nombre);
    break;
    case 4:
    strcpy(Buque2.PuertoSalida,Puerto4.nombre);
    break;
    case 5:
    strcpy(Buque2.PuertoSalida,Puerto5.nombre);
    break;
    case 6:
    strcpy(Buque2.PuertoSalida,Puerto6.nombre);
    break;
    case 7:
    strcpy(Buque2.PuertoSalida,Puerto7.nombre);
    break;
    case 8:
    strcpy(Buque2.PuertoSalida,Puerto8.nombre);
    break;
    case 9:
    strcpy(Buque2.PuertoSalida,Puerto9.nombre);
    break;
    case 10:
    strcpy(Buque2.PuertoSalida,Puerto10.nombre);
    break;
  }
  break;

  case 'C':
  strcpy(Buque3.nombre,nombre);
  Buque3.dia=dia;
  Buque3.mes=mes;
  Buque3.anno=anno;
  switch(identificadorPuertoInicio){
    case 1:
    strcpy(Buque3.PuertoSalida,Puerto1.nombre);
    break;
    case 2:
    strcpy(Buque3.PuertoSalida,Puerto2.nombre);
    break;
    case 3:
    strcpy(Buque3.PuertoSalida,Puerto3.nombre);
    break;
    case 4:
    strcpy(Buque3.PuertoSalida,Puerto4.nombre);
    break;
    case 5:
    strcpy(Buque3.PuertoSalida,Puerto5.nombre);
    break;
    case 6:
    strcpy(Buque3.PuertoSalida,Puerto6.nombre);
    break;
    case 7:
    strcpy(Buque3.PuertoSalida,Puerto7.nombre);
    break;
    case 8:
    strcpy(Buque3.PuertoSalida,Puerto8.nombre);
    break;
    case 9:
    strcpy(Buque3.PuertoSalida,Puerto9.nombre);
    break;
    case 10:
    strcpy(Buque3.PuertoSalida,Puerto10.nombre);
    break;
  }
  break;

  case 'D':
  strcpy(Buque4.nombre,nombre);
  Buque4.dia=dia;
  Buque4.mes=mes;
  Buque4.anno=anno;
  switch(identificadorPuertoInicio){
    case 1:
    strcpy(Buque4.PuertoSalida,Puerto1.nombre);
    break;
    case 2:
    strcpy(Buque4.PuertoSalida,Puerto2.nombre);
    break;
    case 3:
    strcpy(Buque4.PuertoSalida,Puerto3.nombre);
    break;
    case 4:
    strcpy(Buque4.PuertoSalida,Puerto4.nombre);
    break;
    case 5:
    strcpy(Buque4.PuertoSalida,Puerto5.nombre);
    break;
    case 6:
    strcpy(Buque4.PuertoSalida,Puerto6.nombre);
    break;
    case 7:
    strcpy(Buque4.PuertoSalida,Puerto7.nombre);
    break;
    case 8:
    strcpy(Buque4.PuertoSalida,Puerto8.nombre);
    break;
    case 9:
    strcpy(Buque4.PuertoSalida,Puerto9.nombre);
    break;
    case 10:
    strcpy(Buque4.PuertoSalida,Puerto10.nombre);
    break;
  }
  break;

  case 'E':
  strcpy(Buque5.nombre,nombre);
  Buque5.dia=dia;
  Buque5.mes=mes;
  Buque5.anno=anno;
  switch(identificadorPuertoInicio){
    case 1:
    strcpy(Buque5.PuertoSalida,Puerto1.nombre);
    break;
    case 2:
    strcpy(Buque5.PuertoSalida,Puerto2.nombre);
    break;
    case 3:
    strcpy(Buque5.PuertoSalida,Puerto3.nombre);
    break;
    case 4:
    strcpy(Buque5.PuertoSalida,Puerto4.nombre);
    break;
    case 5:
    strcpy(Buque5.PuertoSalida,Puerto5.nombre);
    break;
    case 6:
    strcpy(Buque5.PuertoSalida,Puerto6.nombre);
    break;
    case 7:
    strcpy(Buque5.PuertoSalida,Puerto7.nombre);
    break;
    case 8:
    strcpy(Buque5.PuertoSalida,Puerto8.nombre);
    break;
    case 9:
    strcpy(Buque5.PuertoSalida,Puerto9.nombre);
    break;
    case 10:
    strcpy(Buque5.PuertoSalida,Puerto10.nombre);
    break;
  }
  break;
}
}
}
