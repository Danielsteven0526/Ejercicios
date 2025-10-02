#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas divisiones desea realizar?: ";
    cin >> n;

    float* x = new float[n];
    float* y = new float[n];

    for(int i = 0; i < n; i++) {
        cout << "Dividendo " << i+1 << ": ";
        cin >> x[i];
        cout << "Divisor " << i+1 << ": ";
        cin >> y[i];
    }

    for(int i = 0; i < n; i++) {
        if(y[i] != 0)
            cout << "División " << i+1 << ": " << x[i] / y[i] << endl;
        else
            cout << "División " << i+1 << ": No se puede dividir por cero" << endl;
    }

    delete[] x;
    delete[] y;
    return 0;
}
