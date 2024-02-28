#include <iostream>
#include <cmath>

int main() {
    double numero;
    std::cout << "Introduce un numero para calcular su raiz cuadrada: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "No se puede calcular la raiz cuadrada de un numero negativo." << std::endl;
    } else {
        std::cout << "La raiz cuadrada de " << numero << " es: " << sqrt(numero) << std::endl;
    }

    return 0;
}
