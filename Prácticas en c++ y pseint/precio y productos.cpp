#include <iostream>
#include <algorithm>
#include <iomanip>

const int MAX = 100;

struct Producto {
    char codigo[9];
    char nombre[MAX];
    float precio;
};

bool compararPorPrecio(const Producto& p1, const Producto& p2) {
    return p1.precio < p2.precio;
}

int main() {
    int cantidad;
    std::cout << "Ingrese la cantidad de productos: ";
    std::cin >> cantidad;

    Producto productos[MAX];

    for (int i = 0; i < cantidad; ++i) {
        std::cout << "Ingrese el código del producto " << i + 1 << ": ";
        std::cin >> productos[i].codigo;

        std::cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        std::cin.ignore();
        std::cin.getline(productos[i].nombre, MAX);

        std::cout << "Ingrese el precio del producto " << i + 1 << ": ";
        std::cin >> productos[i].precio;
    }

    std::sort(productos, productos + cantidad, compararPorPrecio);

    std::cout << "\nProductos ordenados por precio:\n";
    std::cout << "------------------------------\n";
    std::cout << std::setw(9) << "Código" << std::setw(20) << "Nombre" << std::setw(10) << "Precio\n";
    std::cout << "------------------------------\n";

    for (int i = 0; i < cantidad; ++i) {
        std::cout << std::setw(9) << productos[i].codigo << std::setw(20) << productos[i].nombre
            << std::setw(10) << std::fixed << std::setprecision(2) << productos[i].precio << "\n";
    }

    return 0;
}
