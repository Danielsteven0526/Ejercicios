// Ejercicio 1: Suma de elementos de un arreglo
#include <iostream>
using namespace std;
int main() {
    int arr[5], suma = 0;
    cout << "Ingrese 5 números: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        suma += arr[i];
    }
    cout << "Suma total: " << suma << endl;
    return 0;
}
