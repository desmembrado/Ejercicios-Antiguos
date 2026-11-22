#include <iostream>
using namespace std;

int main() {
  float grado;
  cout << "Ingrese el grado del sismo: ";
  cin >> grado;
  if (grado >= 0.0 && grado <= 1.9) {
    cout << "El sismo es Menor";
  } else if (grado >= 2.0 && grado <= 4.9) {
    cout << "El sismo es Moderado";
  } else if (grado >= 5.0) {
    cout << "El sismo es Fuerte";
  } else {
    cout << "Valor no valido para la magnitud";
  }
  return 0;
}