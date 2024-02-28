#include <iostream>

int main() {
    int n, suma = 0;
    std::cout << "Introduce un numero entero positivo: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        suma += i;
    }

    std::cout << "La suma de los numeros enteros desde 1 hasta " << n << " es: " << suma << std::endl;

    return 0;
}
