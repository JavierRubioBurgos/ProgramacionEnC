#pragma once

typedef struct Puertos{
  int identificador;
  typedef char Nombres[20];
  Nombres nombre;
  Nombres tipopuerto;
};
Puertos Puerto1 = {1,"ShanGhai","Yacimiento"};
Puertos Puerto2 = {2,"HongKong","Refineria"};
Puertos Puerto3 = {3,"JebelAli","Deposito"};
Puertos Puerto4 = {4,"Roterdam","Yacimiento"};
Puertos Puerto5 = {5,"Singapur","Refineria"};
Puertos Puerto6 = {6,"Amberes","Deposito"};
Puertos Puerto7 = {7,"Angeles","Yacimiento"};
Puertos Puerto8 = {8,"Hamburgo","Refineria"};
Puertos Puerto9 = {9,"Valencia","Deposito"};
Puertos Puerto10 = {10,"Cagliari","Yacimiento"};

typedef struct Buques{
  char identificador;
  typedef char Nombres[20];
  Nombres nombre;
  int dia;
  int mes;
  int anno;
  Nombres PuertoSalida;
  Nombres Carga;
  Nombres tipopuerto;
  Nombres PuertoOrigen;
  Nombres CargaOrigen;
  int identificadorPuerto;
};
Buques Buque1 = {'A',"Maine",25,7,2020,"HongKong","Vacio"};
Buques Buque2 = {'B',"Calypso",14,7,2021,"Amberes","Gasoil"};
Buques Buque3 = {'C',"Peel",3,3,2022,"HongKong","Crudo"};
Buques Buque4 = {'D',"Audaz",9,12,2022,"Valencia","Gasolina"};
Buques Buque5 = {'E',"Neptuno",12,11,2022,"Cagliari","Vacio"};





void Carga1(){

  typedef char Nombres[20];
  Nombres Crudo="Crudo";
  Nombres Fuel="Fuel";
  Nombres Gasoil="Gasoil";
  Nombres Gasolina="Gasolina";

  if(strcmp(Buque1.tipopuerto,"Yacimiento")==0){
    printf("%s",Crudo);}
  else{
    printf("%s,%s o %s",Fuel,Gasoil,Gasolina);}}

void Carga2(){

  typedef char Nombres[20];
  Nombres Crudo="Crudo";
  Nombres Fuel="Fuel";
  Nombres Gasoil="Gasoil";
  Nombres Gasolina="Gasolina";
  if(strcmp(Buque2.tipopuerto,"Yacimiento")==0){
    printf("%s",Crudo);}
  else{
    printf("%s,%s o %s",Fuel,Gasoil,Gasolina);}}

void Carga3 (){

  typedef char Nombres[20];
  Nombres Crudo="Crudo";
  Nombres Fuel="Fuel";
  Nombres Gasoil="Gasoil";
  Nombres Gasolina="Gasolina";

  if(strcmp(Buque3.tipopuerto,"Yacimiento")==0){
    printf("%s",Crudo);}
  else{
    printf("%s,%s o %s",Fuel,Gasoil,Gasolina);}}

void Carga4(){

  typedef char Nombres[20];
  Nombres Crudo="Crudo";
  Nombres Fuel="Fuel";
  Nombres Gasoil="Gasoil";
  Nombres Gasolina="Gasolina";

  if(strcmp(Buque4.tipopuerto,"Yacimiento")==0){
    printf("%s",Crudo);}
  else{
    printf("%s,%s o %s",Fuel,Gasoil,Gasolina);}}

void Carga5(){

  typedef char Nombres[20];
  Nombres Crudo="Crudo";
  Nombres Fuel="Fuel";
  Nombres Gasoil="Gasoil";
  Nombres Gasolina="Gasolina";
  if(strcmp(Buque5.tipopuerto,"Yacimiento")==0){
    printf("%s",Crudo);}
  else{
    printf("%s,%s o %s",Fuel,Gasoil,Gasolina);}}

