#include <stdio.h>

int sumarArrayRecursivo(int arr[], int index, int tamaño) {
    if (index == tamaño) {
        return 0;
    }
    return arr[index] + sumarArrayRecursivo(arr, index + 1, tamaño);

}

int main() {
 int size = 5;
  int miArray[] = {1, 2, 3, 4, 5};
    int inicio = 0;
    int resultado = sumarArrayRecursivo(miArray, inicio, size); // El tamaño del array es 5, no 4
    printf("el promedio de la suma de los elementos del array es: %d\n", resultado/size);

    return 0;
}
