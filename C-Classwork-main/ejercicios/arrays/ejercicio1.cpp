#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "¿Cuántos números desea ingresar?: ";
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> arr[i];
        suma += arr[i];
    }

    cout << "Suma total: " << suma << endl;

    delete[] arr;

    return 0;
}
