#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas opciones desea ingresar?: ";
    cin >> n;

    int* opciones = new int[n];
    for(int i = 0; i < n; i++) {
        cout << "Opción " << i+1 << " (1-3): ";
        cin >> opciones[i];
    }

    for(int i = 0; i < n; i++) {
        switch(opciones[i]) {
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
    }

    delete[] opciones;
    return 0;
}
