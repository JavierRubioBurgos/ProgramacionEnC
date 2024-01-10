#include <stdio.h>
#include <string.h>
#include "EditarPuerto.h"
#include "EditarBuque.h"
#include "EstadoBuques.h"
#include "OperarBuque.h"
#include "ResumenMensualBuque.h"
#include "BaseDeDatos.h"

int main(){

char opcion;

do{
  printf("Gesflota: Gestion de Movimientos de una Flota\n");
  printf("\n");
  printf("      Editar Puerto                     (Pulsar P)\n");
  printf("      Editar Buque                      (Pulsar B)\n");
  printf("      Estado Buques                     (Pulsar E)\n");
  printf("      Operar Buque                      (Pulsar O)\n");
  printf("      Resumen Mensual Buque             (Pulsar R)\n");
  printf("      Salir                             (Pulsar S)\n\n");
  printf("\n");
  printf("Teclear una opcion valida (P|B|E|O|R|S) ");
  scanf("%c", &opcion);
  while ( opcion !='P'&&opcion!='B'&&opcion!='E'&&opcion!='O'&&opcion!='R'&&opcion!='S'){
    scanf("%c", &opcion);
  }
  switch(opcion){

    case 'P':
    printf("\n");
    EditarPuerto();
    opcion= ' ';
    printf("\n\n\n");
    break;

    case 'B':
    printf("\n");
    EditarBuque();
    opcion= ' ';
    printf("\n\n\n");
    break;

    case 'E':
    printf("\n");
    EstadoBuques();
    opcion= ' ';
    printf("\n\n\n");
    break;

    case 'O':
    printf("\n");
    OperarBuque();
    opcion= ' ';
    printf("\n\n\n");
    break;

    case 'R':
    printf("\n");
    ResumenMensualBuque();
    opcion= ' ';
    printf("\n\n\n");
    break;

    case 'S':
    break;}
  }
while(opcion!='S');
}
