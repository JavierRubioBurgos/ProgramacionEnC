#pragma once
#include "BaseDeDatos.h"

void EditarPuerto(){

  int identificador;
  typedef char Nombres[20];
  Nombres nombre;
  char tipoPuerto;
  char SN;

printf("\n\n\n\n\nEditar Puerto:\n");
printf("\n");
printf("       Identificador (numero entre 1 y 10)?");
scanf("%d", &identificador);
while(identificador<1 || identificador>10){
  printf("       Identificador (numero entre 1 y 10)?");
  scanf("%d", &identificador);
}
printf("       Nombre (entre 1 y 20 caracteres)?");
scanf("%s", &nombre);
while(strlen(nombre)>20 || strlen(nombre)<1){
printf("       Nombre (entre 1 y 20 caracteres)?");
scanf("%s", &nombre);
}
do{
printf("       Tipo(Y-Yacimiento, R-Refineria, D-Deposito)?");
scanf(" %c",&tipoPuerto);
}
while(tipoPuerto!='Y' && tipoPuerto!='R' && tipoPuerto!='D');
printf("\n");
printf("IMPORTANTE: Esta opcion borra los datos anteriores.\n");
printf("Son correctos los nuevos datos (S/N)?");
scanf(" %c", &SN);
while(SN!='S'&&SN!='N'){
printf("Son correctos los nuevos datos (S/N)?");
scanf(" %c", &SN);
}
if(SN='S'){
switch(identificador){

  case 1:
  strcpy(Puerto1.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto1.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto1.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto1.tipopuerto,"Deposito");break;
  }
  break;

  case 2:
  strcpy(Puerto2.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto2.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto2.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto2.tipopuerto,"Deposito");break;
  }
  break;

  case 3:
  strcpy(Puerto3.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto3.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto3.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto3.tipopuerto,"Deposito");break;
  }
  break;

  case 4:
  strcpy(Puerto4.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto4.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto4.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto4.tipopuerto,"Deposito");break;
  }
  break;

  case 5:
  strcpy(Puerto5.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto5.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto5.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto5.tipopuerto,"Deposito");break;
  }
  break;

  case 6:
  strcpy(Puerto6.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto6.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto6.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto6.tipopuerto,"Deposito");break;
  }
  break;

  case 7:
  strcpy(Puerto7.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto7.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto7.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto7.tipopuerto,"Deposito");break;
  }
  break;

  case 8:
  strcpy(Puerto8.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto8.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto8.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto8.tipopuerto,"Deposito");break;
  }
  break;

  case 9:
  strcpy(Puerto9.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto9.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto9.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto9.tipopuerto,"Deposito");break;
  }
  break;

  case 10:
  strcpy(Puerto10.nombre,nombre);
  switch(tipoPuerto){
  case 'Y':
  strcpy(Puerto10.tipopuerto,"Yacimiento");break;
  case 'R':
  strcpy(Puerto10.tipopuerto,"Refineria");break;
  case 'D':
  strcpy(Puerto10.tipopuerto,"Deposito");break;
  }
  break;
}
}
}

