#include <iostream>
using namespace std;

// Función que intercambia dos variables enteras por referencia
void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    cout << "\nAntes del intercambio:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    intercambiar(x, y);

    cout << "\nDespués del intercambio:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
