#include <iostream>

int main() {
    int a, b;
    std::cout << " el valor de a: ";
    std::cin >> a;
    std::cout << "el valor de b: ";
    std::cin >> b;

    std::cout << "Suma: " << a + b << std::endl;
    std::cout << "Resta: " << a - b << std::endl;
    std::cout << "Multiplicacion: " << a * b << std::endl;
    std::cout << "Division: " << static_cast<double>(a) / b << std::endl;

    return 0;
}

