#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
  if(n <= 0) { return 0; } else if (n == 1) { return 1; }
  else {return fibonacci(n - 1) + fibonacci(n - 2); }
}


int main(int argc, char *argv[1]) {
  int n = atoi(argv[1]);
  int resultado = fibonacci(n);
  printf("%d\n",resultado);
return 0;
}
