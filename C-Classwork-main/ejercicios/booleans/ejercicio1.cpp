// Ejercicio 1: Verificar si un número es positivo
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    bool esPositivo = n > 0;
    cout << "¿Es positivo? " << (esPositivo ? "Sí" : "No") << endl;
    return 0;
}
