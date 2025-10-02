// Ejercicio 3: Negación booleana
#include <iostream>
using namespace std;
int main() {
    bool valor;
    cout << "Ingrese 1 (true) o 0 (false): ";
    cin >> valor;
    cout << "Negación: " << (!valor ? "true" : "false") << endl;
    return 0;
}
