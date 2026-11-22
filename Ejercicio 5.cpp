#include <iostream>
using namespace std;
int main() {
  float edad;
    cout << "Ingrese la edad de la persona: ";
    cin >> edad;
    if (edad >= 0 && edad <= 17) {
        cout << "La persona es menor de edad y no puede votar.";
    } else if (edad >= 18 && edad <= 10000) {
        cout << "La persona es mayor de edad y puede votar.";
    } else {
        cout << "Valor no valido para la edad.";
    }
    return 0;
}