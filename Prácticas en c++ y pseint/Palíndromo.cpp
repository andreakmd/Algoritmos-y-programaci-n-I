#include <iostream>

int main() {
    int n;

    // Solicitar el número de filas al usuario
    std::cout << "Ingrese el número de filas: ";
    std::cin >> n;

    // Generar el patrón numérico
    for (int i = 1; i <= n; i++) {
        // Imprimir espacios en blanco
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Imprimir números ascendentes
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }

        // Imprimir números descendentes (excepto el último número en palíndromo)
        for (int j = i - 1; j >= 1; j--) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    return 0;
}

