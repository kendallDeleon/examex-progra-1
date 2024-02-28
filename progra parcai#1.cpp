#include <iostream>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    std::cout << "Introduce un numero entero: ";
    std::cin >> numero;

    if (esPrimo(numero)) {
        std::cout << "numero " << numero << " es primo." << std::endl;
    } else {
        std::cout << "numero " << numero << " no es primo." << std::endl;
    }

    return 0;
}
