#include <iostream>
using namespace std;

int main() {
  int cantidad_evelyns;
  cout << "Ingrese la cantidad de Evelyns a ingresar: ";
  cin >> cantidad_evelyns;
  int cantidad_estercitas;
  cout << "Ingrese la cantidad de Estercitas a ingresar: ";
  cin >> cantidad_estercitas;
  int cantidad_rocios;
  cout << "Ingrese la cantidad de Rocios a ingresar: ";
  cin >> cantidad_rocios;
  int cantidad_total = cantidad_evelyns + cantidad_estercitas + cantidad_rocios;
  if (cantidad_total < 67) {
    int faltan = 67 - cantidad_total;
    cout << "Faltan " << faltan << " en total! Tienes que ir a buscar mas a maipu.\n";
  } else if (cantidad_total == 67) {
    cout << "Muy Bien, hay 67 Evelyns, Estercitas y Rocios.\n";
  } else {
    int sobran = cantidad_total - 67;
    cout << "Sobran " << sobran << " en total! Tienes que devolverlas a camperaltirovan2.\n";
  }
  return 0;
}