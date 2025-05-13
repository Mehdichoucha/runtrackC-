#include <iostream>
using namespace std;

char c = '\x01' ;
short int p = 10 ;

int x = p + 3;
int y = c + 1;
int z = p + c;
int w = 3 * p + 5 *c;

int main() {
    cout << x << '\n';
    cout << y << '\n';
    cout << z << '\n';
    cout << w;
    return 0;
}

// ce sont tous des int, donc des chiffres de valeur : 13, 2, 11 et 35