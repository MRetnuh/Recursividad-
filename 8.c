#include <stdio.h>

void imprimirArrayRecursivo(int arr[], int index, int tamaño) {
    if (index == tamaño) {
        return;
    }
    printf("%d\n", arr[index]);
    imprimirArrayRecursivo(arr, index + 1, tamaño);
}

int main() {
    int miArray[] = {1, 2, 3, 4, 5};
    int inicio = 0;
    imprimirArrayRecursivo(miArray, inicio, 5); // El tamaño del array es 5, no 4

    return 0;
}
