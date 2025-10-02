// Ejercicio 2: Buscar un número en un arreglo
#include <iostream>
using namespace std;
int main() {
    int arr[5], num, encontrado = 0;
    cout << "Ingrese 5 números: ";
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    cout << "Ingrese el número a buscar: ";
    cin >> num;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == num) {
            encontrado = 1;
            break;
        }
    }
    if(encontrado)
        cout << "Número encontrado" << endl;
    else
        cout << "No encontrado" << endl;
    return 0;
}