void TipoPuerto(){

  if(strcmp(Buque1.PuertoSalida,Puerto1.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto1.tipopuerto);
    Buque1.identificadorPuerto=Puerto1.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto2.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto2.tipopuerto);
    Buque1.identificadorPuerto=Puerto2.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto3.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto3.tipopuerto);
    Buque1.identificadorPuerto=Puerto3.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto4.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto4.tipopuerto);
    Buque1.identificadorPuerto=Puerto4.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto5.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto5.tipopuerto);
    Buque1.identificadorPuerto=Puerto5.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto6.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto6.tipopuerto);
    Buque1.identificadorPuerto=Puerto6.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto7.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto7.tipopuerto);
    Buque1.identificadorPuerto=Puerto7.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto8.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto8.tipopuerto);
    Buque1.identificadorPuerto=Puerto8.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto9.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto9.tipopuerto);
    Buque1.identificadorPuerto=Puerto9.identificador;}
  if(strcmp(Buque1.PuertoSalida,Puerto10.nombre)==0){
    strcpy(Buque1.tipopuerto,Puerto10.tipopuerto);
    Buque1.identificadorPuerto=Puerto10.identificador;}

   if(strcmp(Buque2.PuertoSalida,Puerto1.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto1.tipopuerto);
    Buque2.identificadorPuerto=Puerto1.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto2.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto2.tipopuerto);
    Buque2.identificadorPuerto=Puerto2.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto3.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto3.tipopuerto);
    Buque2.identificadorPuerto=Puerto3.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto4.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto4.tipopuerto);
    Buque2.identificadorPuerto=Puerto4.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto5.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto5.tipopuerto);
    Buque2.identificadorPuerto=Puerto5.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto6.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto6.tipopuerto);
    Buque2.identificadorPuerto=Puerto6.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto7.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto7.tipopuerto);
    Buque2.identificadorPuerto=Puerto7.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto8.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto8.tipopuerto);
    Buque2.identificadorPuerto=Puerto8.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto9.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto9.tipopuerto);
    Buque2.identificadorPuerto=Puerto9.identificador;}
  if(strcmp(Buque2.PuertoSalida,Puerto10.nombre)==0){
    strcpy(Buque2.tipopuerto,Puerto10.tipopuerto);
    Buque2.identificadorPuerto=Puerto10.identificador;}

    if(strcmp(Buque3.PuertoSalida,Puerto1.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto1.tipopuerto);
    Buque3.identificadorPuerto=Puerto1.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto2.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto2.tipopuerto);
    Buque3.identificadorPuerto=Puerto2.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto3.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto3.tipopuerto);
    Buque3.identificadorPuerto=Puerto3.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto4.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto4.tipopuerto);
    Buque3.identificadorPuerto=Puerto4.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto5.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto5.tipopuerto);
    Buque3.identificadorPuerto=Puerto5.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto6.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto6.tipopuerto);
    Buque3.identificadorPuerto=Puerto6.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto7.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto7.tipopuerto);
    Buque3.identificadorPuerto=Puerto7.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto8.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto8.tipopuerto);
    Buque3.identificadorPuerto=Puerto8.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto9.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto9.tipopuerto);
    Buque3.identificadorPuerto=Puerto9.identificador;}
  if(strcmp(Buque3.PuertoSalida,Puerto10.nombre)==0){
    strcpy(Buque3.tipopuerto,Puerto10.tipopuerto);
    Buque3.identificadorPuerto=Puerto10.identificador;}

    if(strcmp(Buque4.PuertoSalida,Puerto1.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto1.tipopuerto);
    Buque4.identificadorPuerto=Puerto1.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto2.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto2.tipopuerto);
    Buque4.identificadorPuerto=Puerto2.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto3.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto3.tipopuerto);
    Buque4.identificadorPuerto=Puerto3.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto4.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto4.tipopuerto);
    Buque4.identificadorPuerto=Puerto4.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto5.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto5.tipopuerto);
    Buque4.identificadorPuerto=Puerto5.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto6.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto6.tipopuerto);
    Buque4.identificadorPuerto=Puerto6.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto7.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto7.tipopuerto);
    Buque4.identificadorPuerto=Puerto7.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto8.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto8.tipopuerto);
    Buque4.identificadorPuerto=Puerto8.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto9.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto9.tipopuerto);
    Buque4.identificadorPuerto=Puerto9.identificador;}
  if(strcmp(Buque4.PuertoSalida,Puerto10.nombre)==0){
    strcpy(Buque4.tipopuerto,Puerto10.tipopuerto);
    Buque4.identificadorPuerto=Puerto10.identificador;}

    if(strcmp(Buque5.PuertoSalida,Puerto1.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto1.tipopuerto);
    Buque5.identificadorPuerto=Puerto1.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto2.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto2.tipopuerto);
    Buque5.identificadorPuerto=Puerto2.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto3.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto3.tipopuerto);
    Buque5.identificadorPuerto=Puerto3.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto4.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto4.tipopuerto);
    Buque5.identificadorPuerto=Puerto4.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto5.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto5.tipopuerto);
    Buque5.identificadorPuerto=Puerto5.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto6.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto6.tipopuerto);
    Buque5.identificadorPuerto=Puerto6.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto7.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto7.tipopuerto);
    Buque5.identificadorPuerto=Puerto7.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto8.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto8.tipopuerto);
    Buque5.identificadorPuerto=Puerto8.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto9.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto9.tipopuerto);
    Buque5.identificadorPuerto=Puerto9.identificador;}
  if(strcmp(Buque5.PuertoSalida,Puerto10.nombre)==0){
    strcpy(Buque5.tipopuerto,Puerto10.tipopuerto);
    Buque5.identificadorPuerto=Puerto10.identificador;}
}

