// Ejercicio 3: Factorial de un número
#include <iostream>
using namespace std;
int main() {
    int n, fact = 1;
    cout << "Ingrese un número entero: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
        fact *= i;
    cout << "Factorial: " << fact << endl;
    return 0;
}
