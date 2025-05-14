#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Entrez un entier positif : ";
    cin >> a;
    cout << "Entrez un autre entier positif : ";
    cin >> b;

    for (int i = a; i <= b; i = i + 1) {
        cout << i << "\n";
    }
    return 0;
}
