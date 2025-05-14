// do {} while ( cout << "donnez un nombre > 0", cin >> n, n<=0 );

#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "donnez un nombre superieur a 0: ";
        cin >> n;
    } while (n <= 0);
    return 0;
}