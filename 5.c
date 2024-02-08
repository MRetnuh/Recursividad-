#include<stdio.h>
#include<stdlib.h>

int reverse(int n, int sum) {
  if(n == 0) return sum;
  return reverse(n/10, sum*10 + n%10);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int resultado = reverse(n, 0);
  printf("el inverso de %d es %d\n", n, resultado);
  return 0;
}
