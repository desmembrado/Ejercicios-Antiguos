#include <iostream>
using namespace std;

int main() {
  int partida1;
  int partida2;
  cout << "Ingrese el puntaje de la primera partida: ";
  cin >> partida1;
  cout << "Ingrese el puntaje de la segunda partida: ";
  cin >> partida2;
  int suma = partida1 + partida2;
  if(suma >= 0 && suma <= 300) {
    cout << "Tu division es Bronce\n";
  }
  else if(suma > 300 && suma <= 500) {
    cout << "Tu division es Plata\n";
  }
  else if(suma > 500 && suma <= 700) {
    cout << "Tu division es Oro\n";
  }
  else if(suma > 700 && suma <= 1000) {
    cout << "Tu division es Platino\n";
  }
  else if(suma > 1000) {
    cout << "Tu division es Diamante\n";
  }
  else {
    cout << "La suma de puntajes es negativa. Intenta de nuevo.\n";
  }
  return 0;
}