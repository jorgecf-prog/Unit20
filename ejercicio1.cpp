#include <iostream>

float multiplication(int a, float b) {
    return a * b;
}

int main() {
    int numero = 0;
    float factor = 0;

    std::cout << "Introduzca un entero\n";
    std::cin >> numero;
    //std::cin >> numero;

    std::cout << std::endl;

    std::cout << "Introduzca un factor\n";
    std::cin >> factor;
    //std::cin >> factor;

    float resultado = multiplication(numero, factor);
    std::cout << "El resultado es " << resultado << std::endl;

    return 0;
    }