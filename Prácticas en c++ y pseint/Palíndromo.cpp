#include <iostream>

int main() {
    int n;

    // Solicitar el n�mero de filas al usuario
    std::cout << "Ingrese el n�mero de filas: ";
    std::cin >> n;

    // Generar el patr�n num�rico
    for (int i = 1; i <= n; i++) {
        // Imprimir espacios en blanco
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Imprimir n�meros ascendentes
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }

        // Imprimir n�meros descendentes (excepto el �ltimo n�mero en pal�ndromo)
        for (int j = i - 1; j >= 1; j--) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    return 0;
}

