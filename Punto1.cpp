#include <iostream>
using namespace std;

long long potencia(int base, int exponente) {
    long long resultado = 1;

    for (int i = 0; i < exponente; i++) {
 resultado = resultado * base;
}

return resultado;
}

int main() {
    int base;
    int exponente;
cin >> base;
    cin >> exponente;

long long resultado = potencia(base, exponente);
 cout << resultado << endl;

    return 0;
}   