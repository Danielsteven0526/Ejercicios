// Ejercicio 3: Selección anidada
#include <iostream>
using namespace std;
int main() {
    int nota;
    cout << "Ingrese la nota (0-100): ";
    cin >> nota;
    if (nota >= 60) {
        if (nota >= 90)
            cout << "Excelente" << endl;
        else
            cout << "Aprobado" << endl;
    } else {
        cout << "Reprobado" << endl;
    }
    return 0;
}
