#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas potencias desea calcular?: ";
    cin >> n;

    double* bases = new double[n];
    double* exponentes = new double[n];

    for(int i = 0; i < n; i++) {
        cout << "Base " << i+1 << ": ";
        cin >> bases[i];
        cout << "Exponente " << i+1 << ": ";
        cin >> exponentes[i];
    }

    for(int i = 0; i < n; i++) {
        cout << "Resultado " << i+1 << ": " << pow(bases[i], exponentes[i]) << endl;
    }

    delete[] bases;
    delete[] exponentes;
    return 0;
}
