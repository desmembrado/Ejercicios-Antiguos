#include <iostream>
using namespace std;

int main() {
  double nota;
  cout << "Ingrese la nota del estudiante: ";
  cin >> nota;
  if (nota < 1 || nota > 7) {
    cout << "Nota invalida\n";
  } else if (nota >= 4) {
    cout << "Aprobado\n";
  } else {
    cout << "Reprobado\n";
  }
  return 0;
}