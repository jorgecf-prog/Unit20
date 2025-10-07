#include <iostream>

int Add (int x, int y) {
    std::cout << "En Add(), recibido " << x << " y " << y << "\n";
    return (x + y);
}

int main() {
    std::cout << "En main ()\n";
    std::cout << "\nllamada a Add()\n";
    std::cout << "El valor devuelto es: " << Add (3, 4) << "\n";
    std::cout << "\nvuelta a main ().\n";
    std::cout << "\nsaliendo..\n\n";
    return 0;
}