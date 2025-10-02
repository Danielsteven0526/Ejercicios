// Ejercicio 2: Selección múltiple (switch)
#include <iostream>
using namespace std;
int main() {
    int opcion;
    cout << "Ingrese una opción (1-3): ";
    cin >> opcion;
    switch(opcion) {
        case 1:
            cout << "Opción 1 seleccionada" << endl;
            break;
        case 2:
            cout << "Opción 2 seleccionada" << endl;
            break;
        case 3:
            cout << "Opción 3 seleccionada" << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
    }
    return 0;
}
