#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos valores booleanos desea ingresar?: ";
    cin >> n;

    bool* arr = new bool[n];
    for(int i = 0; i < n; i++) {
        cout << "Valor " << i+1 << " (1 o 0): ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << "Negación de " << arr[i] << ": " << (!arr[i] ? "true" : "false") << endl;
    }

    delete[] arr;
    return 0;
}
