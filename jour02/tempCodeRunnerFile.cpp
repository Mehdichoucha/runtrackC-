#include <iostream>
using namespace std;

int main() {
    int i;
    int a;
    int b;

    cout << "Entrez un entier positif : ";
    cin >> a;
    cout << "Entrez un autre entier positif : ";
    cin >> b;
    i = a;

    while (i <= b) {
        cout << i << "\n";
        i = i + 1;
    }

    return 0;
}
