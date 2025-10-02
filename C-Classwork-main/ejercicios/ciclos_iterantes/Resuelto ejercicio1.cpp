#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas iteraciones desea realizar?: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "Iteración " << i << endl;
    }

    return 0;
}
