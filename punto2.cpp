
#include <iostream>
using namespace std;

bool esPrimo(int n) {
bool primo = true;

    if (n <= 1) {
primo = false;
    }

    for (int i = 2; i < n; i++) {
  if (n % i == 0) {
    primo = false;
 }
    }

    return primo;
}

int main() {
    int n;

    cin >> n;

bool resultado = esPrimo(n);

 if (resultado) {
    cout << "Primo" << endl;
    }

    if (resultado == false) {
 cout << "No primo" << endl;
    }

    return 0;
}