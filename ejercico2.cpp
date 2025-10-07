#include<iostream>

int main() {
    char calificacion;
    std::cout << "Introduzca la calificación \n";
    std::cin >> calificacion;

if (calificacion == 'A') {
    std::cout << "Aprobado \n"; 
} 
else if (calificacion == 'S') {
    std::cout << "Suspenso \n";
} 
else {
    std::cout << "Calificación nula \n";
}
return 0;
}
    


    