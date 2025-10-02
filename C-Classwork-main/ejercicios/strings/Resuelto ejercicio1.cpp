#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas cadenas desea concatenar?: ";
    cin >> n;

    string* cadenas = new string[n];
    string resultado = "";

    for(int i = 0; i < n; i++) {
        cout << "Cadena " << i+1 << ": ";
        cin >> cadenas[i];
        resultado += cadenas[i];
    }

    cout << "Concatenación: " << resultado << endl;

    delete[] cadenas;
    return 0;
}
