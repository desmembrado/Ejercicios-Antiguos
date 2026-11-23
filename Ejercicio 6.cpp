#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  cout << "Ingrese el primer numero: ";
  cin >> a;
  cout << "Ingrese el segundo numero: ";
  cin >> b;
  if (a > b) {
    cout << "El primer numero es mayor que el segundo numero.\n";
  } else if (a < b) {
    cout << "El segundo numero es mayor que el primer numero.\n";
  } else {
    cout << "Los dos numeros son iguales.\n";
  }
  return 0;
}