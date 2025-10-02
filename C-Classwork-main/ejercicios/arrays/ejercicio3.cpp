// Ejercicio 3: Promedio de un arreglo
#include <iostream>
using namespace std;
int main() {
    int arr[5], suma = 0;
    cout << "Ingrese 5 números: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        suma += arr[i];
    }
    cout << "Promedio: " << (float)suma/5 << endl;
    return 0;
}
