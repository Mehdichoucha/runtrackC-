#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i = 1;

    while (i != 0) {
        cout << "Entrez un entier (0 pour quitter) : ";
        cin >> i;
        cout << "La racine carree de " << i << " est : " << sqrt(i) << "\n";
    }
    return 0;
}