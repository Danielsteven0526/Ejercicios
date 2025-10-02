#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números desea comparar?: ";
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> arr[i];
    }

    bool iguales = true;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[0]) {
            iguales = false;
            break;
        }
    }

    cout << "¿Son iguales? " << (iguales ? "Sí" : "No") << endl;

    delete[] arr;
    return 0;
}
