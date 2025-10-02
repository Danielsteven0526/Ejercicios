// Ejercicio 2: Verificar si dos números son iguales
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    bool iguales = (a == b);
    cout << "¿Son iguales? " << (iguales ? "Sí" : "No") << endl;
    return 0;
}
