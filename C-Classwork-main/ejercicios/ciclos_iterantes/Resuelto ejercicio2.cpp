#include <iostream>
using namespace std;

int main() {
    int n, contador = 1;
    cout << "¿Hasta qué número desea contar?: ";
    cin >> n;

    while(contador <= n) {
        cout << "Contador: " << contador << endl;
        contador++;
    }

    return 0;
}
