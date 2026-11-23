#include <iostream>
using namespace std;

int main() {
  int monedas;
  cout << "Ingrese la cantidad de monedas: ";
  cin >> monedas;
  if (monedas < 0) {
    cout << "Cantidad de monedas no valida.\n";
  } else if (monedas < 10) {
    cout << "Poco dinero.\n";
  } else if (monedas <= 50) {
    cout << "Dinero suficiente.\n";
  } else {
    cout << "Mucho dinero.\n";
  }
  return 0;
}