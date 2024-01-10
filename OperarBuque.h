#pragma once

void OperarBuque(){

  int dia;
  int mes;
  int anno;
  char identificador;
  int identificadorP;
  char SN;
  int carga;
  int cargadias;
  int trasladodias;
  int descargadias;

  printf("Operar Buque:\n\n");
  printf("       Fecha comienzo operacion: Dia?");
  scanf("%d", &dia);
  while(dia<1 || dia>31){
    printf("       Fecha comienzo operacion: Dia?");
    scanf("%d", &dia);}
  printf("       Fecha comienzo operacion: Mes?");
  scanf("%d", &mes);
  while(mes<1 || mes>12){
  printf("       Fecha comienzo operacion: Mes?");
  scanf("%d", &mes);}
  printf("       Fecha comienzo operacion: Anno?");
  scanf("%d", &anno);
  while(anno<1600 || anno>2023){
  printf("       Fecha comienzo operacion: Anno?");
  scanf("%d", &anno);}
  printf("       Identificador del Buque (letra entre A y E)?");
  scanf("%c",&identificador);
  while(identificador!='A' && identificador!='B' && identificador!='C' && identificador!='D' && identificador!='E'){
  scanf("%c",&identificador);}
  printf("\n");
  switch(identificador){
    case 'A': //BUQUE A//
  if(strcmp(Buque1.Carga,"Vacio")==0){ //SI EL BUQUE ESTA VACIO//
  printf("       El buque %s esta vacio en %s\n",Buque1.nombre,Buque1.PuertoSalida);
  strcpy(Buque1.PuertoOrigen,Buque1.PuertoSalida);
  TipoPuerto(); //Detecta que tipo de carga se puede cargar segun el puerto en el que este//
  printf("       Se puede cargar:");Carga1();
  printf("\n       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  while(SN!='S'&&SN!='N'){
  printf("       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  }
  if(SN=='S'){ //el buque estando vacio se carga//
    if(strcmp(Buque1.tipopuerto,"Yacimiento")!=0){//si esta en una refineria o deposito//
  printf("       Se puede cargar:(1 = Fuel, 2 = Gasoil, 3 = Gasolina)");
  scanf("%d",&carga);
  while(carga>3 || carga<1){
  scanf("%d",&carga);}
  switch(carga){
    case 1:
    strcpy(Buque1.Carga,"Fuel");
    break;
    case 2:
    strcpy(Buque1.Carga,"Gasoil");
    break;
    case 3:
    strcpy(Buque1.Carga,"Gasolina");
    break;
  }printf("       Duracion de la carga en dias?");
  scanf("%d",&cargadias);
  printf("\n");
  printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque1.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque1.identificadorPuerto){
    printf("       Identificador del puerto destino?");
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque1.tipopuerto,"Deposito")==0){ //buque de una refineria o deposito que se traslada y descarga
  printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
  }
  else{ //buque de una refineria o deposito que se traslada y no descarga
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
    else{                //el buque de una refineria o deposito con carga que no se traslada//
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque1.tipopuerto,"Deposito")==0){ //buque con prefinado que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
      }
      else{  //buque con prefinado que no descarga y no se traslada//
       printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
        }
    }
    }
    else{//si el buque se encuentra en un yacimiento//
      printf("       Se puede cargar:Crudo\n");
      printf("       Quiere realizar la carga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){//realiza la carga de crudo estando en un yacimiento//
      printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
          printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque1.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque1.identificadorPuerto){
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque1.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y  se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
  }
  else{//buque con crudo que se traslada y no descarga

    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    }
    else{ //buque en un yacimiento con carga que no se traslada
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque1.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    else{//buque con crudo que no se traslada y no descarga
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion//
    }
      }
    }
    }
  }
    else{ //si no carga nada el buque estando vacio//
          printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
     printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque1.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque1.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
  }
  else{ //si ya tiene carga desde un principio//
    printf("       El buque %s esta cargado con %s en %s", Buque1.nombre, Buque1.Carga, Buque1.PuertoSalida);
    printf("       Quiere realizar el traslado (S/N)?");
    scanf(" %c", &SN);
    while(SN!='S'&&SN!='N'){;
    scanf(" %c", &SN);}
    if(SN=='S'){ //tiene carga desde un principio y se traslada//
      printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque1.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque1.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque1.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S' && Buque1.tipopuerto!="Yacimiento" &&
    ((strcmp(Buque1.Carga,"Crudo")==0)&&(strcmp(Buque1.tipopuerto,"Refineria")==0))&& //filtros de donde puede descargar cada cosa//
    ((strcmp(Buque1.Carga,"Gas")==0)&&(strcmp(Buque1.Carga,"Gasoil")==0)&&
    (strcmp(Buque1.Carga,"Gasolina")==0)&&(strcmp(Buque1.tipopuerto,"Deposito")==0)))
    { //tiene carga desde un principio, se traslada y descarga
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    }
    else{//tiene carga desde un principio, se traslada pero no descarga//
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
    else{ //tiene carga desde un principio y no se traslada//
     printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //descargar en el punto de origen//
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque1.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque1.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque1.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
  }
  break;

  case 'B':
  if(strcmp(Buque2.Carga,"Vacio")==0){ //SI EL BUQUE ESTA VACIO//
  printf("       El buque %s esta vacio en %s\n",Buque2.nombre,Buque2.PuertoSalida);
  strcpy(Buque2.PuertoOrigen,Buque2.PuertoSalida);
  TipoPuerto(); //Detecta que tipo de carga se puede cargar segun el puerto en el que este//
  printf("       Se puede cargar:");Carga2();
  printf("\n       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  while(SN!='S'&&SN!='N'){
  printf("       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  }
  if(SN=='S'){ //el buque estando vacio se carga//
    if(strcmp(Buque2.tipopuerto,"Yacimiento")!=0){//si esta en una refineria o deposito//
  printf("       Se puede cargar:(1 = Fuel, 2 = Gasoil, 3 = Gasolina)");
  scanf("%d",&carga);
  while(carga>3 || carga<1){
  scanf("%d",&carga);}
  switch(carga){
    case 1:
    strcpy(Buque2.Carga,"Fuel");
    break;
    case 2:
    strcpy(Buque2.Carga,"Gasoil");
    break;
    case 3:
    strcpy(Buque2.Carga,"Gasolina");
    break;
  }printf("       Duracion de la carga en dias?");
  scanf("%d",&cargadias);
  printf("\n");
  printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque2.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque2.identificadorPuerto){
    printf("       Identificador del puerto destino?");
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque2.tipopuerto,"Deposito")==0){ //buque de una refineria o deposito que se traslada y descarga
  printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
  }
  else{ //buque de una refineria o deposito que se traslada y no descarga
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
    else{                //el buque de una refineria o deposito con carga que no se traslada//
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque1.tipopuerto,"Deposito")==0){ //buque con prefinado que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
      }
      else{  //buque con prefinado que no descarga y no se traslada//
       printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
        }
    }
    }
    else{//si el buque se encuentra en un yacimiento//
      printf("       Se puede cargar:Crudo\n");
      printf("       Quiere realizar la carga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){//realiza la carga de crudo estando en un yacimiento//
      printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
          printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque2.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque2.identificadorPuerto){
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque2.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y  se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
  }
  else{//buque con crudo que se traslada y no descarga

    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    }
    else{ //buque en un yacimiento con carga que no se traslada
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque2.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    else{//buque con crudo que no se traslada y no descarga
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion//
    }
      }
    }
    }
  }
    else{ //si no carga nada el buque estando vacio//
          printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
     printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque2.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque1.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
  }
  else{ //si ya tiene carga desde un principio//
    printf("       El buque %s esta cargado con %s en %s", Buque2.nombre, Buque2.Carga, Buque2.PuertoSalida);
    printf("       Quiere realizar el traslado (S/N)?");
    scanf(" %c", &SN);
    while(SN!='S'&&SN!='N'){;
    scanf(" %c", &SN);}
    if(SN=='S'){ //tiene carga desde un principio y se traslada//
      printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque2.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque2.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque2.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S' && Buque1.tipopuerto!="Yacimiento" &&
    ((strcmp(Buque2.Carga,"Crudo")==0)&&(strcmp(Buque2.tipopuerto,"Refineria")==0))&& //filtros de donde puede descargar cada cosa//
    ((strcmp(Buque2.Carga,"Gas")==0)&&(strcmp(Buque2.Carga,"Gasoil")==0)&&
    (strcmp(Buque2.Carga,"Gasolina")==0)&&(strcmp(Buque2.tipopuerto,"Deposito")==0)))
    { //tiene carga desde un principio, se traslada y descarga
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    }
    else{//tiene carga desde un principio, se traslada pero no descarga//
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
    else{ //tiene carga desde un principio y no se traslada//
     printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //descargar en el punto de origen//
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque2.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque2.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque2.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
  }
  break;

  case 'C':
  if(strcmp(Buque3.Carga,"Vacio")==0){ //SI EL BUQUE ESTA VACIO//
  printf("       El buque %s esta vacio en %s\n",Buque3.nombre,Buque3.PuertoSalida);
  strcpy(Buque3.PuertoOrigen,Buque3.PuertoSalida);
  TipoPuerto(); //Detecta que tipo de carga se puede cargar segun el puerto en el que este//
  printf("       Se puede cargar:");Carga3();
  printf("\n       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  while(SN!='S'&&SN!='N'){
  printf("       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  }
  if(SN=='S'){ //el buque estando vacio se carga//
    if(strcmp(Buque3.tipopuerto,"Yacimiento")!=0){//si esta en una refineria o deposito//
  printf("       Se puede cargar:(1 = Fuel, 2 = Gasoil, 3 = Gasolina)");
  scanf("%d",&carga);
  while(carga>3 || carga<1){
  scanf("%d",&carga);}
  switch(carga){
    case 1:
    strcpy(Buque3.Carga,"Fuel");
    break;
    case 2:
    strcpy(Buque3.Carga,"Gasoil");
    break;
    case 3:
    strcpy(Buque3.Carga,"Gasolina");
    break;
  }printf("       Duracion de la carga en dias?");
  scanf("%d",&cargadias);
  printf("\n");
  printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque3.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque3.identificadorPuerto){
    printf("       Identificador del puerto destino?");
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque3.tipopuerto,"Deposito")==0){ //buque de una refineria o deposito que se traslada y descarga
  printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
  }
  else{ //buque de una refineria o deposito que se traslada y no descarga
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
    else{                //el buque de una refineria o deposito con carga que no se traslada//
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque3.tipopuerto,"Deposito")==0){ //buque con prefinado que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
      }
      else{  //buque con prefinado que no descarga y no se traslada//
       printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
        }
    }
    }
    else{//si el buque se encuentra en un yacimiento//
      printf("       Se puede cargar:Crudo\n");
      printf("       Quiere realizar la carga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){//realiza la carga de crudo estando en un yacimiento//
      printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
          printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque3.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque3.identificadorPuerto){
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque3.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y  se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
  }
  else{//buque con crudo que se traslada y no descarga

    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    }
    else{ //buque en un yacimiento con carga que no se traslada
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque1.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    else{//buque con crudo que no se traslada y no descarga
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion//
    }
      }
    }
    }
  }
    else{ //si no carga nada el buque estando vacio//
          printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
     printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque3.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque1.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
  }
  else{ //si ya tiene carga desde un principio//
    printf("       El buque %s esta cargado con %s en %s", Buque1.nombre, Buque1.Carga, Buque1.PuertoSalida);
    printf("       Quiere realizar el traslado (S/N)?");
    scanf(" %c", &SN);
    while(SN!='S'&&SN!='N'){;
    scanf(" %c", &SN);}
    if(SN=='S'){ //tiene carga desde un principio y se traslada//
      printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque3.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque3.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque3.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S' && Buque1.tipopuerto!="Yacimiento" &&
    ((strcmp(Buque3.Carga,"Crudo")==0)&&(strcmp(Buque3.tipopuerto,"Refineria")==0))&& //filtros de donde puede descargar cada cosa//
    ((strcmp(Buque3.Carga,"Gas")==0)&&(strcmp(Buque3.Carga,"Gasoil")==0)&&
    (strcmp(Buque3.Carga,"Gasolina")==0)&&(strcmp(Buque3.tipopuerto,"Deposito")==0)))
    { //tiene carga desde un principio, se traslada y descarga
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    }
    else{//tiene carga desde un principio, se traslada pero no descarga//
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
    else{ //tiene carga desde un principio y no se traslada//
     printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //descargar en el punto de origen//
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque3.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque3.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque3.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
  }
  break;

  case 'D':
  if(strcmp(Buque4.Carga,"Vacio")==0){ //SI EL BUQUE ESTA VACIO//
  printf("       El buque %s esta vacio en %s\n",Buque4.nombre,Buque4.PuertoSalida);
  strcpy(Buque4.PuertoOrigen,Buque4.PuertoSalida);
  TipoPuerto(); //Detecta que tipo de carga se puede cargar segun el puerto en el que este//
  printf("       Se puede cargar:");Carga4();
  printf("\n       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  while(SN!='S'&&SN!='N'){
  printf("       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  }
  if(SN=='S'){ //el buque estando vacio se carga//
    if(strcmp(Buque4.tipopuerto,"Yacimiento")!=0){//si esta en una refineria o deposito//
  printf("       Se puede cargar:(1 = Fuel, 2 = Gasoil, 3 = Gasolina)");
  scanf("%d",&carga);
  while(carga>3 || carga<1){
  scanf("%d",&carga);}
  switch(carga){
    case 1:
    strcpy(Buque4.Carga,"Fuel");
    break;
    case 2:
    strcpy(Buque4.Carga,"Gasoil");
    break;
    case 3:
    strcpy(Buque4.Carga,"Gasolina");
    break;
  }printf("       Duracion de la carga en dias?");
  scanf("%d",&cargadias);
  printf("\n");
  printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque4.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque4.identificadorPuerto){
    printf("       Identificador del puerto destino?");
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque4.tipopuerto,"Deposito")==0){ //buque de una refineria o deposito que se traslada y descarga
  printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
  }
  else{ //buque de una refineria o deposito que se traslada y no descarga
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
    else{                //el buque de una refineria o deposito con carga que no se traslada//
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque4.tipopuerto,"Deposito")==0){ //buque con prefinado que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
      }
      else{  //buque con prefinado que no descarga y no se traslada//
       printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
        }
    }
    }
    else{//si el buque se encuentra en un yacimiento//
      printf("       Se puede cargar:Crudo\n");
      printf("       Quiere realizar la carga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){//realiza la carga de crudo estando en un yacimiento//
      printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
          printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque4.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque4.identificadorPuerto){
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque4.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y  se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
  }
  else{//buque con crudo que se traslada y no descarga

    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    }
    else{ //buque en un yacimiento con carga que no se traslada
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque4.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    else{//buque con crudo que no se traslada y no descarga
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion//
    }
      }
    }
    }
  }
    else{ //si no carga nada el buque estando vacio//
          printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
     printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque4.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque1.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
  }
  else{ //si ya tiene carga desde un principio//
    printf("       El buque %s esta cargado con %s en %s", Buque4.nombre, Buque4.Carga, Buque4.PuertoSalida);
    printf("       Quiere realizar el traslado (S/N)?");
    scanf(" %c", &SN);
    while(SN!='S'&&SN!='N'){;
    scanf(" %c", &SN);}
    if(SN=='S'){ //tiene carga desde un principio y se traslada//
      printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque4.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque4.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque4.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S' && Buque1.tipopuerto!="Yacimiento" &&
    ((strcmp(Buque4.Carga,"Crudo")==0)&&(strcmp(Buque4.tipopuerto,"Refineria")==0))&& //filtros de donde puede descargar cada cosa//
    ((strcmp(Buque4.Carga,"Gas")==0)&&(strcmp(Buque4.Carga,"Gasoil")==0)&&
    (strcmp(Buque4.Carga,"Gasolina")==0)&&(strcmp(Buque4.tipopuerto,"Deposito")==0)))
    { //tiene carga desde un principio, se traslada y descarga
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    }
    else{//tiene carga desde un principio, se traslada pero no descarga//
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
    else{ //tiene carga desde un principio y no se traslada//
     printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //descargar en el punto de origen//
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque4.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque4.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque4.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
  }
  break;

  case 'E':
  if(strcmp(Buque5.Carga,"Vacio")==0){ //SI EL BUQUE ESTA VACIO//
  printf("       El buque %s esta vacio en %s\n",Buque5.nombre,Buque5.PuertoSalida);
  strcpy(Buque5.PuertoOrigen,Buque5.PuertoSalida);
  TipoPuerto(); //Detecta que tipo de carga se puede cargar segun el puerto en el que este//
  printf("       Se puede cargar:");Carga5();
  printf("\n       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  while(SN!='S'&&SN!='N'){
  printf("       Quiere realizar la carga (S/N)?");
  scanf(" %c", &SN);
  }
  if(SN=='S'){ //el buque estando vacio se carga//
    if(strcmp(Buque5.tipopuerto,"Yacimiento")!=0){//si esta en una refineria o deposito//
  printf("       Se puede cargar:(1 = Fuel, 2 = Gasoil, 3 = Gasolina)");
  scanf("%d",&carga);
  while(carga>3 || carga<1){
  scanf("%d",&carga);}
  switch(carga){
    case 1:
    strcpy(Buque5.Carga,"Fuel");
    break;
    case 2:
    strcpy(Buque5.Carga,"Gasoil");
    break;
    case 3:
    strcpy(Buque5.Carga,"Gasolina");
    break;
  }printf("       Duracion de la carga en dias?");
  scanf("%d",&cargadias);
  printf("\n");
  printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque5.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque5.identificadorPuerto){
    printf("       Identificador del puerto destino?");
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque5.tipopuerto,"Deposito")==0){ //buque de una refineria o deposito que se traslada y descarga
  printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
  }
  else{ //buque de una refineria o deposito que se traslada y no descarga
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
    else{                //el buque de una refineria o deposito con carga que no se traslada//
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque5.tipopuerto,"Deposito")==0){ //buque con prefinado que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
     printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
      }
      else{  //buque con prefinado que no descarga y no se traslada//
       printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
        }
    }
    }
    else{//si el buque se encuentra en un yacimiento//
      printf("       Se puede cargar:Crudo\n");
      printf("       Quiere realizar la carga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){//realiza la carga de crudo estando en un yacimiento//
      printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
          printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque5.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque5.identificadorPuerto){
    scanf("%d", &identificadorP);}
    printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque5.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y  se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
  }
  else{//buque con crudo que se traslada y no descarga

    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    }
    else{ //buque en un yacimiento con carga que no se traslada
      printf("       Quiere realizar la descarga (S/N)?");
  scanf("%c", &SN);
  while(SN!='S'&&SN!='N'){
  scanf("%c", &SN);}
  if(SN=='S' && strcmp(Buque5.tipopuerto,"Refineria")==0){ //buque con crudo que descarga y no se traslada
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion
    }
    else{//buque con crudo que no se traslada y no descarga
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    //esta seguro de la operacion//
    }
      }
    }
    }
  }
    else{ //si no carga nada el buque estando vacio//
          printf("       Duracion de la carga en dias?");
          scanf("%d",&cargadias);
          printf("\n");
     printf("       Quiere realizar el traslado (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //se traslada
    printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque5.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque5.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
//esta seguro de la operacion//
    }
    }
  }
  else{ //si ya tiene carga desde un principio//
    printf("       El buque %s esta cargado con %s en %s", Buque5.nombre, Buque5.Carga, Buque5.PuertoSalida);
    printf("       Quiere realizar el traslado (S/N)?");
    scanf(" %c", &SN);
    while(SN!='S'&&SN!='N'){;
    scanf(" %c", &SN);}
    if(SN=='S'){ //tiene carga desde un principio y se traslada//
      printf("       Puertos de posible destino del buque:\n");
    if(strcmp(Buque5.PuertoSalida,Puerto1.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto1.identificador,Puerto1.nombre,Puerto1.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto2.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto2.identificador,Puerto2.nombre,Puerto2.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto3.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto3.identificador,Puerto3.nombre,Puerto3.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto4.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto4.identificador,Puerto4.nombre,Puerto4.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto5.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto5.identificador,Puerto5.nombre,Puerto5.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto6.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto6.identificador,Puerto6.nombre,Puerto6.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto7.nombre)!=0){
    printf("            %d - %s\t\t\t\tTipo:%s\n",Puerto7.identificador,Puerto7.nombre,Puerto7.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto8.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto8.identificador,Puerto8.nombre,Puerto8.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto9.nombre)!=0){
    printf("            %d - %s\t\t      Tipo:%s\n",Puerto9.identificador,Puerto9.nombre,Puerto9.tipopuerto);}
    if(strcmp(Buque5.PuertoSalida,Puerto10.nombre)!=0){
    printf("            %d - %s\t\t     Tipo:%s\n",Puerto10.identificador,Puerto10.nombre,Puerto10.tipopuerto);}
  printf("       Identificador del puerto destino?");
  scanf("%d", &identificadorP);
  while(identificadorP>10 || identificadorP<1 || identificadorP==Buque5.identificadorPuerto){
    scanf("%d", &identificadorP);
  }
  printf("       Duracion del traslado en dias?");
  scanf("%d",&trasladodias);
  printf("\n");
  printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S' && Buque1.tipopuerto!="Yacimiento" &&
    ((strcmp(Buque5.Carga,"Crudo")==0)&&(strcmp(Buque5.tipopuerto,"Refineria")==0))&& //filtros de donde puede descargar cada cosa//
    ((strcmp(Buque5.Carga,"Gas")==0)&&(strcmp(Buque5.Carga,"Gasoil")==0)&&
    (strcmp(Buque5.Carga,"Gasolina")==0)&&(strcmp(Buque5.tipopuerto,"Deposito")==0)))
    { //tiene carga desde un principio, se traslada y descarga
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
    }
    else{//tiene carga desde un principio, se traslada pero no descarga//
      printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
    else{ //tiene carga desde un principio y no se traslada//
     printf("       Quiere realizar la descarga (S/N)?");
    scanf("%c", &SN);
    while(SN!='S'&&SN!='N'){
    scanf("%c", &SN);}
    if(SN=='S'){ //descargar en el punto de origen//
    printf("       Duración de la descarga en días?");
    scanf("%d",&descargadias);
    printf("\n");
    printf("             Resumen de la operacion:\n");
      printf("       Fecha comienzo: %d/%d/%d\n",dia,mes,anno);
      printf("       Puerto origen: %s\n",Buque5.PuertoOrigen);
      printf("       Tipo de carga: %s\n",Buque5.Carga);
      printf("       Duracion carga: %d\n",cargadias);
      printf("       Puerto destino: %s\n",Buque5.PuertoSalida);
      printf("       Duracion del traslado: %d\n",trasladodias);
      printf("       Duracion de la descarga: %d\n",descargadias);
      //esta seguro de la operacion//
    }
    }
  }
  break;
}
}
