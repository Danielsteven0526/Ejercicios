// Ejercicio 2: Par o impar
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un número entero: ";
    cin >> n;
    if (n % 2 == 0)
        cout << "Es par" << endl;
    else
        cout << "Es impar" << endl;
    return 0;
}
