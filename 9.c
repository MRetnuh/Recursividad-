#include <stdio.h>

int sumarArrayRecursivo(int arr[], int index, int tamaño) {
    if (index == tamaño) {
        return 0;
    }
    return arr[index] + sumarArrayRecursivo(arr, index + 1, tamaño);

}

int main() {
    int miArray[] = {1, 2, 3, 4, 5};
    int inicio = 0;
    int resultado = sumarArrayRecursivo(miArray, inicio, 5); // El tamaño del array es 5, no 4
    printf("La suma de los elementos del array es: %d\n", resultado);

    return 0;
}
