#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez un entier positif : ";
    cin >> n;

    int a = 0;
    int b = 1;
    int c;
    int i = 0;

    while (i <= n) {
        cout << a << "\n";
        c = a + b;
        a = b;
        b = c;
        i = i + 1;
    }

    return 0;
}
