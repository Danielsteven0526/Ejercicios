// Ejercicio 3: Convertir a mayúsculas
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string texto;
    cout << "Ingrese una cadena: ";
    cin >> texto;
    transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
    cout << "Mayúsculas: " << texto << endl;
    return 0;
}
