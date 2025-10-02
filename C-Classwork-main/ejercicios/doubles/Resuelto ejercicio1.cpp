#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números double desea sumar?: ";
    cin >> n;

    double* arr = new double[n];
    double suma = 0;

    for(int i = 0; i < n; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> arr[i];
        suma += arr[i];
    }

    cout << "Suma: " << suma << endl;

    delete[] arr;
    return 0;
}
