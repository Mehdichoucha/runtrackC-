#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fact = 1;

    cout << "Entrez un entier positif : ";
    cin >> n;

    if (n <= 0) {
        cout << "Ne fonctionne pas pour les entiers négatifs et 0";
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << n << "! = " << fact << endl;
    return 0;
}
