#include <iostream>
using namespace std;

int main() {
    int i;
    int a;
    int b;

    cout << "Faire une addition = 1 : \n";
    cout << "Faire une soustraction = 2 : \n";
    cout << "Faire une multiplication = 3 : \n";
    cout << "Faire une division = 4 : \n";
    cout << "Choissisez un calcul : ";
    cin >> i;

    if (i == 1) {
    cout << "\nChoissisez un nombre : ";
    cin >> a;
    cout << "Choissisez un autre nombre : ";
    cin >> b;
    cout << "\nLe resultat est : " << a + b;
    }

    else if (i == 2) {
    cout << "\nChoissisez un nombre : ";
    cin >> a;
    cout << "Choissisez un autre nombre : ";
    cin >> b;
    cout << "\nLe resultat est : " << a - b;
    }

    else if (i == 3) {
    cout << "\nChoissisez un nombre : ";
    cin >> a;
    cout << "Choissisez un autre nombre : ";
    cin >> b;
    cout << "\nLe resultat est : " << a * b;
    }

    else if (i == 4) {
    cout << "\nChoissisez un nombre : ";
    cin >> a;
    cout << "Choissisez un autre nombre : ";
    cin >> b;
    cout << "\nLe resultat est : " << a / b;
    }
    return 0;
}