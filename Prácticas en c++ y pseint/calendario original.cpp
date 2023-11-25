#include <iostream>

// Función para determinar si un año es bisiesto o no
bool esBisiesto(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

// Función para obtener el número de días en un mes determinado
int obtenerNumeroDias(int month, int year) {
    if (month == 2) {
        if (esBisiesto(year)) {
            return 29;
        } else {
            return 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Función para imprimir el calendario de un año
void imprimirCalendario(int year) {
    std::cout << "Calendario del año " << year << ":\n";

    for (int month = 1; month <= 12; month++) {
        // Imprimir el nombre del mes
        std::cout << "====================\n";
        std::cout << "          ";
        
        switch (month) {
            case 1:
                std::cout << "Enero";
                break;
            case 2:
                std::cout << "Febrero";
                break;
            case 3:
                std::cout << "Marzo";
                break;
            case 4:
                std::cout << "Abril";
                break;
            case 5:
                std::cout << "Mayo";
                break;
            case 6:
                std::cout << "Junio";
                break;
            case 7:
                std::cout << "Julio";
                break;
            case 8:
                std::cout << "Agosto";
                break;
            case 9:
                std::cout << "Septiembre";
                break;
            case 10:
                std::cout << "Octubre";
                break;
            case 11:
                std::cout << "Noviembre";
                break;
            case 12:
                std::cout << "Diciembre";
                break;
        }

        std::cout << "\n====================\n";
        std::cout << "L  M  M  J  V  S  D\n";

        // Calcular el número de días en el mes actual
        int numDias = obtenerNumeroDias(month, year);

        // Calcular el día de la semana en el que comienza el mes
        int inicioMes = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1) % 7;

        // Imprimir los espacios en blanco para alinear el primer día del mes
        for (int i = 0; i < inicioMes; i++) {
            std::cout << "   ";
        }

        // Imprimir los días del mes
        for (int day = 1; day <= numDias; day++) {
            if (day < 10) {
                std::cout << " ";
            }
            std::cout << day << " ";

            // Saltar de línea al final de cada semana
            if ((day + inicioMes) % 7 == 0) {
                std::cout << "\n";
            }
        }

        std::cout << "\n\n";
    }
}

int main() {
    int year;

    std::cout << "Ingrese el año: ";
    std::cin >> year;

    imprimirCalendario(year);

    return 0;
}
