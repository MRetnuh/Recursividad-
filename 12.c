#include<stdio.h>
#include<stdlib.h>

int sumaNaturales(int n) {
  if(n == 0){
    return 0;
  }
  else{
    return n + sumaNaturales(n - 1);
  }
}

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);

  int resultado = sumaNaturales(n);
  printf("La suma de numeros naturales de %d es %d\n", n, resultado);
}
