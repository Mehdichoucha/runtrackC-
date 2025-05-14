#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int i;

    cout << "Entrez un entier A : ";
    cin >> a;
    cout << "Entrez un entier B superieur a A : ";
    cin >> b;

    if (a >= b) {
        cout << "A doit être strictement inferieur à B";
        return 1;
    }

    cout << "Entrez un nombre entier : ";
    cin >> i;
    if (i >= a && i <= b) {
        cout << "Gagne";
    } else {
        cout << "Perdu";
    }
    return 0;
}
