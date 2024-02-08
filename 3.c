#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 0) {
        return 1;  // Caso base: 0! = 1
    }
    return n * factorial(n - 1);
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    int resultado = factorial(n);
    printf("%d! = %d\n", n, resultado);
    return 0;
}
