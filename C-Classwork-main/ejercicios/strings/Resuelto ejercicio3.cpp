#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas cadenas desea convertir a mayúsculas?: ";
    cin >> n;

    string* textos = new string[n];
    for(int i = 0; i < n; i++) {
        cout << "Cadena " << i+1 << ": ";
        cin >> textos[i];
    }

    for(int i = 0; i < n; i++) {
        transform(textos[i].begin(), textos[i].end(), textos[i].begin(), ::toupper);
        cout << "Mayúsculas " << i+1 << ": " << textos[i] << endl;
    }

    delete[] textos;
    return 0;
}
