#include<stdio.h>
#include<stdlib.h>

int potencia(int base, int exponente){
  if(exponente == 0){
    return 1;
  }
  else{
    return base * potencia(base, exponente - 1);
  }
}

int main(int argc, char *argv[]){
  int base = atoi(argv[1]);
  int exponente = atoi(argv[2]);
  int resultado = potencia(base, exponente);
  printf("Resultado = %d\n", resultado);
}
