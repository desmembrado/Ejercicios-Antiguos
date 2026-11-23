#include <iostream>
using namespace std;

int main() {
  int numero;
  cout << "Ingrese un numero entero: ";
  cin >> numero;
  if (numero % 2 == 0) {
    cout << "El numero es par.\n";
  } else {
    cout << "El numero es impar.\n";
  }
  return 0;
}