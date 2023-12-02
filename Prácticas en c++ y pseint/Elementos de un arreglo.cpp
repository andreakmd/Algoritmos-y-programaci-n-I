#include <iostream>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int cantidad;
    std::cout << "Ingrese la cantidad de elementos: ";
    std::cin >> cantidad;

    int arreglo[cantidad];

    for (int i = 0; i < cantidad; ++i) {
        std::cout << "Ingrese el elemento " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    insertionSort(arreglo, cantidad);

    std::cout << "\nElementos ordenados:\n";
    for (int i = 0; i < cantidad; ++i) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
