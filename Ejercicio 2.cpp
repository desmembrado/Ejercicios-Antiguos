#include <iostream>
using namespace std;

int main() {
  int temperatura;
  cout << "Ingrese la temperatura de la estrella: ";
  cin >> temperatura;
  if(temperatura >= 0 && temperatura <= 3499) {
    cout << "Traje rojo\n";
  }
  else if(temperatura >= 3500 && temperatura <= 7499) {
    cout << "Traje amarillo\n";
  }
  else if(temperatura >= 7500) {
    cout << "Traje celeste\n";
  }
  else {
    cout << "Valor invalido de temperatura.";
  }
  return 0;
}