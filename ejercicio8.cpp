#include <iostream>

int main() {

    using namespace std;

    int numero;
    int suma = 0;

    cout << "Escribe un numero entero positivo: ";
    cin >> numero;

    int numeroOriginal = numero;

    if (numero < 0) {
        cout << "Error: El numero debe ser positivo." << endl;
        return 1; 
    }

    while (numero > 0) {
        
        int digito = numero % 10;
        
        suma += digito;
        
        numero /= 10;
    }

    cout << "La suma de los digitos de " << numeroOriginal << " es: " << suma << endl;

    return 0;
}