#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números desea sumar?: ";
    cin >> n;

    int* numeros = new int[n];
    int suma = 0;

    for(int i = 0; i < n; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    cout << "Suma: " << suma << endl;

    delete[] numeros;
    return 0;
}
