#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Entrez le nombre d'heure(s) : ";
    cin >> a;    
    cout << "Entrez le nombre de minute(s) : ";
    cin >> b;

    if (( a <= 0 ) || ( a >= 23 ) || ( b <= 0 ) || ( b >= 59 )) {
        cout << "Ce n'est pas une heure";
        return 1;
    }

    else {
        cout << "L'heure est de : "<< a << "H" << b;
        return 0;
    }
}
