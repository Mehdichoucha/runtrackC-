#include <iostream>
using namespace std;

int main() {
    int i;
    int n;

    cout << "Entrez un entier positif : ";
    cin >> n;
    i = 0;

    while (i < n + 1) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Multiple de 3 et 5\n";
        }
        else if (i % 3 == 0) {
            cout << "Multiple de 3\n";
        }
        else if (i % 5 == 0) {
            cout << "Multiple de 5\n";
        }
        else {
            cout << "Aucun multiple de 3 ni de 5\n";
        }
        i = i + 1;
    }
    return 0;
}
