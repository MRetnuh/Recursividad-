#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void copiarArchivos(FILE *entrada, FILE *salida) {
  char linea[200];
  while(1){
    if(fgets(linea, 200, entrada) != NULL){
      fprintf(salida, "%s", linea);
    }
    else{
      char nuevoArchivo[100];
      printf("Ingrese el nombre del sigiente archivo o 'fin' para cortar el programa: ");
      scanf("%s", nombreArchivo);
      if(strcmp(nuevoArchivo, "fin") != 0){
        FILE *newArchivo = fopen(nuevoArchivo, "r");
        copiarArchivos(newArchivo, salida);
      }
      else{
        exit(0);
      }
    }
  }
}
int main(){
  char nombreArchivo[100];

  printf("Ingrese el primer archivo: ");
  scanf("%s", nombreArchivo);

  FILE *archivoInicial = fopen(nombreArchivo, "r");

    FILE *salida = fopen("out.txt", "w");

    if(archivoInicial == NULL || salida == NULL) {
      printf("no se encotnro el arcjivo\n");
      return 1;
    }
    copiarArchivos(archivoInicial, salida);
    return 0;
}
