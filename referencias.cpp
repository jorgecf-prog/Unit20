#include <iostream>
using namespace std;

void funciondecambio(int miniparametro) {
    miniparametro += 10;

    cout << "Dentro de la funcion:" << endl;
    cout << miniparametro << endl;
}

int main() {
    int numero = 30;

    cout << "Antes de la funcion:" << endl;
    cout << numero << endl;

    funciondecambio(numero);

    cout << "Despues de la funcion:" << endl;
    cout << numero << endl;

    return 0;
}

//2 

#include <iostream>
using namespace std;

int main() {
    
    int numero;
    int *ptr = &numero;
    int numeroPosterior;

    numero = 6087; // ¿A que hora es igual?

    numeroPosterior = *ptr;

    cout << numeroPosterior << endl;

    *ptr = 7000;

    cout <<*ptr << endl;
    cout << numeroPosterior << endl;
    return 0;
}

//3

#include <iostream>
int main() {
    int x = 5;
    int y = 10;

    int *ptr1 = &x;
    int *ptr2 = &y;

    if (ptr1 == ptr2) {
    std::cout << "Los punteros apuntan a la misma dirección de memoria." << std::endl;
    } else {
    std::cout << "Los punteros apuntan a diferentes direcciones de memoria." << std::endl;
    }
    return 0;
}   

//4

#include <iostream>

using namespace std;

int main() {
    string MalaPeli;
    string *ptrAString;

    MalaPeli = "The Twilight Saga.";

    ptrAString = &MalaPeli;

    for (unsigned i = 0; i < MalaPeli.length(); i++) {
        cout << (*ptrAString)[i] << " ";
    }

    cout << endl;
    return 0;
}

//5

#include <iostream>

using namespace std;

int main() {
    int OrdenadorCaro;
    int OrdenadorBarato;

    int *ptrAOrdenador;

    ptrAOrdenador = &OrdenadorCaro;

    //*ptrAOrdenador = 2000;
    OrdenadorCaro = 2000;

    cout << *ptrAOrdenador << endl;

    ptrAOrdenador = &OrdenadorBarato;

    *ptrAOrdenador = 500;

    cout << *ptrAOrdenador << "\n";

    return 0;
}

//6

#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

void aplicar(int x, int y, int (*f)(int, int)) {
    cout << "Resultado: " << f(x, y) << endl;
}

int main() {
    aplicar(10, 5, suma);   // Resultado: 15
    aplicar(10, 5, resta);  // Resultado: 5
    return 0;
}


//7

#include <iostream>

using namespace std;

int main() {
    int *puntero = new int;

    *puntero = 10;

    cout << *puntero << endl;

    return 0;
}


//8

#include <iostream>

using namespace std;

int main() {
    string *frase = new string("Todos los perros son guapos!!!");

    cout << *frase << endl;

    (*frase)[24] = 'r';

    frase->replace(25, 1, "ro");

    cout << *frase << endl;

    delete frase;

    return 0;
}

//9

#include <iostream>

using namespace std;

void CambiosSonBuenos(int *miParametro) {
    *miParametro += 10;

    cout << "Dentro de la función:" << endl;
    cout << *miParametro << endl;
}

int main() {
    int miNumero = 30;

    cout << "Antes de la función:" << endl;
    cout << miNumero << endl;

    CambiosSonBuenos(&miNumero);

    cout << "Después de la función:" << endl;
    cout << miNumero << endl;
    return 0;
}

// Lo mismo pero de otra forma

#include <iostream>
using namespace std;

void CambiosSonBuenos(int &miParametro) {
    miParametro += 10;

    cout << "Dentro de la función:" << endl;
    cout << miParametro << endl;
}

int main() {
    int miNumero = 30;

    cout << "Antes de la función:" << endl;
    cout << miNumero << endl;

    CambiosSonBuenos(miNumero);

    cout << "Después de la función:" << endl;
    cout << miNumero << endl;
    return 0;
}


//10

#include <iostream>

using namespace std;

void Paranoico(string *mensajeReal) {
    (*mensajeReal)[6] = 'i';

    mensajeReal->replace(9, 1, "");
    mensajeReal->insert(18, "ad");
    mensajeReal->replace(15, 2, "in");
    mensajeReal->replace(23, 7, "t");
    mensajeReal->replace(4, 3, "ali");
}

int main() {
    string mensaje = "The friends are having dinner";
    cout << mensaje << endl;
    Paranoico(&mensaje);
    cout << mensaje << endl;

    return 0;
}