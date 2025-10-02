#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "¿Cuántos factoriales desea calcular?: ";
    cin >> t;

    int* numeros = new int[t];
    for(int i = 0; i < t; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> numeros[i];
    }

    for(int i = 0; i < t; i++) {
        int fact = 1;
        for(int j = 1; j <= numeros[i]; j++)
            fact *= j;
        cout << "Factorial de " << numeros[i] << ": " << fact << endl;
    }

    delete[] numeros;
    return 0;
}
