// Ejercicio 3: Potencia de un double
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double base, exponente;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exponente;
    cout << "Resultado: " << pow(base, exponente) << endl;
    return 0;
}
