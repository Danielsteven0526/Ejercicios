#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas notas desea evaluar?: ";
    cin >> n;

    int* notas = new int[n];
    for(int i = 0; i < n; i++) {
        cout << "Nota " << i+1 << " (0-100): ";
        cin >> notas[i];
    }

    for(int i = 0; i < n; i++) {
        if(notas[i] >= 60) {
            if(notas[i] >= 90)
                cout << "Nota " << notas[i] << ": Excelente" << endl;
            else
                cout << "Nota " << notas[i] << ": Aprobado" << endl;
        } else {
            cout << "Nota " << notas[i] << ": Reprobado" << endl;
        }
    }

    delete[] notas;
    return 0;
}

