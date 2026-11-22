#include <iostream>
using namespace std;

int main() {
  int cant_mandarinas;
  int cant_capibaras;
  cout << "Ingrese la cantidad de mandarinas: ";
  cin >> cant_mandarinas;
  cout << "Ingrese la cantidad de capibaras: ";
  cin >> cant_capibaras;
  int mandarinas_necesarias = cant_capibaras * 3;
  if (cant_mandarinas < mandarinas_necesarias) {
    cout << "Faltan mandarinas! Tienes que ir a buscar mas a la bodega." << "\n";
  } else if (cant_mandarinas == mandarinas_necesarias) {
    cout << "Muy bien, puedes repartir las mandarinas.";
  } else {
    cout << "Sobran mandarinas! Tienes que devolverlas a la bodega." << "\n";
  }
    return 0;
}