// Ejercicio 3: División de flotantes
#include <iostream>
using namespace std;
int main() {
    float x, y;
    cout << "Ingrese dos números flotantes: ";
    cin >> x >> y;
    if(y != 0)
        cout << "División: " << x / y << endl;
    else
        cout << "No se puede dividir por cero" << endl;
    return 0;
}
